/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180023CE0
 * Callers:
 *     ??1?$vector@V?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180023CCC (--1-$vector@V-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@V-$alloc.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002B87C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>>::_Tidy(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *i; // rdi
  _QWORD *v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  __int64 result; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    for ( i = *(_QWORD **)(a1 + 8); v2 != i; ++v2 )
    {
      if ( *v2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    }
    v4 = *(_QWORD **)a1;
    v5 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    v8 = (unsigned __int64)v5;
    v7 = v4;
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v8);
      v4 = v7;
      v5 = (const struct std::nothrow_t *)v8;
    }
    operator delete(v4, v5);
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
