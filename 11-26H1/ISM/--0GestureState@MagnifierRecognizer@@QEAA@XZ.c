/*
 * XREFs of ??0GestureState@MagnifierRecognizer@@QEAA@XZ @ 0x1801B1C58
 * Callers:
 *     ??0DeviceState@MagnifierProcessor@@QEAA@XZ @ 0x1801B1BB4 (--0DeviceState@MagnifierProcessor@@QEAA@XZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1801B2FAC (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x18007686C (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

MagnifierRecognizer::GestureState *__fastcall MagnifierRecognizer::GestureState::GestureState(
        MagnifierRecognizer::GestureState *this)
{
  unsigned __int64 size_of; // rax
  _QWORD *v3; // rax

  *(_DWORD *)this = 0;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  size_of = std::_Get_size_of_n<72>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 2) = v3;
  return this;
}
