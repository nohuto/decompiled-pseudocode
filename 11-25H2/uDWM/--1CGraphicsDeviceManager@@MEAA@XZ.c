/*
 * XREFs of ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800B6384
 * Callers:
 *     ??_GCGraphicsDeviceManager@@MEAAPEAXI@Z @ 0x1800B6430 (--_GCGraphicsDeviceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180065BD0 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180079EA8 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180096354 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180099C14 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 */

void __fastcall CGraphicsDeviceManager::~CGraphicsDeviceManager(CGraphicsDeviceManager *this)
{
  void *v2; // rdx
  void *v3; // rdx

  *(_QWORD *)this = &CGraphicsDeviceManager::`vftable';
  CGraphicsDeviceManager::ReleaseGraphicsDevice(this);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 9,
    0LL);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 10,
    0LL);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 10,
    v2);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 9,
    v3);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 2);
  CBaseObject::~CBaseObject(this);
}
