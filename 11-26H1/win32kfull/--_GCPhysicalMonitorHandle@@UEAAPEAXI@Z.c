/*
 * XREFs of ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x140245F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPhysicalMonitorHandle@@UEAA@XZ @ 0x140245F98 (--1CPhysicalMonitorHandle@@UEAA@XZ.c)
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x140246100 (-DDCCIFreeMemory@@YAXPEAX@Z.c)
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
