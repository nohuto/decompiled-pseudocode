/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180014E9C
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180014D70 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4FailureFlags@2@PEAUFailureInfo@2@@Z @ 0x180011D80 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4F.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18001221C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x18001A5BE (memset_0.c)
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18001A6B0 (_alloca_probe.c)
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
        __int64 a9,
        int a10)
{
  const struct wil::FailureInfo *v14; // rdx
  __int64 v15; // [rsp+48h] [rbp-1530h]
  _BYTE v16[160]; // [rsp+80h] [rbp-14F8h] BYREF
  _BYTE v17[1024]; // [rsp+120h] [rbp-1458h] BYREF
  _BYTE v18[4096]; // [rsp+520h] [rbp-1058h] BYREF

  memset_0(v16, 0, 0x98uLL);
  LOBYTE(v15) = 0;
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
    (wil *)v18,
    2048LL,
    v17,
    1024LL,
    a10,
    (unsigned __int64)v16);
  if ( (v16[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v16, v14);
}
