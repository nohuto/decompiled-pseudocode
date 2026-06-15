/*
 * XREFs of _lambda_f9f451cb2ae92ac65d2020cbfdac1da8_::operator() @ 0x180064030
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f9f451cb2ae92ac65d2020cbfdac1da8__void_::_Do_call @ 0x180064020 (std--_Func_impl_no_alloc__lambda_f9f451cb2ae92ac65d2020cbfdac1da8__void_--_Do_call.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_f9f451cb2ae92ac65d2020cbfdac1da8_::operator()(__int64 *a1)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+10h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp+18h] BYREF

  v7 = 0LL;
  v1 = 0LL;
  v8 = 0LL;
  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v2 + 24LL))(
               v2,
               &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
               &v8);
    v1 = v8;
  }
  else
  {
    result = 0LL;
  }
  if ( (int)result >= 0 && v1 )
  {
    v4 = **v1;
    v5 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    result = v4(v1, &GUID_6fa8c0b3_a926_48af_a753_f702dad2b4f0, &v7);
    if ( (int)result >= 0 )
      result = (*(__int64 (__fastcall **)(struct IProcessSubmixManager *, __int64))(*(_QWORD *)g_ProcessSubmixManager
                                                                                  + 72LL))(
                 g_ProcessSubmixManager,
                 v7);
    v1 = v8;
  }
  v6 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v1 = v8;
  }
  if ( v1 )
  {
    v8 = 0LL;
    return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v1)[2])(v1);
  }
  return result;
}
