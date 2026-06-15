/*
 * XREFs of ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800BF610
 * Callers:
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x18003E498 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_3a814fbe6c0904bb3814e1119ec605d5__void_::_Do_call @ 0x1800BFB40 (std--_Func_impl_no_alloc__lambda_3a814fbe6c0904bb3814e1119ec605d5__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180063B78 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180071B4C (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18007B7DC (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x18007C528 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2014 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800B2510 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos(AudioEffectsWatcher *this)
{
  void *v2; // rdx
  unsigned int v3; // r14d
  char *v4; // rbx
  __int64 *v5; // r10
  __int64 v6; // rax
  int v7; // eax
  int v8; // esi
  IMalloc *v9; // rcx
  int v10; // ebx
  char *v11; // r14
  unsigned int v12; // esi
  __int64 *v13; // rbx
  void (*v15)(void *); // [rsp+20h] [rbp-59h]
  char *v16; // [rsp+30h] [rbp-49h] BYREF
  void *v17; // [rsp+38h] [rbp-41h] BYREF
  char v18; // [rsp+40h] [rbp-39h]
  unsigned __int64 v19; // [rsp+48h] [rbp-31h] BYREF
  __int128 v20; // [rsp+50h] [rbp-29h]
  __int128 v21; // [rsp+60h] [rbp-19h] BYREF
  __int64 v22; // [rsp+70h] [rbp-9h] BYREF
  __int64 v23; // [rsp+78h] [rbp-1h] BYREF
  _OWORD v24[2]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v22 = 0LL;
  v23 = 0LL;
  memset(v24, 0, sizeof(v24));
  v15 = (void (*)(void *))AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_2_::_unnamed_type_apoResults_::__unnamed_type_apoResults_;
  `eh vector constructor iterator'(
    (char *)v24,
    16LL,
    2LL,
    (void (__fastcall *)(char *))std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>);
  v20 = *(_OWORD *)((char *)this + 40);
  v21 = v20;
  EtwEventActivityIdControl(4LL, &v21);
  do
  {
    wil::details::ResetEvent(*((wil::details **)this + 19), v2);
    AudioEffectsWatcher::ReloadApos(this);
    *((_DWORD *)this + 44) = 0;
    v3 = 0;
    v4 = (char *)&v23;
    do
    {
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v22 + 2 * (int)v3,
        0LL);
      *(_DWORD *)v4 = 0;
      v5 = *(__int64 **)&v4[this - (AudioEffectsWatcher *)&v23 + 112];
      if ( v5 )
      {
        v6 = *v5;
        v16 = (char *)&v22 + v4 - (char *)&v23;
        v17 = 0LL;
        v18 = 1;
        v7 = (*(__int64 (__fastcall **)(__int64 *, void **, char *, _QWORD, void (*)(void *)))(v6 + 24))(
               v5,
               &v17,
               v4,
               *((_QWORD *)this + 19),
               v15);
        v8 = v7;
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            266LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
            (const char *)(unsigned int)v7);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v16);
        if ( v8 < 0 )
          *(_DWORD *)v4 = 0;
      }
      *((_DWORD *)this + 44) += *(_DWORD *)v4;
      ++v3;
      v4 += 16;
    }
    while ( v3 < 3 );
  }
  while ( !WaitForSingleObject(*((HANDLE *)this + 19), 0) );
  if ( !*((_DWORD *)this + 44) )
    goto LABEL_15;
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)this + 21,
    0LL);
  v16 = (char *)this + 168;
  v18 = 1;
  v17 = 0LL;
  v19 = 0LL;
  v10 = ULongLongMult(*((unsigned int *)this + 44), 0x10uLL, &v19);
  if ( v10 >= 0 )
    v10 = CTCoAllocPolicy::Alloc(v9, 1, v19, &v17);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v16);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
LABEL_15:
    v11 = (char *)*((_QWORD *)this + 21);
    v12 = 0;
    v13 = &v23;
    do
    {
      if ( *(_DWORD *)v13 )
      {
        memcpy_0(v11, (const void *)*(v13 - 1), 16LL * *(unsigned int *)v13);
        v11 += 16 * *(unsigned int *)v13;
      }
      ++v12;
      v13 += 2;
    }
    while ( v12 < 3 );
    RtlPublishWnfStateData(
      *(_QWORD *)((char *)this + 92),
      0LL,
      *((_QWORD *)this + 21),
      (unsigned int)(16 * *((_DWORD *)this + 44)),
      0LL);
    v10 = 0;
  }
  EtwEventActivityIdControl(4LL, &v21);
  `eh vector destructor iterator'(
    (char *)&v22,
    16LL,
    3LL,
    (void (__fastcall *)(char *))AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_2_::_unnamed_type_apoResults_::__unnamed_type_apoResults_);
  return (unsigned int)v10;
}
