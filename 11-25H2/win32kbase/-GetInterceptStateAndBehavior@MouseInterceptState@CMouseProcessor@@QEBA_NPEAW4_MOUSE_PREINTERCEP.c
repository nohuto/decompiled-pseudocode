/*
 * XREFs of ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1400DEA80
 * Callers:
 *     IsMouseInterceptEnabled @ 0x1400DEA50 (IsMouseInterceptEnabled.c)
 * Callees:
 *     ApiSetEdtionGetInputDesktopId @ 0x140225D84 (ApiSetEdtionGetInputDesktopId.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
        CMouseProcessor::MouseInterceptState *this,
        enum _MOUSE_PREINTERCEPT_BEHAVIOR *a2)
{
  char v4; // si

  if ( a2 )
    *(_DWORD *)a2 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  if ( *((_BYTE *)this + 8) && *((_QWORD *)this + 2) == ApiSetEdtionGetInputDesktopId() )
  {
    v4 = 1;
    if ( a2 )
      *(_DWORD *)a2 = *((_DWORD *)this + 3);
  }
  else
  {
    v4 = 0;
  }
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
