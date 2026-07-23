/*
 * XREFs of KiRollbackSlistPops @ 0x1404FAE20
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     PspGetBaseTrapFrame @ 0x140464F40 (PspGetBaseTrapFrame.c)
 */

void KiRollbackSlistPops()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 IpiFrame; // rcx
  __int64 CurrentThread; // rcx
  __int64 BaseTrapFrame; // rax
  void *v4; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  IpiFrame = (__int64)CurrentPrcb->IpiFrame;
  if ( (*(_BYTE *)(IpiFrame + 368) & 1) != 0 )
  {
    KiCheckForSListAddress(IpiFrame);
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( (*(_DWORD *)(CurrentThread + 116) & 0x400) == 0 )
    {
      BaseTrapFrame = PspGetBaseTrapFrame(CurrentThread, 0LL);
      v4 = *(void **)(BaseTrapFrame + 360);
      if ( *(_WORD *)(BaseTrapFrame + 368) == 51
        && v4 > stru_140FC11F0.KernelShadowStack
        && (unsigned __int64)v4 <= stru_140FC11F0.InGlobalUpdateVpThreadPriorityList
        && !*(_BYTE *)(BaseTrapFrame + 43) )
      {
        KiInsertQueueDpc((ULONG_PTR)&CurrentPrcb->SlistRollbackDpc, 0LL, 0LL, 0LL, 0);
      }
    }
  }
}
