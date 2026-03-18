/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400F6060
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x140004860 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x140035DF8 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x140047020 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400F1384 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400F21B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1400F6448 (--1VIDMM_RECYCLE_HEAP@@QEAA@XZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F658C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1400F68A8 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(VIDMM_RECYCLE_HEAP_MGR *this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  __int64 v4; // rax
  char **v5; // rdx
  __int64 v6; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v7; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v8; // rdi
  struct VIDMM_RECYCLE_RANGE *v9; // r14
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  VIDMM_RECYCLE_BLOCK **v12; // rsi
  PVOID *v13; // rdi
  __int64 v14; // rsi
  void *v15; // rdx
  struct _LOOKASIDE_LIST_EX *v16; // rcx
  struct _LOOKASIDE_LIST_EX *v17; // rcx
  void *v18; // rcx
  bool v19; // [rsp+58h] [rbp-29h] BYREF
  int v20; // [rsp+5Ch] [rbp-25h] BYREF
  char *v21; // [rsp+60h] [rbp-21h] BYREF
  char v22; // [rsp+68h] [rbp-19h]
  _BYTE v23[24]; // [rsp+70h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp+7h] BYREF

  *(_QWORD *)this = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  v2 = *((_QWORD *)this + 1);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v2 + 16), &ApcState);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v23,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
  v3 = (char *)this + 1600;
  v4 = *((_QWORD *)this + 200);
  if ( v4 )
  {
    if ( *(char **)(v4 + 8) != v3 || (v5 = (char **)*((_QWORD *)this + 201), *v5 != v3) )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  v22 = 0;
  v21 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(v6, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v21);
  _InterlockedExchange((volatile __int32 *)this + 396, 1);
  v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((unsigned int *)this + 384);
  if ( (_DWORD)v7 && !KeCancelTimer((PKTIMER)((char *)this + 1376)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v21);
    KeWaitForSingleObject(*((PVOID *)this + 199), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v21);
  }
  v8 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 193);
  while ( v8 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544) )
  {
    v9 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v8 - 104);
    v8 = *(VIDMM_RECYCLE_HEAP_MGR **)v8;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v7, v9);
    v19 = 0;
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v9, &v19);
    if ( !v19 )
    {
      v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v9 + 17);
      if ( v7 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v7);
    }
  }
  v10 = (_QWORD *)((char *)this + 1560);
  while ( 1 )
  {
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 == v10 )
      break;
    v12 = (VIDMM_RECYCLE_BLOCK **)(v11 - 13);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v7, (struct VIDMM_RECYCLE_RANGE *)(v11 - 13));
    v20 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(v12, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v20);
    if ( !v20 )
    {
      v7 = v12[17];
      if ( v7 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v7);
    }
  }
  v13 = (PVOID *)((char *)this + 1656);
  v14 = 4LL;
  do
  {
    v15 = *(v13 - 4);
    if ( v15 )
      ExFreeToLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 164), v15);
    if ( *v13 )
      ExFreeToLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 165), *v13);
    ++v13;
    --v14;
  }
  while ( v14 );
  v16 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 164);
  if ( v16 )
  {
    ExDeleteLookasideListEx(v16);
    operator delete(*((void **)this + 164));
  }
  v17 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 165);
  if ( v17 )
  {
    ExDeleteLookasideListEx(v17);
    operator delete(*((void **)this + 165));
  }
  v18 = (void *)*((_QWORD *)this + 199);
  if ( v18 )
    operator delete(v18);
  KeUnstackDetachProcess(&ApcState);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v21);
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1240));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1168));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1096));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1024));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 952));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 880));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 808));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 736));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 664));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 592));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 520));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 448));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 376));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 304));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 232));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 160));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 88));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 16));
  *(_QWORD *)this = &VIDMM_HEAP_INTERFACE::`vftable';
}
