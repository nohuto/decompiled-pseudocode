/*
 * XREFs of ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180165D9C
 * Callers:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180201760 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4FailureFlags@2@PEAUFailureInfo@2@@Z @ 0x180164C68 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4F.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18020FB1C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NoReturn<3>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int *a7,
        _WORD *a8)
{
  const struct wil::FailureInfo *v11; // rdx
  __int64 v12; // [rsp+48h] [rbp-14F0h]
  __int64 v13; // [rsp+58h] [rbp-14E0h]
  __int64 v14; // [rsp+68h] [rbp-14D0h]
  _BYTE v15[160]; // [rsp+80h] [rbp-14B8h] BYREF
  _BYTE v16[1024]; // [rsp+120h] [rbp-1418h] BYREF
  _BYTE v17[4120]; // [rsp+520h] [rbp-1018h] BYREF

  memset_0(v15, 0, 0x98uLL);
  wil::details::LogFailure(
    a1,
    a2,
    a3,
    0LL,
    0LL,
    a6,
    3,
    a7,
    a8,
    v12,
    (wil *)v17,
    v13,
    v16,
    v14,
    0,
    (unsigned __int64)v15);
  wil::details::WilFailFast((wil::details *)v15, v11);
}
