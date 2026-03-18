/*
 * XREFs of ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18014D660
 * Callers:
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x18014D4DC (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18014E280 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1801DE580 (-pop_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 *     ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x18022EC74 (--$_Move_backward_unchecked@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-.c)
 *     ?pop_front@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18022F090 (-pop_front@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 */

__int64 **__fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 **v5; // rdi
  __int64 *v7; // rax
  unsigned __int64 v8; // rbp
  __int64 *v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 **result; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v19[72]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+8h]

  v4 = *(_QWORD *)(a3 + 16);
  v5 = a2;
  if ( a1 )
    v7 = *(__int64 **)a1;
  else
    v7 = 0LL;
  v8 = *(_QWORD *)(a4 + 16);
  if ( a1 )
    v9 = *(__int64 **)a1;
  else
    v9 = 0LL;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = v4 - v10;
  v12 = v8 - v4;
  if ( v8 == v4 )
  {
    v5[2] = (__int64 *)v4;
  }
  else
  {
    if ( v7 )
      v13 = *v7;
    else
      v13 = 0LL;
    if ( v9 )
      v14 = *v9;
    else
      v14 = 0LL;
    v20 = v10 + *(_QWORD *)(a1 + 32);
    if ( v11 >= v20 - v8 )
    {
      while ( v8 != v20 )
      {
        Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(
          *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * ((*(_QWORD *)(v13 + 16) - 1LL) & (v4 >> 1))) + 8 * (v4 & 1),
          *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * ((*(_QWORD *)(v14 + 16) - 1LL) & (v8 >> 1))) + 8 * (v8 & 1));
        ++v8;
        ++v4;
      }
      v5 = a2;
      do
      {
        std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back(a1);
        --v12;
      }
      while ( v12 );
    }
    else
    {
      v18[1] = *(_QWORD *)(a1 + 24);
      v16[0] = v14;
      v16[1] = v8;
      v17[0] = v13;
      v17[1] = v4;
      v18[0] = a1;
      ((void (__fastcall *)(_BYTE *, _QWORD *, _QWORD *, _QWORD *))std::_Move_backward_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>)(
        v19,
        v18,
        v17,
        v16);
      do
      {
        std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front(a1);
        --v12;
      }
      while ( v12 );
    }
    v7 = *(__int64 **)a1;
    v5[2] = (__int64 *)(v11 + *(_QWORD *)(a1 + 24));
  }
  *v5 = v7;
  result = v5;
  v5[1] = 0LL;
  return result;
}
