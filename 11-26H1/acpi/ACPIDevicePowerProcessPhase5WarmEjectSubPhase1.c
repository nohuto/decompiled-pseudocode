/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x14005D1C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x14001B834 (WPP_RECORDER_SF_qLqss.c)
 *     AMLIIsNamedChildPresent @ 0x14001C060 (AMLIIsNamedChildPresent.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x140025B40 (ACPIDeviceCompleteGenericPhase.c)
 *     _ACPIInternalError @ 0x14004B798 (_ACPIInternalError.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  int v4; // eax
  __int64 v5; // rdx
  int v6; // esi
  const char *v7; // rax
  const char *v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+50h] [rbp-28h]
  _WORD v11[12]; // [rsp+58h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v10 = 0LL;
  strcpy((char *)v11, "_EJ1_EJ2_EJ3_EJ4");
  HIBYTE(v11[8]) = 0;
  v11[9] = 0;
  *(_DWORD *)(a1 + 212) = (*(_DWORD *)(a1 + 56) >> 5) & 4;
  v3 = *(_DWORD *)&v11[2 * *(int *)(a1 + 104) - 4];
  if ( !AMLIIsNamedChildPresent(*(__int64 **)(v1 + 760), v3) )
    ACPIInternalError(0xC2768uLL);
  v4 = ACPIGet(v1, v3, 546308096, 1LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  v5 = *(_QWORD *)(v1 + 8);
  v6 = v4;
  v7 = byte_140075A82;
  v8 = byte_140075A82;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v7 = *(const char **)(v1 + 608);
    if ( (v5 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x5Au,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v6,
      v1,
      v7,
      v8);
  result = 259LL;
  if ( v6 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v6, 0LL, a1);
    return 0LL;
  }
  return result;
}
