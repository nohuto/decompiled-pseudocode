/*
 * XREFs of ?StartActivity@EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXPEBG@Z @ 0x180018B24
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003BE00 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800195E0 (-zInternalStart@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180019994 (-Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18005D5FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_EventQueuedActivity::StartActivity(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_EventQueuedActivity *this,
        const unsigned __int16 *a2)
{
  const struct _tlgProvider_t *v4; // rax
  int v5; // edi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  int v8; // ecx
  DWORD v9; // [rsp+60h] [rbp+8h] BYREF
  const unsigned __int16 *v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v4 = ControlCenterLogging::Provider();
  v5 = (int)v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    v10 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v7 = *((_QWORD *)this + 34);
    v9 = CurrentThreadId;
    v11 = 0LL;
    if ( !*(_BYTE *)(v7 + 4) || _tlgGuidIsZero((const struct _GUID *)(v7 + 24)) )
      v8 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v5,
      (unsigned int)&unk_1807EEE5E,
      v7 + 8,
      v8,
      (__int64)&v11,
      (__int64)&v9,
      (__int64)&v10);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
