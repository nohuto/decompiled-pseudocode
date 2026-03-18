/*
 * XREFs of ?RemoveOverlap@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x14022843C
 * Callers:
 *     ?RemoveOverlaps@@YAXPEAUtagRECT@@I@Z @ 0x14011CC30 (-RemoveOverlaps@@YAXPEAUtagRECT@@I@Z.c)
 * Callees:
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 */

struct tagRECT *__fastcall RemoveOverlap(struct tagRECT *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  LONG top; // r9d
  struct tagRECT *v5; // rbx
  LONG bottom; // r8d
  int v7; // edi
  int v8; // r15d
  int v9; // esi
  LONG v10; // r14d
  LONG right; // ebp
  int v12; // r12d
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  _DWORD *v17; // rcx
  int v18; // r8d
  int v19; // r10d
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  struct tagRECT *v24; // rcx
  int v25; // ecx
  int v26; // ecx
  LONG *p_top; // r8
  int v28; // edx
  int v29; // edx
  struct tagRECT *result; // rax
  unsigned __int64 v31; // [rsp+20h] [rbp-58h]
  unsigned __int64 v33; // [rsp+98h] [rbp+20h]

  top = a1->top;
  v5 = a1;
  bottom = a1->bottom;
  v7 = (a1->right - a1->left) / 2 + a1->left;
  v8 = (bottom - top) / 2 + top;
  v9 = (a2->right - a2->left) / 2 + a2->left;
  v10 = a3->bottom;
  right = a3->right;
  LODWORD(v31) = v9;
  v12 = (a2->bottom - a2->top) / 2 + a2->top;
  v13 = 0;
  HIDWORD(v31) = v12;
  if ( right == a1->right )
    v13 = 2;
  v14 = v13 | (v10 == bottom);
  v15 = 0;
  if ( a3->left == a1->left )
    v15 = 2;
  v16 = ((v15 | (a3->top == top)) ^ v14) - 1;
  if ( (v16 & 2) != 0 )
  {
    HIDWORD(v33) = (bottom - top) / 2 + top;
    LODWORD(v33) = (a1->right - a1->left) / 2 + a1->left;
    if ( PtInRect(a3, v33) || PtInRect(v17, v31) )
    {
      v20 = v7 - v9;
      if ( v7 - v9 < 0 )
        v20 = v9 - v7;
      v21 = v8 - v12;
      if ( v8 - v12 < 0 )
        v21 = v12 - v8;
      if ( v20 >= v21 )
        goto LABEL_9;
    }
    else if ( right - v18 <= v10 - v19 )
    {
LABEL_9:
      v16 = 1;
      goto LABEL_19;
    }
    v16 = 0;
  }
  else if ( v16 == 1 )
  {
    goto LABEL_19;
  }
  v7 = v8;
  v9 = v12;
LABEL_19:
  if ( v7 >= 0 )
  {
    v22 = 0;
  }
  else
  {
    v22 = 1;
    v7 = -v7;
  }
  if ( v9 >= 0 )
  {
    v23 = 0;
  }
  else
  {
    v23 = 1;
    v9 = -v9;
  }
  if ( v9 < v7 )
    v23 = v22;
  v24 = a2;
  if ( v9 >= v7 )
  {
    v24 = v5;
    v5 = a2;
  }
  if ( v16 == 1 )
  {
    if ( v23 )
      v25 = v5->left + v24->left - v5->right;
    else
      v25 = v24->right;
    v26 = v25 - v5->left;
    p_top = &v5->top;
    v28 = 0;
  }
  else
  {
    p_top = &v5->top;
    if ( v23 )
      v29 = *p_top + v24->top - v5->bottom;
    else
      v29 = v24->bottom;
    v28 = v29 - *p_top;
    v26 = 0;
  }
  v5->left += v26;
  result = v5;
  v5->right += v26;
  v5->bottom += v28;
  *p_top += v28;
  return result;
}
