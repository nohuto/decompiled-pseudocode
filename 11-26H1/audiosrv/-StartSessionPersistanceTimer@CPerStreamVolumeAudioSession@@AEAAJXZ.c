/*
 * XREFs of ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004052C
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x180040430 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180081E30 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800CF3E0 (-SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800CF630 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18001B6E0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     _lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_ @ 0x1800ADDB8 (_lambda_f7a716bfe224096f553bb41568304cf0_--_lambda_f7a716bfe224096f553bb41568304cf0_.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_f162d4891787fb4765c2e0deed1c1ff2__0_ @ 0x1800CCD24 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_f162d4891787fb4765c2e0de.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE v9[64]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+80h] [rbp+8h] BYREF
  char v12; // [rsp+88h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 920) || !*((_QWORD *)this + 116) )
    return 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 936);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 936));
  v11 = v2;
  if ( *((_QWORD *)this + 123)
    || (GetSerialWorkQueue(),
        v3 = lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_(&v12, this),
        v4 = std::function_void___cdecl_void__::function_void___cdecl_void____lambda_f162d4891787fb4765c2e0deed1c1ff2__0_(
               v9,
               v3),
        v6 = CSerialWorkQueue::QueueRecurringItem(v5, 0x1388u, v5, v4, (char *)this + 984),
        v7 = v6,
        v6 >= 0) )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10BC,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v6);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
