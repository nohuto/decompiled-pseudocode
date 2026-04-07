/*
 * XREFs of ?AdjustSnapUIArrangementStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@AEBU6785@@Z @ 0x1800D838C
 * Callers:
 *     ?AdjustSnapUIArrangementStartRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@PEAU4563@@Z @ 0x1800D8340 (-AdjustSnapUIArrangementStartRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@.c)
 * Callees:
 *     ?AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA?AUD2D_POINTANDSIZE_F@@AEBU2@@Z @ 0x1800CC088 (-AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA-AUD2D_POINTANDSIZE_F@@AEBU2@@Z.c)
 */

_OWORD *__fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AdjustSnapUIArrangementStartRect(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3)
{
  CTopLevelWindow3D *v3; // rcx
  _OWORD *result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(CTopLevelWindow3D **)(a1 + 32);
  v6 = *a3;
  CTopLevelWindow3D::AdjustSnapUIArrangementStartRect(v3, (__int64)&v7, &v6);
  result = a2;
  *a2 = v7;
  return result;
}
