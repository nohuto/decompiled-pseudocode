/*
 * XREFs of ?GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x18017A000
 * Callers:
 *     _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x180179994 (_lambda_16e39da7052e4c67737ceb9c18ac8be9_--operator().c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800C1DF4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x18017A484 (-GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

LONG __fastcall WindowingEnvironmentConfig::GetTargetDeviceName(
        WindowingEnvironmentConfig *this,
        HMONITOR a2,
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a3)
{
  __int64 v5; // rcx
  _OWORD *v6; // rax
  struct DISPLAYCONFIG_TARGET_DEVICE_NAME *v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  UINT32 v17; // eax
  wil::details *v18; // rcx
  bool v19; // dl
  LONG result; // eax
  DISPLAYCONFIG_PATH_INFO v21; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v22[432]; // [rsp+70h] [rbp-90h] BYREF
  struct tagMONITORINFO mi; // [rsp+220h] [rbp+120h] BYREF
  unsigned __int16 v24[36]; // [rsp+248h] [rbp+148h] BYREF

  memset_0(v22, 0, 0x1A4uLL);
  v5 = 3LL;
  v6 = v22;
  v7 = a3;
  do
  {
    v8 = v6[1];
    *(_OWORD *)&v7->header.type = *v6;
    v9 = v6[2];
    *(_OWORD *)&v7->header.id = v8;
    v10 = v6[3];
    *(_OWORD *)&v7->connectorInstance = v9;
    v11 = v6[4];
    *(_OWORD *)&v7->monitorFriendlyDeviceName[6] = v10;
    v12 = v6[5];
    *(_OWORD *)&v7->monitorFriendlyDeviceName[14] = v11;
    v13 = v6[6];
    *(_OWORD *)&v7->monitorFriendlyDeviceName[22] = v12;
    v14 = v6[7];
    v6 += 8;
    *(_OWORD *)&v7->monitorFriendlyDeviceName[30] = v13;
    v7 = (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)((char *)v7 + 128);
    *(_OWORD *)&v7[-1].monitorDevicePath[120] = v14;
    --v5;
  }
  while ( v5 );
  v15 = *v6;
  v16 = v6[1];
  v17 = *((_DWORD *)v6 + 8);
  *(_OWORD *)&v7->header.type = v15;
  *(_OWORD *)&v7->header.id = v16;
  v7->connectorInstance = v17;
  memset(&mi, 0, sizeof(mi));
  memset_0(v24, 0, 0x40uLL);
  mi.cbSize = 104;
  if ( !GetMonitorInfoW(a2, &mi) )
    return wil::details::GetLastErrorFailHr(v18);
  memset_0(&v21, 0, sizeof(v21));
  result = GetPathInfo(v24, v19, &v21);
  if ( result >= 0 )
  {
    a3->header.adapterId = v21.targetInfo.adapterId;
    a3->header.id = v21.targetInfo.id;
    a3->header.size = 420;
    a3->header.type = DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_NAME;
    result = DisplayConfigGetDeviceInfo(&a3->header);
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
