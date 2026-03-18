/*
 * XREFs of OSNotifyCreateProcessor @ 0x140063C6C
 * Callers:
 *     ACPIBuildMissingChildren @ 0x14001CAE4 (ACPIBuildMissingChildren.c)
 *     OSNotifyCreate @ 0x14001E5B0 (OSNotifyCreate.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     AMLIGetParent @ 0x14001E8A8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 *     ACPIBuildProcessorExtension @ 0x140059694 (ACPIBuildProcessorExtension.c)
 */

__int64 __fastcall OSNotifyCreateProcessor(__int64 a1, unsigned __int64 a2)
{
  int v4; // edx
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v5 = AMLIGetParent(a1);
  v6 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      6,
      17,
      (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
      a1);
  }
  v7 = ACPIBuildProcessorExtension(a1, v6, &v12);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_qL(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        22,
        18,
        (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
        a1,
        v7);
    }
  }
  else
  {
    ACPIInitReferenceDeviceExtension(v12);
    _InterlockedOr64((volatile signed __int64 *)(v10 + 8), a2);
    v9 = 259;
  }
  AMLIDereferenceHandleEx(v5);
  return v9;
}
