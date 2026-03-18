/*
 * XREFs of ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1400F1660
 * Callers:
 *     ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1400F1640 (-VidMmRangeCurationThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x14003854C (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x14003D9B4 (-UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x14003F730 (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400F1384 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400F21B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400F3100 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F658C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140109FF0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::CurationThread(VIDMM_RECYCLE_HEAP_MGR *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct VIDMM_RECYCLE_BLOCK *v4; // rdx
  char *v5; // r12
  char *v6; // r15
  char *v7; // r14
  char *v8; // rsi
  char **v9; // rax
  int v10; // eax
  int v11; // eax
  char **v12; // rax
  _QWORD *v13; // rsi
  char *v14; // r14
  char *v15; // rsi
  VIDMM_RECYCLE_HEAP_MGR *v16; // rcx
  struct VIDMM_RECYCLE_RANGE *v17; // r15
  unsigned __int8 v18; // dl
  VIDMM_RECYCLE_MULTIRANGE *v19; // rcx
  signed __int32 v20; // eax
  VIDMM_RECYCLE_MULTIRANGE *v21; // rcx
  _QWORD *v22; // rax
  struct VIDMM_RECYCLE_RANGE *v23; // rdx
  _QWORD *v24; // rcx
  bool v25; // [rsp+50h] [rbp-39h] BYREF
  int v26; // [rsp+58h] [rbp-31h] BYREF
  _QWORD *v27; // [rsp+60h] [rbp-29h] BYREF
  char *v28; // [rsp+68h] [rbp-21h]
  char *v29; // [rsp+70h] [rbp-19h] BYREF
  char v30; // [rsp+78h] [rbp-11h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-9h] BYREF

  v29 = (char *)this + 1328;
  v30 = 0;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(v2, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v29);
  v3 = *((_QWORD *)this + 1);
  ++*((_QWORD *)this + 197);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v3 + 16), &ApcState);
  v28 = (char *)&v27;
  v5 = (char *)this + 1544;
  v6 = (char *)*((_QWORD *)this + 193);
  v27 = &v27;
  while ( 1 )
  {
    v7 = v6;
    if ( v6 == v5 )
      break;
    v8 = v6 - 104;
    if ( *((_QWORD *)v6 - 1) > *((_QWORD *)this + 197) )
      break;
    v6 = *(char **)v6;
    if ( *((char **)v6 + 1) != v7 || (v9 = (char **)*((_QWORD *)v7 + 1), *v9 != v7) )
LABEL_13:
      __fastfail(3u);
    *v9 = v6;
    *((_QWORD *)v6 + 1) = v9;
    v10 = *((_DWORD *)v8 + 16);
    *((_QWORD *)v7 + 1) = 0LL;
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)v8 + 12) = 0LL;
    if ( v10 == 5 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(*((_QWORD *)v8 + 4) - *((_QWORD *)v8 + 5), v4);
    }
    else if ( (unsigned int)(v10 - 3) <= 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(*((_QWORD *)v8 + 4) - *((_QWORD *)v8 + 5), v4);
    }
    v25 = 0;
    v11 = VIDMM_RECYCLE_RANGE::DebouncedUnlock((VIDMM_RECYCLE_RANGE *)v8, &v25);
    if ( v11 < 0 )
    {
      WdLogSingleEntry3(3LL, v8, v11, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
      v12 = (char **)v28;
      WdLogGlobalForLineNumber = 10905;
      if ( *(_QWORD ***)v28 != &v27 )
        goto LABEL_13;
      *((_QWORD *)v7 + 1) = v28;
      *(_QWORD *)v7 = &v27;
      *v12 = v7;
      v28 = v7;
    }
    if ( !v25 )
    {
      v21 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v8 + 17);
      if ( v21 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v21, (unsigned __int8)v4);
    }
  }
  v13 = v27;
  while ( v13 != &v27 )
  {
    v22 = v13;
    v23 = (struct VIDMM_RECYCLE_RANGE *)(v13 - 13);
    v13 = (_QWORD *)*v13;
    if ( (_QWORD *)v13[1] != v22 )
      goto LABEL_13;
    v24 = (_QWORD *)v22[1];
    if ( (_QWORD *)*v24 != v22 )
      goto LABEL_13;
    *v24 = v13;
    v13[1] = v24;
    v22[1] = 0LL;
    *v22 = 0LL;
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, v23);
  }
  v14 = (char *)this + 1560;
  v15 = (char *)*((_QWORD *)this + 195);
  while ( v15 != v14 )
  {
    VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v17 = (struct VIDMM_RECYCLE_RANGE *)(v15 - 104);
    if ( *((_QWORD *)v15 - 1) > *((_QWORD *)this + 197) )
      break;
    v15 = *(char **)v15;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v16, v17);
    v26 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_BLOCK **)v17, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v26);
    if ( !v26 )
    {
      v19 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v17 + 17);
      if ( v19 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v19, v18);
    }
  }
  KeUnstackDetachProcess(&ApcState);
  if ( *((char **)this + 195) == v14 && *((char **)this + 193) == v5 )
  {
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)this + 396, 2, 1);
    _InterlockedExchange((volatile __int32 *)this + 384, 0);
    if ( v20 == 1 )
LABEL_28:
      KeSetEvent(*((PRKEVENT *)this + 199), 0, 0);
  }
  else
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 396, 2, 1) == 1 )
    {
      _InterlockedExchange((volatile __int32 *)this + 384, 0);
      goto LABEL_28;
    }
    KeSetTimer((PKTIMER)((char *)this + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1440));
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v29);
}
