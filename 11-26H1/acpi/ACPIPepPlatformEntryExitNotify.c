/*
 * XREFs of ACPIPepPlatformEntryExitNotify @ 0x1400CD164
 * Callers:
 *     ACPIPepWorker @ 0x1400B4B70 (ACPIPepWorker.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIPepPlatformEntryExitNotify(__int64 a1, int a2, char a3)
{
  int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // r9d
  __int64 v7; // rcx
  PVOID P[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v10; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v11[3]; // [rsp+50h] [rbp-48h] BYREF

  v3 = -1073741823;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
          return (unsigned int)v3;
        v6 = 9;
      }
      else
      {
        v6 = 8 - (a3 != 0);
      }
    }
    else
    {
      v6 = 4 - (a3 != 0);
    }
  }
  else
  {
    v6 = 6 - (a3 != 0);
  }
  v7 = *(_QWORD *)(a1 + 760);
  memset(v11, 0, sizeof(v11));
  P[0] = 0LL;
  v10 = PEP_NOTIFICATIONS_DSM_UUID;
  v3 = ACPIAmliEvaluateDsm(v7, (unsigned int)&v10, 0, v6, (__int64)v11, (__int64)P);
  if ( v3 >= 0 )
  {
    AMLIFreeDataBuffs((__int64)P[0]);
    ExFreePoolWithTag(P[0], 0x52706341u);
  }
  return (unsigned int)v3;
}
