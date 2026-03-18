/*
 * XREFs of ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x140212610
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_MSRC99074_58170326__private_IsEnabledNoReportingNoInline @ 0x140080C64 (Feature_MSRC99074_58170326__private_IsEnabledNoReportingNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1402E98A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::FreeHandle(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  _BYTE v8[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)(a1 + 72), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, a3);
  if ( !(unsigned int)Feature_MSRC99074_58170326__private_IsEnabledNoReportingNoInline() || v6 )
    HMGRTABLE::FreeHandle((HMGRTABLE *)(a1 + 40), a2);
  if ( !(unsigned int)Feature_MSRC99074_58170326__private_IsEnabledNoReportingNoInline() && !v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 522;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject", 522LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
  return v6;
}
