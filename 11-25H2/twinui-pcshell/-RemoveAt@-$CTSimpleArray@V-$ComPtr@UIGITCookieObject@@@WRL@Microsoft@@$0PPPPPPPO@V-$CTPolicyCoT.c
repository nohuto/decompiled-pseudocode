/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180218968
 * Callers:
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x18008BDDC (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v5; // r8

  if ( a2 >= a1[1] )
    return 2147650721LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*a1 + 8 * a2));
  v5 = a1[1];
  if ( a2 != v5 - 1 )
    memmove_0((void *)(*a1 + 8 * a2), (const void *)(*a1 + 8 * a2 + 8), 8 * (v5 - a2) - 8);
  --a1[1];
  return 0LL;
}
