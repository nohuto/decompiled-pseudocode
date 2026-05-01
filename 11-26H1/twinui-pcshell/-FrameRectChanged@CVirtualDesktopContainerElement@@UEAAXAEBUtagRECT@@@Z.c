/*
 * XREFs of ?FrameRectChanged@CVirtualDesktopContainerElement@@UEAAXAEBUtagRECT@@@Z @ 0x1804DD110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x18022A7D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C39BC (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     ??$As@UIVirtualDesktopItemElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804DC9E8 (--$As@UIVirtualDesktopItemElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CVirtualDesktopContainerElement::FrameRectChanged(
        CVirtualDesktopContainerElement *this,
        const struct tagRECT *a2)
{
  LONG bottom; // ebx
  char *v3; // r14
  __int64 v4; // r8
  int v5; // r9d
  int v6; // r10d
  int v7; // r11d
  _QWORD *v8; // rdi
  __int64 (__fastcall ****v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall ****v10)(_QWORD, GUID *, __int64 *); // rsi
  int v11; // eax
  _DWORD v12[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+28h] BYREF

  v12[0] = a2->left;
  v12[1] = a2->top;
  v12[2] = a2->right;
  bottom = a2->bottom;
  v12[3] = bottom;
  v3 = (char *)this + 32;
  if ( !Geometry::operator==((_DWORD *)this + 8, v12) )
  {
    v8 = (_QWORD *)(v4 - 216);
    *(_DWORD *)(v4 - 216 + 248) = v5;
    *(_DWORD *)(v4 - 216 + 252) = v6;
    *(_DWORD *)(v4 - 216 + 256) = v7;
    *(_DWORD *)(v4 - 216 + 260) = bottom;
    v9 = *(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v4 + 576);
    v10 = &v9[*(_QWORD *)(v4 + 584)];
    while ( v9 != v10 )
    {
      v15 = *v9;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      v14 = 0LL;
      v11 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopItemElement>(&v15, &v14);
      if ( v11 >= 0 )
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 32LL))(v14, v3);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x156,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
          (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
      ++v9;
    }
    CMultitaskingViewElementBase::_LayoutChildren(v8, 0, 0LL);
  }
}
