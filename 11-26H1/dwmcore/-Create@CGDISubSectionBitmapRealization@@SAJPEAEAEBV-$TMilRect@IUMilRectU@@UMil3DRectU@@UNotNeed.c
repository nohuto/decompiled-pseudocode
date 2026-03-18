/*
 * XREFs of ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802AAE34
 * Callers:
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x18020D8C8 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F586C (--1-$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??0CGDISubSectionBitmapRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x1802AAC64 (--0CGDISubSectionBitmapRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AE.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802AAFD0 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 */

__int64 __fastcall CGDISubSectionBitmapRealization::Create(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        unsigned __int64 *a7)
{
  unsigned __int64 *v7; // rsi
  int v12; // eax
  void *v13; // rax
  unsigned __int64 *v14; // rax
  CGDISubSectionBitmapRealization *v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+50h] [rbp-B8h]
  int v21; // [rsp+54h] [rbp-B4h]
  int v22; // [rsp+58h] [rbp-B0h]
  int v23; // [rsp+5Ch] [rbp-ACh]
  _QWORD v24[5]; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v25[18]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-38h]
  __m128i si128; // [rsp+D8h] [rbp-30h]

  v7 = a7;
  *a7 = 0LL;
  memset_0(v25, 0, 0x90uLL);
  v25[0] = a6;
  v19 = 0LL;
  v20 = *(_DWORD *)(a3 + 8) - *(_DWORD *)a3;
  v12 = *(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 4);
  memset(v24, 0, sizeof(v24));
  v21 = v12;
  v25[17] = 1;
  LODWORD(v24[0]) = 1;
  v23 = a5;
  v25[12] = 0;
  v26 = 1065353216LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v22 = a4;
  v13 = MIDL_user_allocate(0x1C0uLL);
  if ( !v13 )
  {
    a7 = 0LL;
    goto LABEL_7;
  }
  v14 = (unsigned __int64 *)CGDISubSectionBitmapRealization::CGDISubSectionBitmapRealization(
                              (__int64)v13,
                              (const struct CSM_BUFFER_ATTRIBUTES *)v25,
                              (const struct CSM_REALIZATION_INFO *)v24,
                              (const struct CSM_SYSMEM_SECTION_INFO *)&v19,
                              a1,
                              a2,
                              (_OWORD *)a3);
  a7 = v14;
  v15 = (CGDISubSectionBitmapRealization *)v14;
  if ( !v14 )
  {
LABEL_7:
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x36u, 0LL);
    goto LABEL_8;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v14 + 1));
  v16 = CGDISubSectionBitmapRealization::EnsureBitmapCacheSource(v15);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x38u, 0LL);
  }
  else
  {
    a7 = 0LL;
    *v7 = ((unsigned __int64)v15 + 392) & -(__int64)(v15 != 0LL);
  }
LABEL_8:
  wil::com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>::~com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>((volatile signed __int32 **)&a7);
  return v17;
}
