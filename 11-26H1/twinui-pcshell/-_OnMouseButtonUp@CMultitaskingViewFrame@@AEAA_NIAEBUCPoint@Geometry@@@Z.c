/*
 * XREFs of ?_OnMouseButtonUp@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x1804BBC5C
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804BC260 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?GetPointerButtonForMessage@ElementHelpers@@YA?AW4PointerButton@@I@Z @ 0x1804CCA38 (-GetPointerButtonForMessage@ElementHelpers@@YA-AW4PointerButton@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMultitaskingViewFrame::_OnMouseButtonUp(
        CMultitaskingViewFrame *this,
        unsigned int a2,
        const struct Geometry::CPoint *a3)
{
  char v4; // di
  unsigned int PointerButtonForMessage; // eax
  _QWORD *v6; // r8
  __int64 v7; // rcx
  HWND v8; // rbx
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]

  v4 = 0;
  PointerButtonForMessage = ElementHelpers::GetPointerButtonForMessage(a2);
  v7 = *((_QWORD *)this + 315);
  if ( v7 && PointerButtonForMessage )
  {
    v10[0] = *v6;
    v10[1] = 0LL;
    v11 = 4;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v7 + 208LL))(
           v7,
           PointerButtonForMessage,
           v10);
  }
  v8 = (HWND)*((_QWORD *)this + 6);
  if ( v8 == GetCapture() )
    ReleaseCapture();
  return v4;
}
