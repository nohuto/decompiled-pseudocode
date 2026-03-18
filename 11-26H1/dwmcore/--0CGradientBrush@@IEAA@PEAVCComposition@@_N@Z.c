/*
 * XREFs of ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x18020CD24
 * Callers:
 *     ??0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801CB8EC (--0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x18027A0D8 (--0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CGradientBrush *__fastcall CGradientBrush::CGradientBrush(CGradientBrush *this, struct CComposition *a2, char a3)
{
  CGradientBrush *result; // rax

  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_DWORD *)this + 27) = 1;
  *((_DWORD *)this + 28) = 2;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = (char *)this + 200;
  *((_QWORD *)this + 23) = (char *)this + 200;
  *((_QWORD *)this + 24) = (char *)this + 216;
  result = this;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_WORD *)this + 120) = 0;
  *((_BYTE *)this + 242) = a3;
  return result;
}
