/*
 * XREFs of ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1804DB54C
 * Callers:
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x1804DB388 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 *     ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DBE20 (-StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?MapElementRectToAncestor@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U23@@Z @ 0x1804CCC04 (-MapElementRectToAncestor@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U2.c)
 *     ??$As@UIMultitaskingViewDragSource@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDragSource@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804DA4DC (--$As@UIMultitaskingViewDragSource@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ElementDragData::GetDragSourceLocation(ElementDragData *this, __m128i *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v8; // [rsp+30h] [rbp-58h] BYREF
  __m128i v9; // [rsp+40h] [rbp-48h] BYREF
  __m128i v10; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *(_QWORD *)v7 = 0LL;
  v4 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewDragSource>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4,
         (__int64 *)v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)v7 + 32LL))(*(_QWORD *)v7, &v10);
    v8 = v10;
    *a2 = *ElementHelpers::MapElementRectToAncestor(&v9, *((_QWORD *)this + 4), *((struct IUnknown **)this + 5), &v8);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D1,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v7);
  return v5;
}
