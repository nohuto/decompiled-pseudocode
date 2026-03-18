/*
 * XREFs of ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x18025EE5C
 * Callers:
 *     ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x18025ED94 (-Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::Initialize(
        CComputeScribbleStopwatch *this,
        struct ID3D12CommandQueue *a2)
{
  struct ID3D12CommandQueueVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetDevice)(ID3D12CommandQueue *, const IID *const, void **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(_QWORD *, int *, GUID *, char *); // r14
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(_QWORD *, int *, _QWORD, int *, int, _QWORD, GUID *, char *); // r14
  _QWORD *v18; // [rsp+50h] [rbp-49h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-41h] BYREF
  int v20; // [rsp+60h] [rbp-39h] BYREF
  __int64 v21; // [rsp+64h] [rbp-35h]
  int v22; // [rsp+70h] [rbp-29h] BYREF
  __int64 v23; // [rsp+74h] [rbp-25h]
  int v24; // [rsp+7Ch] [rbp-1Dh]
  __int64 v25; // [rsp+80h] [rbp-19h]
  int v26; // [rsp+88h] [rbp-11h]
  __int64 v27; // [rsp+8Ch] [rbp-Dh]
  __int64 v28; // [rsp+94h] [rbp-5h]
  int v29; // [rsp+9Ch] [rbp+3h]
  __int64 v30; // [rsp+A0h] [rbp+7h]
  int v31; // [rsp+A8h] [rbp+Fh] BYREF
  __int128 v32; // [rsp+ACh] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  lpVtbl = a2->lpVtbl;
  v18 = 0LL;
  GetDevice = lpVtbl->GetDevice;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v18);
  v6 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, GUID *, _QWORD **))GetDevice)(
         a2,
         &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
         &v18);
  v7 = v6;
  if ( v6 >= 0 )
  {
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)this, (__int64)a2);
    v9 = v18;
    v10 = *((_QWORD *)this + 4);
    v21 = 1LL;
    v20 = 1;
    v11 = *v18;
    *((_QWORD *)this + 4) = 0LL;
    v12 = *(__int64 (__fastcall **)(_QWORD *, int *, GUID *, char *))(v11 + 312);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v6 = v12(v9, &v20, &GUID_0d9658ae_ed45_469e_a61d_970ec583cab4, (char *)this + 32);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v13 = v18;
      v14 = *((_QWORD *)this + 5);
      v31 = 3;
      v23 = 0LL;
      v24 = 0;
      v28 = 1LL;
      v30 = 0LL;
      v22 = 1;
      v25 = 8LL;
      v26 = 1;
      v27 = 65537LL;
      v29 = 1;
      v32 = 0LL;
      v15 = *v18;
      *((_QWORD *)this + 5) = 0LL;
      v16 = *(__int64 (__fastcall **)(_QWORD *, int *, _QWORD, int *, int, _QWORD, GUID *, char *))(v15 + 216);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v6 = v16(v13, &v31, 0LL, &v22, 1024, 0LL, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, (char *)this + 40);
      v7 = v6;
      if ( v6 >= 0 )
      {
        Frequency.QuadPart = 0LL;
        QueryPerformanceFrequency(&Frequency);
        v7 = 0;
        *((float *)this + 2) = (float)(int)Frequency.LowPart;
        goto LABEL_13;
      }
      v8 = 46LL;
    }
    else
    {
      v8 = 24LL;
    }
  }
  else
  {
    v8 = 16LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
    (const char *)(unsigned int)v6);
LABEL_13:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  return v7;
}
