/*
 * XREFs of KeAdjustPriorityFloor @ 0x14023972C
 * Callers:
 *     PsAdjustWin32kPriorityFloor @ 0x1402396A0 (PsAdjustWin32kPriorityFloor.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAdjustPriorityFloor(ULONG_PTR BugCheckParameter1, __int64 a2, int a3)
{
  ULONG_PTR v3; // rbp
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rsi
  unsigned __int8 CurrentIrql; // di
  char v7; // cl
  char v8; // al
  char v9; // al
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+60h] [rbp+18h] BYREF

  v3 = a3;
  v4 = BugCheckParameter1;
  v5 = (int)a2;
  v15 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1, a2);
  }
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( (_DWORD)v3 )
  {
    v7 = *(_BYTE *)(v3 + v4 + 824);
    if ( v7 == -1 )
      KeBugCheckEx(0x157u, v4, v3, 1uLL, 0LL);
    *(_BYTE *)(v3 + v4 + 824) = v7 + 1;
    *(_DWORD *)(v4 + 856) |= 1 << v3;
  }
  if ( (_DWORD)v5 )
  {
    v8 = *(_BYTE *)(v5 + v4 + 824);
    if ( !v8 )
      KeBugCheckEx(0x157u, v4, v5, 2uLL, 0LL);
    v9 = v8 - 1;
    *(_BYTE *)(v5 + v4 + 824) = v9;
    if ( !v9 )
      *(_DWORD *)(v4 + 856) ^= 1 << v5;
  }
  v10 = KiComputeThreadPriority((struct _KTHREAD *)v4, 0, 0);
  KiSetPriorityThread(v4, &v15, v10);
  v13 = v15 == 0;
  *(_QWORD *)(v4 + 64) = 0LL;
  if ( v13 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    LOBYTE(v12) = CurrentIrql;
    return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v15, v12);
  }
  return result;
}
