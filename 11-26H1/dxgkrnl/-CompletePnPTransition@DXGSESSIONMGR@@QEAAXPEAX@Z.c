/*
 * XREFs of ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1402026B0
 * Callers:
 *     DxgkCompletePnPTransition @ 0x140204E64 (DxgkCompletePnPTransition.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x140202B30 (-FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::CompletePnPTransition(DXGSESSIONMGR *this, struct _PNP_TRANS_TOKEN *a2)
{
  _QWORD *i; // rbx
  int updated; // eax
  __int64 v6; // rbx
  struct _PNP_TRANS_TOKEN **v7; // rdx
  void **v8; // rcx
  _BYTE v9[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  for ( i = (_QWORD *)((char *)a2 + 24);
        (_QWORD *)*i != i;
        DXGSESSIONDATA::FinishPnPTransitionOnSession(*(DXGSESSIONDATA **)(*i - 16LL), a2) )
  {
    ;
  }
  if ( *((_BYTE *)a2 + 72) )
  {
    updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_START, (char *)a2 + 56, 16LL);
    if ( updated < 0 )
    {
      v6 = updated;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5943;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to send Console Adapter Start WNF (Status=0x%I64x)",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v7 = (struct _PNP_TRANS_TOKEN **)*((_QWORD *)a2 + 1);
  if ( v7[1] != (struct _PNP_TRANS_TOKEN *)((char *)a2 + 8)
    || (v8 = (void **)*((_QWORD *)a2 + 2), *v8 != (char *)a2 + 8) )
  {
    __fastfail(3u);
  }
  *v8 = v7;
  v7[1] = (struct _PNP_TRANS_TOKEN *)v8;
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), a2);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
}
