/*
 * XREFs of IopDequeueIrpFromFileObject @ 0x1403DE5B0
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x14040FD30 (IopCopyCompleteReadRequest.c)
 *     IopIoRingCompleteIrp @ 0x1404113E8 (IopIoRingCompleteIrp.c)
 *     IopCompleteRequest @ 0x14045B5C0 (IopCompleteRequest.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAreAllApcsDisabled @ 0x140263C40 (KeAreAllApcsDisabled.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269BD0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x140779D4C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x140923BC0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A5A090 (ObpHandleRevocationBlockRemoveObject.c)
 */

__int64 __fastcall IopDequeueIrpFromFileObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  volatile signed __int32 *v3; // rdi
  unsigned __int8 CurrentIrql; // si
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rbx
  signed __int64 v10; // rax
  bool v11; // cc
  signed __int64 BugCheckParameter4; // rax
  __int64 result; // rax
  BOOLEAN v14; // al
  signed __int64 v15; // rcx
  __int64 v16; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a1;
  v3 = (volatile signed __int32 *)(a2 + 184);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64(v3, 0LL) )
      KxWaitForSpinLockAndAcquire(v3);
  }
  else
  {
    KiAcquireSpinLockInstrumented(v3);
  }
  v5 = (_QWORD *)(v2 + 32);
  v6 = *(_QWORD *)(v2 + 32);
  if ( *(_QWORD *)(v6 + 8) != v2 + 32 || (v7 = *(_QWORD **)(v2 + 40), (_QWORD *)*v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *(_QWORD *)(v2 + 40) = v2 + 32;
  *v5 = v5;
  if ( ((__int64)IopSessionNotificationLock.SuspendEvent.Header.WaitListHead.Blink & 1) != 0 )
  {
    ObFastDereferenceObject(
      (signed __int64 *)&KeGetCurrentThread()[1].SchedulerApc.SystemArgument2,
      *(_QWORD *)(v2 + 88) & 0xFFFFFFFFFFFFFFF9uLL,
      0x70436F49u);
  }
  else
  {
    v8 = *(_QWORD *)(v2 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
    v9 = v8 - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v8 - 48, -1, 0x70436F49u);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL);
    v11 = v10 <= 1;
    BugCheckParameter4 = v10 - 1;
    if ( v11 )
    {
      if ( *(_QWORD *)(v9 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v9 + 24) ^ (unsigned __int64)BYTE1(v9)],
          v8,
          1uLL,
          *(_QWORD *)(v9 + 8));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v8, 2uLL, BugCheckParameter4);
      v14 = KeAreAllApcsDisabled();
      v15 = v8 - 48;
      if ( v14 )
      {
        ObpDeferObjectDeletion(v15);
      }
      else
      {
        v16 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v15);
        if ( v16 )
          ObpHandleRevocationBlockRemoveObject(v16);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v8 - 48);
        ObpRemoveObjectRoutine(v8 - 48, 0LL);
      }
    }
  }
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(v2 + 16) & 0xFFFF5FFF | 0x8000;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v3, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
