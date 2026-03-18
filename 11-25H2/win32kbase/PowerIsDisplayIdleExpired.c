/*
 * XREFs of PowerIsDisplayIdleExpired @ 0x1400ED980
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z @ 0x1400EDAA0 (-IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z.c)
 *     PowerIsDisplayRequired @ 0x1400EDB30 (PowerIsDisplayRequired.c)
 *     PowerIsDisplayBurstActive @ 0x1400EDC20 (PowerIsDisplayBurstActive.c)
 */

_BOOL8 __fastcall PowerIsDisplayIdleExpired(__int64 a1, _DWORD *a2)
{
  int v3; // r14d
  __int64 UserSessionState; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  BOOL v12; // edx
  int v13; // r8d
  int IsDisplayBurstActive; // eax
  int v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 3056);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v7, 0LL);
  v8 = *(_QWORD *)(v7 + 80);
  ExReleasePushLockSharedEx(v7, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 <= *(_QWORD *)(UserSessionState + 2848) )
  {
    IsDisplayBurstActive = PowerIsDisplayBurstActive(&v16);
    v13 = v16;
    v12 = IsDisplayBurstActive == 0;
  }
  else
  {
    v12 = 0;
    if ( *(_DWORD *)(UserSessionState + 2680) > v3 )
    {
      v11 = W32GetUserSessionState(v10, v9);
      if ( CInputGlobals::IsTimeFromLastInputEvent(
             *(CInputGlobals **)(v11 + 3056),
             *(_DWORD *)(UserSessionState + 2680) - v3)
        && !(unsigned int)PowerIsDisplayRequired()
        && !(unsigned int)PowerIsDisplayBurstActive(0LL) )
      {
        v12 = 1;
      }
    }
    v13 = 12;
  }
  if ( a2 )
    *a2 = v12 ? v13 : 0;
  return v12;
}
