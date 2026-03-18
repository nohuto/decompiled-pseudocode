/*
 * XREFs of ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012CEA0
 * Callers:
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180013320 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 *     ?GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012C0B0 (-GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801B8630 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x18012D3C0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceTexture(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CComposition *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  int BitmapInternal; // eax
  CComposition *v11; // rcx
  int v12; // edi
  unsigned int v13; // ebx
  struct IBitmapResource *v14; // rbx
  __int64 (__fastcall *v15)(struct IBitmapResource *, __int64 *); // rdi
  int v16; // eax
  unsigned int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  struct IBitmapResource *StockBlackBitmap; // rax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF
  struct IDeviceTexture *v28; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( !*((_QWORD *)this + 4) )
  {
    v13 = -2003292412;
    v18 = 481;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v18, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xB4u, 0LL);
    return v13;
  }
  if ( !*((_BYTE *)this + 40) )
    goto LABEL_3;
  if ( *(_QWORD *)a2 != *(_QWORD *)(*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this - 1) + 64LL))(
                                     (char *)this - 8,
                                     &v27)
    || (v19 = *((_DWORD *)a2 + 2),
        v20 = *(_DWORD *)(*(__int64 (__fastcall **)(CRenderTargetBitmap *, __int64 *))(*(_QWORD *)this + 56LL))(
                           this,
                           &v27),
        v20 != -1)
    && v20 != v19
    && v19 != -3 )
  {
    v13 = -2003304287;
    v18 = 470;
    goto LABEL_19;
  }
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 56LL))((char *)this - 8)
    && !*((_BYTE *)a2 + 20) )
  {
    v13 = -2147024891;
    v18 = 475;
    goto LABEL_19;
  }
LABEL_3:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 160LL))(*((_QWORD *)this + 4))
    && *((_BYTE *)g_pComposition + 6458) )
  {
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v6);
    v23 = *(_QWORD *)StockBlackBitmap;
    v27 = 0LL;
    v24 = (*(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(v23 + 64))(StockBlackBitmap, &v27);
    v13 = v24;
    if ( v24 >= 0 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v27 + 104LL))(
              v27,
              a2,
              a3);
      v13 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0xCAu, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0xC8u, 0LL);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
  }
  else if ( *((_BYTE *)this + 40) )
  {
    v21 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDeviceTexture **))this + 4))(
            *((_QWORD *)this + 4),
            &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f,
            a3);
    v13 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xC0u, 0LL);
  }
  else
  {
    *a3 = 0LL;
    v7 = *((unsigned __int8 *)a2 + 20);
    v8 = *((unsigned int *)a2 + 2);
    v9 = *(_QWORD *)a2;
    LOBYTE(v27) = 0;
    v28 = 0LL;
    BitmapInternal = CD2DBitmapCache::GetBitmapInternal((char *)this - 88, v9, v8, v7, &v28, &v27);
    v12 = BitmapInternal;
    v13 = BitmapInternal;
    if ( BitmapInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BitmapInternal, 0x64u, 0LL);
    }
    else
    {
      if ( !(_BYTE)v27 )
      {
        *a3 = v28;
        return v13;
      }
      v27 = 0LL;
      v14 = CComposition::GetStockBlackBitmap(v11);
      v15 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)v14 + 64LL);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v16 = v15(v14, &v27);
      v12 = v16;
      if ( v16 >= 0 )
      {
        v26 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v27 + 104LL))(
                v27,
                a2,
                a3);
        v12 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x6Eu, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x6Cu, 0LL);
        if ( v27 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
    if ( v28 )
      (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v28 + 16LL))(v28);
    v13 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xBCu, 0LL);
  }
  return v13;
}
