/*
 * XREFs of RtlStringFromGUIDEx @ 0x140A3EB50
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1405FE07C (KsepEvntLogShimsApplied.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1406CA6B8 (BapdpMarshallBootDataToRegistry.c)
 *     IopInitializeCrashDump @ 0x140793598 (IopInitializeCrashDump.c)
 *     IoGetDeviceDirectory @ 0x1407A05B0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1407AB590 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x1407ABE10 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x1407AC990 (PpDevCfgProcessDeviceReset.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140805C88 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x14083B414 (ExpCreateOutputSIGNATURE.c)
 *     CmpCloneHwProfile @ 0x140852134 (CmpCloneHwProfile.c)
 *     CmpRecoverEnlistment @ 0x14085DCE4 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x14085DF34 (CmpAddRemoveRMLogContainer.c)
 *     CmpStartRMLog @ 0x1408AC340 (CmpStartRMLog.c)
 *     BiConvertElementToRegistryData @ 0x1409D2544 (BiConvertElementToRegistryData.c)
 *     ConvertDevpropcompkeyToString @ 0x140A3D128 (ConvertDevpropcompkeyToString.c)
 *     RtlStringFromGUID @ 0x140A3DEC0 (RtlStringFromGUID.c)
 *     PopSetNewPolicyValue @ 0x140A3DED8 (PopSetNewPolicyValue.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 *     ExpTranslateEfiPath @ 0x140A9512C (ExpTranslateEfiPath.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AD1378 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140AD2E94 (PiDevCfgQueryDriverConfiguration.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140AF8694 (IopCreateSecureDeviceClassSettings.c)
 *     IopUpdateSecureDeviceClassState @ 0x140AF8840 (IopUpdateSecureDeviceClassState.c)
 *     PipGenerateContainerID @ 0x140B0F3DC (PipGenerateContainerID.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B32ACC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140B37850 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PipInitComputerIds @ 0x140D056B0 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x14053B0E0 (swprintf_s.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 Pool2; // rax
  unsigned __int64 v6; // rdx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    Pool2 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a2 + 8) = Pool2;
    if ( Pool2 )
    {
LABEL_3:
      v6 = *(unsigned __int16 *)(a2 + 2);
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t **)(a2 + 8),
        v6 >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a1,
        *((unsigned __int16 *)a1 + 2),
        *((unsigned __int16 *)a1 + 3),
        *((unsigned __int8 *)a1 + 8),
        *((unsigned __int8 *)a1 + 9),
        *((unsigned __int8 *)a1 + 10),
        *((unsigned __int8 *)a1 + 11),
        *((unsigned __int8 *)a1 + 12),
        *((unsigned __int8 *)a1 + 13),
        *((unsigned __int8 *)a1 + 14),
        *((unsigned __int8 *)a1 + 15));
      return 0LL;
    }
    return 3221225495LL;
  }
  else
  {
    if ( *(_WORD *)(a2 + 2) >= 0x4Eu )
      goto LABEL_3;
    return 3221225507LL;
  }
}
