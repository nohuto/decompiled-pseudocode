/*
 * XREFs of ?Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x140049D3C
 * Callers:
 *     ?AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@W4_DXGK_VIDPN_INTERFACE_VERSION@@@Z @ 0x14037A1DC (-AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QE.c)
 * Callees:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140049E14 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODE::Initialize(
        DMMVIDPNTARGETMODE *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a3,
        struct _D3DDDI_RATIONAL *a4)
{
  int v8; // eax
  unsigned int v9; // ebp
  D3DDDI_RATIONAL *p_VSyncFreq; // rcx
  __int64 result; // rax

  v8 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, v8);
    result = v9;
    WdLogGlobalForLineNumber = 82;
  }
  else
  {
    *((union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)this + 32) = a3;
    p_VSyncFreq = a4;
    if ( !a4 )
      p_VSyncFreq = &a2->VSyncFreq;
    *((_BYTE *)this + 140) = a4 != 0LL;
    *((D3DDDI_RATIONAL *)this + 18) = *p_VSyncFreq;
    *((_QWORD *)this + 19) = a2->VSyncFreq;
    result = 0LL;
    *((_DWORD *)this + 40) = 1;
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)&a2->VideoStandard;
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)&a2->ActiveSize.cy;
    *(_OWORD *)((char *)this + 104) = *(_OWORD *)&a2->HSyncFreq.Denominator;
    *((_QWORD *)this + 15) = *(_QWORD *)&a2->AdditionalSignalInfo;
  }
  return result;
}
