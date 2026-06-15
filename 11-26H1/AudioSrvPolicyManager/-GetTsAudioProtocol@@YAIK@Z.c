/*
 * XREFs of ?GetTsAudioProtocol@@YAIK@Z @ 0x18000CE08
 * Callers:
 *     TS_SessionGetAudioProtocol @ 0x18000C430 (TS_SessionGetAudioProtocol.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180044400 (-TsSessionIdConnect@@YAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     IsWinStationIsSessionRemoteablePresent @ 0x180031338 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x180031460 (IsWTSQuerySessionInformationWPresent.c)
 */

__int64 __fastcall GetTsAudioProtocol(DWORD SessionId)
{
  WCHAR v2; // bx
  char v3; // si
  int v4; // esi
  int v6; // [rsp+38h] [rbp-D0h] BYREF
  DWORD pBytesReturned; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v8; // [rsp+40h] [rbp-C8h] BYREF
  LPWSTR ppBuffer; // [rsp+48h] [rbp-C0h] BYREF
  LPWSTR v10; // [rsp+50h] [rbp-B8h] BYREF
  _WORD v11[1152]; // [rsp+58h] [rbp-B0h] BYREF

  v10 = 0LL;
  ppBuffer = 0LL;
  pBytesReturned = 0;
  v2 = -1;
  memset_0(v11, 0, 0x8F8uLL);
  LODWORD(v8) = 0;
  v3 = 0;
  LOBYTE(v6) = 0;
  if ( !(unsigned __int8)IsWinStationIsSessionRemoteablePresent()
    || !(unsigned __int8)IsWTSQuerySessionInformationWPresent() )
  {
    return 0;
  }
  if ( SessionId == -1 )
    SessionId = NtCurrentPeb()->SessionId;
  if ( (unsigned __int8)WinStationIsSessionRemoteable(0LL, SessionId, &v6) )
  {
    if ( (unsigned int)RtlGetActiveConsoleId() == SessionId )
    {
      if ( !(_BYTE)v6 )
        return 0;
      v3 = 1;
      v2 = 2;
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() != SessionId )
    {
      if ( !v3 )
      {
        if ( !WTSQuerySessionInformationW(0LL, SessionId, WTSClientProtocolType, &ppBuffer, &pBytesReturned) )
          return (WCHAR)-1;
        v2 = *ppBuffer;
        WTSFreeMemory(ppBuffer);
      }
      if ( !WTSQuerySessionInformationW(0LL, SessionId, WTSConnectState, &v10, &pBytesReturned) )
        return (WCHAR)-1;
      v4 = *(_DWORD *)v10;
      WTSFreeMemory(v10);
      if ( v4 )
      {
        if ( (unsigned int)(v4 - 1) > 1 )
          return (WCHAR)-1;
      }
      if ( !v2 )
        return v2;
      if ( !(unsigned __int8)WinStationQueryInformationW(0LL, SessionId, 6LL, v11, 2296, &v8) )
        return (WCHAR)-1;
      if ( (v11[0] & 0x100) == 0 )
        return v2;
    }
    return 0;
  }
  return (WCHAR)-1;
}
