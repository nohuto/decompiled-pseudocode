/*
 * XREFs of ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1401BE88C
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x140211790 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1401BED84 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1401C047C (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x14020F668 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateRemoteCompositionSurfaceObjectForPairing(
        struct CompositionSurfaceObject *a1,
        struct IPairedSurfaceObject **a2,
        void **a3)
{
  void *v5; // r15
  __int64 v6; // rdi
  int v7; // esi
  __int64 v8; // rbp
  struct DXGPROCESS *Current; // r13
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v14; // eax
  void *v15; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v16[80]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v18; // [rsp+C8h] [rbp+20h] BYREF

  v18 = 0;
  v15 = 0LL;
  v5 = 0LL;
  v6 = operator new(0x40uLL, 0x4B677844u, 256LL);
  if ( !v6 )
  {
    v7 = -1073741801;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1833;
    *a3 = 0LL;
    return (unsigned int)v7;
  }
  *(_DWORD *)(v6 + 8) = 1;
  *(_QWORD *)v6 = &DXGCOMPOSITIONSURFACEPROXY::`vftable';
  *(_WORD *)(v6 + 12) = 0;
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_WORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_DWORD *)(v6 + 56) = 0;
  v7 = DXGCOMPOSITIONSURFACEPROXY::Initialize((DXGCOMPOSITIONSURFACEPROXY *)v6);
  if ( v7 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1848;
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
    v8 = v6;
    if ( *((_DWORD *)Current + 122) && (*((_DWORD *)Current + 102) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 584) )
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData )
        {
          v7 = DXGSESSIONDATA::VailSendCreateCompositionSurface(SessionData, &v18, &v15);
          if ( v7 < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1854;
          }
          v5 = v15;
        }
        else
        {
          v7 = -1073741811;
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
          WdLogGlobalForLineNumber = 1848;
          v14 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v14,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          v8 = v6;
        }
      }
      else
      {
        v7 = -2147483611;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1848;
      }
    }
    KeLeaveCriticalRegion();
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
    if ( v7 >= 0 )
    {
      *(_DWORD *)(v8 + 20) = v18;
      *(_QWORD *)(v8 + 24) = a1;
      *(_QWORD *)(v8 + 32) = v5;
      *a2 = (struct IPairedSurfaceObject *)v8;
      *a3 = v5;
      return (unsigned int)v7;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1842;
    v8 = v6;
  }
  *a3 = 0LL;
  DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)v8);
  return (unsigned int)v7;
}
