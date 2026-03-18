/*
 * XREFs of ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x140345AF8
 * Callers:
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x14028E35C (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 * Callees:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140245FE8 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ @ 0x140345F30 (-IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringLength(void **this, unsigned int *a2)
{
  int CapabilitiesStringInternal; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((unsigned __int8 (__fastcall **)(void **))*this + 2))(this) )
  {
    return (unsigned int)-1071774323;
  }
  else
  {
    CapabilitiesStringInternal = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(this);
    if ( CapabilitiesStringInternal >= 0 )
    {
      OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v6, (struct OPM::CMutex *)(this + 9));
      if ( CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized((CPhysicalMonitorHandle *)this) )
        *a2 = *((_DWORD *)this + 22);
      else
        CapabilitiesStringInternal = -1071774323;
      OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v6);
    }
  }
  return (unsigned int)CapabilitiesStringInternal;
}
