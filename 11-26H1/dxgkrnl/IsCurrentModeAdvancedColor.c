/*
 * XREFs of IsCurrentModeAdvancedColor @ 0x1402AC768
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402AC92C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1402ACB84 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 */

__int64 __fastcall IsCurrentModeAdvancedColor(
        int *a1,
        unsigned int a2,
        _DWORD *a3,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a4,
        char *a5,
        bool *a6)
{
  char *v6; // r15
  char v7; // si
  bool *v8; // r12
  __int64 v10; // r14
  int SourceConnectedToTargetInClientVidPn; // eax
  __int64 v14; // r13
  int CurrentWireFormatAndColorSpace; // eax
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v16; // eax
  __int64 v18; // rsi
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v19[4]; // [rsp+50h] [rbp-38h] BYREF

  v6 = a5;
  v7 = 0;
  v8 = a6;
  v10 = a2;
  LODWORD(a6) = 0;
  *a5 = 0;
  *v8 = 0;
  v19[0] = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
  LODWORD(a5) = 0;
  SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, (unsigned int *)&a5);
  v14 = SourceConnectedToTargetInClientVidPn;
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
    WdLogSingleEntry4(2LL, a1[104], (unsigned int)a1[103], v10, SourceConnectedToTargetInClientVidPn);
    WdLogGlobalForLineNumber = 4912;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DmmGetSourceConnectedToTargetInClientVidPn() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
      a1[104],
      (unsigned int)a1[103],
      v10,
      v14,
      0LL);
    return (unsigned int)v14;
  }
  CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(
                                     a1,
                                     (unsigned int)a5,
                                     v10,
                                     (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)&a6,
                                     v19);
  v14 = CurrentWireFormatAndColorSpace;
  if ( CurrentWireFormatAndColorSpace < 0 )
  {
    v18 = (unsigned int)a5;
    WdLogSingleEntry5(2LL, a1[104], (unsigned int)a1[103], (unsigned int)a5, v10, CurrentWireFormatAndColorSpace);
    WdLogGlobalForLineNumber = 4925;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DmmGetCurrentWireFormatAndColorSpace() failed on adapter:0x%I64x%08I64x source:0x%I64x target:0x%I64x (St"
                "atus = 0x%I64x).",
      a1[104],
      (unsigned int)a1[103],
      v18,
      v10,
      v14);
    return (unsigned int)v14;
  }
  if ( a3 )
    *a3 = (_DWORD)a6;
  v16 = v19[0];
  if ( a4 )
    *a4 = v19[0];
  if ( v16 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020 || v16 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_HDR10PLUS )
    v7 = 1;
  *v6 = v7;
  *v8 = v16 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709_WCG;
  return 0LL;
}
