/*
 * XREFs of ??$RemoveRefCountWrappers@AEBV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@@YA?A_PAEBV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@Z @ 0x1801ABD50
 * Callers:
 *     ??R_lambda_1a746a469b397f96443d5d0dd1083225_@@QEBA@XZ @ 0x180287250 (--R_lambda_1a746a469b397f96443d5d0dd1083225_@@QEBA@XZ.c)
 *     ??R_lambda_fb189054ea513898645e6db750f42f18_@@QEBA@XZ @ 0x180287840 (--R_lambda_fb189054ea513898645e6db750f42f18_@@QEBA@XZ.c)
 * Callees:
 *     ??$TupleMap@AEBV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V_lambda_a539064e389dd930fffe5735d1de45e6_@@@@YA?A_PAEBV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@AEBV_lambda_a539064e389dd930fffe5735d1de45e6_@@@Z @ 0x1801ABD78 (--$TupleMap@AEBV-$tuple@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V_lambda_a539064e389d.c)
 */

__int64 __fastcall RemoveRefCountWrappers<std::tuple<Microsoft::WRL::ComPtr<IApplicationView>> const &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r11
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  TupleMap<std::tuple<Microsoft::WRL::ComPtr<IApplicationView>> const &,_lambda_a539064e389dd930fffe5735d1de45e6_>(
    a1,
    a2,
    &v4);
  return v2;
}
