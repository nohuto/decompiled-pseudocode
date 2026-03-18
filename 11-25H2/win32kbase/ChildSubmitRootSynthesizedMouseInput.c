/*
 * XREFs of ChildSubmitRootSynthesizedMouseInput @ 0x140215E98
 * Callers:
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1402198A4 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall ChildSubmitRootSynthesizedMouseInput(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 UserSessionState; // rax

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19488);
  CPushLock::AcquireLockExclusive((CPushLock *)(v3 + 16));
  v6 = *(_QWORD **)(v3 + 8);
  if ( *v6 != v3 )
    __fastfail(3u);
  *a1 = v3;
  a1[1] = v6;
  *v6 = a1;
  *(_QWORD *)(v3 + 8) = a1;
  UserSessionState = W32GetUserSessionState(v5, v4);
  KeSetEvent(*(PRKEVENT *)(UserSessionState + 19440), 1, 0);
  CPushLock::ReleaseLock((CPushLock *)(v3 + 16));
}
