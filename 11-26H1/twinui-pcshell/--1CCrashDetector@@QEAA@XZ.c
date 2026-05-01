/*
 * XREFs of ??1CCrashDetector@@QEAA@XZ @ 0x1801A8108
 * Callers:
 *     ??1CApplicationFrameService@@UEAA@XZ @ 0x1802F9540 (--1CApplicationFrameService@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x18042DF40 (--1-$unique_ptr@VCCrashDetector@@U-$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801A8400 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x18022EFE4 (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 */

void __fastcall CCrashDetector::~CCrashDetector(CCrashDetector *this)
{
  if ( *((_QWORD *)this + 2) )
    CCrashDetector::StopMonitoring(this);
  CAutoHandle<void *>::~CAutoHandle<void *>((char *)this + 8);
  wistd::unique_ptr<ISearchAppActivator,wistd::default_delete<ISearchAppActivator>>::~unique_ptr<ISearchAppActivator,wistd::default_delete<ISearchAppActivator>>(this);
}
