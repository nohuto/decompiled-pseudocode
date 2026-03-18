/*
 * XREFs of ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400F1DE0
 * Callers:
 *     ?AllocateGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@PEAXW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400ACD30 (-AllocateGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FL.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1400F19EC (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x140119790 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x14003D9B4 (-UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x14003F730 (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400F1384 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400F21B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400F3100 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140109FF0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(VIDMM_RECYCLE_HEAP_MGR *this, char a2, char a3)
{
  char *v4; // r15
  char *v5; // rsi
  char *v8; // rdi
  struct VIDMM_RECYCLE_BLOCK *v9; // rdx
  bool v10; // al
  char *v11; // rbx
  char **v12; // rax
  int v13; // eax
  int v14; // eax
  unsigned __int8 v15; // dl
  char **v16; // rax
  _QWORD *v17; // rbx
  struct VIDMM_RECYCLE_BLOCK *v18; // rdi
  struct VIDMM_RECYCLE_BLOCK *v19; // rdx
  bool v20; // al
  _QWORD *v21; // rbx
  struct VIDMM_RECYCLE_BLOCK **v22; // rax
  int v23; // eax
  unsigned __int8 v24; // dl
  VIDMM_RECYCLE_MULTIRANGE *v25; // rcx
  VIDMM_RECYCLE_MULTIRANGE *v26; // rcx
  _QWORD *v27; // rax
  struct VIDMM_RECYCLE_RANGE *v28; // rdx
  _QWORD *v29; // rcx
  _QWORD *v30; // [rsp+20h] [rbp-10h] BYREF
  char *v31; // [rsp+28h] [rbp-8h]
  int v32; // [rsp+60h] [rbp+30h] BYREF

  v31 = (char *)&v30;
  v4 = (char *)this + 1544;
  v5 = (char *)*((_QWORD *)this + 193);
  v30 = &v30;
  while ( 1 )
  {
    v8 = v5;
    if ( v5 == v4 )
      break;
    v9 = VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock;
    v10 = VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_14008A530 << 20)
       || (__int64)VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_14008A534 << 20);
    v11 = v5 - 104;
    if ( a3 )
    {
      if ( !v10 )
        break;
    }
    else if ( a2 && *((_QWORD *)v11 + 12) > *((_QWORD *)this + 197) )
    {
      break;
    }
    v5 = *(char **)v5;
    if ( *((char **)v5 + 1) != v8 || (v12 = (char **)*((_QWORD *)v8 + 1), *v12 != v8) )
LABEL_16:
      __fastfail(3u);
    *v12 = v5;
    *((_QWORD *)v5 + 1) = v12;
    v13 = *((_DWORD *)v11 + 16);
    *((_QWORD *)v8 + 1) = 0LL;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v11 + 12) = 0LL;
    if ( v13 == 5 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(*((_QWORD *)v11 + 4) - *((_QWORD *)v11 + 5), v9);
    }
    else if ( (unsigned int)(v13 - 3) <= 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(*((_QWORD *)v11 + 4) - *((_QWORD *)v11 + 5), v9);
    }
    LOBYTE(v32) = 0;
    v14 = VIDMM_RECYCLE_RANGE::DebouncedUnlock((VIDMM_RECYCLE_RANGE *)v11, (bool *)&v32);
    if ( v14 < 0 )
    {
      WdLogSingleEntry3(3LL, v11, v14, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
      v16 = (char **)v31;
      WdLogGlobalForLineNumber = 10905;
      if ( *(_QWORD ***)v31 != &v30 )
        goto LABEL_16;
      *((_QWORD *)v8 + 1) = v31;
      *(_QWORD *)v8 = &v30;
      *v16 = v8;
      v31 = v8;
    }
    if ( !(_BYTE)v32 )
    {
      v26 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v11 + 17);
      if ( v26 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v26, v15);
    }
  }
  v17 = v30;
  while ( v17 != &v30 )
  {
    v27 = v17;
    v28 = (struct VIDMM_RECYCLE_RANGE *)(v17 - 13);
    v17 = (_QWORD *)*v17;
    if ( (_QWORD *)v17[1] != v27 )
      goto LABEL_16;
    v29 = (_QWORD *)v27[1];
    if ( (_QWORD *)*v29 != v27 )
      goto LABEL_16;
    *v29 = v17;
    v17[1] = v29;
    v27[1] = 0LL;
    *v27 = 0LL;
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, v28);
  }
  v18 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 195);
  while ( 1 )
  {
    v19 = v18;
    if ( v18 == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1560) )
      break;
    v20 = VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_14008A530 << 20)
       || (__int64)VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_14008A534 << 20);
    v21 = (_QWORD *)((char *)v18 - 104);
    if ( a3 )
    {
      if ( !v20 )
        return;
    }
    else if ( a2 && v21[12] > *((_QWORD *)this + 197) )
    {
      return;
    }
    v18 = *(struct VIDMM_RECYCLE_BLOCK **)v18;
    if ( *((struct VIDMM_RECYCLE_BLOCK **)v18 + 1) != v19 )
      goto LABEL_16;
    v22 = (struct VIDMM_RECYCLE_BLOCK **)*((_QWORD *)v19 + 1);
    if ( *v22 != v19 )
      goto LABEL_16;
    *v22 = v18;
    *((_QWORD *)v18 + 1) = v22;
    v23 = *((_DWORD *)v21 + 16);
    *((_QWORD *)v19 + 1) = 0LL;
    *(_QWORD *)v19 = 0LL;
    v21[12] = 0LL;
    if ( v23 == 5 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(v21[4] - v21[5], v19);
    }
    else if ( (unsigned int)(v23 - 3) <= 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(v21[4] - v21[5], v19);
    }
    v32 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_BLOCK **)v21, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v32);
    if ( !v32 )
    {
      v25 = (VIDMM_RECYCLE_MULTIRANGE *)v21[17];
      if ( v25 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v25, v24);
    }
  }
}
