/*
 * XREFs of _lambda_96edf2fb798d729d000c76ff579fff9f_::_lambda_96edf2fb798d729d000c76ff579fff9f_ @ 0x180546664
 * Callers:
 *     ?_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z @ 0x1805479CC (-_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_96edf2fb798d729d000c76ff579fff9f_::_lambda_96edf2fb798d729d000c76ff579fff9f_(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4)
{
  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 16) = *a4;
  return a1;
}
