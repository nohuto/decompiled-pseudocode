/*
 * XREFs of ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x18014D4DC
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18014D028 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________CEffectCompilationService::TryAddDeadTask_::_6_::_lambda_1___ @ 0x18014D5CC (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_Microsoft--WRL--ComPt.c)
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18014D660 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 */

void __fastcall CEffectCompilationService::TryReviveDeadTask(
        CEffectCompilationService *this,
        const struct CEffectCompilationTask *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  _QWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h]
  const struct CEffectCompilationTask *v13; // [rsp+88h] [rbp+18h] BYREF

  v13 = a2;
  v2 = (__int64 *)((char *)this + 160);
  v6 = 0LL;
  v3 = *((_QWORD *)this + 23);
  v4 = v3 + v2[4];
  v7 = v4;
  if ( v2 )
    v5 = *v2;
  else
    v5 = 0LL;
  v9 = 0LL;
  v10 = v3;
  if ( v2 )
    v8 = *v2;
  else
    v8 = 0LL;
  ((void (__fastcall *)(_QWORD *, __int64 *, __int64 *, const struct CEffectCompilationTask **))std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________CEffectCompilationService::TryAddDeadTask_::_6_::_lambda_1___)(
    v11,
    &v8,
    &v5,
    &v13);
  if ( v12 != v4 )
  {
    v8 = v11[0];
    v5 = v11[0];
    v7 = v12;
    v9 = 0LL;
    v10 = v12 + 1;
    v6 = 0LL;
    ((void (__fastcall *)(__int64 *, _QWORD *, __int64 *, __int64 *))std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::erase)(
      v2,
      v11,
      &v5,
      &v8);
  }
}
