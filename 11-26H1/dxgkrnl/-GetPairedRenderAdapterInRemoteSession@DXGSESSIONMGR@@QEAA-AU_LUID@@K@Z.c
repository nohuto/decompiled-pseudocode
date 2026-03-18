/*
 * XREFs of ?GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA?AU_LUID@@K@Z @ 0x140202EB8
 * Callers:
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1401D89D0 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline @ 0x140075C2C (Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x140330710 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

struct _LUID __fastcall DXGSESSIONMGR::GetPairedRenderAdapterInRemoteSession(
        DXGSESSIONMGR *this,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _BYTE v9[16]; // [rsp+50h] [rbp-18h] BYREF

  v3 = a3;
  if ( (unsigned int)Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGSESSIONMGR *)((char *)this + 88), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    if ( (unsigned int)v3 < *((_DWORD *)this + 20) && *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3) )
    {
      _mm_lfence();
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3) + 18520LL);
LABEL_10:
      *a2 = v6;
      goto LABEL_11;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5405;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, this, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(this, v3);
    if ( SessionDataForSpecifiedSession )
    {
      v6 = *((_QWORD *)SessionDataForSpecifiedSession + 2315);
      goto LABEL_10;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5419;
  }
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Session 0x%I64x does not have session data, unable to get render adapter.",
    v3,
    0LL,
    0LL,
    0LL,
    0LL);
  *a2 = 0LL;
LABEL_11:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
  return (struct _LUID)a2;
}
