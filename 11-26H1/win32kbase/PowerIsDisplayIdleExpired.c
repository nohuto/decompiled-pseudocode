/*
 * XREFs of PowerIsDisplayIdleExpired @ 0x140135530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z @ 0x140135650 (-IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z.c)
 *     PowerIsDisplayBurstActive @ 0x1401356E0 (PowerIsDisplayBurstActive.c)
 *     PowerIsDisplayRequired @ 0x1401357B0 (PowerIsDisplayRequired.c)
 */

_BOOL8 __fastcall PowerIsDisplayIdleExpired(int a1, _DWORD *a2, int a3)
{
  __int64 UserSessionState; // rsi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax
  BOOL v15; // edx
  int v16; // r8d
  int IsDisplayBurstActive; // eax
  int v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = 0;
  UserSessionState = W32GetUserSessionState(a1, (_DWORD)a2, a3);
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 3056);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v9, 0LL);
  v10 = *(_QWORD *)(v9 + 80);
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 <= *(_QWORD *)(UserSessionState + 2848) )
  {
    IsDisplayBurstActive = PowerIsDisplayBurstActive(&v19);
    v16 = v19;
    v15 = IsDisplayBurstActive == 0;
  }
  else
  {
    v15 = 0;
    if ( *(_DWORD *)(UserSessionState + 2680) > a1 )
    {
      v14 = W32GetUserSessionState(v12, v11, v13);
      if ( CInputGlobals::IsTimeFromLastInputEvent(
             *(CInputGlobals **)(v14 + 3056),
             *(_DWORD *)(UserSessionState + 2680) - a1)
        && !(unsigned int)PowerIsDisplayRequired()
        && !(unsigned int)PowerIsDisplayBurstActive(0LL) )
      {
        v15 = 1;
      }
    }
    v16 = 12;
  }
  if ( a2 )
    *a2 = v15 ? v16 : 0;
  return v15;
}
