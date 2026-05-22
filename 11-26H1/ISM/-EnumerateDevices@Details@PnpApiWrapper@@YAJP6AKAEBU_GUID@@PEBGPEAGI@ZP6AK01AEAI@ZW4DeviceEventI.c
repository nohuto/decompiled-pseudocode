/*
 * XREFs of ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x18001FEA8
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x1800897E0 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x1800201C8 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x1800207CC (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@GU?$default_delete@G@std@@@std@@QEAA@XZ @ 0x1800996A8 (--1-$unique_ptr@GU-$default_delete@G@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800C1848 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PnpApiWrapper::Details::EnumerateDevices(
        __int64 (__fastcall *a1)(__int64, __int64, void *, _QWORD),
        const wchar_t *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rsi
  unsigned int v8; // r13d
  PCWSTR StringRawBuffer; // rax
  __int64 v10; // rcx
  void *v11; // rbx
  void *v12; // r12
  void *v13; // r14
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // esi
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // edx
  const wchar_t *v21; // rsi
  unsigned int v22; // ecx
  __int64 v23; // r12
  size_t v24; // rax
  UINT32 v25; // r14d
  unsigned int v26; // eax
  UINT32 v27; // edx
  HRESULT v28; // eax
  int v29; // edx
  unsigned int v30; // r8d
  __int64 v32; // rdx
  __int64 v33; // r9
  int v34; // [rsp+20h] [rbp-C8h]
  size_t MaxCount; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+38h] [rbp-B0h]
  const wchar_t *v37; // [rsp+40h] [rbp-A8h]
  unsigned int v38; // [rsp+48h] [rbp-A0h]
  void *v39; // [rsp+50h] [rbp-98h] BYREF
  __int64 v40; // [rsp+58h] [rbp-90h]
  __int64 (__fastcall *v41)(__int64, __int64, void *, _QWORD); // [rsp+60h] [rbp-88h]
  __int64 v42; // [rsp+68h] [rbp-80h]
  void (__fastcall *v43)(_QWORD, HSTRING, __int64); // [rsp+70h] [rbp-78h]
  __int64 v44; // [rsp+78h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-68h] BYREF
  HSTRING string; // [rsp+98h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v7 = a4;
  v40 = a4;
  v8 = a3;
  v37 = a2;
  v41 = a1;
  v38 = a3;
  v42 = a7;
  v44 = a7;
  v43 = (void (__fastcall *)(_QWORD, HSTRING, __int64))&PnpDeviceWatcher::OnPnpNotification;
  StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
  v10 = (unsigned __int64)StringRawBuffer & -(__int64)(*StringRawBuffer != 0);
  v36 = v10;
  v11 = 0LL;
  v39 = 0LL;
  LODWORD(MaxCount) = 0;
  v12 = 0LL;
  v13 = 0LL;
  do
  {
    v14 = ((__int64 (__fastcall *)(__int64, __int64, size_t *))v37)(v7, v10, &MaxCount);
    v16 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v14, v15);
    v17 = v16;
    if ( v16 == -2147023728 )
    {
      if ( v13 )
        operator delete(v11, (const struct std::nothrow_t *)2);
      return 2147943568LL;
    }
    if ( v16 < 0 )
    {
      v32 = 292LL;
      goto LABEL_34;
    }
    v18 = 2LL * (unsigned int)MaxCount;
    if ( !is_mul_ok((unsigned int)MaxCount, 2uLL) )
      v18 = -1LL;
    v11 = operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
    v39 = v11;
    if ( v12 )
      operator delete(v12, (const struct std::nothrow_t *)2);
    if ( !v11 )
    {
      v17 = -2147024882;
      v33 = 2147942414LL;
      v32 = 296LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)v33,
        v34);
      std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v39);
      return v17;
    }
    v7 = v40;
    v19 = v41(v40, v36, v11, (unsigned int)MaxCount);
    v12 = v11;
    v13 = v11;
    v10 = v36;
  }
  while ( v19 == 26 );
  v16 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v19, v20);
  v17 = v16;
  if ( v16 == -2147023728 )
  {
    operator delete(v11, (const struct std::nothrow_t *)2);
    return 2147943568LL;
  }
  if ( v16 < 0 )
  {
    v32 = 309LL;
LABEL_34:
    v33 = (unsigned int)v16;
    goto LABEL_35;
  }
  v21 = (const wchar_t *)v11;
  v37 = (const wchar_t *)v11;
  v22 = MaxCount;
  v23 = v42;
  while ( v22 && *v21 )
  {
    v24 = wcsnlen(v21, v22);
    v25 = v24;
    if ( v24 >= (unsigned int)MaxCount )
    {
      v17 = -2147418113;
      v33 = 2147549183LL;
      v32 = 322LL;
      goto LABEL_35;
    }
    string = 0LL;
    LODWORD(v36) = v24;
    v26 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v24);
    v27 = v26 - 1;
    if ( v25 < v26 )
      v27 = v25;
    v28 = WindowsCreateStringReference(v21, v27, &hstringHeader, &string);
    if ( v28 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v28, v29, v30);
LABEL_31:
      v11 = v39;
      v21 = v37;
      v25 = v36;
      v8 = v38;
      v23 = v44;
    }
    else
    {
      try
      {
        v43(v8, string, v23);
      }
      catch ( ... )
      {
        goto LABEL_31;
      }
    }
    v21 += v25 + 1;
    v37 = v21;
    v22 = -1 - v25 + MaxCount;
    LODWORD(MaxCount) = v22;
  }
  if ( v11 )
    operator delete(v11, (const struct std::nothrow_t *)2);
  return 0LL;
}
