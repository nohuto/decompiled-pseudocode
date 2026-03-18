/*
 * XREFs of ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x18025C824
 * Callers:
 *     ??R?$default_delete@VCComputeScribbleScheduler@@@std@@QEBAXPEAVCComputeScribbleScheduler@@@Z @ 0x180259A70 (--R-$default_delete@VCComputeScribbleScheduler@@@std@@QEBAXPEAVCComputeScribbleScheduler@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18009ADE0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180150EAC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@VCComputeScribbleStopwatch@@U?$default_delete@VCComputeScribbleStopwatch@@@std@@@std@@QEAA@XZ @ 0x18025C804 (--1-$unique_ptr@VCComputeScribbleStopwatch@@U-$default_delete@VCComputeScribbleStopwatch@@@std@@.c)
 *     ??1ThreadSharedData@CComputeScribbleScheduler@@QEAA@XZ @ 0x18025C948 (--1ThreadSharedData@CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x18025D114 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComputeScribbleScheduler::~CComputeScribbleScheduler(CComputeScribbleScheduler *this, void *a2)
{
  HANDLE *v2; // r14
  wil::details **v4; // rsi
  void *v5; // rdx
  unsigned int v6; // r8d
  const char *v7; // r9
  wil::details **v8; // rdi
  __int64 v9; // rcx
  void *v10; // rdx
  void *v11; // rdx
  void *v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (HANDLE *)((char *)this + 64);
  if ( !*((_QWORD *)this + 8) || *v2 == (HANDLE)-1LL )
  {
    v8 = (wil::details **)((char *)this + 72);
  }
  else
  {
    v4 = (wil::details **)((char *)this + 72);
    wil::details::SetEvent(*((wil::details **)this + 9), a2);
    v8 = v4;
    if ( WaitForSingleObject(*v2, 0x3E8u) == -1 )
      wil::details::in1diag3::Log_GetLastError(retaddr, v5, v6, v7);
  }
  v9 = *((_QWORD *)this + 26);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 26);
  CComputeScribbleScheduler::ThreadSharedData::~ThreadSharedData((CComputeScribbleScheduler *)((char *)this + 104));
  std::unique_ptr<CComputeScribbleStopwatch>::~unique_ptr<CComputeScribbleStopwatch>((_QWORD *)this + 12);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 11,
    v10);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 10,
    v11);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    v8,
    v12);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
}
