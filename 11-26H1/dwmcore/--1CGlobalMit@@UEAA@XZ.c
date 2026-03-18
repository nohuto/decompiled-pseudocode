/*
 * XREFs of ??1CGlobalMit@@UEAA@XZ @ 0x1802285B8
 * Callers:
 *     ??_GCGlobalMit@@UEAAPEAXI@Z @ 0x180228610 (--_GCGlobalMit@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18009ADE0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?Stop@CMit@@QEAAXXZ @ 0x1802283C4 (-Stop@CMit@@QEAAXXZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x18022C0F0 (--1CMmcssTask@@QEAA@XZ.c)
 */

void __fastcall CGlobalMit::~CGlobalMit(wil::details **this)
{
  void *v2; // rdx
  void *v3; // rdx

  *this = (wil::details *)&CGlobalMit::`vftable';
  CMit::Stop((CMit *)this);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    this + 18,
    v2);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    this + 17,
    v3);
  CMmcssTask::~CMmcssTask((CMmcssTask *)(this + 6));
  CMit::~CMit((CMit *)this);
}
