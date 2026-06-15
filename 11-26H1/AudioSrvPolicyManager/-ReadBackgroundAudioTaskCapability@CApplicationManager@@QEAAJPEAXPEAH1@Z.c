/*
 * XREFs of ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18003C914
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::ReadBackgroundAudioTaskCapability(
        CApplicationManager *this,
        void *a2,
        int *a3,
        int *a4)
{
  HRESULT v7; // eax
  unsigned int v8; // ebx
  HRESULT v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID ppv; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v7 = CoInitializeEx(0LL, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    ppv = 0LL;
    v9 = CoCreateInstance(&CLSID_BackgroundTaskCapability, 0LL, 1u, &GUID_d54e68c2_54cd_48b3_ad9a_3f4a4503ba80, &ppv);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(LPVOID, void *, __int64, int *))(*(_QWORD *)ppv + 48LL))(ppv, a2, 1LL, a3);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1108LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v10);
      if ( *a3 )
        *a4 = 1;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x447,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v9);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
    CoUninitialize();
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x443,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  return v8;
}
