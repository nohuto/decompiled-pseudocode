/*
 * XREFs of ?Reserve@DXGBLACKBOX@@QEAAPEAEI@Z @ 0x1401D51CC
 * Callers:
 *     ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1401CB6EC (-LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 *__fastcall DXGBLACKBOX::Reserve(DXGBLACKBOX *this, int a2)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  _BYTE v7[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !*((_QWORD *)this + 7) )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGBLACKBOX *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v5 = *((_QWORD *)this + 7);
  v6 = *(unsigned int *)(v5 + 4);
  if ( (unsigned int)(v6 + a2) > 0x1000 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 82;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGBLACKBOX::Reserve() ran out of space.",
      82LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
    return 0LL;
  }
  *(_DWORD *)(v5 + 4) = v6 + a2;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
  return (unsigned __int8 *)(v5 + v6);
}
