/*
 * XREFs of MiCreateZeroThreadContext @ 0x140776624
 * Callers:
 *     MiStartZeroEngineThreads @ 0x140B29FA4 (MiStartZeroEngineThreads.c)
 * Callees:
 *     MiGetClosestNodeWithProcessors @ 0x140200B4C (MiGetClosestNodeWithProcessors.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     MiSetZeroThreadState @ 0x1404AB3E0 (MiSetZeroThreadState.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateZeroThreadContext(__int64 a1)
{
  int ClosestNodeWithProcessors; // ebx
  __int64 PoolMm; // rax
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // r14
  _QWORD *v7; // r12
  __int64 v8; // r15
  _DWORD *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // r9

  ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(*(_DWORD *)(*(_QWORD *)(a1 + 136) + 56LL));
  PoolMm = ExAllocatePoolMm(64LL, 0x1C0uLL, 1952082253, ClosestNodeWithProcessors | 0x80000000);
  v4 = PoolMm;
  if ( !PoolMm )
    return 0LL;
  v6 = 0LL;
  v7 = (_QWORD *)(PoolMm + 352);
  v8 = 0LL;
  v9 = (_DWORD *)(PoolMm + 336);
  v10 = 4LL;
  do
  {
    *v9 = __rdtsc() >> 4;
    MiInitializePageColorBase(0LL, 3, ClosestNodeWithProcessors + 1, v8 + v4 + 352);
    v8 += 16LL;
    v11 = v6 + v4 + 336;
    ++v9;
    v6 += 4LL;
    *v7 = v11;
    v7 += 2;
    --v10;
  }
  while ( v10 );
  if ( !(unsigned int)MiCreateUltraThreadContext(v4 + 192, v4 + 352, 14, 8LL) )
  {
    ExFreePoolWithTag((PVOID)v4, 0);
    return 0LL;
  }
  KeInitializeEvent((PRKEVENT)(v4 + 136), SynchronizationEvent, 0);
  MiSetZeroThreadState(v4, 2u);
  result = v4;
  *(_QWORD *)(v4 + 80) = a1;
  return result;
}
