/*
 * XREFs of ?HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BC40
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x18006E974 (-HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z.c)
 */

void __fastcall HampHostEvaluatePendState(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v1; // r11d
  struct _RM_HAM_ACTIVITY_HOST *v2; // rbp
  int v3; // esi
  unsigned int v4; // r12d
  unsigned __int8 v5; // r13
  int v6; // r14d
  unsigned int v7; // r15d
  struct _RM_HAM_ACTIVITY_HOST *v8; // rdx
  char *v9; // rax
  char v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  __int16 v16; // r9
  unsigned __int16 v17; // dx
  __int16 v18; // cx
  unsigned int v19; // edi
  unsigned __int16 v20; // r9
  unsigned int v21; // r10d
  signed int v22; // ecx
  unsigned int v23; // ecx
  unsigned __int8 v24; // r8
  __int64 v25; // rdx
  unsigned __int8 v26; // r9
  unsigned __int64 v27; // r8
  struct _HAM_DEPENDENCY_GROUP *v28; // rcx
  unsigned __int8 v29; // dl
  int v30; // edx

  v1 = 0;
  v2 = a1;
  v3 = 0;
  v4 = 0;
  v5 = 6;
  v6 = 0;
  v7 = 0;
  v8 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
  if ( v8 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
  {
    v9 = (char *)v8 - 96;
    if ( v8 != (struct _RM_HAM_ACTIVITY_HOST *)96 )
    {
      while ( (v9[552] & 0x48) != 0 )
      {
LABEL_30:
        v25 = *((_QWORD *)v9 + 12);
        if ( v25 != *((_QWORD *)v9 + 10) + 608LL )
        {
          v9 = (char *)(v25 - 96);
          if ( v25 != 96 )
            continue;
        }
        v2 = a1;
        goto LABEL_32;
      }
      v10 = v9[562];
      if ( v10 == 3 )
      {
        v6 = 1;
      }
      else if ( v10 != 2 )
      {
LABEL_29:
        v24 = v9[563];
        if ( v24 != 6 )
        {
          v29 = v5;
          if ( v5 <= v24 )
            v29 = v9[563];
          v5 = v29;
        }
        goto LABEL_30;
      }
      if ( *((_QWORD *)v9 + 8) )
      {
        v11 = *((_QWORD *)v9 + 10);
        if ( v11 )
          v12 = v11 + 560;
        else
          v12 = 616LL;
        v13 = *((_DWORD *)v9 + 28);
        v14 = v13 >> 10;
        v15 = v13 >> 13;
        if ( *(_DWORD *)v12 != 2 )
          LOBYTE(v14) = v15;
        if ( (v14 & 1) != 0 )
        {
          v16 = *((_WORD *)v9 + 212);
          v4 = 1;
          v17 = v16 & 0x30;
          if ( (v16 & 0xC0) == 0xC0 )
          {
            v19 = 2;
            v18 = 14;
          }
          else if ( (v16 & 0xEu) < 8 || v17 < 0x20u )
          {
            v18 = *((_WORD *)v9 + 212);
            v19 = 0;
            v16 = 14;
          }
          else
          {
            v18 = *((_WORD *)v9 + 212);
            v19 = 1;
            v16 = 14;
          }
          v20 = v18 & v16;
          v21 = *((_DWORD *)v9 + 120) & 3;
          v22 = v21;
          if ( v21 <= v19 )
            v22 = v19;
          if ( v3 <= v22 )
          {
            if ( (*((_WORD *)v9 + 212) & 0xC0) == 0xC0 )
              v23 = 2;
            else
              v23 = v20 >= 8u && v17 >= 0x20u;
            v3 = *((_DWORD *)v9 + 120) & 3;
            if ( v21 <= v23 )
              v3 = v23;
          }
        }
      }
      if ( (v10 == 3 || (unsigned __int8)v9[563] >= 3u) && (*((_DWORD *)v9 + 28) & 0x100000) != 0 )
        v7 = 1;
      goto LABEL_29;
    }
  }
LABEL_32:
  v26 = v5;
  v27 = ((unsigned __int64)v7 << 39) ^ (*((_QWORD *)v2 + 83) ^ ((__int64)v3 << 32)) & 0xFFFFFF6CFFFFFFFFuLL ^ (((__int64)v3 << 32) ^ ((unsigned __int64)v4 << 36)) & 0xFFFFFF6FFFFFFFFFuLL ^ (((unsigned __int64)v4 << 36) ^ ((unsigned __int64)v7 << 39)) & 0xFFFFFF7FFFFFFFFFuLL;
  if ( v6 )
    v26 = 6;
  v28 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)v2 + 88);
  *((_QWORD *)v2 + 83) = ((unsigned __int64)v26 << 26) ^ (v27 ^ ((unsigned __int64)v26 << 26)) & 0xFFFFFFFFE3FFFFFFuLL;
  if ( v28 )
  {
    LOBYTE(v1) = v26 == 0;
    if ( v1 != (((v27 >> 26) & 7) == 0) )
    {
      v30 = 1;
      if ( v26 )
        v30 = -1;
      HampDepGroupAddRemoveResourceWaiter(v28, v30);
    }
  }
}
