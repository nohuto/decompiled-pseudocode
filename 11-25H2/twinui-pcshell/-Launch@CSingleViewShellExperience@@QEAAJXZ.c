/*
 * XREFs of ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800156EC
 * Callers:
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180015354 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001BAEC (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Prelaunch@CStartExperienceManager@@UEAAJE@Z @ 0x180233ED0 (-Prelaunch@CStartExperienceManager@@UEAAJE@Z.c)
 *     ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x1803B5B10 (-Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x180013F38 (-UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z @ 0x180019798 (-StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z.c)
 *     ?BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x180019E60 (-BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18001A9A0 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001ACAC (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CopyableHString@ExperienceManagerUtils@@QEAA@PEAUHSTRING__@@@Z @ 0x1801FB324 (--0CopyableHString@ExperienceManagerUtils@@QEAA@PEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b77313e954014d84b78f3886c1783ac6___ @ 0x18065B268 (Windows--Internal--ComTaskPool--QueueTask__lambda_b77313e954014d84b78f3886c1783ac6___.c)
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::_lambda_b77313e954014d84b78f3886c1783ac6_ @ 0x18065B384 (_lambda_b77313e954014d84b78f3886c1783ac6_--_lambda_b77313e954014d84b78f3886c1783ac6_.c)
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::__lambda_b77313e954014d84b78f3886c1783ac6_ @ 0x18065B53C (_lambda_b77313e954014d84b78f3886c1783ac6_--__lambda_b77313e954014d84b78f3886c1783ac6_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSingleViewShellExperience::Launch(CSingleViewShellExperience *this)
{
  __int64 v2; // rdx
  ExperienceManagerUtils *v3; // rcx
  HWND v4; // r14
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v6; // rbx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-E0h]
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+38h] [rbp-C8h] BYREF
  char *v16; // [rsp+40h] [rbp-C0h]
  int v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[368]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+238h]

  v2 = 16LL;
  if ( dword_18089EB78 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_18089EB78);
    if ( dword_18089EB78 == -1 )
    {
      dword_18089EB7C = SHTaskPoolGetUniqueContext();
      Init_thread_footer(&dword_18089EB78);
    }
  }
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( v3 )
    v4 = ExperienceManagerUtils::WindowFromViewWrapper(
           v3,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v2);
  else
    v4 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v6 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v17,
    "Launch");
  *(_QWORD *)v17 = &SingleViewExperienceTelemetry::Launch::`vftable';
  SingleViewExperienceTelemetry::Launch::StartActivity(
    (SingleViewExperienceTelemetry::Launch *)v17,
    v6,
    StringRawBuffer,
    v4);
  ExperienceManagerUtils::CopyableHString::CopyableHString(&string, *(HSTRING *)this);
  v7 = (int)v16;
  if ( (int)v16 >= 0 )
  {
    if ( (*((_BYTE *)this + 68) & 8) == 0 )
      CSingleViewShellExperience::BoostPriority(this, 0LL);
    v8 = *((_QWORD *)this + 12);
    v14 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = lambda_b77313e954014d84b78f3886c1783ac6_::_lambda_b77313e954014d84b78f3886c1783ac6_(v18, &v14, this, &string);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_b77313e954014d84b78f3886c1783ac6___(
           v11,
           v10,
           (unsigned int)dword_18089EB7C,
           v9);
    lambda_b77313e954014d84b78f3886c1783ac6_::__lambda_b77313e954014d84b78f3886c1783ac6_(v18);
    if ( v7 < 0 )
    {
      CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x147,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v7,
        (int)v17);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v16,
      v13);
  }
  WindowsDeleteString(string);
  string = 0LL;
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)v17);
  return (unsigned int)v7;
}
