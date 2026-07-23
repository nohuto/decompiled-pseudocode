/*
 * XREFs of ?StDmCombineTargetCompare@?$ST_STORE@USM_TRAITS@@@@SAHPEAXPEBX1@Z @ 0x140477330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineTargetCompare(_QWORD *a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int v5; // r9d
  bool v6; // cf
  __int64 v7; // rax
  unsigned int v8; // r8d
  int v9; // ecx
  int v10; // r9d
  unsigned int v11; // ebx
  unsigned int v12; // r8d

  v3 = a3[1];
  v5 = a2[1];
  v6 = v3 < v5;
  if ( v3 != v5 )
    return v6 ? -1 : 1;
  v7 = a1[1];
  v8 = *a3;
  v9 = *(_DWORD *)(v7 + 804);
  v10 = *a2 >> v9;
  v11 = *(_DWORD *)(v7 + 800) & v8;
  v12 = v8 >> v9;
  if ( v10 == v12 )
  {
LABEL_3:
    v6 = (*a2 & *(_DWORD *)(v7 + 800)) < v11;
    return v6 ? -1 : 1;
  }
  if ( v10 == *(_DWORD *)a1 )
    return 1LL;
  if ( v12 != *(_DWORD *)a1 )
    goto LABEL_3;
  return 0xFFFFFFFFLL;
}
