/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x14030D620
 * Callers:
 *     NtReleaseWorkerFactoryWorker @ 0x14030D100 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14030D800 (ExpWorkerFactoryCheckCreate.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpShutdownWorkerFactory @ 0x1403B3AE0 (ExpShutdownWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1403E1B50 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 */

void __fastcall ExpLeaveWorkerFactoryAwayMode(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rbx
  __int64 *v4; // rdi
  char v5; // r14
  volatile signed __int32 *v6; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 *v8; // rcx
  __int64 **v9; // rax
  ULONG_PTR v10; // rdi
  signed __int64 BugCheckParameter4; // rax
  BOOLEAN v12; // al
  __int64 v13; // rcx
  __int64 v14; // rax

  v3 = BugCheckParameter2;
  if ( (*(_DWORD *)(BugCheckParameter2 + 408) & 0x400) != 0 )
  {
    v4 = (__int64 *)(BugCheckParameter2 + 616);
    v5 = 0;
    v6 = *(volatile signed __int32 **)(*(_QWORD *)(BugCheckParameter2 + 16) + 8LL);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(BugCheckParameter2) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, a2);
    }
    KiAcquireKobjectLockSafe(v6, a2, a3);
    if ( *((_BYTE *)v4 + 17) == 4 )
    {
      v8 = (__int64 *)*v4;
      if ( *(__int64 **)(*v4 + 8) != v4 || (v9 = (__int64 **)v4[1], *v9 != v4) )
        __fastfail(3u);
      *v9 = v8;
      v5 = 1;
      v8[1] = (__int64)v9;
      *((_BYTE *)v4 + 17) = 5;
    }
    _InterlockedAnd(v6, 0xFFFFFF7F);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v5 )
    {
      v10 = v3 - 48;
      if ( ObpTraceFlags )
        ObpPushStackInfo(v3 - 48, -1, 0x746C6644u);
      BugCheckParameter4 = _InterlockedDecrement64((volatile signed __int64 *)v10);
      if ( BugCheckParameter4 <= 0 )
      {
        if ( *(_QWORD *)(v10 + 8) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v10 + 24) ^ (unsigned __int64)BYTE1(v10)],
            v3,
            1uLL,
            *(_QWORD *)(v10 + 8));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, v3, 2uLL, BugCheckParameter4);
        v12 = KeAreAllApcsDisabled();
        v13 = v3 - 48;
        if ( v12 )
        {
          ObpDeferObjectDeletion(v13);
        }
        else
        {
          v14 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v13);
          if ( v14 )
            ObpHandleRevocationBlockRemoveObject(v14);
          if ( ObpTraceFlags )
            ObpDeregisterObject(v3 - 48);
          ObpRemoveObjectRoutine(v3 - 48, 0LL);
        }
      }
      *(_DWORD *)(v3 + 408) &= ~0x400u;
    }
  }
  *(_DWORD *)(v3 + 408) &= ~0x200u;
}
