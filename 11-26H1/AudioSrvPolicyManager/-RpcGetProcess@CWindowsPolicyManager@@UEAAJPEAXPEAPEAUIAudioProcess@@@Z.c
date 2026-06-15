/*
 * XREFs of ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180009040
 * Callers:
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180047130 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::RpcGetProcess(
        CWindowsPolicyManager *this,
        void *a2,
        struct IAudioProcess **a3)
{
  int Process; // eax
  unsigned int v5; // ebx
  struct CProcess *v6; // rcx
  volatile signed __int32 *v7; // r8
  signed __int32 i; // ecx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CProcess *v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0LL;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a2, &v12);
  v5 = Process;
  if ( Process < 0 )
  {
    if ( Process == -2147023171 )
    {
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v12);
      return 2147944125LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x167,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)Process,
        v10);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v12);
      return v5;
    }
  }
  else
  {
    v6 = v12;
    *a3 = v12;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = (volatile signed __int32 *)v12;
    if ( v12 )
    {
      for ( i = *((_DWORD *)v12 + 5); i != 0x7FFFFFFF; i = *((_DWORD *)v7 + 5) )
      {
        if ( i == _InterlockedCompareExchange(v7 + 5, i - 1, i) )
          break;
      }
      if ( i == 1 )
      {
        if ( v7 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 560LL))(v7, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    return 0LL;
  }
}
