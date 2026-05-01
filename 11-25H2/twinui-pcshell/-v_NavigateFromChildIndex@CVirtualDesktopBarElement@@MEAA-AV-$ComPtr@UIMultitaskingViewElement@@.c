/*
 * XREFs of ?v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804BCDE0
 * Callers:
 *     <none>
 * Callees:
 *     Mirror_IsThreadRTL @ 0x1800A00B0 (Mirror_IsThreadRTL.c)
 *     ?v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804B2390 (-v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA-AV-$ComPtr@UIMultitaskingViewElemen.c)
 */

__int64 *__fastcall CVirtualDesktopBarElement::v_NavigateFromChildIndex(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5)
{
  int v5; // ebx
  int v6; // edi
  bool v10; // zf

  v5 = 0;
  v6 = a4;
  if ( (unsigned int)(a4 - 3) <= 1 )
  {
    if ( (unsigned int)Mirror_IsThreadRTL() )
      v10 = v6 == 3;
    else
      v10 = v6 == 4;
    LOBYTE(v5) = !v10;
    v6 = v5 + 5;
  }
  CMultitaskingViewElementBase::v_NavigateFromChildIndex(a1, a2, a3, v6, a5);
  return a2;
}
