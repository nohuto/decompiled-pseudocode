/*
 * XREFs of ?FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@EEEPEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x140262D60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x14004B4A4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x140096E84 (-FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W.c)
 *     ?AcquireCachedModeInfoFromTargetMode@DMMVIDPNTARGETMODESET@@QEAAJPEBVDMMVIDPNTARGETMODE@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1402679F4 (-AcquireCachedModeInfoFromTargetMode@DMMVIDPNTARGETMODESET@@QEAAJPEBVDMMVIDPNTARGETMODE@@PEAPEBU.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::FindClosestTargetMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMT_DISPLAYMODE *a2,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _D3DKMDT_VIDPN_TARGET_MODE *a6)
{
  struct _D3DKMDT_VIDPN_TARGET_MODE *v6; // rsi
  DMMVIDPNTARGETMODESET *v7; // rax
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r9
  struct _D3DDDI_RATIONAL *v10; // r10
  DMMVIDPNTARGETMODESET *v11; // rbx
  __int64 result; // rax
  const struct DMMVIDPNTARGETMODE *ClosestTargetMode; // rax
  int v14; // edi
  struct _D3DKMDT_VIDPN_TARGET_MODE *v15; // rbx

  v6 = a6;
  if ( a6 && this )
  {
    *(_QWORD *)&a6->Id = 0LL;
    v7 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)a2);
    v11 = v7;
    if ( !v7 )
    {
      WdLogSingleEntry1(2LL);
      result = 3223192329LL;
      WdLogGlobalForLineNumber = 1832;
      return result;
    }
    ClosestTargetMode = DMMVIDPNTARGETMODESET::FindClosestTargetMode(
                          v7,
                          v10->Numerator,
                          v10->Denominator,
                          v10[2],
                          (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)v10[3].Numerator,
                          v8,
                          v9,
                          a5);
    if ( !ClosestTargetMode )
      return 0LL;
    a6 = 0LL;
    v14 = DMMVIDPNTARGETMODESET::AcquireCachedModeInfoFromTargetMode(
            v11,
            ClosestTargetMode,
            (const struct _D3DKMDT_VIDPN_TARGET_MODE **)&a6);
    if ( v14 == -1071774902 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1863;
      if ( a6 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1866;
      }
      return 1075708747LL;
    }
    else
    {
      if ( v14 >= 0 )
      {
        v15 = a6;
        if ( !a6 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1880;
        }
        *(_QWORD *)&v6->Id = v15;
        return 0LL;
      }
      WdLogSingleEntry1(7LL);
      result = (unsigned int)v14;
      WdLogGlobalForLineNumber = 1874;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1815;
  }
  return result;
}
