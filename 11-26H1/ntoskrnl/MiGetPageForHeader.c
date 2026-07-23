/*
 * XREFs of MiGetPageForHeader @ 0x14033A9FC
 * Callers:
 *     MiInitializeImageProtos @ 0x14033A684 (MiInitializeImageProtos.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiCreateMdl @ 0x140A63630 (MiCreateMdl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 *     MiGetSystemPage @ 0x14033AC10 (MiGetSystemPage.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGetPageForHeader(ULONG *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 SystemPage; // rbx
  __int64 v9; // rcx
  char EffectivePagePriorityThread; // r14
  unsigned __int8 CurrentIrql; // di
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v13[0] = 0LL;
  if ( !MiObtainFaultCharges(a1, 1uLL, 1, a4) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  MiInitializePageColorBase(&CurrentThread->ApcState.Process[2].ReadyListHead.Blink, 3LL, a2, v13);
  SystemPage = MiGetSystemPage(a1, a3, v13);
  if ( !SystemPage )
  {
    MiReturnFaultCharges(a1, 1LL, 1LL);
    return -1LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
  if ( a3 )
  {
    CurrentIrql = 17;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(SystemPage + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(SystemPage + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v9, 2LL);
    }
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(SystemPage + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(SystemPage + 24) < 0 );
    }
  }
  *(_DWORD *)(SystemPage + 32) = *(_DWORD *)(SystemPage + 32) & 0xFFFF0000 | 1;
  *(_QWORD *)(SystemPage + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( (*(_QWORD *)(SystemPage + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(SystemPage + 32) = (EffectivePagePriorityThread << 24) ^ (*(_DWORD *)(SystemPage + 32) ^ (EffectivePagePriorityThread << 24)) & 0xF8FFFFFF;
  *(_QWORD *)(SystemPage + 8) = 0LL;
  *(_QWORD *)(SystemPage + 24) |= 0x4000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(SystemPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql <= 1u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return (SystemPage + 0x220000000000LL) / 48;
}
