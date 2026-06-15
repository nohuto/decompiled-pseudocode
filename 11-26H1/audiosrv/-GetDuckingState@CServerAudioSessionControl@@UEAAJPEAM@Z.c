/*
 * XREFs of ?GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x1800D02A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ @ 0x1800CE0C8 (-GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetDuckingState(CServerAudioSessionControl *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  float v4; // xmm6_4
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  float v6; // xmm0_4
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 9);
  v4 = FLOAT_1_0;
  EnterCriticalSection(v2 + 9);
  v8 = v2 + 9;
  DebugInfo = v2[10].DebugInfo;
  while ( DebugInfo )
  {
    v6 = CPBMStreamClassVolumeGainStage::GainDelta((CPBMStreamClassVolumeGainStage *)DebugInfo->CriticalSection);
    DebugInfo = *(PRTL_CRITICAL_SECTION_DEBUG *)&DebugInfo->Type;
    v4 = fminf(v4, v6);
  }
  *a2 = v4;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  return 0LL;
}
