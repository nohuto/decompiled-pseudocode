/*
 * XREFs of ACPIEvaluateDsmMethodOnBurstModeThreshold @ 0x1400AF3D4
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1400600F0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 */

NTSTATUS __fastcall ACPIEvaluateDsmMethodOnBurstModeThreshold(_QWORD *a1)
{
  __int64 v1; // rax
  char v3; // si
  __int64 v4; // rcx
  PVOID v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  _WORD *v8; // rax
  struct _DEVICE_OBJECT *v9; // rcx
  PVOID P[2]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v12; // [rsp+50h] [rbp-9h] BYREF
  __int128 v13; // [rsp+60h] [rbp+7h] BYREF
  __int128 v14; // [rsp+70h] [rbp+17h]
  __int128 v15; // [rsp+80h] [rbp+27h]

  v1 = a1[23];
  P[0] = 0LL;
  *(_WORD *)(v1 + 2320) = 1;
  v3 = 0;
  v4 = a1[95];
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v12 = ACPI_EC_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v4, (unsigned int)&v12, 0, 0, (__int64)&v13, (__int64)P) < 0 )
    goto LABEL_13;
  v5 = P[0];
  if ( *((_WORD *)P[0] + 1) != 3 || !*((_DWORD *)P[0] + 6) || (**((_BYTE **)P[0] + 4) & 2) == 0 )
    goto LABEL_14;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  ExFreePoolWithTag(P[0], 0x52706341u);
  v6 = a1[95];
  P[0] = 0LL;
  v12 = ACPI_EC_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v6, (unsigned int)&v12, 0, 1, (__int64)&v13, (__int64)P) < 0 )
  {
LABEL_13:
    v5 = P[0];
    goto LABEL_14;
  }
  v5 = P[0];
  if ( *((_WORD *)P[0] + 1) == 4 && *((_DWORD *)P[0] + 6) >= 0x58u )
  {
    v7 = *((_QWORD *)P[0] + 4);
    if ( *(_DWORD *)v7 == 1 && *(_WORD *)(v7 + 10) == 3 && *(_DWORD *)(v7 + 32) >= 4u )
    {
      v8 = *(_WORD **)(v7 + 40);
      if ( v8 )
      {
        v3 = 1;
        *(_WORD *)(a1[23] + 2320LL) = *v8;
      }
    }
  }
LABEL_14:
  if ( v5 )
  {
    AMLIFreeDataBuffs((__int64)v5);
    ExFreePoolWithTag(v5, 0x52706341u);
  }
  v9 = (struct _DEVICE_OBJECT *)a1[96];
  if ( v3 )
    return IoSetDevicePropertyData(v9, &DEVPKEY_AcpiDevice_BurstModeThreshold, 0, 0, 5u, 2u, (PVOID)(a1[23] + 2320LL));
  else
    return IoSetDevicePropertyData(v9, &DEVPKEY_AcpiDevice_BurstModeThreshold, 0, 0, 0, 0, 0LL);
}
