/*
 * XREFs of ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x140345720
 * Callers:
 *     ?DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z @ 0x14028BA90 (-DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z.c)
 * Callees:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140245FE8 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ @ 0x140345F30 (-IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x140345F48 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesString(const char **this, char *a2, unsigned int a3)
{
  SIZE_T v3; // r14
  int CapabilitiesStringInternal; // edi
  unsigned __int8 IsDDCCICapabilitiesStringInitialized; // bl
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = a3;
  CapabilitiesStringInternal = 0;
  if ( (*((unsigned __int8 (__fastcall **)(const char **))*this + 2))(this) )
  {
    return (unsigned int)-1071774323;
  }
  else
  {
    OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v9, (struct OPM::CMutex *)(this + 9));
    IsDDCCICapabilitiesStringInitialized = CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized((CPhysicalMonitorHandle *)this);
    OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v9);
    if ( IsDDCCICapabilitiesStringInitialized
      || (CapabilitiesStringInternal = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal((void **)this),
          CapabilitiesStringInternal >= 0) )
    {
      OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v9, (struct OPM::CMutex *)(this + 9));
      if ( CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized((CPhysicalMonitorHandle *)this) )
      {
        if ( (unsigned int)v3 >= *((_DWORD *)this + 22) )
        {
          ProbeForWrite(a2, v3, 1u);
          RtlStringCbCopyA(a2, v3, this[10]);
        }
        else
        {
          CapabilitiesStringInternal = -1073741789;
        }
      }
      else
      {
        CapabilitiesStringInternal = -1071774323;
      }
      OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v9);
    }
  }
  return (unsigned int)CapabilitiesStringInternal;
}
