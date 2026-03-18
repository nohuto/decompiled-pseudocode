/*
 * XREFs of ACPIEvaluateDsmMethodInOrderQueryHandling @ 0x1400AF248
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1400600F0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 */

void __fastcall ACPIEvaluateDsmMethodInOrderQueryHandling(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  PVOID v4; // rbx
  __int64 v5; // rcx
  PVOID P[2]; // [rsp+38h] [rbp-9h] BYREF
  __int128 v7; // [rsp+48h] [rbp+7h] BYREF
  __int128 v8; // [rsp+58h] [rbp+17h] BYREF
  __int128 v9; // [rsp+68h] [rbp+27h]
  __int128 v10; // [rsp+78h] [rbp+37h]

  v1 = *(_QWORD *)(a1 + 184);
  P[0] = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  *(_BYTE *)(v1 + 464) = 0;
  v3 = *(_QWORD *)(a1 + 760);
  v7 = ACPI_EC_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v3, (unsigned int)&v7, 0, 0, (__int64)&v8, (__int64)P) < 0 )
    goto LABEL_10;
  v4 = P[0];
  if ( *((_WORD *)P[0] + 1) != 3 || !*((_DWORD *)P[0] + 6) || (**((_BYTE **)P[0] + 4) & 4) == 0 )
    goto LABEL_11;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  ExFreePoolWithTag(P[0], 0x52706341u);
  v5 = *(_QWORD *)(a1 + 760);
  P[0] = 0LL;
  v7 = ACPI_EC_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v5, (unsigned int)&v7, 0, 2, (__int64)&v8, (__int64)P) < 0 )
  {
LABEL_10:
    v4 = P[0];
  }
  else
  {
    v4 = P[0];
    if ( *((_WORD *)P[0] + 1) == 3 && *((_DWORD *)P[0] + 6) >= 4u && **((_DWORD **)P[0] + 4) )
      *(_BYTE *)(*(_QWORD *)(a1 + 184) + 464LL) = 1;
  }
LABEL_11:
  if ( v4 )
  {
    AMLIFreeDataBuffs((__int64)v4);
    ExFreePoolWithTag(v4, 0x52706341u);
  }
}
