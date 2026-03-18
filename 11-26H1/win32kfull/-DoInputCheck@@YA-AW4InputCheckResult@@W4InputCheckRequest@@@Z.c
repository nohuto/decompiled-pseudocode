/*
 * XREFs of ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x14029B104
 * Callers:
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x14029C7D4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
 *     EditionIsRIMInjectionBlocked @ 0x1402A4DD0 (EditionIsRIMInjectionBlocked.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14011CF38 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x140197844 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     CheckGrantedAccess @ 0x1401AC1D4 (CheckGrantedAccess.c)
 */

__int64 __fastcall DoInputCheck(__int64 a1, __int64 a2)
{
  char v2; // di
  struct tagTHREADINFO *v4; // rsi
  const struct tagPROCESSINFO *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rcx

  v2 = a1;
  if ( (a1 & 1) != 0 && (**(_DWORD **)(W32GetUserSessionState(a1, a2) + 19904) & 0x2000) != 0 )
    return 1LL;
  v4 = PtiCurrent(a1);
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
    && (v2 & 0x20) != 0
    && !Win32ProcessCapability::Injection(*((Win32ProcessCapability **)v4 + 57), v5) )
  {
    return 6LL;
  }
  if ( (v2 & 2) != 0 )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19176);
    if ( *((_QWORD *)v4 + 61) != v6 )
      return 2LL;
  }
  if ( (v2 & 4) != 0 && !(unsigned int)CheckGrantedAccess(*((_DWORD *)v4 + 232), 0x20u) )
  {
    v7 = *(_QWORD *)(W32GetUserGdiSessionState(v6) + 40);
    if ( PsGetCurrentProcess(v8) != v7 )
      return 3LL;
  }
  if ( (v2 & 8) != 0 )
  {
    v9 = *(struct tagTHREADINFO **)(W32GetUserSessionState(v6, v5) + 18984);
    if ( v9 )
    {
      if ( v9 != v4 )
        return 4LL;
    }
  }
  if ( (v2 & 0x10) != 0 && !(unsigned int)IsGpqForegroundAccessibleCurrent(1LL) )
    return 5LL;
  if ( (v2 & 0x40) != 0 )
    return tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v4 + 57), 0x200u) ? 7 : 0;
  return 0LL;
}
