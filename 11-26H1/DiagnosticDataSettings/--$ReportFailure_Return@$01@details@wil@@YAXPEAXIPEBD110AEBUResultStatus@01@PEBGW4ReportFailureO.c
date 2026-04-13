/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1800029E4
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180002630 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     __security_check_cookie @ 0x180001460 (__security_check_cookie.c)
 *     memset_0 @ 0x18000203A (memset_0.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4FailureFlags@2@PEAUFailureInfo@2@@Z @ 0x180002FCC (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4F.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180003900 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _alloca_probe @ 0x180005730 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_Return<2>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  __int64 result; // rax
  const struct wil::FailureInfo *v15; // rdx
  char v16; // [rsp+48h] [rbp-1530h]
  _BYTE v17[160]; // [rsp+80h] [rbp-14F8h] BYREF
  _BYTE v18[1024]; // [rsp+120h] [rbp-1458h] BYREF
  _BYTE v19[4096]; // [rsp+520h] [rbp-1058h] BYREF

  memset_0(v17, 0, 0x98uLL);
  v16 = 0;
  result = wil::details::LogFailure(a1, a2, a3, a4, a5, a6, 2, a7, a8, v16, v19, 2048LL, v18, 1024LL, a10, v17);
  if ( (v17[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v17, v15);
  return result;
}
