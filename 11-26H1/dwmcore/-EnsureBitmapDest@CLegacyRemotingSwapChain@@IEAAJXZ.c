/*
 * XREFs of ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1802A8084
 * Callers:
 *     ?Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1802A86B8 (-Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800E62DC (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$?8V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x180150AA8 (--$-8V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::EnsureBitmapDest(CLegacyRemotingSwapChain *this)
{
  void **v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rdi
  NTSTATUS v7; // ebx
  int v8; // r9d
  HANDLE CurrentProcess; // rax
  int v10; // eax
  unsigned int SectionPageProtection; // [rsp+28h] [rbp-39h]
  struct IBitmapSource *v13; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v14; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v15; // [rsp+64h] [rbp+3h]
  union _LARGE_INTEGER MaximumSize; // [rsp+68h] [rbp+7h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+Fh] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+78h] [rbp+17h] BYREF
  enum DXGI_FORMAT v19[4]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = (void **)((char *)this + 184);
  v3 = 0;
  if ( wil::operator==<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((_QWORD *)this + 23) )
  {
    v4 = *((_QWORD *)this + 8) + 8LL;
    v13 = 0LL;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 32LL))(v4, &v14);
    (*(void (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + 24LL))(
      *((_QWORD *)this + 8) + 8LL,
      v19);
    v5 = v14 * ((unsigned __int64)GetPixelFormatSize(v19[0]) >> 3);
    if ( v5 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      v3 = -2147024362;
      SectionPageProtection = 371;
      goto LABEL_16;
    }
    v6 = (unsigned int)v5 * (unsigned __int64)v15;
    if ( v6 > 0xFFFFFFFF )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x176u, 0LL);
    }
    else
    {
      MaximumSize.QuadPart = (unsigned int)v6;
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v1,
        0LL);
      v7 = NtCreateSection(v1, 6u, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
      if ( v7 < 0 )
      {
        SectionPageProtection = 385;
LABEL_6:
        v3 = v7 | 0x10000000;
        v8 = v3;
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, SectionPageProtection, 0LL);
        goto LABEL_17;
      }
      ViewSize = 0LL;
      SectionOffset.QuadPart = 0LL;
      CurrentProcess = GetCurrentProcess();
      v7 = NtMapViewOfSection(
             *v1,
             CurrentProcess,
             (PVOID *)this + 24,
             0LL,
             0LL,
             &SectionOffset,
             &ViewSize,
             ViewUnmap,
             0,
             4u);
      if ( v7 < 0 )
      {
        SectionPageProtection = 399;
        goto LABEL_6;
      }
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
      v10 = HrCreateBitmapFromMemoryEx(
              v14,
              v15,
              (const struct PixelFormatInfo *)v19,
              v5,
              v6,
              *((unsigned __int8 **)this + 24),
              0LL,
              &v13);
      v3 = v10;
      if ( v10 < 0 )
      {
        SectionPageProtection = 407;
        goto LABEL_12;
      }
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 9);
      v10 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, char *))v13)(
              v13,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              (char *)this + 72);
      v3 = v10;
      if ( v10 < 0 )
      {
        SectionPageProtection = 409;
LABEL_12:
        v8 = v10;
        goto LABEL_16;
      }
    }
LABEL_17:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  }
  return v3;
}
