/*
 * XREFs of ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x140323600
 * Callers:
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x14026A278 (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 * Callees:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x14020B7A8 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ @ 0x1403238AC (-IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
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
