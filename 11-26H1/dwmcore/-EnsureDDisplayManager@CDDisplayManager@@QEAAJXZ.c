/*
 * XREFs of ?EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ @ 0x1801C7E18
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@PEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x18029DEBC (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D5518 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D741C (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18021EC8C (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::EnsureDDisplayManager(CDDisplayManager *this)
{
  unsigned int v1; // ebx
  HRESULT v2; // eax
  int ActivationFactory; // eax
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(_QWORD *, __int64, void *); // rdi
  int v9; // eax
  HRESULT v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  HRESULT v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  HSTRING v16; // [rsp+38h] [rbp-29h] BYREF
  HSTRING v17; // [rsp+40h] [rbp-21h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-19h] BYREF
  HSTRING string; // [rsp+50h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-1h] BYREF
  HSTRING_HEADER v21; // [rsp+78h] [rbp+17h] BYREF
  HSTRING_HEADER v22; // [rsp+90h] [rbp+2Fh] BYREF

  v1 = 0;
  if ( !g_DDisplayManager )
  {
    v18 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    string = 0LL;
    memset(&hstringHeader, 0, sizeof(hstringHeader));
    memset(&v21, 0, sizeof(v21));
    memset(&v22, 0, sizeof(v22));
    v2 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayManager", 0x2Bu, &hstringHeader, &string);
    v1 = v2;
    if ( v2 >= 0 )
    {
      ActivationFactory = RoGetActivationFactory(string, &GUID_2b6b9446_b999_5535_9d69_53f092c780a1, &v18);
      v1 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ActivationFactory, 0x64u, 0LL);
      }
      else
      {
        v5 = g_DDisplayManager;
        v6 = v18;
        v7 = *v18;
        g_DDisplayManager = 0LL;
        v8 = *(__int64 (__fastcall **)(_QWORD *, __int64, void *))(v7 + 48);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        v9 = v8(v6, 2LL, &g_DDisplayManager);
        v1 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x65u, 0LL);
        }
        else
        {
          v10 = WindowsCreateStringReference(
                  L"Windows.Devices.Display.Core.DisplayPrimaryDescription",
                  0x36u,
                  &v21,
                  &v17);
          v1 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x6Bu, 0LL);
          }
          else
          {
            v11 = qword_1803DE718;
            qword_1803DE718 = 0LL;
            if ( v11 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            v12 = RoGetActivationFactory(v17, &GUID_e60e4cfb_36c9_56dd_8fa1_6ff8c4e0ff07, &qword_1803DE718);
            v1 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x6Cu, 0LL);
            }
            else
            {
              v13 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayHdrMetadata", 0x2Fu, &v22, &v16);
              v1 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x72u, 0LL);
              }
              else
              {
                v14 = qword_1803DE720;
                qword_1803DE720 = 0LL;
                if ( v14 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
                v15 = RoGetActivationFactory(v16, &GUID_028d1ebd_933a_5cba_97d8_fe808844d45d, &qword_1803DE720);
                v1 = v15;
                if ( v15 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x73u, 0LL);
              }
            }
          }
        }
      }
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v16);
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v17);
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x63u, 0LL);
      if ( string )
        WindowsDeleteString(string);
    }
  }
  return v1;
}
