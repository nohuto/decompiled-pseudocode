/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180165E5C
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180204898 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4FailureFlags@2@PEAUFailureInfo@2@@Z @ 0x180164C68 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4F.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18020FB1C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 */

void __fastcall wil::details::ReportFailure_Return<2>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7,
        _WORD *a8,
        int a9,
        int a10)
{
  const struct wil::FailureInfo *v14; // rdx
  __int64 v15; // [rsp+48h] [rbp-1520h]
  __int64 v16; // [rsp+58h] [rbp-1510h]
  __int64 v17; // [rsp+68h] [rbp-1500h]
  _BYTE v18[160]; // [rsp+80h] [rbp-14E8h] BYREF
  _BYTE v19[1024]; // [rsp+120h] [rbp-1448h] BYREF
  _BYTE v20[4096]; // [rsp+520h] [rbp-1048h] BYREF

  memset_0(v18, 0, 0x98uLL);
  wil::details::LogFailure(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    2,
    a7,
    a8,
    v15,
    (wil *)v20,
    v16,
    v19,
    v17,
    a10,
    (unsigned __int64)v18);
  if ( (v18[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v18, v14);
}
