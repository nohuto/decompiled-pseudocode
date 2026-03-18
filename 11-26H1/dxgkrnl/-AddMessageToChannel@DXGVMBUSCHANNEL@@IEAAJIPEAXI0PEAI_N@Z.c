/*
 * XREFs of ?AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z @ 0x140212108
 * Callers:
 *     ?PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z @ 0x140213210 (-PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z.c)
 *     ?SendSyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI0PEAI@Z @ 0x1402135C0 (-SendSyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI0PEAI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x140056F8C (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::AddMessageToChannel(
        DXGVMBUSCHANNEL *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int *a6,
        bool a7)
{
  __int64 v7; // r14
  __int64 v11; // rbx
  DXGGLOBAL *Global; // rax
  _BYTE v14[16]; // [rsp+50h] [rbp-28h] BYREF

  v7 = a2;
  LODWORD(v11) = -1073741823;
  if ( a3 && a4 > 8 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGVMBUSCHANNEL *)((char *)this + 120), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    if ( ((unsigned __int8)a3 & 7) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 563;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(reinterpret_cast<ULONG_PTR>(pRequest) & 0x7) == 0",
        563LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (a4 & 7) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 564;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(RequestSize & 0x7) == 0", 564LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (a5 & 7) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 565;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(reinterpret_cast<ULONG_PTR>(pReturnBuffer) & 0x7) == 0",
        565LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( a6 && (*a6 & 7) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 566;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(nullptr == pReturnBufferSize) || ((*pReturnBufferSize & 0x7) == 0)",
        566LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *a3 != (_DWORD)v7 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 568;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"((DXGKVMBUS_PACKETHEADER*)pRequest)->SubscriberTag == SubscriberTag",
        568LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = (int)((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, bool, unsigned __int64, unsigned __int64, _QWORD))qword_1401684B0)(
                 *((_QWORD *)this + 2),
                 a3,
                 a4,
                 0LL,
                 a7,
                 a5 & -(__int64)a7,
                 (unsigned __int64)a6 & -(__int64)a7,
                 0LL);
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::CheckDebugBreak(Global);
    if ( (int)v11 < 0 )
    {
      WdLogSingleEntry3(3LL, v7, v11, this);
      WdLogGlobalForLineNumber = 586;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  }
  return (unsigned int)v11;
}
