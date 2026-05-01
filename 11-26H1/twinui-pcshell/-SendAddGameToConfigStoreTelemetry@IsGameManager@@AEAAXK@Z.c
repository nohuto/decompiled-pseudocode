/*
 * XREFs of ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x1803169E8
 * Callers:
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x18004D490 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180111364 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ?Initialize@PiiFilter@@QEAAJXZ @ 0x1802C3AD0 (-Initialize@PiiFilter@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180315F0C (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     ?IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z @ 0x18031633C (-IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z.c)
 *     PiiFilterExecute @ 0x180676A30 (PiiFilterExecute.c)
 *     _alloca_probe @ 0x1806CCB80 (_alloca_probe.c)
 */

void __fastcall IsGameManager::SendAddGameToConfigStoreTelemetry(IsGameManager *this, DWORD a2)
{
  const unsigned __int16 *v4; // rdx
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  unsigned __int16 v8[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v9[6]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v10[260]; // [rsp+40h] [rbp-C0h] BYREF
  char v11[1040]; // [rsp+450h] [rbp+350h] BYREF
  unsigned __int16 v12[520]; // [rsp+860h] [rbp+760h] BYREF
  unsigned __int16 v13[520]; // [rsp+C70h] [rbp+B70h] BYREF
  wchar_t pszDest[520]; // [rsp+1080h] [rbp+F80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+14B8h] [rbp+13B8h]

  *(_DWORD *)v8 = 520;
  *(_DWORD *)v9 = 520;
  pszDest[0] = 0;
  v12[0] = 0;
  v13[0] = 0;
  LOWORD(v10[0]) = 0;
  Common::GetProcessImageInfoByPID(a2, pszDest, v8, (char *)v10, v9);
  if ( !*((_BYTE *)this + 88) )
    goto LABEL_13;
  *(_DWORD *)v8 = 520;
  *(_WORD *)v11 = 0;
  Common::GetProcessWorkingDirectoryByPID(a2, 0, v11, v8);
  if ( !*((_DWORD *)this + 20) )
    PiiFilter::Initialize((RtlNameValueArray **)this + 9);
  v5 = -805306139;
  if ( *((_DWORD *)this + 20) )
  {
    v6 = PiiFilterExecute(v13) | 0x10000000;
    if ( v6 >= 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = -805306139;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x99D,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_9:
  if ( !*((_DWORD *)this + 20) && (PiiFilter::Initialize((RtlNameValueArray **)this + 9), !*((_DWORD *)this + 20))
    || (v7 = PiiFilterExecute(v12), v5 = v7 | 0x10000000, v7 < 0) )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9A0,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)v5);
  }
LABEL_13:
  GameDVRTraceProvider::IsGameManager_AddKGLGameToConfigStore(pszDest, v4, v13, v12);
}
