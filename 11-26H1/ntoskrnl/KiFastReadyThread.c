/*
 * XREFs of KiFastReadyThread @ 0x140230B78
 * Callers:
 *     KeReadyThread @ 0x140230DB0 (KeReadyThread.c)
 *     KeSwapProcessOrStack @ 0x1405FA6A0 (KeSwapProcessOrStack.c)
 * Callees:
 *     EtwTraceReadyThread @ 0x140218A90 (EtwTraceReadyThread.c)
 *     KiEnterDeferredReadyState @ 0x140230060 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x140230D00 (KiDeferredReadyThread.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiFastReadyThread(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v1, *(_BYTE *)(v1 + 566), *(_BYTE *)(v1 + 567), 0);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v8);
    while ( *(_QWORD *)(v1 + 64) );
  }
  KiEnterDeferredReadyState(v1);
  *(_QWORD *)(v1 + 64) = 0LL;
  KiDeferredReadyThread(CurrentPrcb, v1, 0LL);
  LOBYTE(v4) = CurrentIrql;
  return KiCheckForThreadDispatch(CurrentPrcb, v4, v5, v6);
}
