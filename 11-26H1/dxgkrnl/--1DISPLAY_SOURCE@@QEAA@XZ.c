/*
 * XREFs of ??1DISPLAY_SOURCE@@QEAA@XZ @ 0x1401A1040
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DISPLAY_SOURCE::~DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *((_QWORD *)this + 100) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4332;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_PristineCursor.pPixels == NULL",
      4332LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 106) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4333;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SavedCursor.pPixels == NULL", 4333LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 111) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4334;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ClippedCursor.pPixels == NULL", 4334LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (void *)*((_QWORD *)this + 113);
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (void *)*((_QWORD *)this + 114);
  if ( v3 )
    ObfDereferenceObject(v3);
  DXGFASTMUTEX::~DXGFASTMUTEX((DISPLAY_SOURCE *)((char *)this + 3808));
}
