/*
 * XREFs of ACPIPepEpmNotify @ 0x1400B4270
 * Callers:
 *     ACPIPepWorker @ 0x1400B4B70 (ACPIPepWorker.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIPepEpmNotify(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  PVOID P[2]; // [rsp+38h] [rbp-9h] BYREF
  __int128 v6; // [rsp+48h] [rbp+7h] BYREF
  __int128 v7; // [rsp+58h] [rbp+17h] BYREF
  __int128 v8; // [rsp+68h] [rbp+27h]
  __int128 v9; // [rsp+78h] [rbp+37h]

  v2 = -1073741823;
  if ( a2 != -1 )
  {
    v3 = *(_QWORD *)(a1 + 760);
    v7 = 0LL;
    P[0] = 0LL;
    LODWORD(v7) = 1;
    WORD5(v7) = 1;
    v8 = 0LL;
    DWORD2(v8) = a2;
    v9 = 0LL;
    LODWORD(v9) = 4;
    v6 = PEP_NOTIFICATIONS_DSM_EPM_UUID;
    v2 = ACPIAmliEvaluateDsm(v3, (unsigned int)&v6, 0, 2, (__int64)&v7, (__int64)P);
    if ( v2 >= 0 )
    {
      AMLIFreeDataBuffs((__int64)P[0]);
      ExFreePoolWithTag(P[0], 0x52706341u);
    }
  }
  return (unsigned int)v2;
}
