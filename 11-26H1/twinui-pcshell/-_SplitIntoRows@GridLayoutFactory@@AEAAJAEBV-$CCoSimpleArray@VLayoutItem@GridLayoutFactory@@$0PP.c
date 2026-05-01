/*
 * XREFs of ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1804D6578
 * Callers:
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x1804D5A5C (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801DFD6C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x1804BA7F4 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 *     ??$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAJ$$QEAVLayoutRow@GridLayoutFactory@@PEA_K@Z @ 0x1804D4BB4 (--$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPP.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAXXZ @ 0x1804D5758 (-RemoveAll@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayou.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAXXZ @ 0x1804D57DC (-RemoveAll@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayout.c)
 *     ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x1804D637C (-_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1804D6814 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GridLayoutFactory::_SplitIntoRows(
        GridLayoutFactory *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int *a5)
{
  _QWORD *v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // rbx
  int v10; // edx
  ThumbnailHeight *v11; // rcx
  int v12; // edi
  int v14; // eax
  void *v15; // r8
  unsigned __int64 v16; // r14
  int v17; // esi
  unsigned int *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r12
  unsigned __int64 v21; // r13
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // r15d
  __int64 v26; // rdi
  int v27; // eax
  int v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+28h] [rbp-70h]
  _OWORD v30[2]; // [rsp+30h] [rbp-68h] BYREF
  int v31; // [rsp+50h] [rbp-48h]
  int MaximumRowHeight; // [rsp+54h] [rbp-44h]
  int v33; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v5 = (_QWORD *)a4;
  v6 = a3;
  *a5 = 0;
  CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::RemoveAll(a4);
  for ( i = 0LL; ; ++i )
  {
    v10 = *((_DWORD *)this + 129);
    v11 = (GridLayoutFactory *)((char *)this + 72);
    if ( i >= v6 )
      break;
    memset(v30, 0, sizeof(v30));
    v31 = *((_DWORD *)this + 29)
        + *((_DWORD *)this + 38)
        + *((_DWORD *)this + 39)
        + *((_DWORD *)this + 42)
        + *((_DWORD *)this + 43)
        + ThumbnailHeight::GetForScreenHeight(v11, v10);
    MaximumRowHeight = GridLayoutFactory::_GetMaximumRowHeight(this, v6);
    v33 = *((_DWORD *)this + 12);
    v12 = CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::_Add<GridLayoutFactory::LayoutRow &&>(
            v5,
            (__int64 *)v30);
    CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::RemoveAll((__int64)v30);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BC,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
        (const char *)(unsigned int)v12);
      return (unsigned int)v12;
    }
    v6 = a3;
  }
  v14 = ThumbnailHeight::GetForScreenHeight(v11, v10);
  v28 = (int)GridLayoutFactory::s_GetTotalWidthForHeight(
               a2,
               *((unsigned int *)this + 12),
               (unsigned int)(*((_DWORD *)this + 29)
                            + *((_DWORD *)this + 38)
                            + *((_DWORD *)this + 39)
                            + *((_DWORD *)this + 42)
                            + *((_DWORD *)this + 43)
                            + v14),
               0LL)
      / (int)v6;
  v16 = 0LL;
  v17 = 0;
  v18 = *(unsigned int **)a2;
  v19 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
  v29 = v19;
  v20 = 0LL;
  while ( v18 != (unsigned int *)v19 )
  {
    v21 = v6 - 1;
    if ( v16 < v6 - 1
      && (v17 + (*(int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v18 + 72LL))(*(_QWORD *)v18, v18[2]) / 2 > v28
       || (int)(v17 + (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v18 + 72LL))(*(_QWORD *)v18, v18[2])) > *((_DWORD *)this + 132) - *((_DWORD *)this + 130)) )
    {
      ++v16;
      v20 += 48LL;
      v17 = 0;
    }
    v22 = (_QWORD *)(v20 + *v5);
    v23 = v22[1];
    if ( v23 == v22[3] )
    {
      v24 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
              v20 + *v5,
              v23 + 1,
              v15);
      v25 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1DC,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
          (const char *)(unsigned int)v24);
        return v25;
      }
      v5 = (_QWORD *)a4;
    }
    ++v22[1];
    v26 = 16LL * v22[1] + *v22 - 16LL;
    if ( v26 )
    {
      *(_QWORD *)v26 = *(_QWORD *)v18;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v26);
      *(_DWORD *)(v26 + 8) = v18[2];
    }
    v17 += (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v18 + 72LL))(*(_QWORD *)v18, v18[2]);
    v27 = v17;
    if ( v17 <= *a5 )
      v27 = *a5;
    *a5 = v27;
    if ( v17 + *((_DWORD *)this + 12) >= v28 )
    {
      if ( v16 < v21 )
      {
        ++v16;
        v20 += 48LL;
        v17 = 0;
      }
    }
    else
    {
      v17 += *((_DWORD *)this + 12);
    }
    v18 += 4;
    v6 = a3;
    v19 = v29;
  }
  return 0LL;
}
