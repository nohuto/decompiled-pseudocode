/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x140025D50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x14001B834 (WPP_RECORDER_SF_qLqss.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x140025B40 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qdqss @ 0x140026A88 (WPP_RECORDER_SF_qdqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase1(__int64 a1)
{
  _QWORD *v1; // rbx
  const char *v2; // rbp
  int v3; // r12d
  int v4; // esi
  __int64 *v5; // r15
  char v6; // r8
  const char *v8; // rdx
  const char *v9; // rcx
  char v10; // r14
  __int64 v11; // rax
  KIRQL v12; // al
  _QWORD *i; // rdx
  char v14; // r8
  const char *v15; // rcx
  __int64 v16; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = byte_140075A82;
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v8 = byte_140075A82;
  v9 = byte_140075A82;
  v10 = 1;
  if ( v1 )
  {
    v11 = v1[1];
    v6 = (char)v1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)v1[76];
      if ( (v11 & 0x400000000000LL) != 0 )
        v9 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v8,
      10,
      75,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      (v3 != 1) + 4,
      v6,
      (__int64)v8,
      (__int64)v9);
  if ( v3 != 1 )
  {
    *(_DWORD *)(a1 + 212) = 5;
    goto LABEL_18;
  }
  *(_DWORD *)(a1 + 212) = 4;
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  for ( i = (_QWORD *)v1[52]; i; i = (_QWORD *)*i )
  {
    if ( (*(_BYTE *)(i[1] + 16LL) & 0x10) == 0 )
    {
      v10 = 0;
      break;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v12);
  if ( !v10 )
  {
    v4 = -1073741823;
    goto LABEL_18;
  }
  v5 = (__int64 *)v1[58];
  if ( v5 )
  {
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v4 = AMLIAsyncEvalObject(v5, 0LL, 0, 0LL, ACPIDeviceCompleteGenericPhase, a1);
  }
  v14 = 0;
  v15 = byte_140075A82;
  if ( v1 )
  {
    v16 = v1[1];
    v14 = (char)v1;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[76];
      if ( (v16 & 0x400000000000LL) != 0 )
        v15 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x4Cu,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v4,
      v14,
      v2,
      v15);
  result = 259LL;
  if ( v4 != 259 )
  {
    v4 = 0;
LABEL_18:
    ACPIDeviceCompleteGenericPhase((__int64)v5, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
