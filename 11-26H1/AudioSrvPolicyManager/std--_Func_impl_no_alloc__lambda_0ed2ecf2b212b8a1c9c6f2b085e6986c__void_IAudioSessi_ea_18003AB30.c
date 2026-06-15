/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0ed2ecf2b212b8a1c9c6f2b085e6986c__void_IAudioSessionPolicyControl___bool___::_Do_call @ 0x18003AB30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_0ed2ecf2b212b8a1c9c6f2b085e6986c__void_IAudioSessionPolicyControl___bool___::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *a2;
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( (_DWORD)result != 2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 160LL))(v2, 1LL);
  return result;
}
