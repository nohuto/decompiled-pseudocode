/*
 * XREFs of ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x14010BEC0
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x14010BD68 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x140109F00 (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 */

__int64 __fastcall VidMmFindAlignedRange(_BYTE *a1, struct _RTL_BALANCED_NODE *a2)
{
  struct _RTL_BALANCED_NODE *v2; // r11
  int v4; // ecx
  ULONG_PTR ParentValue; // r8
  char v6; // r9
  __int64 v7; // rcx
  bool v8; // zf
  struct _RTL_BALANCED_NODE *v9; // rcx
  unsigned __int64 v10; // rdx
  ULONG_PTR v11; // rax
  __int64 v13; // rdx

  v2 = a2;
  if ( a2[1].ParentValue - (unsigned __int64)a2[1].Children[1] < *(_QWORD *)a1 )
    return 0xFFFFFFFFLL;
  v4 = (int)a2[1].Children[0];
  if ( g_Feature_Largify64KBPrototype )
  {
    if ( v4 == 1 )
      v8 = VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD((VIDMM_RECYCLE_MULTIRANGE *)a2) == a1[16];
    else
      v8 = (BYTE4(a2[3].Children[0][6].Left) & 1) == a1[16];
    goto LABEL_8;
  }
  if ( v4 != 1 )
  {
    if ( (BYTE4(a2[3].Children[0][6].Left) & 1) != 0 )
      goto LABEL_9;
LABEL_7:
    v8 = a1[16] == 0;
LABEL_8:
    if ( !v8 )
      return 0xFFFFFFFFLL;
    goto LABEL_9;
  }
  ParentValue = a2[2].ParentValue;
  v6 = 0;
  while ( !v6 )
  {
    v7 = *(_QWORD *)(ParentValue + 72);
    if ( (*(_BYTE *)(v7 + 148) & 1) == 0 )
      goto LABEL_7;
    if ( (struct _RTL_BALANCED_NODE *)ParentValue == v2[3].Children[0] )
    {
      v6 = 1;
    }
    else
    {
      v13 = *(_QWORD *)(ParentValue + 120);
      ParentValue = 0LL;
      if ( v13 != v7 + 72 )
        ParentValue = v13 - 120;
    }
  }
LABEL_9:
  v9 = v2[1].Children[1];
  v10 = ~(*((_QWORD *)a1 + 1) - 1LL) & ((unsigned __int64)v9 + *((_QWORD *)a1 + 1) - 1);
  if ( v10 >= (unsigned __int64)v9 )
  {
    v11 = v2[1].ParentValue;
    if ( v10 < v11 && v11 - v10 >= *(_QWORD *)a1 )
    {
      v2[2].Children[0] = (struct _RTL_BALANCED_NODE *)v10;
      return 0LL;
    }
  }
  return 0xFFFFFFFFLL;
}
