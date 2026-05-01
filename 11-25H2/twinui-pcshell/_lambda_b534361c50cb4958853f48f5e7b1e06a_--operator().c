/*
 * XREFs of _lambda_b534361c50cb4958853f48f5e7b1e06a_::operator() @ 0x1800D4688
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___::Run @ 0x18022AC30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D4BA8 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D4D68 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1801A8FD8 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_b534361c50cb4958853f48f5e7b1e06a_::operator()(__int64 a1)
{
  _DWORD *v2; // r8
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  void *v7; // rcx
  int v9; // eax
  void *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  _OWORD v13[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v14[48]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  void *v16; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+28h] BYREF

  v2 = *(_DWORD **)(a1 + 312);
  if ( *v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v13,
      (struct wil::details::IFailureCallback *)(a1 + 40),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  }
  else
  {
    memset(v13, 0, sizeof(v13));
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v14,
      0LL,
      0LL,
      0);
  }
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
    v16 = 0LL;
    if ( *(_QWORD *)(a1 + 32)
      && (Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16),
          v9 = CMarshaledInterface::_Unmarshal(
                 (CMarshaledInterface *)(a1 + 32),
                 &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
                 &v16,
                 1),
          v3 = v9,
          v9 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC3,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
        (const char *)(unsigned int)v9);
      v10 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    else
    {
      v17 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      v4 = CoreQueryWindowService(
             *(_QWORD *)a1,
             &GUID_db37659c_5741_4985_a443_dda995e92f5f,
             &GUID_c1635471_1417_4750_811f_a6122953c5a3,
             &v17);
      v3 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC7,
          (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
          (const char *)(unsigned int)v4);
        v11 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v12 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      else
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))(*(_QWORD *)v17 + 48LL))(
               v17,
               *(_QWORD *)(a1 + 8),
               *(_QWORD *)(a1 + 24),
               v16);
        v3 = v5;
        if ( v5 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC8,
            (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
            (const char *)(unsigned int)v5);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        }
        else
        {
          wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 40);
          v6 = v17;
          if ( v17 )
          {
            v17 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          }
          v7 = v16;
          if ( v16 )
          {
            v16 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
          }
          v3 = 0;
        }
      }
    }
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v13);
  return (unsigned int)v3;
}
