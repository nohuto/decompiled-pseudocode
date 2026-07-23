/*
 * XREFs of KeRemoveQueueEntry @ 0x1403B4810
 * Callers:
 *     IopCancelWaitCompletionPacket @ 0x1403B45E4 (IopCancelWaitCompletionPacket.c)
 *     IoCancelMiniCompletionPacket @ 0x1405CE180 (IoCancelMiniCompletionPacket.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeRemoveQueueEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbx
  char v5; // bp
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax

  v4 = a1;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v7 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v4, v7, a3);
  if ( *a2 )
  {
    v5 = 1;
    --*(_DWORD *)(v4 + 4);
    v8 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v9 = (_QWORD *)a2[1], (_QWORD *)*v9 != a2) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
  }
  _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v5;
}
