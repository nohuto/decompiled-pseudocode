/*
 * XREFs of ?get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804C06C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A7230 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z @ 0x1804C0238 (-_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::get_ContainingGrid(
        AccessibleElementBase *this,
        struct IRawElementProviderSimple **a2)
{
  AccessibleElementBase *v3; // rbx
  int ParentGrid; // ebx
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  struct ISwitchItemGrid *v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 80);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  ParentGrid = AccessibleElementBase::_GetParentGrid(v3, &v10);
  if ( ParentGrid >= 0 )
  {
    v9 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v10,
           &v9);
    ParentGrid = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IRawElementProviderSimple **))(*(_QWORD *)v9 + 376LL))(
             v9,
             &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
             a2);
      ParentGrid = v5;
      if ( v5 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
        goto LABEL_8;
      }
      v6 = 669LL;
    }
    else
    {
      v6 = 668LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  return (unsigned int)ParentGrid;
}
