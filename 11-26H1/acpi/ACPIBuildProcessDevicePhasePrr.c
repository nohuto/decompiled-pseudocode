/*
 * XREFs of ACPIBuildProcessDevicePhasePrr @ 0x140035AB0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x140027FA0 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWriteEventLogEntry @ 0x1400535C0 (ACPIWriteEventLogEntry.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1400576DC (ACPIBuildDeviceResetPowerNode.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrr(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rsi
  ULONG_PTR v3; // rdx
  unsigned int v4; // ebp
  __int64 *v6; // rax
  __int64 v7; // rdx
  const char *v8; // rax
  const char *v9; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( *(_QWORD *)(v1 + 448) )
  {
    if ( v3 )
    {
      dword_14008ED38 = 0;
      pszDest = 0;
LABEL_8:
      FreeDataBuffs(v2, 1u);
    }
  }
  else if ( v3 )
  {
    if ( *(_WORD *)(a1 + 82) == 4 )
    {
      v4 = ACPIBuildDeviceResetPowerNode(v1, v3);
      dword_14008ED38 = 0;
      pszDest = 0;
      goto LABEL_8;
    }
    ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
  }
  v6 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1414746719);
  v7 = *(_QWORD *)(v1 + 8);
  *(_QWORD *)(v1 + 496) = v6;
  v8 = byte_140075A82;
  v9 = byte_140075A82;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v8 = *(const char **)(v1 + 608);
    if ( (v7 & 0x400000000000LL) != 0 )
      v9 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x2Fu,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      v4,
      v1,
      v8,
      v9);
  ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v4;
}
