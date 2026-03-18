/*
 * XREFs of EditionIsRIMInjectionBlocked @ 0x140243D30
 * Callers:
 *     NtUserInjectTouchpadAction @ 0x14029A600 (NtUserInjectTouchpadAction.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x140270A34 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x1402759AC (-DoInputCheck@@YA-AW4InputCheckResult@@W4InputCheckRequest@@@Z.c)
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline @ 0x1402770A4 (Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EditionIsRIMInjectionBlocked(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagTHREADINFO *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  const struct tagPROCESSINFO *v12; // rdx

  if ( (*(_DWORD *)(a1 + 168) & 0x4000) == 0 )
  {
    v2 = 0;
    if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19144) )
    {
      if ( (unsigned int)Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline() )
      {
        LOBYTE(v2) = (unsigned int)DoInputCheck(102LL) != 0;
        return v2;
      }
      v6 = PtiCurrent(v4, v3);
      v9 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19144);
      if ( *((_QWORD *)v6 + 62) != v9 )
        return 1LL;
      v10 = *(_QWORD *)(W32GetUserGdiSessionState(v9) + 40);
      if ( PsGetCurrentProcess(v11) != v10 && !RtlAreAllAccessesGranted(*((_DWORD *)v6 + 234), 0x20u) )
        return 1LL;
      if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
      {
        LOBYTE(v2) = !Win32ProcessCapability::Injection(*((Win32ProcessCapability **)v6 + 58), v12);
        return v2;
      }
    }
  }
  return 0LL;
}
