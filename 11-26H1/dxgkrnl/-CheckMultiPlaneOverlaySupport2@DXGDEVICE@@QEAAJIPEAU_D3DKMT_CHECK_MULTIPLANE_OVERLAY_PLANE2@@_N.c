/*
 * XREFs of ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1401C19CC
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1401C4E00 (DxgkCheckMultiPlaneOverlaySupport2.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x140392D40 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14039EE6C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport2(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *a3,
        bool a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  LUID *p_CompSurfaceLuid; // r8
  __int64 v11; // rbp
  char *v12; // r9
  char *v13; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v14; // rdx
  char *v15; // r10
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v16; // r11
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  LUID v19; // rax
  __int128 v20; // xmm0
  __int64 result; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v22[8]; // [rsp+40h] [rbp-438h] BYREF
  char v23; // [rsp+80h] [rbp-3F8h] BYREF
  char v24; // [rsp+84h] [rbp-3F4h] BYREF
  char v25; // [rsp+180h] [rbp-2F8h] BYREF
  char v26; // [rsp+184h] [rbp-2F4h] BYREF

  *a5 = 0;
  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(this[2]) && *(_QWORD *)(*((_QWORD *)this[2] + 2) + 904LL) )
  {
    memset(v22, 0, sizeof(v22));
    if ( a2 )
    {
      p_CompSurfaceLuid = &a3->CompSurfaceLuid;
      v11 = a2;
      v12 = &v26;
      v13 = &v24;
      v14 = v22;
      v15 = &v25;
      v16 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v23;
      do
      {
        v17 = *(_OWORD *)&p_CompSurfaceLuid[2].HighPart;
        *((_DWORD *)v13 - 1) = p_CompSurfaceLuid[-1].LowPart;
        v18 = *(_OWORD *)&p_CompSurfaceLuid[4].HighPart;
        *(_DWORD *)v13 = p_CompSurfaceLuid[-1].HighPart;
        v19 = *p_CompSurfaceLuid;
        p_CompSurfaceLuid += 16;
        *(LUID *)(v13 + 4) = v19;
        *((_DWORD *)v13 + 3) = p_CompSurfaceLuid[-15].LowPart;
        *((_DWORD *)v12 - 1) = p_CompSurfaceLuid[-14].LowPart;
        *((_DWORD *)v12 + 12) = p_CompSurfaceLuid[-8].HighPart;
        *((_DWORD *)v12 + 13) = p_CompSurfaceLuid[-7].LowPart;
        v19.LowPart = p_CompSurfaceLuid[-2].LowPart;
        *v14 = v16++;
        *(_QWORD *)(v13 + 20) = v15;
        v13 += 32;
        *(_OWORD *)v12 = v17;
        *((_DWORD *)v12 + 18) = v19.LowPart;
        v15 += 88;
        ++v14;
        *((_DWORD *)v12 + 17) = p_CompSurfaceLuid[-5].HighPart;
        *((_DWORD *)v12 + 14) = 0;
        *(_QWORD *)(v12 + 60) = 0LL;
        v20 = *(_OWORD *)&p_CompSurfaceLuid[-10].HighPart;
        *((_OWORD *)v12 + 1) = v18;
        *((_OWORD *)v12 + 2) = v20;
        v12 += 88;
        --v11;
      }
      while ( v11 );
    }
    return DXGDEVICE::CheckMultiPlaneOverlaySupport3((DXGDEVICE *)this, a2, v22, 0, 0LL, a4, a5, a6);
  }
  else
  {
    WdLogSingleEntry1(3LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 10036;
  }
  return result;
}
