/*
 * XREFs of ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x14000A3C4
 * Callers:
 *     ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x1400097A0 (--1CMonitorPDO@OPM@@UEAA@XZ.c)
 *     ??0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x140009EF0 (--0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ??1CMutex@OPM@@QEAA@XZ @ 0x14000A3F0 (--1CMutex@OPM@@QEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14000A430 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 */

OPM::CMutex *__fastcall OPM::CMutex::`scalar deleting destructor'(OPM::CMutex *this)
{
  void *v2; // rdx

  OPM::CMutex::~CMutex(this);
  OPM::OPMFreeMemory(this, v2);
  return this;
}
