/*
 * XREFs of ?DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ @ 0x1401CE7BC
 * Callers:
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x140191B04 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpiGetMdmStatus @ 0x1400151E4 (DpiGetMdmStatus.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x140076F6C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiDumpAdaptersDisplayMuxStatus @ 0x1400903D0 (DpiDumpAdaptersDisplayMuxStatus.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkWriteDiagEntry @ 0x14031B9C0 (DxgkWriteDiagEntry.c)
 */

__int64 DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer(void)
{
  __int64 v0; // rax
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ecx
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  _DWORD v20[192]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+330h] [rbp+230h] BYREF

  memset(v20, 0, 0x2F4uLL);
  DpiGetMdmStatus((struct _DISPLAYCONFIG_DISPLAYMUX_STATUS *)v20);
  if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v20[185] <= 1u )
      return 0LL;
  }
  else if ( !v20[185] )
  {
    return 0LL;
  }
  v0 = operator new[](0x320uLL, 0x4B677844u, 256LL);
  v1 = v20[1];
  v2 = v0;
  v21 = v0;
  v3 = 5LL;
  *(_DWORD *)v0 = 56;
  *(_DWORD *)(v0 + 4) = 800;
  *(_DWORD *)(v0 + 40) = 0;
  *(_QWORD *)(v0 + 32) = 0LL;
  *(_QWORD *)(v0 + 8) = 0LL;
  LODWORD(v0) = v20[4];
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_DWORD *)(v2 + 48) = v1;
  *(_DWORD *)(v2 + 52) = v20[3];
  LOBYTE(v1) = v20[6];
  *(_DWORD *)(v2 + 56) = v0;
  LODWORD(v0) = v20[5] & 1;
  *(_DWORD *)(v2 + 64) = 1;
  v4 = v20[0] & 1 | *(_DWORD *)(v2 + 60) & 0xFFFFFFF0 | (2 * (v20[2] & 1 | (2 * (v0 | (2 * (v1 & 1))))));
  v5 = &v20[7];
  *(_DWORD *)(v2 + 60) = v4;
  v6 = (_OWORD *)(v2 + 68);
  do
  {
    v7 = v5[1];
    *v6 = *v5;
    v8 = v5[2];
    v6[1] = v7;
    v9 = v5[3];
    v6[2] = v8;
    v10 = v5[4];
    v6[3] = v9;
    v11 = v5[5];
    v6[4] = v10;
    v12 = v5[6];
    v6[5] = v11;
    v13 = v5[7];
    v5 += 8;
    v6[6] = v12;
    v6 += 8;
    *(v6 - 1) = v13;
    --v3;
  }
  while ( v3 );
  v14 = v5[1];
  *v6 = *v5;
  v15 = v5[2];
  v6[1] = v14;
  v16 = v5[3];
  v6[2] = v15;
  v17 = v5[4];
  v18 = *((_QWORD *)v5 + 10);
  v6[3] = v16;
  v6[4] = v17;
  *((_QWORD *)v6 + 10) = v18;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v2);
  if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
    DpiDumpAdaptersDisplayMuxStatus();
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v21);
  return 0LL;
}
