/*
 * XREFs of EtwpCovSampSafeForUserAddressCapture @ 0x140260BD8
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x1406CC924 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     MmCanThreadFault @ 0x1402623C0 (MmCanThreadFault.c)
 */

__int64 __fastcall EtwpCovSampSafeForUserAddressCapture(int a1, BOOL *a2, __int64 a3)
{
  __int64 CurrentIrql; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v6; // eax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  v6 = (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 || !CurrentThread->Teb;
  *a2 = v6;
  if ( (unsigned __int8)CurrentIrql >= 2u
    || KeGetCurrentThread()->WaitBlock[3].SpareLong
    || !(unsigned int)MmCanThreadFault(CurrentIrql, a2, a3)
    || BYTE6(CurrentThread[1].Queue) && !a1
    || KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    return 3221225659LL;
  }
  else
  {
    return 0LL;
  }
}
