/*
 * XREFs of _lambda_6c758f270a739346e4977fa18103cf5e_::operator() @ 0x180027638
 * Callers:
 *     std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e___ @ 0x18003EE90 (std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--remove_if__lambda_6.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall lambda_6c758f270a739346e4977fa18103cf5e_::operator()(_QWORD **a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**a1 + 64LL))(**a1);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (unsigned int)_o__wcsicmp(v5, v4) )
    return 0;
  v8 = 0LL;
  if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))**a1)(**a1, &GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c, &v8) >= 0 )
  {
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 40LL))(v8, 0LL, v6, 0LL);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return 1;
}
