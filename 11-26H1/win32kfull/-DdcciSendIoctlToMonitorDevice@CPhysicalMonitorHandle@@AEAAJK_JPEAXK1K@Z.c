/*
 * XREFs of ?DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z @ 0x14022E4C4
 * Callers:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x14022E308 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x14022E44C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z @ 0x140345D4C (-DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(
        struct OPM::CMutex **this,
        unsigned int a2,
        union _LARGE_INTEGER a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  NTSTATUS v11; // ebx
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+60h] [rbp+8h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v14, this[1]);
  if ( (*((unsigned __int8 (__fastcall **)(struct OPM::CMutex **))*this + 2))(this) )
  {
    v11 = -1071774323;
  }
  else
  {
    v11 = AcquireCriticalSectionAndCheckState();
    if ( v11 >= 0 )
    {
      ReleaseUserCriticalSection();
      v11 = CallMonitor(this[2], a2, a4, a5, a6, a7);
      if ( v11 >= 0 && a3.QuadPart < 0 )
      {
        Interval = a3;
        v11 = KeDelayExecutionThread(0, OPM::NOT_ALERTABLE, &Interval);
      }
    }
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v14);
  return (unsigned int)v11;
}
