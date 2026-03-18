/*
 * XREFs of ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140245FE8
 * Callers:
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x140345720 (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z.c)
 *     ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x140345AF8 (-DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x140246100 (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x14028AC7C (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140345838 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(void **this)
{
  struct OPM::CMutex *v2; // rdx
  unsigned int CapabilitiesStringFromRegistry; // edi
  char v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v6, (struct OPM::CMutex *)(this + 9));
  DDCCIFreeMemory(this[10]);
  v2 = (struct OPM::CMutex *)this[1];
  this[10] = 0LL;
  *((_DWORD *)this + 22) = 0;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v5, v2);
  CapabilitiesStringFromRegistry = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromRegistry((CPhysicalMonitorHandle *)this);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v5);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v6);
  if ( CapabilitiesStringFromRegistry == 1612644351 )
    return (unsigned int)CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor((CPhysicalMonitorHandle *)this);
  return CapabilitiesStringFromRegistry;
}
