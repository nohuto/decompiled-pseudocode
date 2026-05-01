/*
 * XREFs of _lambda_b77313e954014d84b78f3886c1783ac6_::operator() @ 0x18065BA7C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___::Run @ 0x18065C190 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002F990 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1801C4A50 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801FF24C (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAA.c)
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x180285168 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_b77313e954014d84b78f3886c1783ac6_::operator()(__int64 a1)
{
  __int64 v2; // rbp
  int v3; // ebx
  const unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *v5; // r14
  CSingleViewShellExperience **v6; // rsi
  HSTRING *v7; // rcx
  CSingleViewShellExperience **v8; // rdi
  HSTRING *v9; // rdx
  DWORD v10; // edx
  _BYTE v12[80]; // [rsp+20h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v14; // [rsp+90h] [rbp+8h] BYREF

  v2 = a1 + 32;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 32),
    (wil::ActivityThreadWatcher *)v12);
  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 >= 0 )
  {
    ExperienceManagerUtils::AsStrong<IInspectable>(&v14, (_QWORD *)a1);
    if ( !v14 )
      goto LABEL_15;
    v3 = -2144927148;
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
    v5 = StringRawBuffer;
    v6 = (CSingleViewShellExperience **)(a1 + 8);
    v7 = *(HSTRING **)(a1 + 8);
    if ( v7[21] )
    {
      v3 = CSingleViewShellExperience::LaunchCore((CSingleViewShellExperience *)v7, v7 + 21, StringRawBuffer);
      if ( v3 >= 0 )
      {
LABEL_12:
        (*(void (__fastcall **)(_QWORD, CSingleViewShellExperience *, _QWORD))(**((_QWORD **)*v6 + 11) + 104LL))(
          *((_QWORD *)*v6 + 11),
          *v6,
          (unsigned int)v3);
        if ( v3 < 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
          goto LABEL_16;
        }
        wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v2,
          v10);
LABEL_15:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        v3 = 0;
        goto LABEL_16;
      }
      v8 = (CSingleViewShellExperience **)(a1 + 8);
    }
    else
    {
      v8 = (CSingleViewShellExperience **)(a1 + 8);
    }
    v9 = (HSTRING *)((char *)*v6 + 184);
    if ( *v9 )
      v3 = CSingleViewShellExperience::LaunchCore(*v6, v9, v5);
    v6 = v8;
    if ( v3 < 0 )
      v3 = CSingleViewShellExperience::LaunchCore(*v8, (HSTRING *)*v8 + 1, v5);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11B,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v3);
LABEL_16:
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v12);
  return (unsigned int)v3;
}
