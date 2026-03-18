/*
 * XREFs of ChildSubmitRootSynthesizedMouseInput @ 0x14021B35C
 * Callers:
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x14021E300 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall ChildSubmitRootSynthesizedMouseInput(_QWORD *a1, int a2, int a3)
{
  __int64 v4; // rsi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  _QWORD *v8; // rax
  __int64 UserSessionState; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 19520);
  CPushLock::AcquireLockExclusive((CPushLock *)(v4 + 16));
  v8 = *(_QWORD **)(v4 + 8);
  if ( *v8 != v4 )
    __fastfail(3u);
  *a1 = v4;
  a1[1] = v8;
  *v8 = a1;
  *(_QWORD *)(v4 + 8) = a1;
  UserSessionState = W32GetUserSessionState(v6, v5, v7);
  KeSetEvent(*(PRKEVENT *)(UserSessionState + 19472), 1, 0);
  CPushLock::ReleaseLock((CPushLock *)(v4 + 16));
}
