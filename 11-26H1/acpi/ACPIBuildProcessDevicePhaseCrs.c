/*
 * XREFs of ACPIBuildProcessDevicePhaseCrs @ 0x140035770
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     AMLIIsNamedChildPresent @ 0x14001C060 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteGeneric @ 0x140034A40 (ACPIBuildCompleteGeneric.c)
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1400518C0 (PnpBiosSetFlagsForNotableInterrupts.c)
 *     ACPIMatchKernelPorts @ 0x140063610 (ACPIMatchKernelPorts.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCrs(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rdx
  const char *v5; // rax
  const char *v6; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = AMLIIsNamedChildPresent(*(__int64 **)(v1 + 760), 1397903455) ? 28 : 16;
  if ( *(_QWORD *)(a1 + 56) && *(int *)(a1 + 48) >= 0 )
  {
    if ( *(_WORD *)(v2 + 2) == 3 )
    {
      if ( (*(_DWORD *)(v1 + 8) & 0x4000000) != 0 )
        ACPIMatchKernelPorts(v1, v2);
      PnpBiosSetFlagsForNotableInterrupts(v1, *(_QWORD *)(v2 + 32), *(unsigned int *)(v2 + 24));
    }
    dword_14008ED38 = 0;
    pszDest = 0;
    FreeDataBuffs(v2, 1u);
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = byte_140075A82;
  v6 = byte_140075A82;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v1 + 608);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x23u,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      0,
      v1,
      v5,
      v6);
  ACPIBuildCompleteGeneric(0LL, 0, 0LL, a1);
  return 0LL;
}
