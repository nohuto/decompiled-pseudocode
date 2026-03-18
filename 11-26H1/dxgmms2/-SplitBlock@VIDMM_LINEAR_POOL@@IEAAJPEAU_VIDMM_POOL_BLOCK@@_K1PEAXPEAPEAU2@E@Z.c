/*
 * XREFs of ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z @ 0x1400FAEE4
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400FA25C (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1400FB248 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400FC0EC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::SplitBlock(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        struct _VIDMM_POOL_BLOCK **a6)
{
  VIDMM_LINEAR_POOL *v9; // r15
  struct _VIDMM_POOL_BLOCK *v10; // rdi
  struct _VIDMM_POOL_BLOCK *v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r13
  struct _VIDMM_POOL_BLOCK *v15; // rax
  _QWORD *v16; // rax
  char *v17; // rcx
  char **v18; // rax
  char *v19; // rdx
  struct _VIDMM_POOL_BLOCK *v20; // rdi
  char *v21; // rax
  struct _VIDMM_POOL_BLOCK **v22; // rdx
  _QWORD *v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // rdx
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  char **v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // r8
  struct _VIDMM_POOL_BLOCK *Block; // rax
  __int64 v33; // rcx
  int v34; // eax

  v9 = this;
  v10 = 0LL;
  v11 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v12[3] = a2;
    v12[4] = *(_QWORD *)a2;
    v12[5] = *(_QWORD *)a2 + *((_QWORD *)a2 + 1);
    v12[6] = a3;
    v12[7] = a4;
    WdLogGlobalForLineNumber = 1560;
  }
  v13 = a3 - *(_QWORD *)a2;
  if ( a3 != *(_QWORD *)a2 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      WdLogGlobalForLineNumber = 1570;
    }
    Block = VIDMM_LINEAR_POOL::AllocateBlock(v9);
    v10 = Block;
    if ( !Block )
    {
      _InterlockedIncrement(&dword_14008A7BC);
      WdLogSingleEntry0(6LL);
      v34 = 1592;
LABEL_26:
      WdLogGlobalForLineNumber = v34;
      DxgkLogInternalTriageEvent(v33, 262145LL);
      return 3221225495LL;
    }
    memset(Block, 0, 0x40uLL);
    *((_BYTE *)v10 + 56) = 2;
    *(_QWORD *)v10 = *(_QWORD *)a2;
    *((_QWORD *)v10 + 1) = v13;
    if ( g_IsInternalReleaseOrDbg )
    {
      this = (VIDMM_LINEAR_POOL *)WdLogNewEntry5_WdTrace(this);
      *((_QWORD *)this + 3) = v10;
      *((_QWORD *)this + 4) = *(_QWORD *)v10;
      *((_QWORD *)this + 5) = *(_QWORD *)v10 + *((_QWORD *)v10 + 1);
      WdLogGlobalForLineNumber = 1587;
    }
  }
  v14 = *((_QWORD *)a2 + 1) + *(_QWORD *)a2 - a4;
  if ( !v14 )
    goto LABEL_10;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this);
    WdLogGlobalForLineNumber = 1605;
  }
  v15 = VIDMM_LINEAR_POOL::AllocateBlock(v9);
  v11 = v15;
  if ( !v15 )
  {
    if ( v10 )
      VIDMM_LINEAR_POOL::FreeBlock(v9, v10);
    _InterlockedIncrement(&dword_14008A7BC);
    WdLogSingleEntry0(6LL);
    v34 = 1632;
    goto LABEL_26;
  }
  memset(v15, 0, 0x40uLL);
  *((_BYTE *)v11 + 56) = 2;
  *(_QWORD *)v11 = a4;
  *((_QWORD *)v11 + 1) = v14;
  if ( g_IsInternalReleaseOrDbg )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
    v16[3] = v11;
    v16[4] = *(_QWORD *)v11;
    v16[5] = *(_QWORD *)v11 + *((_QWORD *)v11 + 1);
    WdLogGlobalForLineNumber = 1622;
  }
LABEL_10:
  v17 = (char *)a2 + 24;
  if ( v10 )
  {
    v18 = (char **)*((_QWORD *)a2 + 4);
    v19 = (char *)v10 + 24;
    if ( *v18 != v17 )
      goto LABEL_21;
    *((_QWORD *)v10 + 4) = v18;
    v20 = (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 40);
    *(_QWORD *)v19 = v17;
    *v18 = v19;
    v21 = (char *)a2 + 40;
    *((_QWORD *)a2 + 4) = v19;
    v22 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
    if ( *v22 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      goto LABEL_21;
    *(_QWORD *)v20 = v21;
    *((_QWORD *)v20 + 1) = v22;
    *v22 = v20;
    *((_QWORD *)a2 + 6) = v20;
    *((_QWORD *)a2 + 1) -= v13;
    *(_QWORD *)a2 = a3;
  }
  else
  {
    v21 = (char *)a2 + 40;
  }
  v23 = (_QWORD *)((char *)a2 + 24);
  if ( !v11 )
    goto LABEL_18;
  v24 = *(_QWORD *)v17;
  v25 = (_QWORD *)((char *)v11 + 24);
  if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17
    || (*v25 = v24,
        v26 = (_QWORD *)((char *)v11 + 40),
        v25[1] = v17,
        *(_QWORD *)(v24 + 8) = v25,
        *(_QWORD *)v17 = v25,
        v27 = *(_QWORD *)v21,
        *(char **)(*(_QWORD *)v21 + 8LL) != v21) )
  {
LABEL_21:
    __fastfail(3u);
  }
  *v26 = v27;
  v26[1] = v21;
  *(_QWORD *)(v27 + 8) = v26;
  v23 = (_QWORD *)((char *)a2 + 24);
  *(_QWORD *)v21 = v26;
  *((_QWORD *)a2 + 1) -= v14;
LABEL_18:
  *((_QWORD *)a2 + 2) = a5;
  *((_BYTE *)a2 + 56) = 3;
  v28 = *(_QWORD *)v17;
  if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 )
    goto LABEL_21;
  v29 = (char **)*((_QWORD *)a2 + 4);
  if ( *v29 != v17 )
    goto LABEL_21;
  *v29 = (char *)v28;
  *(_QWORD *)(v28 + 8) = v29;
  v30 = (_QWORD *)((char *)v9 + 64);
  v31 = *((_QWORD *)v9 + 8);
  if ( *(VIDMM_LINEAR_POOL **)(v31 + 8) != (VIDMM_LINEAR_POOL *)((char *)v9 + 64) )
    goto LABEL_21;
  *((_QWORD *)a2 + 4) = v30;
  *v23 = v31;
  *(_QWORD *)(v31 + 8) = v23;
  *v30 = v23;
  *a6 = a2;
  return 0LL;
}
