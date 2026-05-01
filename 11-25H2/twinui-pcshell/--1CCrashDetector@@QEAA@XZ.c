/*
 * XREFs of ??1CCrashDetector@@QEAA@XZ @ 0x1801B68D4
 * Callers:
 *     ??1CApplicationFrameService@@UEAA@XZ @ 0x1802FE254 (--1CApplicationFrameService@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x180422A24 (--1-$unique_ptr@VCCrashDetector@@U-$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801B6B38 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x18023CFC8 (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 */

void __fastcall CCrashDetector::~CCrashDetector(CCrashDetector *this)
{
  if ( *((_QWORD *)this + 2) )
    CCrashDetector::StopMonitoring(this);
  CAutoHandle<void *>::~CAutoHandle<void *>((char *)this + 8);
  wistd::unique_ptr<ISearchAppActivator,wistd::default_delete<ISearchAppActivator>>::~unique_ptr<ISearchAppActivator,wistd::default_delete<ISearchAppActivator>>(this);
}
