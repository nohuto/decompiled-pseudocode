/*
 * XREFs of ?GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x140112B24
 * Callers:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N11PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x140112470 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401CE890 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetTargetVirtualization(
        struct _LUID a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a7,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a8)
{
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 DxgkWin32kInterface; // rax
  int v15; // eax
  struct _LUID v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = a2;
  v17 = a1;
  v10 = ((__int64 (__fastcall *)(_QWORD))DxDdGetDxgkWin32kInterface)(a1);
  v11 = (*(__int64 (__fastcall **)(struct _LUID *, _QWORD, struct _LUID *, unsigned int *))(v10 + 552))(
          &v17,
          v18,
          &v17,
          &v18);
  v13 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL, v11);
    WdLogGlobalForLineNumber = 13008;
  }
  else
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v12);
    v15 = (*(__int64 (__fastcall **)(struct _LUID, _QWORD, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, enum _D3DKMT_DISPLAY_TARGET_USAGE *))(DxgkWin32kInterface + 568))(
            v17,
            v18,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
    v13 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry1(2LL, v15);
      WdLogGlobalForLineNumber = 13023;
    }
  }
  return v13;
}
