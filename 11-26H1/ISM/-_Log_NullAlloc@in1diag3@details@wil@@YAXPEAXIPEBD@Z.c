/*
 * XREFs of ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800CE090
 * Callers:
 *     ?AllocateInputBuffer@GameControllerRawInputProvider@@UEAAPEAUGameInputRoutedInputBuffer@@II@Z @ 0x18005E610 (-AllocateInputBuffer@GameControllerRawInputProvider@@UEAAPEAUGameInputRoutedInputBuffer@@II@Z.c)
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180083020 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 *     ?OnDeviceConnected@GameControllerRawInputProvider@@UEAA_NI_N00@Z @ 0x1800CD940 (-OnDeviceConnected@GameControllerRawInputProvider@@UEAA_NI_N00@Z.c)
 *     ?OnIrButton@GameControllerRawInputProvider@@UEAAXI_K0W4GipIrCode@@W4GipIrStatus@@@Z @ 0x1800CDB90 (-OnIrButton@GameControllerRawInputProvider@@UEAAXI_K0W4GipIrCode@@W4GipIrStatus@@@Z.c)
 *     ?OnVirtualKey@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x1800CDDF0 (-OnVirtualKey@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x18008F858 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_NullAlloc(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = -2147024882;
  wil::details::ReportFailure_Hr<2>(
    (__int64)this,
    a2,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
    0LL,
    0LL,
    retaddr,
    v4);
}
