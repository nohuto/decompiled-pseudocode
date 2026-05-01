/*
 * XREFs of ??_ESnapLayoutBase@@UEAAPEAXI@Z @ 0x18022B2E0
 * Callers:
 *     ??1?$unique_ptr@VDefaultSnapLayout@@U?$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ @ 0x180591B08 (--1-$unique_ptr@VDefaultSnapLayout@@U-$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SnapLayoutBase *__fastcall SnapLayoutBase::`vector deleting destructor'(SnapLayoutBase *this, char a2)
{
  *(_QWORD *)this = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
