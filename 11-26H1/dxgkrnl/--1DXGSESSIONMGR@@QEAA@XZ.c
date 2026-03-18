/*
 * XREFs of ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1402020B0
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401DBF5C (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x14007BB58 (--1CSERIALIZEDWORKQUEUE@@QEAA@XZ.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1400820E4 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGSESSIONMGR::~DXGSESSIONMGR(DXGSESSIONMGR *this)
{
  __int64 v1; // rsi
  void **i; // rdi
  DXGSESSIONDATA *v4; // rcx

  v1 = 0LL;
  for ( i = (void **)((char *)this + 48); (unsigned int)v1 < *((_DWORD *)this + 20); v1 = (unsigned int)(v1 + 1) )
  {
    v4 = (DXGSESSIONDATA *)*((_QWORD *)*i + v1);
    if ( v4 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v4);
      *((_QWORD *)*i + v1) = 0LL;
    }
  }
  if ( *i != (char *)this + 56 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*i);
    *i = 0LL;
  }
  if ( *((DXGSESSIONMGR **)this + 40) != (DXGSESSIONMGR *)((char *)this + 320) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5215;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_PnPTransitionTokenList)",
      5215LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
  CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE((DXGSESSIONMGR *)((char *)this + 376));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONMGR *)((char *)this + 88));
  DXGFASTMUTEX::~DXGFASTMUTEX(this);
}
