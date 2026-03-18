/*
 * XREFs of ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x14020B850
 * Callers:
 *     ??1CPhysicalMonitorHandle@@UEAA@XZ @ 0x14020B758 (--1CPhysicalMonitorHandle@@UEAA@XZ.c)
 * Callees:
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x14020B8B8 (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::Destroy(void **this)
{
  unsigned int v2; // ebx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = OPM::CMonitorPDO::Destroy((OPM::CMonitorPDO *)this);
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v4, (struct OPM::CMutex *)(this + 9));
  DDCCIFreeMemory(this[10]);
  this[10] = 0LL;
  *((_DWORD *)this + 22) = 0;
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v4);
  return v2;
}
