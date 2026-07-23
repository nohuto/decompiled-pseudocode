/*
 * XREFs of KiInSwapProcesses @ 0x140485E14
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405FA6A0 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiReadyOutSwappedThreads @ 0x14037D574 (KiReadyOutSwappedThreads.c)
 *     MmInSwapProcess @ 0x140485F04 (MmInSwapProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiInSwapProcesses(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int8 CurrentIrql; // di
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  __int64 result; // rax

  do
  {
    v2 = a1 - 15;
    a1 = (_QWORD *)*a1;
    _InterlockedXor((volatile signed __int32 *)v2 + 66, 6u);
    MmInSwapProcess(v2);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = 2;
      LOBYTE(v4) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v4, v3);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v2, v3, v5);
    v7 = v2 + 13;
    v8 = (_QWORD *)v2[13];
    if ( v8 == v2 + 13 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( (_QWORD *)v8[1] != v7 || (v9 = (_QWORD *)v2[14], (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      v2[14] = v7;
      *v7 = v7;
    }
    _InterlockedXor((volatile signed __int32 *)v2 + 66, 4u);
    _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
    if ( v8 )
    {
      result = KiReadyOutSwappedThreads(v8, CurrentIrql);
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
