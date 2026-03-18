/*
 * XREFs of ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1401BFAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x1402104CC (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedUnBind(DXGCOMPOSITIONSURFACEPROXY *this, unsigned __int8 a2)
{
  __int64 v2; // r14
  int v4; // edi
  struct DXGPROCESS *Current; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  DXGSESSIONDATA *SessionData; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned int v14; // edx
  int v15; // eax
  _BYTE v16[16]; // [rsp+50h] [rbp-18h] BYREF

  v2 = a2;
  v4 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1650;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  if ( *((_DWORD *)Current + 122) && (*((_DWORD *)Current + 102) & 4) != 0 )
  {
    if ( !*((_BYTE *)Current + 584) )
    {
      v4 = -2147483611;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1650;
LABEL_9:
      KeLeaveCriticalRegion();
LABEL_19:
      WdLogSingleEntry2(3LL, v4, this);
      WdLogGlobalForLineNumber = 1681;
      goto LABEL_20;
    }
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( !SessionData )
    {
      v4 = -1073741811;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      WdLogGlobalForLineNumber = 1650;
      v11 = PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
        v11,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_9;
    }
    v12 = *((unsigned int *)this + 5);
    if ( !(_DWORD)v12 || !*((_BYTE *)this + 41) )
    {
      WdLogSingleEntry4(
        3LL,
        *((unsigned int *)this + 5),
        this,
        *((unsigned __int8 *)this + 40),
        *((unsigned __int8 *)this + 41));
      WdLogGlobalForLineNumber = 1674;
      goto LABEL_17;
    }
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v8);
    v13[3] = *((unsigned int *)this + 5);
    v13[4] = this;
    v13[5] = v2;
    v14 = *((_DWORD *)this + 5);
    WdLogGlobalForLineNumber = 1659;
    v15 = DXGSESSIONDATA::VailSendUnbindCompositionSurface(SessionData, v14, v2);
    v4 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry4(3LL, *((unsigned int *)this + 5), this, v2, v15);
      WdLogGlobalForLineNumber = 1664;
      goto LABEL_9;
    }
    if ( !(_BYTE)v2 )
    {
      *((_BYTE *)this + 41) = 0;
LABEL_17:
      KeLeaveCriticalRegion();
      goto LABEL_20;
    }
  }
  KeLeaveCriticalRegion();
  if ( v4 < 0 )
    goto LABEL_19;
LABEL_20:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
  return (unsigned int)v4;
}
