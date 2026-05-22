/*
 * XREFs of CallOnThreadExit::_dynamic_initializer_for__s_callbacks__ @ 0x180009E70
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

int CallOnThreadExit::_dynamic_initializer_for__s_callbacks__()
{
  _QWORD *v0; // rax

  v0 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(112LL);
  *v0 = v0;
  v0[1] = v0;
  qword_180253F50 = (__int64)v0;
  return atexit((void (__cdecl *)())CallOnThreadExit::_dynamic_atexit_destructor_for__s_callbacks__);
}
