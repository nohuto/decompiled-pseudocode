/*
 * XREFs of ?GetFilterForDesktop@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIVirtualDesktop@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x1804ABB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180109D54 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x1804ABA80 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopThumbnailWindowFilter::GetFilterForDesktop(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  int FilterForDesktop; // eax
  unsigned int v7; // ebx
  int v8; // eax
  void *v9; // r8
  __int64 i; // rbx
  __int64 v11; // r14
  __int64 v12; // rdx
  int v13; // eax
  int v14; // esi
  _QWORD *v15; // rdx
  int v17[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF

  FilterForDesktop = VirtualDesktopHelpers::GetFilterForDesktop(a2, *(_QWORD *)(a1 + 24), a3, a4);
  v7 = FilterForDesktop;
  if ( FilterForDesktop >= 0 )
  {
    v19 = 0;
    *(_QWORD *)v17 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, int *, unsigned int *))(**(_QWORD **)(a1 + 32) + 104LL))(
           *(_QWORD *)(a1 + 32),
           v17,
           &v19);
    v7 = v8;
    if ( v8 >= 0 )
    {
      for ( i = 0LL; (unsigned int)i < v19; i = (unsigned int)(i + 1) )
      {
        v11 = *(_QWORD *)v17;
        v12 = a4[1];
        if ( v12 == a4[3] )
        {
          v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)a4,
                  v12 + 1,
                  v9);
          v14 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3A,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
              (const char *)(unsigned int)v13);
            v7 = v14;
            goto LABEL_14;
          }
        }
        v15 = (_QWORD *)(*a4 + 8 * a4[1]++);
        if ( v15 )
          *v15 = *(_QWORD *)(v11 + 8 * i);
      }
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
        (const char *)(unsigned int)v8);
    }
LABEL_14:
    CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
      (const char *)(unsigned int)FilterForDesktop);
  }
  return v7;
}
