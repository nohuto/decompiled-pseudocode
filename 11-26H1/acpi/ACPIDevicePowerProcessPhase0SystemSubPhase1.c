/*
 * XREFs of ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x140049160
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x140025B40 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIResumeInterpreter @ 0x140030690 (AMLIResumeInterpreter.c)
 *     WPP_RECORDER_SF_qqss @ 0x1400338F4 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0SystemSubPhase1(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // r8
  const char *v4; // rcx
  const char *v5; // rdx
  bool v6; // zf

  v1 = *(_QWORD **)(a1 + 40);
  if ( v1 )
  {
    v3 = v1[1];
    v4 = byte_140075A82;
    v5 = byte_140075A82;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v1[76];
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x36u,
        (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
        a1,
        (char)v1,
        v4,
        v5);
  }
  v6 = *(_DWORD *)(a1 + 104) == 1;
  *(_DWORD *)(a1 + 212) = 0;
  if ( v6 )
    AMLIResumeInterpreter();
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  return 0LL;
}
