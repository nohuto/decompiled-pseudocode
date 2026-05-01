/*
 * XREFs of ObservableProperty_bool_::AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___ @ 0x1804BBBEC
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804BC2E8 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C860 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe__&_void___&_ @ 0x1804BBD88 (Microsoft--WRL--Details--Make_ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abb.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ObservableProperty_bool_::AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  _QWORD *v4; // rsi
  __int64 *ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void; // rax
  void *v6; // r8
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  int *v12; // r8
  __int64 v13; // rcx
  int v15[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v17 = a3;
  v18 = 0LL;
  v4 = (_QWORD *)(a1 + 8);
  ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void = (__int64 *)Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void_____(&v17, a2, &v18);
  v7 = *ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void;
  *(_QWORD *)v15 = *ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void;
  *ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void = 0LL;
  v8 = 0;
  v9 = v4[1];
  if ( v9 != v4[3]
    || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)v4,
               v9 + 1,
               v6),
        v10 = v7,
        v8 >= 0) )
  {
    v11 = v4[1];
    v4[1] = v11 + 1;
    v12 = (int *)(*v4 + 8 * v11);
    v10 = v7;
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      if ( v12 != v15 )
      {
        *(_QWORD *)v12 = v7;
        v7 = 0LL;
        v10 = 0LL;
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ObservableProperty.h",
      (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return (unsigned int)v8;
}
