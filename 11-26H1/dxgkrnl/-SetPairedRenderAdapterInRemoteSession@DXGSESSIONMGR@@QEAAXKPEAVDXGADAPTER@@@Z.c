/*
 * XREFs of ?SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z @ 0x140204124
 * Callers:
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1401A4CE8 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline @ 0x140075C2C (Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x140330710 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

void __fastcall DXGSESSIONMGR::SetPairedRenderAdapterInRemoteSession(
        DXGSESSIONMGR *this,
        unsigned int a2,
        struct DXGADAPTER *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  __int64 v9; // rax
  _BYTE v10[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = a2;
  if ( (unsigned int)Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONMGR *)((char *)this + 88), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    if ( (unsigned int)v4 < *((_DWORD *)this + 20) && (v6 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4)) != 0 )
    {
      if ( a3 )
        v7 = *(_QWORD *)((char *)a3 + 412);
      else
        v7 = 0LL;
      *(_QWORD *)(v6 + 18520) = v7;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5437;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Session 0x%I64x does not have session data, unable to set render adapter.",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, this, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(this, v4);
    if ( !SessionDataForSpecifiedSession )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5451;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Session 0x%I64x does not have session data, unable to set render adapter.",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( a3 )
      v9 = *(_QWORD *)((char *)a3 + 412);
    else
      v9 = 0LL;
    *((_QWORD *)SessionDataForSpecifiedSession + 2315) = v9;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
}
