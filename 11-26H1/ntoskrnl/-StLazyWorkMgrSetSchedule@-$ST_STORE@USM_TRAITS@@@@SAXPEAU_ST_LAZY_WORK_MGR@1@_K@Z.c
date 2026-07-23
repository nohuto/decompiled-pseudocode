/*
 * XREFs of ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14042E5B0
 * Callers:
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14020B514 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 *v4; // r9
  unsigned __int64 v5; // r10
  _QWORD *v6; // rax
  unsigned __int64 i; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx

  v2 = a2;
  if ( !a2 )
    v2 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v4 = a1 + 15;
  v5 = -1LL;
  v6 = a1;
  for ( i = -1LL; v6 < v4; v6 += 3 )
  {
    v8 = v6[1];
    if ( v8 != -1LL )
    {
      v14 = v6[2];
      if ( v14 < v2 - a1[17] )
        v14 = v2 - a1[17];
      v15 = *v6 + v14;
      if ( v15 >= v5 )
        v15 = v5;
      v5 = v15;
      if ( v8 < i )
        i = v6[1];
    }
  }
  v9 = v2;
  v10 = v2;
  if ( v5 >= v2 )
    v9 = v5;
  if ( i >= v2 )
    v10 = i;
  *v4 = v10;
  if ( v10 == -1LL )
  {
    v12 = 0LL;
    goto LABEL_15;
  }
  v11 = v10;
  v12 = v10 - v2;
  if ( v11 >= v9 )
    v12 = v9 - v2;
  a1[16] = v12;
  if ( !v12 )
  {
    v12 = 1LL;
LABEL_15:
    a1[16] = v12;
  }
  result = *(a1 - 275);
  *(_QWORD *)(result + 3072) = -v12;
  return result;
}
