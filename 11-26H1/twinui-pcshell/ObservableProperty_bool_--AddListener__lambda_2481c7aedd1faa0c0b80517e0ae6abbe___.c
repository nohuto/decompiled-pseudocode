/*
 * XREFs of ObservableProperty_bool_::AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___ @ 0x1804CDA4C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804CE168 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe__&_void___&_ @ 0x1804CDBF0 (Microsoft--WRL--Details--Make_ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abb.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ObservableProperty_bool_::AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 *ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void; // rax
  void *v6; // r8
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int *v11; // rax
  __int64 v12; // rcx
  int v14[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v16 = a3;
  v17 = 0LL;
  v4 = (_QWORD *)(a1 + 8);
  ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void = (__int64 *)Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void_____(&v16, a2, &v17);
  v7 = *ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void;
  *(_QWORD *)v14 = *ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void;
  *ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void = 0LL;
  v8 = 0;
  v9 = v4[1];
  if ( v9 == v4[3] )
    v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
           (__int64)v4,
           v9 + 1,
           v6);
  v10 = v7;
  if ( v8 >= 0 )
  {
    ++v4[1];
    v11 = (int *)(*v4 - 8LL + 8LL * v4[1]);
    v10 = v7;
    if ( v11 )
    {
      *(_QWORD *)v11 = 0LL;
      if ( v11 != v14 )
      {
        *(_QWORD *)v11 = v7;
        v10 = 0LL;
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
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
