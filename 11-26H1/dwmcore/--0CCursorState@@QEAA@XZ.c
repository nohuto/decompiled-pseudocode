/*
 * XREFs of ??0CCursorState@@QEAA@XZ @ 0x18029076C
 * Callers:
 *     ?EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z @ 0x18028F4BC (-EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

CCursorState *__fastcall CCursorState::CCursorState(CCursorState *this, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax
  CCursorState *result; // rax

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
    (__int64)this,
    a2);
  *((_QWORD *)this + 3) = 10LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &CCursorState::`vftable';
  *((_DWORD *)this + 9) = -1073741569;
  *((_DWORD *)this + 8) = 1065353216;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_WORD *)this + 40) = 0;
  *((_BYTE *)this + 82) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 42) = 1065353216;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *(_OWORD *)((char *)this + 196) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits>(0x50uLL, v3);
  *v4 = v4;
  v4[1] = v4;
  *((_QWORD *)this + 32) = v4;
  result = this;
  *((_QWORD *)this + 34) = g_qpcFrequency.QuadPart / 0x14uLL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  return result;
}
