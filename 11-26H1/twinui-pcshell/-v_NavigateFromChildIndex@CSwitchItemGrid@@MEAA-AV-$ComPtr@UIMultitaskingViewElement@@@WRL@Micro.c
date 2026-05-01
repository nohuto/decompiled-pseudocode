/*
 * XREFs of ?v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804C81F0
 * Callers:
 *     <none>
 * Callees:
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     ?v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804C4010 (-v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA-AV-$ComPtr@UIMultitaskingViewElemen.c)
 *     ?_VerticalNavigateFromIndex@CSwitchItemGrid@@AEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KI@Z @ 0x1804C7CB0 (-_VerticalNavigateFromIndex@CSwitchItemGrid@@AEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall CSwitchItemGrid::v_NavigateFromChildIndex(
        __m128i *a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5)
{
  int IsThreadRTL; // eax
  int v10; // r9d
  bool v11; // zf

  if ( (unsigned int)(a4 - 3) <= 1 )
  {
    IsThreadRTL = Mirror_IsThreadRTL();
    v10 = 0;
    if ( IsThreadRTL )
      v11 = a4 == 3;
    else
      v11 = a4 == 4;
    LOBYTE(v10) = !v11;
    (*(void (__fastcall **)(__m128i *, __int64 *, unsigned __int64, _QWORD, _DWORD))(a1->m128i_i64[0] + 536))(
      a1,
      a2,
      a3,
      (unsigned int)(v10 + 5),
      0);
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    CSwitchItemGrid::_VerticalNavigateFromIndex(a1, a2, a3, a4);
  }
  else
  {
    CMultitaskingViewElementBase::v_NavigateFromChildIndex((__int64)a1, a2, a3, a4, a5);
  }
  return a2;
}
