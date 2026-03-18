/*
 * XREFs of ?IsUMObserverRegistered@CBaseProcessor@@QEBA_NXZ @ 0x1400B9934
 * Callers:
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x14003864C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 * Callees:
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1400B9AA0 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 */

char __fastcall CBaseProcessor::IsUMObserverRegistered(CBaseProcessor *this, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // di
  bool v8; // si

  v3 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 18752);
  v4 = v3 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3 + 8, 0LL);
  v7 = 1;
  v8 = !CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase::InputThreadState *)(v3 + 16))
    && *(_QWORD *)(*(_QWORD *)(v3 + 24) + 496LL) == *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19144);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( !v8 || (*((_DWORD *)this + 2) & 6) == 0 )
    return 0;
  return v7;
}
