/*
 * XREFs of ??0CDefaultClock@@QEAA@XZ @ 0x18020AA2C
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ??0CClockBase@@IEAA@XZ @ 0x1801668C0 (--0CClockBase@@IEAA@XZ.c)
 */

CDefaultClock *__fastcall CDefaultClock::CDefaultClock(CDefaultClock *this)
{
  CDefaultClock *result; // rax

  CClockBase::CClockBase(this);
  *(_QWORD *)this = &CDefaultClock::`vftable';
  result = this;
  *((_QWORD *)this + 3) = g_qpcFrequency.QuadPart / 60;
  return result;
}
