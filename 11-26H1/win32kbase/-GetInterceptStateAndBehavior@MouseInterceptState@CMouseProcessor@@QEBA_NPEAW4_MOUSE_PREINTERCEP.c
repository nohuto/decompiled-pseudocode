/*
 * XREFs of ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x14012AEC0
 * Callers:
 *     IsMouseInterceptEnabled @ 0x14012AE90 (IsMouseInterceptEnabled.c)
 * Callees:
 *     ApiSetEdtionGetInputDesktopId @ 0x140227FAC (ApiSetEdtionGetInputDesktopId.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
        CMouseProcessor::MouseInterceptState *this,
        enum _MOUSE_PREINTERCEPT_BEHAVIOR *a2)
{
  char v4; // bl
  __int64 v6; // rbx

  if ( a2 )
    *(_DWORD *)a2 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  if ( *((_BYTE *)this + 8) && (v6 = *((_QWORD *)this + 2), v6 == ApiSetEdtionGetInputDesktopId()) )
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
