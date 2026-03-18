/*
 * XREFs of ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1400B967C
 * Callers:
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIEvaluateDsmEmcaMethodOnRootBus(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // r14
  __int64 v4; // rcx
  int v5; // esi
  PVOID v6; // rbx
  __int64 v7; // rcx
  PVOID v8; // rbx
  PVOID P[2]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v11; // [rsp+48h] [rbp-9h] BYREF
  __int128 v12; // [rsp+58h] [rbp+7h] BYREF
  __int128 v13; // [rsp+68h] [rbp+17h]
  __int128 v14; // [rsp+78h] [rbp+27h]

  v2 = RootDeviceExtension;
  *(_OWORD *)a2 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  P[0] = 0LL;
  v14 = 0LL;
  v4 = *(_QWORD *)(v2 + 760);
  v11 = EMCA_DSM_UUID;
  v5 = ACPIAmliEvaluateDsm(v4, (unsigned int)&v11, 0, 0, (__int64)&v12, (__int64)P);
  if ( v5 >= 0 )
  {
    v6 = P[0];
    if ( *((_WORD *)P[0] + 1) == 3 )
      *(_BYTE *)a2 = **((_BYTE **)P[0] + 4);
    AMLIFreeDataBuffs((__int64)v6);
    ExFreePoolWithTag(v6, 0x52706341u);
    if ( *(_BYTE *)a2 == 3 )
    {
      P[0] = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v7 = *(_QWORD *)(v2 + 760);
      v11 = EMCA_DSM_UUID;
      v5 = ACPIAmliEvaluateDsm(v7, (unsigned int)&v11, 0, 1, (__int64)&v12, (__int64)P);
      if ( v5 >= 0 )
      {
        v8 = P[0];
        if ( *((_WORD *)P[0] + 1) == 1 )
          *(_QWORD *)(a2 + 8) = *((_QWORD *)P[0] + 2);
        AMLIFreeDataBuffs((__int64)v8);
        ExFreePoolWithTag(v8, 0x52706341u);
      }
    }
  }
  return (unsigned int)v5;
}
