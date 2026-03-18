/*
 * XREFs of ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x18012D3C0
 * Callers:
 *     ?GetDeviceTexture@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012C950 (-GetDeviceTexture@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012CAE0 (-GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012CCE0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012CEA0 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012D250 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801C6690 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18012D6D0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18012F084 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmapInternal(
        CD2DBitmapCache *a1,
        struct _LUID a2,
        int a3,
        char a4,
        _QWORD *a5,
        _BYTE *a6)
{
  char *v6; // rbx
  __int64 v9; // rcx
  unsigned int v12; // r14d
  __int64 v13; // rcx
  int v14; // eax
  __int64 v16; // rsi
  __int64 v17; // r14
  struct CSecondaryD2DBitmap *v18; // rsi
  int v19; // eax
  int updated; // eax
  char *v21; // rax
  struct CSecondaryD2DBitmap *v22; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v23[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v24; // [rsp+40h] [rbp-48h]
  int v25; // [rsp+48h] [rbp-40h]
  int v26; // [rsp+4Ch] [rbp-3Ch]
  LONG HighPart; // [rsp+9Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v6 = 0LL;
  v9 = *((_QWORD *)a1 + 3);
  v12 = 0;
  *a6 = 0;
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9) && *((_BYTE *)g_pComposition + 6458) )
    {
      *a6 = 1;
    }
    else
    {
      v13 = *((_QWORD *)a1 + 4);
      if ( v13
        && *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v13 + 64LL))(v13, v23) == __PAIR64__(HighPart, a2.LowPart)
        && ((v14 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct CSecondaryD2DBitmap **))(**((_QWORD **)a1 + 4)
                                                                                               + 96LL))(
                                *((_QWORD *)a1 + 4),
                                &v22),
             v14 == -1)
         || v14 == a3
         || a3 == -3)
        && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 4) + 56LL))(*((_QWORD *)a1 + 4)) || a4) )
      {
        v6 = (char *)*((_QWORD *)a1 + 4);
        if ( v6 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)a1 + 4));
      }
      else if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct CSecondaryD2DBitmap **))(**((_QWORD **)a1 + 3)
                                                                                            + 40LL))(
                             *((_QWORD *)a1 + 3),
                             &v22) != -1
             || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 3) + 48LL))(*((_QWORD *)a1 + 3)) )
      {
        *a6 = 1;
      }
      else
      {
        v16 = *((_QWORD *)a1 + 6);
        v17 = *((_QWORD *)a1 + 7);
        while ( v16 != v17 )
        {
          if ( *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, struct CSecondaryD2DBitmap **))(**(_QWORD **)(*(_QWORD *)v16 + 8LL)
                                                                                           + 64LL))(
                            *(_QWORD *)(*(_QWORD *)v16 + 8LL),
                            &v22) == __PAIR64__(HighPart, a2.LowPart) )
          {
            v18 = *(struct CSecondaryD2DBitmap **)(*(_QWORD *)v16 + 8LL);
            v22 = v18;
            if ( v18 )
            {
              (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v18 + 8LL))(v18);
              goto LABEL_28;
            }
            break;
          }
          v16 += 8LL;
        }
        v22 = 0LL;
        v19 = CD2DBitmapCache::CreateAndCacheBitmap(a1, a2, &v22);
        v12 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xDCu, 0LL);
          if ( v22 )
            (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v22 + 16LL))(v22);
          goto LABEL_9;
        }
        v18 = v22;
LABEL_28:
        (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)a1 + 3) + 32LL))(*((_QWORD *)a1 + 3), v23);
        v25 = v23[0];
        v26 = v23[1];
        v24 = 0LL;
        updated = CD2DBitmapCache::UpdateCachedBitmap(a1);
        v12 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0xE3u, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
        }
        else
        {
          v21 = (char *)v18 + 72;
          if ( !v18 )
            v21 = 0LL;
          v6 = v21;
        }
      }
    }
  }
  else
  {
    v12 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0xAEu, 0LL);
  }
LABEL_9:
  *a5 = v6;
  return v12;
}
