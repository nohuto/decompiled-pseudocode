/*
 * XREFs of ViDeadlockRemoveNode @ 0x140C3DED8
 * Callers:
 *     ViDeadlockForgetResourceHistory @ 0x140C3D80C (ViDeadlockForgetResourceHistory.c)
 *     ViDeadlockRemoveResource @ 0x140C3E008 (ViDeadlockRemoveResource.c)
 * Callees:
 *     ViDeadlockUpdateChildrenCount @ 0x140C3E4C0 (ViDeadlockUpdateChildrenCount.c)
 */

_QWORD *__fastcall ViDeadlockRemoveNode(_QWORD *a1, int a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r9
  __int64 v4; // rcx
  _QWORD *result; // rax
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  __int64 *v9; // r10
  __int64 **v10; // rax
  __int64 v11; // rax
  __int64 **v12; // r10
  __int64 v13; // r8
  _QWORD *v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // r10
  __int64 **v17; // rax

  v2 = a1;
  if ( !a2 )
  {
    v6 = a1 + 1;
    v7 = (__int64 *)a1[1];
    if ( *v2 )
    {
      while ( v7 != v6 )
      {
        v8 = v7;
        v9 = v7 - 3;
        v7 = (__int64 *)*v7;
        if ( (__int64 *)v7[1] != v8 )
          goto LABEL_20;
        v10 = (__int64 **)v8[1];
        if ( *v10 != v8 )
          goto LABEL_20;
        *v10 = v7;
        v7[1] = (__int64)v10;
        *((_DWORD *)v2 + 19) += -1 - *((_DWORD *)v9 + 19);
        *v9 = *v2;
        v11 = *v2 + 8LL;
        v12 = *(__int64 ***)(*v2 + 16LL);
        if ( *v12 != (__int64 *)v11 )
          goto LABEL_20;
        *v8 = v11;
        v8[1] = (__int64)v12;
        *v12 = v8;
        *(_QWORD *)(v11 + 8) = v8;
      }
      v13 = v2[3];
      if ( *(_QWORD **)(v13 + 8) != v2 + 3 || (v14 = (_QWORD *)v2[4], (_QWORD *)*v14 != v2 + 3) )
LABEL_20:
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      ViDeadlockUpdateChildrenCount(*v2, 0xFFFFFFFFLL);
    }
    else
    {
      while ( v7 != v6 )
      {
        v15 = v7;
        v16 = v7 - 3;
        v7 = (__int64 *)*v7;
        if ( (__int64 *)v7[1] != v15 )
          goto LABEL_20;
        v17 = (__int64 **)v15[1];
        if ( *v17 != v15 )
          goto LABEL_20;
        *v17 = v7;
        v7[1] = (__int64)v17;
        *((_DWORD *)v2 + 19) += -1 - *((_DWORD *)v16 + 19);
        *v16 = 0LL;
        *v15 = 0LL;
        v16[4] = 0LL;
      }
    }
    --*(_WORD *)(v2[7] + 4LL);
  }
  v3 = v2 + 5;
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_20;
  result = (_QWORD *)v3[1];
  if ( (_QWORD *)*result != v3 )
    goto LABEL_20;
  *result = v4;
  *(_QWORD *)(v4 + 8) = result;
  return result;
}
