/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x14004A130
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x140025B40 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIPauseInterpreter @ 0x1400305A0 (AMLIPauseInterpreter.c)
 *     WPP_RECORDER_SF_qqss @ 0x1400338F4 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase5(__int64 a1)
{
  _QWORD *v1; // rax
  char v3; // dl
  const char *v4; // rcx
  const char *v5; // r10
  __int64 v6; // r8
  bool v7; // zf

  v1 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  v4 = byte_140075A82;
  v5 = byte_140075A82;
  if ( v1 )
  {
    v6 = v1[1];
    v3 = (char)v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v1[76];
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x58u,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v3,
      v4,
      v5);
  v7 = *(_DWORD *)(a1 + 104) == 1;
  *(_DWORD *)(a1 + 212) = 8;
  if ( !v7 )
  {
    qword_140090BD8 = a1;
    qword_140090BC8 = (__int64)&AcpiPauseInterpreterEntry;
    qword_140090BD0 = (__int64)ACPIDeviceCompleteInterpreterRequest;
    AcpiPauseInterpreterEntry = (__int64)&AcpiPauseInterpreterEntry;
    if ( (unsigned int)AMLIPauseInterpreter(&AcpiPauseInterpreterEntry) == 259 )
      return 259LL;
  }
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  return 0LL;
}
