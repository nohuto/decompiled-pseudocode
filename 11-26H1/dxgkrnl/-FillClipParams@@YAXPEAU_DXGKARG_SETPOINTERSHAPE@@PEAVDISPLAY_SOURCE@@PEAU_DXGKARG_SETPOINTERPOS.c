/*
 * XREFs of ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1402CF190
 * Callers:
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1402C7ED4 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC94C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall FillClipParams(
        struct _DXGKARG_SETPOINTERSHAPE *a1,
        __m128i *a2,
        struct _DXGKARG_SETPOINTERPOSITION *a3,
        struct CURSOR_CLIP_PARAMS *a4)
{
  struct _DXGKARG_SETPOINTERPOSITION *v5; // r10
  __m128i v8; // xmm2
  signed int v9; // esi
  int v10; // ebp
  int v11; // r12d
  int v12; // r8d
  UINT *p_Height; // r15
  UINT Width; // r9d
  int *v15; // r11
  int v16; // ecx
  int *v17; // rbp
  int v18; // edx
  int v19; // edx
  INT X; // r11d
  INT Y; // r8d
  int v22; // r12d
  INT v23; // eax
  UINT v24; // r9d
  INT v25; // r9d
  char v26; // al
  _BYTE *v27; // rbx
  char v28; // al
  char v29; // cl
  __m128i v30; // [rsp+50h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp+8h]
  char *v32; // [rsp+B8h] [rbp+10h]

  v5 = a3;
  if ( a2[44].m128i_i8[0] )
  {
    v9 = a2[44].m128i_i32[1];
    v10 = 0;
    v11 = a2[44].m128i_i32[2];
    v12 = 0;
    v30.m128i_i32[1] = 0;
    v30.m128i_i32[3] = v11;
  }
  else
  {
    v8 = a2[43];
    v9 = a2[43].m128i_i32[2];
    v10 = _mm_cvtsi128_si32(v8);
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
    v30 = v8;
  }
  v31 = v12;
  p_Height = &a1->Height;
  if ( v9 - v10 < (signed int)a1->Width || v30.m128i_i32[3] - v30.m128i_i32[1] < (int)*p_Height )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 221;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"((ClipBoxRect.right - ClipBoxRect.left) >= (LONG)(pSavedCursor->Width)) && ((ClipBoxRect.bottom - ClipBox"
                "Rect.top) >= (LONG)(pSavedCursor->Height))",
      221LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v12 = v31;
    v5 = a3;
  }
  Width = a1->Width;
  v15 = (int *)((char *)a4 + 4);
  v32 = (char *)a4 + 4;
  *(_OWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 1) = *p_Height;
  *(_DWORD *)a4 = Width;
  if ( v10 && (v23 = v5->X, v23 < v10) )
  {
    v24 = Width - v10;
    v32 = (char *)a4 + 4;
    v16 = 4;
    v17 = (int *)((char *)a4 + 20);
    *((_DWORD *)a4 + 5) = 4;
    *(_DWORD *)a4 = v23 + v24;
    v18 = 4;
  }
  else
  {
    v16 = 0;
    v17 = (int *)((char *)a4 + 20);
    v18 = 0;
    if ( a2[62].m128i_i32[0] != v9 )
    {
      X = v5->X;
      v32 = (char *)a4 + 4;
      v17 = (int *)((char *)a4 + 20);
      if ( (int)(X + Width) > v9 )
      {
        if ( v9 - X < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 241;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(ClipBoxRect.right - pPointerPos->X) >= 0",
            241LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v12 = v31;
          v5 = a3;
        }
        v15 = (int *)((char *)a4 + 4);
        v16 = 8;
        *(_DWORD *)a4 = v9 - v5->X;
        *((_DWORD *)a4 + 5) = 8;
        p_Height = &a1->Height;
        v32 = (char *)a4 + 4;
        v17 = (int *)((char *)a4 + 20);
        v18 = 8;
      }
      else
      {
        v15 = (int *)((char *)a4 + 4);
      }
    }
  }
  if ( v12 && (v25 = v5->Y, v25 < v12) )
  {
    v19 = v18 | 1;
    *v15 = v25 + *p_Height - v12;
    *v17 = v19;
  }
  else
  {
    v19 = v16;
    if ( v11 != a2[62].m128i_i32[1] )
    {
      Y = v5->Y;
      if ( (int)(Y + *p_Height) > v11 )
      {
        if ( v11 - Y < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 258;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(ClipBoxRect.bottom - pPointerPos->Y) >= 0",
            258LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v5 = a3;
          v15 = (int *)v32;
        }
        v22 = v11 - v5->Y;
        *v17 |= 2u;
        v19 = *v17;
        *v15 = v22;
      }
    }
  }
  if ( v19 )
  {
    *((_DWORD *)a4 + 2) = a1->Pitch;
    if ( (a1->Flags.Value & 1) != 0 )
    {
      v26 = *(_BYTE *)a4;
      v27 = (char *)a4 + 17;
      if ( (v19 & 4) != 0 )
      {
        v28 = (v26 - LOBYTE(a1->Width)) & 7;
        v29 = 0;
      }
      else
      {
        v29 = v26 & 7;
        v28 = 0;
      }
      *((_BYTE *)a4 + 16) = v28;
      *((_BYTE *)a4 + 17) = v29;
      if ( *v27 >= 8u )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 290;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsRightMono < BITS_PER_BYTE",
          290LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_BYTE *)a4 + 16) )
      {
        if ( *v27 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 293;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pClipParams->ExtraPixelsLeftMono == 0 || pClipParams->ExtraPixelsRightMono == 0",
            293LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      *((_DWORD *)a4 + 3) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 3) = 0;
    }
  }
}
