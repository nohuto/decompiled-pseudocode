/*
 * XREFs of ??$_InsertAt@$$QEAV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@VElementCompare@ElementHelpers@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_K@Z @ 0x1804C14A4
 * Callers:
 *     ?v_AddChildToArray@CMultitaskingViewElementBase@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804C3F70 (-v_AddChildToArray@CMultitaskingViewElementBase@@MEAAJPEAUIMultitaskingViewElement@@@Z.c)
 *     ?v_AddChildToArray@CSwitchItemGrid@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804C7E90 (-v_AddChildToArray@CSwitchItemGrid@@MEAAJPEAUIMultitaskingViewElement@@@Z.c)
 *     ?v_AddChildToArray@CVirtualDesktopContainerElement@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804DE4B0 (-v_AddChildToArray@CVirtualDesktopContainerElement@@MEAAJPEAUIMultitaskingViewElement@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>,ElementHelpers::ElementCompare,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>>::_InsertAt<Microsoft::WRL::ComPtr<IMultitaskingViewElement> &&>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v3; // r14
  int v4; // esi
  unsigned __int64 v5; // rax
  unsigned __int64 *v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rcx

  v3 = a1 + 1;
  v4 = 0;
  v5 = a1[1];
  v9 = a1 + 1;
  if ( a3 >= v5 )
    v5 = a3;
  v10 = v5 + 1;
  if ( v5 + 1 > a1[3] )
  {
    v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
           (__int64)a1,
           v5 + 1,
           (void *)a3);
    if ( v4 < 0 )
      return (unsigned int)v4;
    v9 = a1 + 1;
  }
  if ( a3 < *v3 )
  {
    memmove_0((void *)(*a1 + 8 * a3 + 8), (const void *)(*a1 + 8 * a3), 8 * (*v3 - a3));
    v3 = v9;
  }
  v11 = *a1;
  *v3 = v10;
  v12 = (_QWORD *)(v11 + 8 * a3);
  if ( v12 )
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(v12, a2);
  return (unsigned int)v4;
}
