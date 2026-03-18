/*
 * XREFs of ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18009AC6C
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x18009A310 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180127900 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800E62DC (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CaptureBitsResponse::MapSectionBitmap(CaptureBitsResponse *this)
{
  void *v2; // rax
  unsigned int v3; // r9d
  unsigned int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  struct IBitmapSource *v7; // rbx
  signed int v8; // edi
  int v9; // eax
  signed int LastError; // eax
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-28h]
  unsigned __int8 *v13; // [rsp+28h] [rbp-20h]
  struct IBitmapSource *v14; // [rsp+50h] [rbp+8h] BYREF

  SetLastError(0);
  v2 = MapViewOfFile(*((HANDLE *)this + 188), 2u, 0, 0, *((unsigned int *)this + 380));
  *((_QWORD *)this + 189) = v2;
  if ( v2 )
  {
    memset_0(v2, 0, *((unsigned int *)this + 380));
    v3 = *((_DWORD *)this + 381);
    v4 = *((_DWORD *)this + 372);
    v5 = *((_DWORD *)this + 371);
    v13 = (unsigned __int8 *)*((_QWORD *)this + 189);
    dwNumberOfBytesToMap = *((_DWORD *)this + 380);
    v14 = 0LL;
    v6 = HrCreateBitmapFromMemoryEx(
           v5,
           v4,
           (CaptureBitsResponse *)((char *)this + 1492),
           v3,
           dwNumberOfBytesToMap,
           v13,
           0LL,
           &v14);
    v7 = v14;
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x10Du, 0LL);
    }
    else
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 191);
      v9 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, char *))v7)(
             v7,
             &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
             (char *)this + 1528);
      v8 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x110u, 0LL);
    }
    if ( v7 )
      (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( v8 >= 0 )
      v8 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x100u, 0LL);
  }
  return (unsigned int)v8;
}
