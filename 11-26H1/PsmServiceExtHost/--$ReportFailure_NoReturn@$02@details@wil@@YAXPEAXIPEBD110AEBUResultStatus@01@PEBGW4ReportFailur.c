/*
 * XREFs of ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18007118C
 * Callers:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180070FEC (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4FailureFlags@2@PEAUFailureInfo@2@@Z @ 0x18006A3DC (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4F.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180073B4C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     _alloca_probe @ 0x1800A29D0 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NoReturn<3>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  const struct wil::FailureInfo *v10; // rdx
  __int64 v11; // [rsp+48h] [rbp-14F0h]
  __int64 v12; // [rsp+58h] [rbp-14E0h]
  __int64 v13; // [rsp+68h] [rbp-14D0h]
  _BYTE v14[160]; // [rsp+80h] [rbp-14B8h] BYREF
  _BYTE v15[1024]; // [rsp+120h] [rbp-1418h] BYREF
  _BYTE v16[4120]; // [rsp+520h] [rbp-1018h] BYREF

  memset_0(v14, 0, 0x98uLL);
  wil::details::LogFailure(
    a1,
    a2,
    a3,
    0LL,
    0LL,
    a6,
    3,
    a7,
    0LL,
    v11,
    (wil *)v16,
    v12,
    v15,
    v13,
    0,
    (unsigned __int64)v14);
  wil::details::WilFailFast((wil::details *)v14, v10);
}
