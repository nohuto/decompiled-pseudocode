/*
 * XREFs of ??0CSuperWetSource@@IEAA@PEAVCComposition@@@Z @ 0x180207200
 * Callers:
 *     ??0CDelegatedInkCanvas@@QEAA@PEAVCComposition@@@Z @ 0x180207034 (--0CDelegatedInkCanvas@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CGenericInk@@QEAA@PEAVCComposition@@@Z @ 0x18020708C (--0CGenericInk@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z @ 0x180207134 (--0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CSuperWetSource *__fastcall CSuperWetSource::CSuperWetSource(CSuperWetSource *this, struct CComposition *a2)
{
  CSuperWetSource *result; // rax

  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  result = this;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 96) = 1;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  return result;
}
