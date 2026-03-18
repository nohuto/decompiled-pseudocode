/*
 * XREFs of UserSurfaceAccessCheck @ 0x1400D5420
 * Callers:
 *     UserScreenAccessCheck @ 0x1400D53D0 (UserScreenAccessCheck.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserUnsafeIsProcessDwm @ 0x1400CD430 (UserUnsafeIsProcessDwm.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x1401973A0 (ApiSetIsCurrentProcessWinstaLocked.c)
 *     Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline @ 0x1401A712C (Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall UserSurfaceAccessCheck(__int64 a1)
{
  unsigned int v2; // ebx
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  bool v8; // zf
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx

  v2 = 0;
  v3 = PtiCurrent();
  v5 = v3;
  if ( !a1
    || (v6 = *((_QWORD *)v3 + 62)) != 0 && ***(_QWORD ***)(v6 + 8) == a1
    || (_InterlockedCompareExchange((volatile signed __int32 *)v5 + 132, 0, 0) & 8) != 0
    || (!(unsigned int)Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline()
      ? (v8 = (*((_BYTE *)v5 + 1360) & 4) == 0)
      : (v8 = (unsigned int)UserUnsafeIsProcessDwm(**((_QWORD **)v5 + 58), v7) == 0),
        !v8) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( (*(_DWORD *)(v10 + 12) & 0x40010) == 0x40010 && !(unsigned int)ApiSetIsCurrentProcessWinstaLocked() )
      return 1;
  }
  return v2;
}
