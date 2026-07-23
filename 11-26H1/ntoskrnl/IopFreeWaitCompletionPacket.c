/*
 * XREFs of IopFreeWaitCompletionPacket @ 0x140268D80
 * Callers:
 *     IoRemoveIoCompletion @ 0x140222160 (IoRemoveIoCompletion.c)
 *     IopDeleteIoCompletionInternal @ 0x1403DF3CC (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 */

__int64 __fastcall IopFreeWaitCompletionPacket(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v2; // rbp
  unsigned __int8 CurrentIrql; // bl
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 BugCheckParameter4; // rax
  signed __int64 v9; // rax
  __int64 result; // rax
  signed __int64 v11; // rbx
  signed __int64 v12; // rbx
  BOOLEAN v13; // al
  ULONG_PTR v14; // rcx
  __int64 v15; // rax
  BOOLEAN v16; // al
  ULONG_PTR v17; // rcx
  __int64 v18; // rax
  BOOLEAN v19; // al
  ULONG_PTR v20; // rcx
  __int64 v21; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_QWORD *)(BugCheckParameter2 + 80);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 96), 0LL) )
      KxWaitForSpinLockAndAcquire(BugCheckParameter2 + 96);
  }
  else
  {
    KiAcquireSpinLockInstrumented(BugCheckParameter2 + 96);
  }
  *(_BYTE *)(BugCheckParameter2 + 104) = 0;
  *(_QWORD *)(BugCheckParameter2 + 88) = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 96), 0LL);
  else
    KiReleaseSpinLockInstrumented(BugCheckParameter2 + 96, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( ObpTraceFlags )
    ObpPushStackInfo(v2 - 48, -1, 0x746C6644u);
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  BugCheckParameter4 = v6 - 1;
  if ( v7 )
  {
    if ( *(_QWORD *)(v2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v2 - 48) >> 8)],
        v2,
        1uLL,
        *(_QWORD *)(v2 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, v2, 2uLL, BugCheckParameter4);
    v13 = KeAreAllApcsDisabled();
    v14 = v2 - 48;
    if ( v13 )
    {
      ObpDeferObjectDeletion(v14);
    }
    else
    {
      v15 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v14);
      if ( v15 )
        ObpHandleRevocationBlockRemoveObject(v15);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v2 - 48);
      ObpRemoveObjectRoutine(v2 - 48, 0LL);
    }
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(a2 - 48, -1, 0x746C6644u);
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v9 <= 1;
  result = v9 - 1;
  if ( v7 )
  {
    if ( *(_QWORD *)(a2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8)],
        a2,
        1uLL,
        *(_QWORD *)(a2 - 40));
    if ( result < 0 )
      KeBugCheckEx(0x18u, 0LL, a2, 2uLL, result);
    v16 = KeAreAllApcsDisabled();
    v17 = a2 - 48;
    if ( v16 )
    {
      result = ObpDeferObjectDeletion(v17);
    }
    else
    {
      v18 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v17);
      if ( v18 )
        ObpHandleRevocationBlockRemoveObject(v18);
      if ( ObpTraceFlags )
        ObpDeregisterObject(a2 - 48);
      result = ObpRemoveObjectRoutine(a2 - 48, 0LL);
    }
  }
  if ( ObpTraceFlags )
    result = ObpPushStackInfo(BugCheckParameter2 - 48, -1, 0x746C6644u);
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v11 <= 1;
  v12 = v11 - 1;
  if ( v7 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
        BugCheckParameter2,
        1uLL,
        *(_QWORD *)(BugCheckParameter2 - 40));
    if ( v12 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, v12);
    v19 = KeAreAllApcsDisabled();
    v20 = BugCheckParameter2 - 48;
    if ( v19 )
    {
      return ObpDeferObjectDeletion(v20);
    }
    else
    {
      v21 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v20);
      if ( v21 )
        ObpHandleRevocationBlockRemoveObject(v21);
      if ( ObpTraceFlags )
        ObpDeregisterObject(BugCheckParameter2 - 48);
      return ObpRemoveObjectRoutine(BugCheckParameter2 - 48, 0LL);
    }
  }
  return result;
}
