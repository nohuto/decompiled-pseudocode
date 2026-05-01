/*
 * XREFs of HamRpcSrvCreateAutoRestartActivityForDesktopBridge @ 0x18002EB80
 * Callers:
 *     <none>
 * Callees:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180014468 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     CempGetTokenHostInfo @ 0x18002F350 (CempGetTokenHostInfo.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvCreateAutoRestartActivityForDesktopBridge(__int64 a1, void *a2, unsigned __int64 *a3)
{
  int TokenHostInfo; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  _WORD *v8; // rcx
  __int16 v9; // ax
  _WORD *v10; // rax
  _WORD *v11; // rcx
  __int16 v12; // ax
  _WORD *v13; // rax
  void *TokenHandle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v16[3]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[128]; // [rsp+5Ch] [rbp-A4h] BYREF
  _BYTE v18[128]; // [rsp+DCh] [rbp-24h] BYREF
  int v19; // [rsp+15Ch] [rbp+5Ch]
  int v20; // [rsp+164h] [rbp+64h]
  _BYTE v21[32]; // [rsp+168h] [rbp+68h] BYREF
  int v22; // [rsp+188h] [rbp+88h]
  __int64 v23; // [rsp+190h] [rbp+90h]
  __int64 v24; // [rsp+198h] [rbp+98h]
  __int64 v25; // [rsp+1A0h] [rbp+A0h]
  __int64 v26; // [rsp+1A8h] [rbp+A8h]
  __int128 v27; // [rsp+1B0h] [rbp+B0h]
  __int64 v28; // [rsp+1C0h] [rbp+C0h]
  _BYTE v29[560]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset_0(v29, 0, 0x228uLL);
  TokenHandle[0] = 0LL;
  TokenHostInfo = NtOpenProcessToken(a2, 8u, TokenHandle);
  if ( TokenHostInfo >= 0 )
    TokenHostInfo = CempGetTokenHostInfo(TokenHandle[0], v29);
  if ( TokenHandle[0] )
    NtClose(TokenHandle[0]);
  if ( TokenHostInfo >= 0 )
  {
    memset_0(v16, 0, 0x188uLL);
    v6 = 64LL;
    v16[0] = 8397888;
    v7 = 64LL;
    v8 = v17;
    do
    {
      if ( v7 == -2147483582 )
        break;
      v9 = *(_WORD *)((char *)v8 + (char *)L"BridgeAppActivity" - v17);
      if ( !v9 )
        break;
      *v8++ = v9;
      --v7;
    }
    while ( v7 );
    v10 = v8 - 1;
    if ( v7 )
      v10 = v8;
    v11 = v18;
    *v10 = 0;
    do
    {
      if ( v6 == -2147483582 )
        break;
      v12 = *(_WORD *)((char *)v11 + (char *)&word_1800BBB1C - v18);
      if ( !v12 )
        break;
      *v11++ = v12;
      --v6;
    }
    while ( v6 );
    v13 = v11 - 1;
    if ( v6 )
      v13 = v11;
    *v13 = 0;
    v19 = 5;
    v20 = -1;
    memset_0(v21, 0, 0x68uLL);
    LODWORD(TokenHandle[0]) = 0;
    v22 = 0;
    v28 = 33LL;
    v23 = 128LL;
    v24 = -1LL;
    v26 = -1LL;
    v25 = -1LL;
    v27 = 0xFFFFFFFFFFFFFFFFuLL;
    v16[0] = v16[0] & 0xFC7FFFFF | 0x2000000;
    TokenHostInfo = ArSrvCheckCreateActivityForHost(
                      a3,
                      (struct _RM_PSM_HOST_INFO *)v29,
                      a2,
                      (struct _HAM_ACTIVITY_PROPERTIES *)v16,
                      (union _HAM_RESTART_PROPERTIES *)TokenHandle);
    if ( TokenHostInfo >= 0 )
      return 0;
  }
  return (unsigned int)TokenHostInfo;
}
