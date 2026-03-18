/*
 * XREFs of ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x140322980
 * Callers:
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x140321ED0 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x140322848 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z @ 0x140323214 (-ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z.c)
 */

__int64 __fastcall DXGPRESENT::ClipRects(
        struct tagRECT *a1,
        struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  LONG v8; // eax
  LONG v9; // r8d
  LONG v10; // edx
  LONG bottom; // ebp
  LONG top; // r14d
  LONG v13; // eax
  LONG v14; // ecx
  int v15; // r9d
  LONG right; // ebp
  LONG left; // esi
  LONG v18; // eax
  LONG v19; // ecx
  int v20; // r9d
  __int64 v22; // rbp
  LONG v23; // r10d
  int v24; // r9d
  __int64 v25; // r11
  __int64 v26; // r15
  __int64 v27; // r8
  LONG v28; // r14d
  LONG v29; // r12d
  LONG v30; // r13d
  LONG v31; // ecx
  LONG v32; // esi
  int v33; // eax
  int v34; // r15d
  int v35; // edx
  LONG v36; // r11d
  int v37; // r8d
  LONG v38; // edx
  LONG v39; // r8d
  LONG v40; // ecx
  int v41; // r9d
  int v42; // esi
  LONG v43; // eax
  LONG v44; // ecx
  LONG v45; // eax
  LONG v46; // r10d
  LONG v47; // r8d
  LONG v48; // ecx
  int v49; // r11d
  LONG v50; // edx
  LONG v51; // r10d
  LONG v52; // r8d
  LONG v53; // ecx
  int v54; // r11d
  LONG v55; // edx
  LONG v56; // [rsp+50h] [rbp-48h]
  LONG v57; // [rsp+54h] [rbp-44h]
  LONG v58; // [rsp+58h] [rbp-40h]
  int v59; // [rsp+58h] [rbp-40h]
  LONG v60; // [rsp+5Ch] [rbp-3Ch]
  int v61; // [rsp+5Ch] [rbp-3Ch]
  int v62; // [rsp+60h] [rbp-38h]
  LONG v63; // [rsp+68h] [rbp-30h]
  int v64; // [rsp+B0h] [rbp+18h]

  if ( !a3
    || (v8 = a3->top, v8 < a1->bottom)
    && (v9 = a3->bottom, v9 > a1->top)
    && a3->left < a1->right
    && (v10 = a3->right, a3->left < v10)
    && v10 > a1->left
    && v8 < v9 )
  {
    if ( !a4 )
    {
      if ( a3 )
      {
        bottom = a3->bottom;
        top = a3->top;
        if ( a1->top >= a1->bottom )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10336;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"*low1 < *high1", 10336LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( a2->top >= a2->bottom )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10337;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"*low2 < *high2", 10337LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( top >= bottom )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10338;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"low < high", 10338LL, 0LL, 0LL, 0LL, 0LL);
        }
        v13 = a1->top;
        if ( top > v13 )
        {
          a1->top = top;
          v13 = top;
        }
        v14 = a1->bottom;
        if ( bottom < v14 )
        {
          a1->bottom = bottom;
          v14 = bottom;
        }
        v15 = bottom - top;
        if ( v14 - v13 != bottom - top )
        {
          v46 = a2->bottom;
          v47 = a2->top;
          v48 = v46;
          v49 = v46 - v47;
          if ( top < v13 )
          {
            v47 += (v15 + v49 * (v13 - top) - 1) / v15;
            a2->top = v47;
          }
          v50 = a1->bottom;
          if ( bottom > v50 )
          {
            v48 = v46 - v49 * (bottom - v50) / v15;
            a2->bottom = v48;
          }
          if ( v47 == v48 )
          {
            if ( a1->top - top < bottom - a1->bottom )
              a2->bottom = v48 + 1;
            else
              a2->top = v47 - 1;
          }
        }
        right = a3->right;
        left = a3->left;
        if ( a1->left >= a1->right )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10336;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"*low1 < *high1", 10336LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( a2->left >= a2->right )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10337;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"*low2 < *high2", 10337LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( left >= right )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10338;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"low < high", 10338LL, 0LL, 0LL, 0LL, 0LL);
        }
        v18 = a1->left;
        if ( left > a1->left )
        {
          a1->left = left;
          v18 = left;
        }
        v19 = a1->right;
        if ( right < v19 )
        {
          a1->right = right;
          v19 = right;
        }
        v20 = right - left;
        if ( v19 - v18 != right - left )
        {
          v51 = a2->right;
          v52 = a2->left;
          v53 = v51;
          v54 = v51 - a2->left;
          if ( left < v18 )
          {
            v52 += (v20 + v54 * (v18 - left) - 1) / v20;
            a2->left = v52;
          }
          v55 = a1->right;
          if ( right > v55 )
          {
            v53 = v51 - v54 * (right - v55) / v20;
            a2->right = v53;
          }
          if ( v52 == v53 )
          {
            if ( a1->left - left < right - a1->right )
              a2->right = v53 + 1;
            else
              a2->left = v52 - 1;
          }
        }
      }
      return 1LL;
    }
    v22 = a4->top;
    v23 = a2->bottom;
    v24 = a2->top;
    if ( (int)v22 < v23 - v24 )
    {
      v25 = a4->bottom;
      if ( (int)v25 > 0 )
      {
        v26 = a4->left;
        v63 = a2->right;
        if ( (int)v26 < v63 - a2->left )
        {
          v27 = a4->right;
          if ( (int)v27 > 0 && (int)v26 < (int)v27 && (int)v22 < (int)v25 )
          {
            if ( !a3 )
            {
              DXGPRESENT::ClipIntervals(&a2->top, &a2->bottom, &a1->top, &a1->bottom, v22, v25);
              DXGPRESENT::ClipIntervals(&a2->left, &a2->right, &a1->left, &a1->right, a4->left, a4->right);
              return 1LL;
            }
            v58 = a3->left;
            v60 = a3->right;
            v64 = (((int)v27 - (int)v26) << 16) / (v60 - a3->left);
            v56 = a3->top;
            v57 = a3->bottom;
            if ( v64 && (((int)v25 - (int)v22) << 16) / (v57 - v56) )
            {
              v28 = a1->left;
              if ( a3->left > a1->left )
                v28 = a3->left;
              v29 = a1->right;
              if ( a3->right < v29 )
                v29 = a3->right;
              if ( v28 < v29 )
              {
                v30 = a1->top;
                v31 = a3->top;
                v32 = a1->bottom;
                if ( v56 > v30 )
                  v30 = v56;
                if ( v57 < v32 )
                  v32 = v57;
                if ( v30 < v32 )
                {
                  v33 = ((_DWORD)v26 << 16) + v64 * (v28 - v58);
                  v34 = (((int)v25 - (int)v22) << 16) / (v57 - v56);
                  v61 = v64 * (v29 - v60) + ((_DWORD)v27 << 16);
                  v62 = v34 * (v30 - v31) + ((_DWORD)v22 << 16);
                  v35 = v34 * (v32 - v57) + ((_DWORD)v25 << 16);
                  v36 = a2->right;
                  v37 = v35 >> 16;
                  v59 = v35;
                  v38 = a2->left;
                  if ( (v33 + 0xFFFF) >> 16 > a2->left )
                    v38 = (v33 + 0xFFFF) >> 16;
                  a2->left = v38;
                  if ( v61 >> 16 < v63 )
                    v36 = v61 >> 16;
                  a2->right = v36;
                  if ( v38 < v36 )
                  {
                    if ( (v62 + 0xFFFF) >> 16 > v24 )
                      v24 = (v62 + 0xFFFF) >> 16;
                    a2->top = v24;
                    if ( v37 < v23 )
                      v23 = v37;
                    a2->bottom = v23;
                    if ( v24 < v23 )
                    {
                      v39 = ((v38 << 16) - v33 + v64 - 1) / v64 + v28;
                      v40 = v29 + ((v36 << 16) - v61) / v64;
                      v41 = ((v24 << 16) - v62 + v34 - 1) / v34 + v30;
                      v42 = ((v23 << 16) - v59) / v34 + v32;
                      if ( v39 <= a1->left )
                        v39 = a1->left;
                      v43 = a1->right;
                      a1->left = v39;
                      if ( v40 >= v43 )
                        v40 = v43;
                      a1->right = v40;
                      if ( v39 < v40 )
                      {
                        v44 = a1->top;
                        v45 = a1->bottom;
                        if ( v41 > v44 )
                          v44 = v41;
                        a1->top = v44;
                        if ( v42 < v45 )
                          v45 = v42;
                        a1->bottom = v45;
                        if ( v44 < v45 )
                          return 1LL;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              WdLogSingleEntry4(3LL, v26, v22, v27, v25);
              WdLogGlobalForLineNumber = 10452;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
