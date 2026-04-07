/*
 * XREFs of ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJAEBVCDWMDisplay@@PEAPEAXPEAI@Z @ 0x180072DA0
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18004AC10 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CDDisplayManager::MakeSourceHandleForTarget(
        CDDisplayManager *this,
        const struct CDWMDisplay *a2,
        void **a3,
        unsigned int *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int i; // esi
  bool v11; // zf
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64 *); // rdi
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, __int64 *); // rdi
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, __int64, __int64 *); // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64); // r9
  int v32; // eax
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, HANDLE *); // rdi
  int v35; // eax
  HANDLE v36; // rax
  unsigned int v38; // [rsp+20h] [rbp-60h]
  unsigned int v39; // [rsp+20h] [rbp-60h]
  __int64 v40; // [rsp+30h] [rbp-50h] BYREF
  __int64 v41; // [rsp+38h] [rbp-48h] BYREF
  __int64 v42; // [rsp+40h] [rbp-40h] BYREF
  __int64 v43; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v44; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v45; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v46; // [rsp+58h] [rbp-28h] BYREF
  HANDLE hObject; // [rsp+60h] [rbp-20h] BYREF
  __int64 v48; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v49; // [rsp+70h] [rbp-10h] BYREF
  __int64 v50; // [rsp+78h] [rbp-8h] BYREF
  int v51; // [rsp+B0h] [rbp+30h] BYREF

  v49 = 0LL;
  v48 = 0LL;
  hObject = 0LL;
  v45 = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 **))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2), &v49);
  v9 = v8;
  if ( v8 < 0 )
  {
    v39 = 64;
    goto LABEL_51;
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v49 + 56))(v49, &v45);
  v9 = v8;
  if ( v8 < 0 )
  {
    v39 = 65;
LABEL_51:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v39, 0LL);
    goto LABEL_52;
  }
  for ( i = 0; ; ++i )
  {
    v11 = i == v45;
    if ( i >= v45 )
      goto LABEL_31;
    v40 = 0LL;
    v41 = 0LL;
    v50 = 0LL;
    v44 = 0;
    v12 = *v49;
    v40 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v12 + 48))(v49, i, &v40);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x4Du, 0LL);
      goto LABEL_48;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v40 + 64LL))(v40, &v44);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x4Eu, 0LL);
      goto LABEL_48;
    }
    v15 = v40;
    v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 48LL);
    v17 = v41;
    v41 = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v18 = v16(v15, &v41);
    v9 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x50u, 0LL);
      goto LABEL_48;
    }
    v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 48LL))(v41, &v50);
    v9 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x51u, 0LL);
      goto LABEL_48;
    }
    if ( *((_QWORD *)a2 + 21) == v50 && *((_DWORD *)a2 + 48) == v44 )
      break;
LABEL_27:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v41);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v40);
  }
  v43 = 0LL;
  v42 = 0LL;
  v51 = 0;
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 2) + 64LL))(
          *((_QWORD *)this + 2),
          v40,
          &v51);
  v9 = v20;
  if ( v20 < 0 )
  {
    v38 = 93;
    goto LABEL_42;
  }
  v21 = *((_QWORD *)this + 2);
  v22 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 80LL);
  v23 = v42;
  v42 = 0LL;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v20 = v22(v21, &v42);
  v9 = v20;
  if ( v20 < 0 )
  {
    v38 = 96;
    goto LABEL_42;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v42 + 48LL))(v42, &v51);
  v9 = v20;
  if ( v20 < 0 )
  {
    v38 = 97;
    goto LABEL_42;
  }
  if ( v51 )
  {
    v9 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003304442, 0x68u, 0LL);
    goto LABEL_43;
  }
  v24 = v42;
  v25 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 64LL);
  v26 = v48;
  v48 = 0LL;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  v20 = v25(v24, &v48);
  v9 = v20;
  if ( v20 < 0 )
  {
    v38 = 107;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, v38, 0LL);
    goto LABEL_43;
  }
  v27 = v48;
  v28 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v48 + 120LL);
  v29 = v43;
  v43 = 0LL;
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  v20 = v28(v27, v40, &v43);
  v9 = v20;
  if ( v20 < 0 )
  {
    v38 = 110;
    goto LABEL_42;
  }
  if ( !v43 )
  {
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v42);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v43);
    goto LABEL_27;
  }
  v46 = 0LL;
  v30 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v46);
  v32 = (**v31)(v31, &GUID_a6ba4205_e59e_4e71_b25b_4e436d21ee3d, v30);
  v9 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x73u, 0LL);
    goto LABEL_35;
  }
  v33 = v46;
  v34 = *(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v46 + 24LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v35 = v34(v33, &hObject);
  v9 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x7Du, 0LL);
LABEL_35:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v46);
LABEL_43:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v42);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v43);
LABEL_48:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v41);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v40);
    goto LABEL_52;
  }
  v36 = hObject;
  hObject = 0LL;
  *a3 = v36;
  *a4 = v44;
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v46);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v42);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v43);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v41);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v40);
  v11 = i == v45;
LABEL_31:
  if ( v11 )
  {
    v9 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003304442, 0x8Cu, 0LL);
  }
LABEL_52:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  if ( v49 )
    (*(void (__fastcall **)(__int64 *))(*v49 + 16))(v49);
  return v9;
}
