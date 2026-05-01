/*
 * XREFs of ?v_AddChildToArray@CVirtualDesktopContainerElement@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804CC320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@VElementCompare@ElementHelpers@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_K@Z @ 0x1804AF8A0 (--$_InsertAt@$$QEAV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPt.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopContainerElement::v_AddChildToArray(
        CVirtualDesktopContainerElement *this,
        struct IMultitaskingViewElement *a2)
{
  _QWORD *v2; // rdi
  unsigned __int64 v3; // rbx
  struct IMultitaskingViewElement *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 16);
  v3 = *((_QWORD *)this + 3);
  v5 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
  LODWORD(v3) = CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>,ElementHelpers::ElementCompare,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>>::_InsertAt<Microsoft::WRL::ComPtr<IMultitaskingViewElement> &&>(
                  v2,
                  &v5,
                  v3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
  return (unsigned int)v3;
}
