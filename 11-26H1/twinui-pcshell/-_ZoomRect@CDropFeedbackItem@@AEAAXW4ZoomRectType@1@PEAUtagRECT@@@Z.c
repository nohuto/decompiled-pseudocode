/*
 * XREFs of ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x180548148
 * Callers:
 *     ?GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x180546C10 (-GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z.c)
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180547B38 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z @ 0x18053F1D8 (-ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z.c)
 *     ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x180541664 (-MapRelativeRect@@YA-AUCRect@Geometry@@AEBU12@00@Z.c)
 */

void __fastcall CDropFeedbackItem::_ZoomRect(__int64 a1, int a2, struct tagRECT *a3)
{
  HWND v5; // rdx
  HWND v7; // rdx
  int v8; // ecx
  int v9; // r14d
  __int64 i; // rax
  int v11; // r9d
  int v12; // r8d
  int v13; // ecx
  int v14; // r9d
  struct tagRECT v15; // xmm1
  int v16; // ecx
  int v17; // r9d
  int v18; // r8d
  int v19; // r9d
  struct tagRECT v20; // xmm0
  struct tagRECT v21; // [rsp+20h] [rbp-50h] BYREF
  int v22[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-30h] BYREF
  struct tagPOINT v24[2]; // [rsp+50h] [rbp-20h] BYREF

  v5 = *(HWND *)(a1 + 192);
  *(_OWORD *)&Points[0].x = *(_OWORD *)(a1 + 76);
  MapWindowPoints(0LL, v5, Points, 2u);
  v7 = *(HWND *)(a1 + 192);
  *(_OWORD *)&v24[0].x = *(_OWORD *)(a1 + 124);
  MapWindowPoints(0LL, v7, v24, 2u);
  v8 = *(_DWORD *)(a1 + 72);
  v9 = 100;
  if ( (v8 & 0x860C02) != 0 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 6 )
        goto LABEL_12;
      if ( (v8 & dword_1807B5E18[2 * i]) != 0 )
        break;
    }
    v9 = dword_1807B5E18[2 * i + 1];
    if ( v9 == 100 )
      goto LABEL_12;
    v11 = *(_DWORD *)(a1 + 212);
    if ( (v8 & 0x20000) != 0 )
    {
      v21 = *(struct tagRECT *)&Points[0].x;
      v12 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Points[0].x, 12));
      v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Points[0].x, 4));
      v14 = v11 - (v12 - v13) / 2 - *(_DWORD *)(a1 + 204) - v13;
      Points[1].y = v14 + v12;
      Points[0].y = v14 + v13;
LABEL_9:
      v15 = *(struct tagRECT *)MapRelativeRect(v22, &v21.left, v24, (int *)Points);
      *(struct tagRECT *)&v24[0].x = v15;
      goto LABEL_13;
    }
    if ( (v8 & 0x40000) != 0 )
    {
      v16 = _mm_cvtsi128_si32(*(__m128i *)&Points[0].x);
      v17 = (*(_DWORD *)(a1 + 208) - *(_DWORD *)(a1 + 200)) / 2;
      v18 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Points[0].x, 8));
      v21 = *(struct tagRECT *)&Points[0].x;
      v19 = v17 - (v18 - v16) / 2 - v16;
      Points[0].x = v19 + v16;
      Points[1].x = v19 + v18;
      goto LABEL_9;
    }
  }
LABEL_12:
  v15 = *(struct tagRECT *)&v24[0].x;
LABEL_13:
  v20 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v20 = v15;
      v21 = v15;
    }
  }
  else
  {
    v20 = *(struct tagRECT *)&Points[0].x;
    v21 = *(struct tagRECT *)&Points[0].x;
  }
  if ( v9 == 100 )
  {
    *a3 = v20;
  }
  else
  {
    *(float *)v22 = (float)((float)(Points[1].x - Points[0].x) * 0.5) + (float)Points[0].x;
    *(float *)&v22[1] = (float)((float)(Points[1].y - Points[0].y) * 0.5) + (float)Points[0].y;
    ZoomRect((const struct Geometry::CRect *)&v21, (const struct Geometry::CPointFloat *)v22, v9, a3);
    if ( (*(_DWORD *)(a1 + 72) & 0x40000) != 0 )
      OffsetRect(a3, 0, -a3->top);
  }
}
