/*
 * XREFs of ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400FBCD4
 * Callers:
 *     ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1400997B0 (-FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x14009B7C8 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6FE0 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     ?ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B7130 (-ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEA.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400BA5B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDM.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z @ 0x1400BAEFC (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_TEMPORARY_RESOURCE_LEGACY@@@Z @ 0x1400BDB20 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_TEMPORARY_RESOURCE_LEGACY@@@Z.c)
 *     ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1400BE670 (-FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1400FB790 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAX_KPEAUVIDMM_PARTITION@.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x14011E580 (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400FC0EC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::Free(VIDMM_LINEAR_POOL *this, _QWORD *Entry)
{
  __int64 *v4; // rbx
  char *v5; // rcx
  VIDMM_LINEAR_POOL *v6; // rax
  char *v7; // r15
  __int64 v8; // rdi
  char *v9; // rsi
  _QWORD *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 **v14; // rax
  __int64 v15; // rcx
  char *v16; // r8
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rax
  char *v22; // rbp
  __int64 v23; // rax
  char **v24; // rax
  char *v25; // r9
  char *v26; // rax
  __int64 v27; // r8
  char v28; // cl
  char v29; // cl
  VIDMM_LINEAR_POOL *v30; // rcx
  char *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  __int64 **v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = Entry;
    WdLogGlobalForLineNumber = 1730;
  }
  v4 = Entry + 3;
  v5 = (char *)Entry[3];
  if ( *((_BYTE *)Entry + 56) == 4 )
  {
    v6 = (VIDMM_LINEAR_POOL *)Entry[4];
    v7 = (char *)this + 48;
    v8 = (__int64)(v5 - 24);
    v9 = (char *)v6 - 24;
    if ( v6 == (VIDMM_LINEAR_POOL *)((char *)this + 48) )
      v9 = 0LL;
    if ( v5 == v7 )
      v8 = 0LL;
    if ( *((__int64 **)v5 + 1) == v4 && *(__int64 **)v6 == v4 )
    {
      *(_QWORD *)v6 = v5;
      *((_QWORD *)v5 + 1) = v6;
      *v4 = 0LL;
      Entry[4] = 0LL;
      if ( !*((_DWORD *)this + 4) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1757;
        DxgkLogInternalTriageEvent(v39, 0x40000LL);
      }
      --*((_DWORD *)this + 4);
      v10 = Entry + 5;
      goto LABEL_13;
    }
    goto LABEL_20;
  }
  if ( *((__int64 **)v5 + 1) != v4 )
    goto LABEL_20;
  v24 = (char **)Entry[4];
  if ( *v24 != (char *)v4 )
    goto LABEL_20;
  *v24 = v5;
  v10 = Entry + 5;
  *((_QWORD *)v5 + 1) = v24;
  v25 = (char *)this + 80;
  *v4 = 0LL;
  Entry[4] = 0LL;
  v26 = (char *)Entry[5];
  v27 = Entry[6];
  while ( 1 )
  {
    if ( v26 == v25 || (char *)v27 == v25 )
    {
      v7 = (char *)this + 48;
      if ( v26 == v25 )
      {
        v31 = (char *)*((_QWORD *)this + 7);
        v8 = 0LL;
        goto LABEL_47;
      }
      v9 = 0LL;
      if ( *(char **)v7 != v7 )
      {
        v8 = *(_QWORD *)v7 - 24LL;
        goto LABEL_23;
      }
      v8 = 0LL;
      v16 = (char *)this + 48;
LABEL_24:
      *((_BYTE *)Entry + 56) = 2;
      Entry[2] = 0LL;
      if ( v9 )
      {
        v17 = v9 + 24;
        v18 = *(_QWORD *)v17;
        if ( *(char **)(*(_QWORD *)v17 + 8LL) == v17 )
        {
          *v4 = v18;
          Entry[4] = v17;
          *(_QWORD *)(v18 + 8) = v4;
          *(_QWORD *)v17 = v4;
          return;
        }
        goto LABEL_20;
      }
      if ( v8 )
      {
        v37 = *(__int64 ***)(v8 + 32);
        v38 = v8 + 24;
        if ( *v37 != (__int64 *)v38 )
          goto LABEL_20;
        *v4 = v38;
        Entry[4] = v37;
        *v37 = v4;
        *(_QWORD *)(v38 + 8) = v4;
      }
      else
      {
        v40 = *(_QWORD *)v16;
        if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 )
          goto LABEL_20;
        *v4 = v40;
        Entry[4] = v16;
        *(_QWORD *)(v40 + 8) = v4;
        *(_QWORD *)v16 = v4;
      }
      return;
    }
    v8 = (__int64)(v26 - 40);
    v26 = *(char **)v26;
    v28 = *(_BYTE *)(v8 + 56);
    v9 = (char *)(v27 - 40);
    v27 = *(_QWORD *)(v27 + 8);
    if ( v28 != 3 && (unsigned __int8)(v28 - 5) > 2u )
      break;
    v29 = v9[56];
    if ( v29 != 3 && (unsigned __int8)(v29 - 5) > 2u )
    {
      v30 = (VIDMM_LINEAR_POOL *)*((_QWORD *)v9 + 3);
      v7 = (char *)this + 48;
      v8 = 0LL;
      if ( v30 != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
        v8 = (__int64)v30 - 24;
      goto LABEL_13;
    }
  }
  v31 = *(char **)(v8 + 32);
  v7 = (char *)this + 48;
LABEL_47:
  v9 = 0LL;
  if ( v31 != v7 )
    v9 = v31 - 24;
LABEL_13:
  if ( v9 )
  {
    v11 = *((_QWORD *)v9 + 1);
    if ( v11 + *(_QWORD *)v9 == *Entry && v9[56] == 2 )
    {
      *((_QWORD *)v9 + 1) = v11 + Entry[1];
      v12 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 )
        goto LABEL_20;
      v13 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v13 != v10 )
        goto LABEL_20;
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      if ( *(_BYTE *)this )
      {
        v14 = (__int64 **)((char *)this + 96);
        *((_BYTE *)Entry + 56) = 1;
        v15 = *((_QWORD *)this + 12);
        if ( *(VIDMM_LINEAR_POOL **)(v15 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 96) )
          goto LABEL_20;
        *v4 = v15;
        Entry[4] = v14;
        *(_QWORD *)(v15 + 8) = v4;
        *v14 = v4;
      }
      else
      {
        ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), Entry);
      }
      if ( v8 )
      {
        v32 = *((_QWORD *)v9 + 1);
        if ( *(_QWORD *)v8 == v32 + *(_QWORD *)v9 && *(_BYTE *)(v8 + 56) == 2 )
        {
          *((_QWORD *)v9 + 1) = v32 + *(_QWORD *)(v8 + 8);
          v33 = *(_QWORD *)(v8 + 24);
          if ( *(_QWORD *)(v33 + 8) == v8 + 24 )
          {
            v34 = *(_QWORD **)(v8 + 32);
            if ( *v34 == v8 + 24 )
            {
              *v34 = v33;
              *(_QWORD *)(v33 + 8) = v34;
              v35 = *(_QWORD *)(v8 + 40);
              if ( *(_QWORD *)(v35 + 8) == v8 + 40 )
              {
                v36 = *(_QWORD **)(v8 + 48);
                if ( *v36 == v8 + 40 )
                {
                  *v36 = v35;
                  *(_QWORD *)(v35 + 8) = v36;
                  VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v8);
                  return;
                }
              }
            }
          }
LABEL_20:
          __fastfail(3u);
        }
      }
      return;
    }
  }
LABEL_23:
  v16 = v7;
  if ( !v8 )
    goto LABEL_24;
  v19 = Entry[1];
  if ( *(_QWORD *)v8 != v19 + *Entry || *(_BYTE *)(v8 + 56) != 2 )
    goto LABEL_24;
  *(_QWORD *)(v8 + 8) += v19;
  *(_QWORD *)v8 = *Entry;
  v20 = *v10;
  if ( *(_QWORD **)(*v10 + 8LL) != v10 )
    goto LABEL_20;
  v21 = (_QWORD *)v10[1];
  if ( (_QWORD *)*v21 != v10 )
    goto LABEL_20;
  *v21 = v20;
  *(_QWORD *)(v20 + 8) = v21;
  if ( *(_BYTE *)this )
  {
    v22 = (char *)this + 96;
    *((_BYTE *)Entry + 56) = 1;
    v23 = *(_QWORD *)v22;
    if ( *(char **)(*(_QWORD *)v22 + 8LL) == v22 )
    {
      *v4 = v23;
      Entry[4] = v22;
      *(_QWORD *)(v23 + 8) = v4;
      *(_QWORD *)v22 = v4;
      return;
    }
    goto LABEL_20;
  }
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), Entry);
}
