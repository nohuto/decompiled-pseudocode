/*
 * XREFs of ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1401D16D0
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1401D1E94 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1401D18C0 (-AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DK.c)
 */

__int64 __fastcall AddPathToFirstAvailableTarget(
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v8; // rdx
  __int64 v9; // rbp
  int v11; // eax
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rdi
  __int64 result; // rax
  __int64 v16; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v17; // [rsp+20h] [rbp-48h]
  unsigned __int16 v18; // [rsp+28h] [rbp-40h]
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v19; // [rsp+30h] [rbp-38h]

  v8 = 0xFFFFFFFFLL;
  v9 = a3;
  a5 = -1;
  while ( 1 )
  {
    v11 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, _QWORD, unsigned int *))(a2 + 96))(
            a1,
            v8,
            a6,
            &a5);
    v12 = v11;
    if ( v11 == -1071774925 )
    {
      WdLogSingleEntry3(7LL, (int)a6, a1, v9);
      result = 3223192371LL;
      WdLogGlobalForLineNumber = 2980;
      return result;
    }
    if ( v11 < 0 )
    {
      v16 = (int)a6;
      WdLogSingleEntry4(2LL, (int)a6, a1, v9, v11);
      WdLogGlobalForLineNumber = 2987;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find an available target in the subset %I64d of VidPN targets in topology 0x%I64x to be conne"
                  "cted to source 0x%I64x (status = 0x%I64x).",
        v16,
        (__int64)a1,
        v9,
        v12,
        0LL);
      return (unsigned int)v12;
    }
    v13 = AddPresentPath(a1, (const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)a2, a3, a5, v17, v18, v19);
    v14 = v13;
    if ( v13 != -1071774975 )
      break;
    WdLogSingleEntry3(7LL, v9, a5, a1);
    v8 = a5;
    WdLogGlobalForLineNumber = 3012;
  }
  if ( v13 >= 0 )
    return 0LL;
  WdLogSingleEntry4(2LL, v9, a5, a1, v13);
  WdLogGlobalForLineNumber = 3020;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to add present path (0x%I64x, 0x%I64x) to VidPN topology 0x%I64x (status = 0x%I64x)",
    v9,
    a5,
    (__int64)a1,
    v14,
    0LL);
  return (unsigned int)v14;
}
