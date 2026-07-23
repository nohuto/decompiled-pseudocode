/*
 * XREFs of ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x14020B940
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14020B514 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned __int64 *v2; // r9
  __int64 v3; // r11
  bool v5; // zf
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  unsigned __int64 i; // rsi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx

  v1 = a1[17];
  v2 = a1 + 15;
  v3 = 0LL;
  v5 = a1[15] == -1LL;
  a1[17] = 0LL;
  if ( !v5 )
  {
    v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    if ( *v2 <= MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] )
    {
      ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(
        (unsigned __int64)a1,
        MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
      return;
    }
    if ( v1 )
    {
      if ( !v6 )
        v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
      v7 = -1LL;
      v8 = a1;
      for ( i = -1LL; v8 < v2; v8 += 3 )
      {
        v10 = v8[1];
        if ( v10 != -1LL )
        {
          v13 = v8[2];
          if ( v13 < v6 - a1[17] )
            v13 = v6 - a1[17];
          v14 = *v8 + v13;
          if ( v14 >= v7 )
            v14 = v7;
          v7 = v14;
          if ( v10 < i )
            i = v8[1];
        }
      }
      v11 = v6;
      v12 = v6;
      if ( v7 >= v6 )
        v11 = v7;
      if ( i >= v6 )
        v12 = i;
      *v2 = v12;
      if ( v12 != -1LL )
      {
        v3 = v12 - v6;
        if ( v12 >= v11 )
          v3 = v11 - v6;
        a1[16] = v3;
        if ( v3 )
          goto LABEL_19;
        v3 = 1LL;
      }
      a1[16] = v3;
LABEL_19:
      *(_QWORD *)(*(a1 - 275) + 3072LL) = -v3;
    }
  }
}
