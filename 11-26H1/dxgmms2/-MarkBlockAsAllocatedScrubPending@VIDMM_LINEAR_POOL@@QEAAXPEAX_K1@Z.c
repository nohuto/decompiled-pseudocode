/*
 * XREFs of ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1401231F0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 * Callees:
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1400FB248 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400FC0EC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_LINEAR_POOL *v4; // r11
  VIDMM_LINEAR_POOL *v5; // rax
  char *v9; // rbx
  char *v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  struct _VIDMM_POOL_BLOCK *Block; // rax
  unsigned __int64 **v30; // rdx
  unsigned __int64 *v31; // rcx
  unsigned __int64 v32; // r8
  _QWORD *v33; // r8
  char v34; // dl
  _QWORD *v35; // rcx
  char v36; // r9
  _QWORD *v37; // rax
  char *v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 *v42; // rcx
  _QWORD *v43; // rcx
  __int64 v44; // rdx

  v4 = (VIDMM_LINEAR_POOL *)a2[5];
  v5 = (VIDMM_LINEAR_POOL *)a2[6];
  v9 = (char *)v4 - 40;
  v11 = (char *)v5 - 40;
  if ( v5 == (VIDMM_LINEAR_POOL *)((char *)this + 80) )
    v11 = 0LL;
  if ( v4 == (VIDMM_LINEAR_POOL *)((char *)this + 80) )
    v9 = 0LL;
  if ( *a2 > a3 )
  {
    if ( !v11 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    v12 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 > a3 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    if ( v11[56] != 2 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    if ( a3 == v12 )
    {
      v13 = v11 + 40;
      v14 = *((_QWORD *)v11 + 5);
      if ( *(char **)(v14 + 8) != v11 + 40 )
        goto LABEL_60;
      v15 = (_QWORD *)*((_QWORD *)v11 + 6);
      if ( (_QWORD *)*v15 != v13 )
        goto LABEL_60;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *v13 = 0LL;
      *((_QWORD *)v11 + 6) = 0LL;
      v16 = v11 + 24;
      v17 = *((_QWORD *)v11 + 3);
      if ( *(char **)(v17 + 8) != v11 + 24 )
        goto LABEL_60;
      v18 = (_QWORD *)*((_QWORD *)v11 + 4);
      if ( (_QWORD *)*v18 != v16 )
        goto LABEL_60;
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      *v16 = 0LL;
      *((_QWORD *)v11 + 4) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v11);
    }
    else
    {
      *((_QWORD *)v11 + 1) = a3 - v12;
    }
  }
  v19 = *a2 + a2[1];
  if ( v19 >= a4 )
  {
    if ( v19 <= a4 )
      goto LABEL_56;
    if ( v9 && v9[56] == 2 )
    {
      *((_QWORD *)v9 + 1) = *(_QWORD *)v9 + *((_QWORD *)v9 + 1) - a4;
      *(_QWORD *)v9 = a4;
      goto LABEL_56;
    }
    Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
    if ( !Block )
      goto LABEL_56;
    *((_BYTE *)Block + 56) = 2;
    v30 = (unsigned __int64 **)(a2 + 5);
    *((_QWORD *)Block + 2) = 0LL;
    *(_QWORD *)Block = a4;
    *((_QWORD *)Block + 1) = a2[1] + *a2 - a4;
    v31 = (unsigned __int64 *)((char *)Block + 40);
    v32 = a2[5];
    if ( *(unsigned __int64 **)(v32 + 8) == a2 + 5 )
    {
      *v31 = v32;
      *((_QWORD *)Block + 6) = v30;
      *(_QWORD *)(v32 + 8) = v31;
      v33 = 0LL;
      *v30 = v31;
      v34 = 0;
      v35 = (_QWORD *)a2[6];
      while ( v35 != (_QWORD *)((char *)this + 80) && !v34 )
      {
        v33 = v35 - 5;
        v36 = *((_BYTE *)v35 + 16);
        if ( v36 == 2 || v36 == 4 )
          v34 = 1;
        else
          v35 = (_QWORD *)v35[1];
      }
      v37 = (_QWORD *)((char *)Block + 24);
      v38 = (char *)(v33 + 3);
      if ( !v34 )
        v38 = (char *)this + 48;
      v39 = *(_QWORD *)v38;
      if ( *(char **)(*(_QWORD *)v38 + 8LL) == v38 )
      {
        *v37 = v39;
        v37[1] = v38;
        *(_QWORD *)(v39 + 8) = v37;
        *(_QWORD *)v38 = v37;
        goto LABEL_56;
      }
    }
    goto LABEL_60;
  }
  if ( !v9 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  v20 = *(_QWORD *)v9;
  v21 = *((_QWORD *)v9 + 1);
  if ( v21 + *(_QWORD *)v9 < a4 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  if ( v9[56] != 2 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  v22 = v21 - a4;
  if ( !(v22 + v20) )
  {
    v23 = v9 + 40;
    v24 = *((_QWORD *)v9 + 5);
    if ( *(char **)(v24 + 8) == v9 + 40 )
    {
      v25 = (_QWORD *)*((_QWORD *)v9 + 6);
      if ( (_QWORD *)*v25 == v23 )
      {
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        *v23 = 0LL;
        *((_QWORD *)v9 + 6) = 0LL;
        v26 = v9 + 24;
        v27 = *((_QWORD *)v9 + 3);
        if ( *(char **)(v27 + 8) == v9 + 24 )
        {
          v28 = (_QWORD *)*((_QWORD *)v9 + 4);
          if ( (_QWORD *)*v28 == v26 )
          {
            *v28 = v27;
            *(_QWORD *)(v27 + 8) = v28;
            *v26 = 0LL;
            *((_QWORD *)v9 + 4) = 0LL;
            VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v9);
            goto LABEL_56;
          }
        }
      }
    }
LABEL_60:
    __fastfail(3u);
  }
  *(_QWORD *)v9 = a4;
  *((_QWORD *)v9 + 1) = v22 + v20;
LABEL_56:
  a2[2] |= 1uLL;
  v40 = a2 + 3;
  *a2 = a3;
  a2[1] = a4 - a3;
  *((_BYTE *)a2 + 56) = 5;
  v41 = a2[3];
  if ( *(unsigned __int64 **)(v41 + 8) != a2 + 3 )
    goto LABEL_60;
  v42 = (unsigned __int64 *)a2[4];
  if ( (_QWORD *)*v42 != v40 )
    goto LABEL_60;
  *v42 = v41;
  *(_QWORD *)(v41 + 8) = v42;
  v43 = (_QWORD *)((char *)this + 64);
  v44 = *((_QWORD *)this + 8);
  if ( *(VIDMM_LINEAR_POOL **)(v44 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 64) )
    goto LABEL_60;
  *v40 = v44;
  a2[4] = (unsigned __int64)v43;
  *(_QWORD *)(v44 + 8) = v40;
  *v43 = v40;
}
