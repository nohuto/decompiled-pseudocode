/*
 * XREFs of ??0MPCGestureHandlerManager@@QEAA@XZ @ 0x1800B1A44
 * Callers:
 *     std::call_once__lambda_810dcc79efb0a72353c94b2711027391___ @ 0x180023DC0 (std--call_once__lambda_810dcc79efb0a72353c94b2711027391___.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
MPCGestureHandlerManager *__fastcall MPCGestureHandlerManager::MPCGestureHandlerManager(MPCGestureHandlerManager *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax

  *(_QWORD *)this = &MPCGestureHandlerManager::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits>(0x30uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 1) = v2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(0x30uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 3) = v3;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
