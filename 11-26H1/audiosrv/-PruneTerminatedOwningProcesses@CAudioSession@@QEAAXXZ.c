/*
 * XREFs of ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x180014A5C
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@AEAAXXZ @ 0x1800142A0 (-StateCheckExpiredCallback@CAudioSession@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180013CA8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800149BC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Move_unchecked@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x1800149F4 (--$_Move_unchecked@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std.c)
 *     _lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_ @ 0x1800ADDB8 (_lambda_f7a716bfe224096f553bb41568304cf0_--_lambda_f7a716bfe224096f553bb41568304cf0_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_________lambda_1ad0e07f4b4f21c5245f3e3b9d1a77e3___ @ 0x1800CD324 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_IAudioPr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::PruneTerminatedOwningProcesses(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 *v3; // rbx
  __int64 **v4; // rax
  const char *v5; // r9
  __int64 *v6; // rbx
  __int64 *v7; // rbx
  _QWORD *v8; // r14
  __int64 *v9; // rdi
  _QWORD *v10; // r15
  const struct std::nothrow_t *v11; // rdx
  void *v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  *(_OWORD *)v12 = 0LL;
  v13 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 664);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
  v15 = v2;
  v3 = (__int64 *)*((_QWORD *)this + 89);
  lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_(&v16, v12);
  try
  {
    v4 = (__int64 **)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_________lambda_1ad0e07f4b4f21c5245f3e3b9d1a77e3___();
    if ( *v4 != v3 )
    {
      v6 = std::_Move_unchecked<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *>(
             v3,
             *((__int64 **)this + 89),
             *v4);
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
        v6,
        *((__int64 **)this + 89));
      *((_QWORD *)this + 89) = v6;
    }
    if ( v2 )
      LeaveCriticalSection(v2);
    v7 = (__int64 *)v12[0];
    v8 = v12[0];
    v9 = (__int64 *)v12[1];
    v10 = v12[1];
    while ( v8 != v10 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v8 + 32LL))(
        *v8,
        ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
      ++v8;
      v9 = (__int64 *)v12[1];
      v7 = (__int64 *)v12[0];
    }
    if ( v7 )
    {
      if ( v7 != v9 )
      {
        do
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v7++);
        while ( v7 != v9 );
        v7 = (__int64 *)v12[0];
      }
      v11 = (const struct std::nothrow_t *)((v13 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
      v16 = (unsigned __int64)v11;
      v15 = v7;
      if ( (unsigned __int64)v11 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v15, &v16);
        v7 = (__int64 *)v15;
        v11 = (const struct std::nothrow_t *)v16;
      }
      operator delete(v7, v11);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x798,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      v5);
  }
}
