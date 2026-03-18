/*
 * XREFs of ??$_Move_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x18028DF68
 * Callers:
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x180209088 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$al_ea_180209088.c)
 * Callees:
 *     ??4?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18028E160 (--4-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_OWORD *__fastcall std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        _OWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a3 + 8);
  while ( 1 )
  {
    v8 = a2[1];
    if ( v8 == v4 )
      break;
    v9 = a4[1];
    wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::operator=(
      *(_QWORD *)(*(_QWORD *)(*a4 + 8LL) + 8 * ((v9 >> 1) & (*(_QWORD *)(*a4 + 16LL) - 1LL))) + 8 * (v9 & 1),
      *(_QWORD *)(*(_QWORD *)(*a2 + 8LL) + 8 * ((a2[1] >> 1) & (*(_QWORD *)(*a2 + 16LL) - 1LL))) + 8 * (a2[1] & 1LL));
    a4[1] = v9 + 1;
    a2[1] = v8 + 1;
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
