/*
 * XREFs of ??0CMouseProcessor@@IEAA@XZ @ 0x1401580C8
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1402146D0 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1400CC698 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0MousePerfSummary@@QEAA@XZ @ 0x14015B048 (--0MousePerfSummary@@QEAA@XZ.c)
 *     memset @ 0x140243000 (memset.c)
 */

CMouseProcessor *__fastcall CMouseProcessor::CMouseProcessor(CMouseProcessor *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  *((_DWORD *)this + 8) = (unsigned int)PsGetCurrentThreadId();
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 13) = 0;
  memset((char *)this + 56, 0, 0xB80uLL);
  `vector constructor iterator'(
    (char *)this + 56,
    184LL,
    16LL,
    (void (__fastcall *)(char *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
  *((_DWORD *)this + 750) = 0;
  *((_QWORD *)this + 376) = 0LL;
  *((_DWORD *)this + 754) = 1;
  memset((char *)this + 3024, 0, 0x270uLL);
  MousePerfSummary::MousePerfSummary((CMouseProcessor *)((char *)this + 3024));
  *((_QWORD *)this + 457) = 0LL;
  *((_QWORD *)this + 458) = 0LL;
  *((_QWORD *)this + 459) = 0LL;
  *((_QWORD *)this + 460) = 0LL;
  *((_BYTE *)this + 3760) = 0;
  *((_BYTE *)this + 3764) = 0;
  *((_QWORD *)this + 471) = 0LL;
  memset((char *)this + 3776, 0, 0x70uLL);
  *((_BYTE *)this + 3888) = 0;
  *((_DWORD *)this + 974) = 0;
  *((_BYTE *)this + 3912) = 0;
  *((_DWORD *)this + 979) = 0;
  *((_QWORD *)this + 490) = 0LL;
  *((_DWORD *)this + 982) = 0;
  *((_DWORD *)this + 983) = (unsigned int)PsGetCurrentThreadId();
  *((_OWORD *)this + 246) = 0LL;
  *((_OWORD *)this + 247) = 0LL;
  *((_OWORD *)this + 248) = 0LL;
  *((_OWORD *)this + 249) = 0LL;
  *((_QWORD *)this + 500) = 0LL;
  *((_QWORD *)this + 501) = 0LL;
  *((_QWORD *)this + 488) = 0LL;
  *((_QWORD *)this + 506) = (char *)this + 4040;
  *((_QWORD *)this + 505) = (char *)this + 4040;
  *((_WORD *)this + 2012) = 0;
  *((_QWORD *)this + 502) = 0LL;
  *((_QWORD *)this + 508) = 0LL;
  *((_BYTE *)this + 4072) = 0;
  *((_QWORD *)this + 507) = 0LL;
  memset((char *)this + 4080, 0, 0x400uLL);
  *((_WORD *)this + 2552) = 0;
  *((_QWORD *)this + 639) = (char *)this + 4080;
  *((_WORD *)this + 2560) = 0;
  *((_BYTE *)this + 5132) = 0;
  *((_QWORD *)this + 456) = 0LL;
  *((_QWORD *)this + 376) = 0LL;
  return this;
}
