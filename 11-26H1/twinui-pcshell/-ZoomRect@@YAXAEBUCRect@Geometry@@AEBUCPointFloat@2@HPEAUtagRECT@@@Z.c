/*
 * XREFs of ?ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z @ 0x18053F1D8
 * Callers:
 *     ?GetVisualRect@CDropFeedback@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x18053E250 (-GetVisualRect@CDropFeedback@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z.c)
 *     ?GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x180546C10 (-GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z.c)
 *     ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x180548148 (-_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x18053E340 (-MulDiv@CRect@Geometry@@SA-AU12@AEBUtagRECT@@HH@Z.c)
 */

void __fastcall ZoomRect(
        const struct Geometry::CRect *a1,
        const struct Geometry::CPointFloat *a2,
        int a3,
        struct tagRECT *a4)
{
  int v7; // edx
  int v8; // r8d
  int v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+34h] [rbp-14h]
  int v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+3Ch] [rbp-Ch]

  Geometry::CRect::MulDiv(&v9, (int *)a1, a3, 100);
  v7 = (int)(float)((float)((float)((float)(*(float *)a2 - (float)*(int *)a1)
                                  / (float)(*((_DWORD *)a1 + 2) - *(_DWORD *)a1))
                          * (float)(v9 + *((_DWORD *)a1 + 2) - *(_DWORD *)a1 - v11))
                  + (float)*(int *)a1);
  v8 = (int)(float)((float)((float)((float)(*((float *)a2 + 1) - (float)*((int *)a1 + 1))
                                  / (float)(*((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 1)))
                          * (float)(v10 + *((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 1) - v12))
                  + (float)*((int *)a1 + 1));
  SetRect(a4, v7, v8, v11 + v7 - v9, v12 + v8 - v10);
}
