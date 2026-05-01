/*
 * XREFs of ?OnViewWrapperChanged@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x1802060C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::OnViewWrapperChanged(
        DesktopSingleViewShellExperiencePersonality *this)
{
  __int64 v1; // rax
  char *v2; // rdi
  __int64 *v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v5)(_QWORD, GUID *, char *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 1);
  v2 = (char *)this + 16;
  v3 = (__int64 *)((char *)this + 16);
  v4 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))(v1 + 24);
  if ( v4 )
  {
    v5 = **v4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3);
    v6 = v5(v4, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a, v2);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x69,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3);
  }
  return 0LL;
}
