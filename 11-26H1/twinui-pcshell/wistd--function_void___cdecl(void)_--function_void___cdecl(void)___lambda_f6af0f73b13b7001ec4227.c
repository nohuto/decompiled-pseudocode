/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_f6af0f73b13b7001ec4227e21c1beaab__void_ @ 0x180362EC8
 * Callers:
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x18010B618 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     wistd::__function::__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl(void)_::__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl(void)_ @ 0x180363A54 (wistd--__function--__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl(void)_--__func_.c)
 */

__int64 __fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_f6af0f73b13b7001ec4227e21c1beaab__void_(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r9

  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 112) = wistd::__function::__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl_void__::__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl_void__(
                            a1 + 8,
                            a2,
                            a3,
                            a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v4 + 8));
  return a1;
}
