/*
 * XREFs of ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1400B9A04
 * Callers:
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400B98F0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 * Callees:
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1400B9AA0 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 */

bool __fastcall CMasterInputThread::IsInputThreadDesktopActive(CMasterInputThread *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // di

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 8, 0LL);
  v4 = 0;
  if ( !CInputThreadBase::InputThreadState::IsEmpty((CMasterInputThread *)((char *)this + 16)) )
    v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 496LL) == *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19144);
  ExReleasePushLockSharedEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
