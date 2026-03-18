/*
 * XREFs of ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x1402759AC
 * Callers:
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 *     EditionIsRIMInjectionBlocked @ 0x140243D30 (EditionIsRIMInjectionBlocked.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x1402769F4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x140060AC0 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     CheckGrantedAccess @ 0x1401768E8 (CheckGrantedAccess.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x140270A34 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x140275B0C (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 */

__int64 __fastcall DoInputCheck(__int64 a1, _DWORD *a2)
{
  char v2; // di
  struct tagTHREADINFO *v4; // rsi
  const struct tagPROCESSINFO *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rcx

  v2 = a1;
  if ( (a1 & 1) != 0 )
  {
    a2 = *(_DWORD **)(W32GetUserSessionState(a1, a2) + 19872);
    if ( (*a2 & 0x2000) != 0 )
      return 1LL;
  }
  v4 = PtiCurrent(a1, (__int64)a2);
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
    && (v2 & 0x20) != 0
    && !Win32ProcessCapability::Injection(*((Win32ProcessCapability **)v4 + 58), v5) )
  {
    return 6LL;
  }
  if ( (v2 & 2) != 0 )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19144);
    if ( *((_QWORD *)v4 + 62) != v6 )
      return 2LL;
  }
  if ( (v2 & 4) != 0 && !(unsigned int)CheckGrantedAccess(*((_DWORD *)v4 + 234), 0x20u) )
  {
    v7 = *(_QWORD *)(W32GetUserGdiSessionState(v6) + 40);
    if ( PsGetCurrentProcess(v8) != v7 )
      return 3LL;
  }
  if ( (v2 & 8) != 0 )
  {
    v9 = *(struct tagTHREADINFO **)(W32GetUserSessionState(v6, v5) + 18944);
    if ( v9 )
    {
      if ( v9 != v4 )
        return 4LL;
    }
  }
  if ( (v2 & 0x10) != 0 && !(unsigned int)IsGpqForegroundAccessibleCurrent(1LL, (__int64)v5) )
    return 5LL;
  if ( (v2 & 0x40) != 0 )
    return tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v4 + 58), 0x200u) ? 7 : 0;
  return 0LL;
}
