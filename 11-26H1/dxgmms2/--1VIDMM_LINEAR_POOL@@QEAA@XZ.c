/*
 * XREFs of ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x14011E580
 * Callers:
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x14004F82C (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?SetSegmentPowerState@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXII_N@Z @ 0x140037730 (-SetSegmentPowerState@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXII_N@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400FBCD4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400FC0EC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::~VIDMM_LINEAR_POOL(VIDMM_LINEAR_POOL *this)
{
  char *v1; // rsi
  char *v3; // rdi
  VIDMM_LINEAR_POOL *v4; // rdi
  _QWORD *v5; // rax
  VIDMM_LINEAR_POOL *v6; // rdx
  _QWORD **v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rax
  void *v11; // r15
  __int64 v12; // r14
  VIDMM_PHYSICAL_ADAPTER_PBMM *i; // rbp
  char *v14; // rdx
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  VIDMM_LINEAR_POOL **v17; // rax
  VIDMM_LINEAR_POOL **v18; // r8
  VIDMM_LINEAR_POOL *v19; // rcx

  v1 = (char *)this + 128;
  v3 = (char *)*((_QWORD *)this + 16);
  while ( v3 != v1 )
  {
    v14 = v3 - 24;
    v3 = *(char **)v3;
    VIDMM_LINEAR_POOL::Free(this, v14);
  }
  v4 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 18);
  while ( v4 != (VIDMM_LINEAR_POOL *)((char *)this + 144) )
  {
    v15 = (_QWORD *)((char *)v4 - 24);
    v4 = *(VIDMM_LINEAR_POOL **)v4;
    VIDMM_LINEAR_POOL::Free(this, v15);
  }
  v5 = (_QWORD *)((char *)this + 48);
  v6 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 6);
  if ( v6 != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
  {
    if ( *((_QWORD **)v6 + 1) != v5
      || (v16 = *(_QWORD *)v6, *(VIDMM_LINEAR_POOL **)(*(_QWORD *)v6 + 8LL) != v6)
      || (*v5 = v16,
          *(_QWORD *)(v16 + 8) = v5,
          v17 = (VIDMM_LINEAR_POOL **)((char *)this + 80),
          v18 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 10),
          v18[1] != (VIDMM_LINEAR_POOL *)((char *)this + 80))
      || (v19 = *v18, *((VIDMM_LINEAR_POOL ***)*v18 + 1) != v18) )
    {
LABEL_15:
      __fastfail(3u);
    }
    *v17 = v19;
    *((_QWORD *)v19 + 1) = v17;
    VIDMM_LINEAR_POOL::FreeBlock(this, (VIDMM_LINEAR_POOL *)((char *)v6 - 24));
  }
  v7 = (_QWORD **)((char *)this + 112);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    if ( (_QWORD **)v8[1] != v7 )
      goto LABEL_15;
    v9 = (_QWORD *)*v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 )
      goto LABEL_15;
    *v7 = v9;
    v9[1] = v7;
    v10 = v8[2];
    if ( v10 )
    {
      v11 = (void *)(v10 - 8);
      v12 = *(_QWORD *)(v10 - 8);
      for ( i = (VIDMM_PHYSICAL_ADAPTER_PBMM *)(v10 + (v12 << 6)); v12; --v12 )
      {
        i = (VIDMM_PHYSICAL_ADAPTER_PBMM *)((char *)i - 64);
        VIDMM_PHYSICAL_ADAPTER_PBMM::SetSegmentPowerState(i);
      }
      operator delete(v11);
    }
    operator delete(v8);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
}
