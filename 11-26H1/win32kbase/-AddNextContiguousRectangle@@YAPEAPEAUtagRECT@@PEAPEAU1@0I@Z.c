/*
 * XREFs of ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x14011CE54
 * Callers:
 *     ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x14011CCC0 (-RemoveGaps@@YAHPEAUtagRECT@@I@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT **__fastcall AddNextContiguousRectangle(struct tagRECT **a1, struct tagRECT **a2, int a3)
{
  struct tagRECT **v3; // r9
  struct tagRECT **v4; // r10
  struct tagRECT **v5; // r15
  struct tagRECT *v6; // rsi
  struct tagRECT **v7; // rdi
  LONG left; // r9d
  LONG top; // r10d
  LONG bottom; // r12d
  __m128i *v11; // rbx
  LONG right; // r14d
  int v13; // r8d
  int v14; // ecx
  __int32 v15; // eax
  __int32 v16; // r11d
  __int32 v17; // edx
  struct tagRECT ***v18; // r12
  __int64 *v19; // r13
  int *v20; // r14
  __m128i v21; // xmm0
  int **v22; // rbx
  __int64 v23; // rax
  int v24; // edx
  int v25; // ecx
  int v27; // r9d
  int v28; // edx
  __int32 v29; // ecx
  int v30; // edx
  int v31; // ecx
  struct tagRECT *v32; // rax
  __int64 v33; // [rsp+0h] [rbp-78h]
  int v34; // [rsp+8h] [rbp-70h] BYREF
  int v35; // [rsp+Ch] [rbp-6Ch] BYREF
  int v36; // [rsp+10h] [rbp-68h]
  __int32 v37; // [rsp+14h] [rbp-64h]
  LONG v38; // [rsp+18h] [rbp-60h]
  LONG v39; // [rsp+1Ch] [rbp-5Ch]
  LONG v40; // [rsp+20h] [rbp-58h]
  struct tagRECT **v41; // [rsp+28h] [rbp-50h] BYREF
  __int64 v42; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT **v43; // [rsp+38h] [rbp-40h]
  struct tagRECT **v44; // [rsp+40h] [rbp-38h] BYREF
  __int64 v45; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT *v46; // [rsp+50h] [rbp-28h]
  __m128i v47; // [rsp+58h] [rbp-20h]
  struct tagRECT **v48; // [rsp+C0h] [rbp+48h]
  int v50; // [rsp+D0h] [rbp+58h]
  int *v51; // [rsp+D8h] [rbp+60h]

  v48 = a1;
  v41 = 0LL;
  v34 = -1;
  v3 = a2;
  v35 = -1;
  v4 = a1;
  v44 = 0LL;
  v42 = 0LL;
  v45 = 0LL;
  v5 = &a1[a3];
  if ( a1 >= a2 )
  {
LABEL_39:
    v25 = 0;
    v24 = 0;
    goto LABEL_21;
  }
  do
  {
    v6 = *v4;
    v7 = v3;
    v46 = *v4;
    v43 = v3;
    if ( v3 >= v5 )
      goto LABEL_17;
    left = v6->left;
    top = v6->top;
    bottom = v6->bottom;
    v38 = v6->left;
    v39 = top;
    v40 = bottom;
    do
    {
      v11 = (__m128i *)*v7;
      right = (*v7)->right;
      if ( right <= left )
      {
        v13 = left - right;
        v14 = left - right;
      }
      else
      {
        v13 = v11->m128i_i32[0] - v6->right;
        v14 = v6->right - v11->m128i_i32[0];
      }
      v15 = v11->m128i_i32[3];
      LODWORD(v33) = v14;
      if ( v15 <= top )
      {
        v16 = top - v15;
        v17 = top - v15;
      }
      else
      {
        v16 = v11->m128i_i32[1] - bottom;
        v17 = bottom - v11->m128i_i32[1];
      }
      HIDWORD(v33) = v17;
      if ( v11->m128i_i32[1] >= bottom || v15 <= top )
      {
        if ( v11->m128i_i32[0] >= v6->right || right <= left )
        {
          v18 = &v44;
          v19 = &v45;
          v20 = &v35;
          goto LABEL_12;
        }
        v13 = 0;
        v14 = 0;
        LODWORD(v33) = 0;
      }
      else
      {
        v16 = 0;
        v17 = 0;
        HIDWORD(v33) = 0;
      }
      v18 = &v41;
      v19 = &v42;
      v20 = &v34;
LABEL_12:
      v21 = *v11;
      v22 = (int **)(v7 + 1);
      v47 = v21;
      v36 = v14 + _mm_cvtsi128_si32(v21);
      v37 = v14 + v21.m128i_i32[2];
      v50 = v17 + v21.m128i_i32[3];
      if ( v7 + 1 >= v5 )
        goto LABEL_13;
      v27 = v17 + v21.m128i_i32[1];
      do
      {
        v28 = v36;
        v51 = *v22;
        if ( **v22 > v36 )
          v28 = **v22;
        v29 = v37;
        if ( (*v22)[2] < v37 )
          v29 = (*v22)[2];
        if ( v28 < v29 )
        {
          v30 = v27;
          if ( v51[1] > v27 )
            v30 = v51[1];
          v31 = v50;
          if ( v51[3] < v50 )
            v31 = v51[3];
          if ( v30 < v31 )
            break;
        }
        ++v22;
      }
      while ( v22 < (int **)v5 );
      v7 = v43;
      v6 = v46;
      left = v38;
      if ( v22 >= (int **)v5 )
      {
LABEL_13:
        if ( v16 + v13 < (unsigned int)*v20 )
        {
          *v20 = v16 + v13;
          *v19 = v33;
          *v18 = v7;
        }
      }
      top = v39;
      ++v7;
      bottom = v40;
      v43 = v7;
    }
    while ( v7 < v5 );
    v3 = a2;
    v4 = v48;
LABEL_17:
    v48 = ++v4;
  }
  while ( v4 < v3 );
  if ( v34 != -1 )
  {
    v3 = v41;
    v23 = v42;
    goto LABEL_20;
  }
  if ( v35 == -1 )
    goto LABEL_39;
  v3 = v44;
  v23 = v45;
LABEL_20:
  v24 = v23;
  v25 = HIDWORD(v23);
LABEL_21:
  if ( v24 || v25 )
  {
    v32 = *v3;
    v32->left += v24;
    v32->right += v24;
    v32->bottom += v25;
    v32->top += v25;
  }
  return v3;
}
