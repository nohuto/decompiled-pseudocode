/*
 * XREFs of ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x140135908
 * Callers:
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x140135820 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140038CEC (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     IsTouchpadDevice @ 0x14006721C (IsTouchpadDevice.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x14014CE10 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x14014F984 (-IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ApiSetEditionDestroyEdgePalmRejectionZones @ 0x140194F04 (ApiSetEditionDestroyEdgePalmRejectionZones.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x140200300 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 */

void __fastcall CTouchProcessor::OnRimDeviceClosed(CTouchProcessor *this, void *a2)
{
  void *v2; // rdi
  CTouchProcessor *v4; // rcx
  char v5; // bl
  char v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  DelayZonePalmRejection *Instance; // rax
  int v11; // edx
  struct RIMDEV *v12; // rax

  v2 = a2;
  v4 = (CTouchProcessor *)WPP_GLOBAL_Control;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v6 = 0;
  }
  if ( (_BYTE)a2 || v6 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      v6,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      334,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  if ( (unsigned int)CTouchProcessor::IsTouchDevice(v4, v2) )
    ApiSetEditionDestroyEdgePalmRejectionZones(v2);
  if ( !IsTouchpadDevice((__int64)v2, v7) )
  {
    Instance = DelayZonePalmRejection::GetInstance(v9, v8);
    if ( Instance )
      DelayZonePalmRejection::OnDeviceRemoval(Instance, v2);
  }
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = (struct RIMDEV *)HMValidateHandleNoSecure((int)v2, 19);
    if ( v12 )
    {
      if ( CTouchProcessor::GenerateDeparturesForActivePointers(this, v12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 16168LL);
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v5 = 0;
  if ( (_BYTE)v11 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      335,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
}
