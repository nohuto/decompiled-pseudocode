/*
 * XREFs of ?_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x1804BBBD0
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804BC260 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?GetPointerButtonForMessage@ElementHelpers@@YA?AW4PointerButton@@I@Z @ 0x1804CCA38 (-GetPointerButtonForMessage@ElementHelpers@@YA-AW4PointerButton@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CMultitaskingViewFrame::_OnMouseButtonDown(
        HWND *this,
        unsigned int a2,
        const struct Geometry::CPoint *a3)
{
  unsigned int PointerButtonForMessage; // eax
  HWND v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  SetCapture(this[6]);
  PointerButtonForMessage = ElementHelpers::GetPointerButtonForMessage(a2);
  v7 = this[315];
  if ( !v7 || !PointerButtonForMessage )
    return 0;
  v9[0] = *(_QWORD *)a3;
  v9[1] = 0LL;
  v10 = 4;
  return (*(__int64 (__fastcall **)(HWND, _QWORD, _QWORD *))(*(_QWORD *)v7 + 192LL))(v7, PointerButtonForMessage, v9);
}
