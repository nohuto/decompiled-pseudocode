/*
 * XREFs of ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x14020B720
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPhysicalMonitorHandle@@UEAA@XZ @ 0x14020B758 (--1CPhysicalMonitorHandle@@UEAA@XZ.c)
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x14020B8B8 (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 */

CPhysicalMonitorHandle *__fastcall CPhysicalMonitorHandle::`scalar deleting destructor'(
        CPhysicalMonitorHandle *this,
        char a2)
{
  CPhysicalMonitorHandle::~CPhysicalMonitorHandle(this);
  if ( (a2 & 1) != 0 )
    DDCCIFreeMemory(this);
  return this;
}
