/*
 * XREFs of ?_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z @ 0x1805249E0
 * Callers:
 *     ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x180524F14 (-_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z @ 0x18052499C (-_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedbackItem::_RegisterAutoGutter(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, _QWORD, GUID *, __int64 **); // rbx
  int v8; // edx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 *v11; // rbx
  __int64 *v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h]

  v3 = *(_QWORD *)(a1 + 48);
  v13 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, GUID *, __int64 **))(*(_QWORD *)v3 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  v8 = a3[3] - a3[1];
  LODWORD(v14) = a3[2] - *a3;
  HIDWORD(v14) = v8;
  v9 = v7(v3, *(_QWORD *)(a1 + 56), v14, 0LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v13);
  if ( v9 >= 0 )
  {
    CDropFeedbackItem::_PaintAutoGutter(a1, v13, a2);
    (*(void (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD))(*v13 + 24))(v13, a3, 0LL, 0LL);
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(*v13 + 32))(v13, v10, 0LL, 0LL);
    v11 = (__int64 *)(a1 + 240);
    if ( a2 )
      v11 = (__int64 *)(a1 + 248);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    *v11 = (__int64)v13;
    v9 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  return (unsigned int)v9;
}
