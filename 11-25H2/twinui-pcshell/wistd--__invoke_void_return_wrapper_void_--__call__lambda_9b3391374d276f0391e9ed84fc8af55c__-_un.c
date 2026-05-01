/*
 * XREFs of wistd::__invoke_void_return_wrapper_void_::__call__lambda_9b3391374d276f0391e9ed84fc8af55c__&_unsigned_char_const_&_ @ 0x180297030
 * Callers:
 *     wistd::__function::__func__lambda_9b3391374d276f0391e9ed84fc8af55c__void___cdecl(unsigned_char_const_&)_::operator() @ 0x1802B43E0 (wistd--__function--__func__lambda_9b3391374d276f0391e9ed84fc8af55c__void___cdecl(unsigned_char_c.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180084510 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_279b59b1da187398d137b7ca9bd87eac___ @ 0x1802970B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_279b59b1da187398d137b7ca9bd87eac___.c)
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x180297140 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::__invoke_void_return_wrapper_void_::__call__lambda_9b3391374d276f0391e9ed84fc8af55c____unsigned_char_const___(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // r8
  int v5; // r9d
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+38h] [rbp-10h]

  v1 = *(std::_Ref_count_base **)(*(_QWORD *)a1 + 8LL);
  if ( !v1 || !std::_Ref_count_base::_Incref_nz(v1) )
    std::_Throw_bad_weak_ptr();
  v6 = *v4;
  v7 = (volatile signed __int32 *)v4[1];
  v8[0] = v4;
  if ( v7 )
    _InterlockedIncrement(v7 + 2);
  v8[1] = v6;
  v9 = (std::_Ref_count_base *)v7;
  v10 = v5;
  ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))Windows::Internal::ComTaskPool::QueueTask__lambda_279b59b1da187398d137b7ca9bd87eac___)(
    v3,
    v2,
    *((unsigned int *)v4 + 4),
    v8);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v7 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
}
