/*
 * XREFs of ?_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z @ 0x1805479CC
 * Callers:
 *     ?_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z @ 0x180547A20 (-_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z.c)
 *     ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x180547F50 (-_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z.c)
 * Callees:
 *     _lambda_96edf2fb798d729d000c76ff579fff9f_::_lambda_96edf2fb798d729d000c76ff579fff9f_ @ 0x180546664 (_lambda_96edf2fb798d729d000c76ff579fff9f_--_lambda_96edf2fb798d729d000c76ff579fff9f_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedbackItem::_PaintAutoGutter(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v7 = *(_DWORD *)(a1 + 216);
  v3 = lambda_96edf2fb798d729d000c76ff579fff9f_::_lambda_96edf2fb798d729d000c76ff579fff9f_((__int64)&v6, &v7, a1, &v8);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 88LL))(
           v4,
           LambdaCustomPaintProc__lambda_96edf2fb798d729d000c76ff579fff9f__HDC___,
           v3);
}
