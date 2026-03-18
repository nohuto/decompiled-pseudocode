/*
 * XREFs of ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x140082D88
 * Callers:
 *     ??0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x140082DF0 (--0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 *     ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x140145560 (--1CMonitorPDO@OPM@@UEAA@XZ.c)
 * Callees:
 *     ??1CMutex@OPM@@QEAA@XZ @ 0x140082DB0 (--1CMutex@OPM@@QEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x140083440 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 */

OPM::CMutex *__fastcall OPM::CMutex::`scalar deleting destructor'(OPM::CMutex *this)
{
  void *v2; // rdx

  OPM::CMutex::~CMutex(this);
  OPM::OPMFreeMemory(this, v2);
  return this;
}
