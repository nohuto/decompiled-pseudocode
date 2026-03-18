/*
 * XREFs of ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x18022EC74
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18014D660 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 * Callees:
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18014E280 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_OWORD *__fastcall std::_Move_backward_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        _OWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v4; // rbp
  __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r10
  __int64 v11; // r9
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v8 = a3[1];
    if ( v4 == v8 )
      break;
    --a4[1];
    v9 = v8 - 1;
    v10 = a4[1];
    v11 = *a4;
    a3[1] = v9;
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(
      (__int64 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * ((v10 >> 1) & (*(_QWORD *)(v11 + 16) - 1LL))) + 8 * (v10 & 1)),
      (char *)(*(_QWORD *)(*(_QWORD *)(*a3 + 8LL) + 8 * ((v9 >> 1) & (*(_QWORD *)(*a3 + 16LL) - 1LL))) + 8 * (v9 & 1)));
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
