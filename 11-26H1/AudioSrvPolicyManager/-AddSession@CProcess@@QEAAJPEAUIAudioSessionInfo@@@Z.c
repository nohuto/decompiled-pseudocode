/*
 * XREFs of ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001A490
 * Callers:
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001A5FC (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180015614 (--$emplace@AEAPEAUIAudioSessionInfo@@AEAV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CProcess::AddSession(CProcess *this, __int64 (***a2)(void))
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 (**v5)(void); // rax
  __int64 (*v6)(void); // rax
  int v7; // edi
  const char *v8; // r9
  __int64 result; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 (***v13)(void); // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+20h]

  v13 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v15 = v4;
  v12 = 0LL;
  v5 = *a2;
  v14 = 0LL;
  v6 = *v5;
  try
  {
    v7 = v6();
    if ( v7 >= 0 )
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v12);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v7 >= 0 )
    {
      std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::emplace<IAudioSessionInfo * &,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy> &>(
        (__int64)this + 64,
        (__int64)v10,
        &v13,
        &v12);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v4 )
        LeaveCriticalSection(v4);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB45,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v7);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v4 )
        LeaveCriticalSection(v4);
      result = (unsigned int)v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB49,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           v8);
  }
  return result;
}
