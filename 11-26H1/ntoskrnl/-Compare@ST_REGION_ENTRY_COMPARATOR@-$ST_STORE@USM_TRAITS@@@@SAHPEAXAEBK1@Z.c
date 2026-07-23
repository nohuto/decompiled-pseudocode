/*
 * XREFs of ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1403953B0
 * Callers:
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140394870 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 * Callees:
 *     <none>
 */

char __fastcall ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(_DWORD *a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v3; // r10d
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebp
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned int v11; // r9d
  __int64 v12; // rcx

  v3 = *a3;
  LODWORD(v5) = a1[98];
  v6 = *a3 >> v5;
  v7 = a1[100];
  v8 = (unsigned int)a1[102];
  v9 = (unsigned int)(*a2 >> v5);
  _BitScanReverse((unsigned int *)&v5, v6);
  _BitScanReverse((unsigned int *)&v10, v9);
  v11 = *(_DWORD *)(*(_QWORD *)(16 * (v6 ^ (unsigned int)(1 << v5)) + *(_QWORD *)&a1[2 * v5 + 32])
                  + v7 * (v3 & a1[99])
                  + v8);
  v12 = *(_QWORD *)(16 * (v9 ^ (unsigned int)(1 << v10)) + *(_QWORD *)&a1[2 * v10 + 32])
      + (unsigned int)(v7 * (*a2 & a1[99]));
  if ( *(_DWORD *)(v12 + v8) >= v11 )
    return *(_DWORD *)(v12 + v8) > v11;
  else
    return -1;
}
