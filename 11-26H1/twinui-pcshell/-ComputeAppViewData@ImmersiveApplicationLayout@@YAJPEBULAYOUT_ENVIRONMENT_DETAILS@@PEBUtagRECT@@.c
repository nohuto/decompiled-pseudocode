/*
 * XREFs of ?ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1801853A8
 * Callers:
 *     ?_CommitLayoutItems@CAppLayout@@AEAAJXZ @ 0x1806C7EB8 (-_CommitLayoutItems@CAppLayout@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeAppViewData(
        ImmersiveApplicationLayout *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  LONG v4; // r10d
  int v8; // esi
  LONG v9; // edx
  LONG v10; // r8d
  int v11; // ecx
  char v12; // cl
  char v13; // al
  char v14; // cl
  LONG v15; // eax
  bool v16; // cc
  char v17; // al
  __int64 result; // rax

  v4 = 0;
  *(_QWORD *)&a4->left = 0LL;
  *(_QWORD *)&a4->right = 0LL;
  *(_QWORD *)&a4[1].left = 0LL;
  *(_QWORD *)&a4[1].right = 0LL;
  *(_QWORD *)&a4[2].left = 3LL;
  v8 = *((_DWORD *)this + 4);
  v9 = *(_DWORD *)this;
  v10 = *((_DWORD *)this + 2);
  v11 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
  if ( v11 < (int)(float)((float)(320 * v8) / 100.0) || v11 >= (int)(float)((float)(500 * v8) / 100.0) )
  {
    if ( v11 < *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1) )
    {
      a4->left = 3;
    }
    else
    {
      if ( a3->left > v9 || (v12 = 1, v9 > *(_DWORD *)a2) )
        v12 = 0;
      if ( *((_DWORD *)a2 + 2) > v10 || (v13 = 1, v10 > a3->right) )
        v13 = 0;
      if ( !v12 || !v13 )
        a4->left = 1;
    }
  }
  else
  {
    a4->left = 2;
  }
  a4->top = *((_DWORD *)a2 + 2) - *(_DWORD *)a2 < *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1);
  if ( a3->left > *(_DWORD *)this || (v14 = 1, *(_DWORD *)this > *(_DWORD *)a2) )
    v14 = 0;
  v15 = *((_DWORD *)this + 2);
  if ( *((_DWORD *)a2 + 2) > v15 || (v16 = v15 <= a3->right, v17 = 1, !v16) )
    v17 = 0;
  if ( v14 )
  {
    if ( v17 )
      a4->right = 3;
    else
      a4->right = 1;
  }
  else if ( v17 )
  {
    a4->right = 2;
  }
  LOBYTE(v4) = *((_DWORD *)this + 5) == 1;
  result = 0LL;
  a4->bottom = v4;
  return result;
}
