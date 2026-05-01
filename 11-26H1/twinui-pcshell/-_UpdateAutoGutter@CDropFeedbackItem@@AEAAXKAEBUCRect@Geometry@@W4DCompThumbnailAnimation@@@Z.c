/*
 * XREFs of ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x180547F50
 * Callers:
 *     ?_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z @ 0x1805480B0 (-_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804B9638 (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z @ 0x1805479CC (-_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z.c)
 *     ?_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z @ 0x180547A20 (-_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedbackItem::_UpdateAutoGutter(__int64 a1, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 *v8; // rbx
  unsigned __int8 v9; // r14
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  char v14; // r14
  char v15; // r12
  __int64 v17[2]; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v17[0] = 0LL;
  if ( a2 == 0x2000 )
  {
    v8 = (__int64 *)(a1 + 240);
    v9 = 1;
    if ( *(_QWORD *)(a1 + 240) )
      goto LABEL_7;
    v10 = 0;
  }
  else
  {
    v8 = (__int64 *)(a1 + 248);
    v9 = 0;
    if ( *(_QWORD *)(a1 + 248) )
      goto LABEL_7;
    v10 = 1;
  }
  CDropFeedbackItem::_RegisterAutoGutter(a1, v10, a3);
LABEL_7:
  Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(v17, v8);
  v11 = v17[0];
  if ( v17[0] )
  {
    v12 = *(unsigned int *)(a1 + 160);
    v13 = ((v9 ^ 1) + 1) << 6;
    v14 = (v13 & (unsigned int)v12) != 0;
    v15 = (v13 & *(_DWORD *)(a1 + 72)) != 0;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v17[0] + 32LL))(v17[0], v12, a4, 0LL);
    if ( v14 != v15 )
      CDropFeedbackItem::_PaintAutoGutter(a1, v11, 0);
    if ( *(_BYTE *)(a1 + 157) )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x80000) == 0 )
        v4 = a4;
      (*(void (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, a3, v4, 0LL);
    }
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v17);
}
