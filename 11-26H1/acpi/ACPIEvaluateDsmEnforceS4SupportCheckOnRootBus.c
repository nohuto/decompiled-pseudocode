/*
 * XREFs of ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus @ 0x1400B97FC
 * Callers:
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 */

__int64 ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus()
{
  ULONG_PTR v0; // r14
  __int64 v1; // rcx
  int v2; // edi
  PVOID v3; // rsi
  char v4; // bl
  __int64 v5; // rcx
  PVOID v6; // rbx
  PVOID P[2]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v9; // [rsp+48h] [rbp-9h] BYREF
  __int128 v10; // [rsp+58h] [rbp+7h] BYREF
  __int128 v11; // [rsp+68h] [rbp+17h]
  __int128 v12; // [rsp+78h] [rbp+27h]

  v0 = RootDeviceExtension;
  v10 = 0LL;
  v11 = 0LL;
  AcpiStrictS4Supported = 0;
  v12 = 0LL;
  v1 = *(_QWORD *)(RootDeviceExtension + 760);
  P[0] = 0LL;
  v9 = STRICT_S4_CHECK_DSM_UUID;
  v2 = ACPIAmliEvaluateDsm(v1, (unsigned int)&v9, 0, 0, (__int64)&v10, (__int64)P);
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
      return 0;
  }
  else
  {
    v3 = P[0];
    if ( *((_WORD *)P[0] + 1) == 3 )
    {
      v4 = **((_BYTE **)P[0] + 4);
      AMLIFreeDataBuffs((__int64)P[0]);
      ExFreePoolWithTag(v3, 0x52706341u);
      if ( (v4 & 2) != 0 )
      {
        P[0] = 0LL;
        v10 = 0LL;
        v11 = 0LL;
        v12 = 0LL;
        v5 = *(_QWORD *)(v0 + 760);
        v9 = STRICT_S4_CHECK_DSM_UUID;
        v2 = ACPIAmliEvaluateDsm(v5, (unsigned int)&v9, 0, 1, (__int64)&v10, (__int64)P);
        if ( v2 >= 0 )
        {
          v6 = P[0];
          if ( *((_WORD *)P[0] + 1) == 1 )
            AcpiStrictS4Supported = *((_QWORD *)P[0] + 2) != 0LL;
          AMLIFreeDataBuffs((__int64)P[0]);
          ExFreePoolWithTag(v6, 0x52706341u);
        }
      }
    }
  }
  return (unsigned int)v2;
}
