/*
 * XREFs of ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x1801BB728
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x1801BB6C0 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________CEffectCompilationService::TryAddDeadTask_::_6_::_lambda_1___ @ 0x18014D5CC (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_Microsoft--WRL--ComPt.c)
 *     ??$_Emplace_back_internal@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x1801BB854 (--$_Emplace_back_internal@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@-$deque@V-$ComPtr@.c)
 *     ?pop_front@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18022F090 (-pop_front@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEffectCompilationService::TryAddDeadTask(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2)
{
  struct CEffectCompilationTask *v2; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  _QWORD v8[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v10; // [rsp+50h] [rbp-20h] BYREF
  struct CEffectCompilationTask *v11; // [rsp+A0h] [rbp+30h] BYREF
  struct CEffectCompilationTask *v12; // [rsp+A8h] [rbp+38h] BYREF

  v12 = a2;
  v2 = a2;
  if ( *((_WORD *)this + 120) )
    return 0;
  v4 = (_QWORD *)((char *)this + 160);
  v8[1] = 0LL;
  v5 = *((_QWORD *)this + 23);
  v6 = v4[4];
  v8[2] = v6 + v5;
  v8[0] = v4 ? *v4 : 0LL;
  v9[1] = 0LL;
  v9[2] = v5;
  v9[0] = v4 ? *v4 : 0LL;
  if ( std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________CEffectCompilationService::TryAddDeadTask_::_6_::_lambda_1___(
         &v10,
         (__int64)v9,
         (__int64)v8,
         &v12)[2] != (__int64 *)(v6 + v5) )
    return 0;
  if ( v6 > 0x40 )
  {
    *((_BYTE *)this + 241) = 1;
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front(v4);
    v2 = v12;
    *((_BYTE *)this + 241) = 0;
  }
  v11 = v2;
  if ( v2 )
    (**(void (__fastcall ***)(struct CEffectCompilationTask *))v2)(v2);
  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Emplace_back_internal<Microsoft::WRL::ComPtr<CEffectCompilationTask>>(
    v4,
    &v11);
  if ( v11 )
    (*(void (__fastcall **)(struct CEffectCompilationTask *))(*(_QWORD *)v11 + 8LL))(v11);
  return 1;
}
