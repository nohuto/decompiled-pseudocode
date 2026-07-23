/*
 * XREFs of PpmParkApplyMixedTopologyPolicy @ 0x140612450
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140253CAC (-RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PpmParkApplyMixedTopologyPolicy(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        struct _KAFFINITY_EX *a4,
        char a5,
        char *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int16 *a9)
{
  char v11; // bl
  char v13; // r15
  char v14; // si
  struct _KAFFINITY_EX v17; // [rsp+38h] [rbp-D0h] BYREF

  v11 = a5;
  memset_0(&v17.8, 0, sizeof(v17.8));
  v13 = *a6;
  if ( PopHeteroSystem == 5 && a7 >= a8 && a6[1] && PpmHeteroPolicy == 4 )
  {
    a6[1] = 0;
    memset_0(a9 + 4, 0, 8LL * *a9);
    v13 = 0;
    *a9 = 1;
  }
  if ( !(unsigned int)RtlpAndAffinityExNoResult(a1, a2) || !v13 && (unsigned int)RtlpAndAffinityExNoResult(a1, a3) )
  {
    *(_QWORD *)&v17.Count = 2097153LL;
    v14 = 0;
    memset_0(&v17.8, 0, sizeof(v17.8));
    if ( (unsigned int)RtlAndAffinityEx(&a4->Count, &a3->Count, (__int64)&v17) )
      RtlpCopyAffinityEx(a4, a4->Size, &v17);
    if ( a5 != 3 )
    {
      if ( a5 == 4 || a5 == 5 )
        goto LABEL_15;
      if ( a5 != 6 )
        goto LABEL_23;
    }
    goto LABEL_22;
  }
  *(_QWORD *)&v17.Count = 2097153LL;
  v14 = 1;
  memset_0(&v17.8, 0, sizeof(v17.8));
  if ( (unsigned int)RtlAndAffinityEx(&a4->Count, &a2->Count, (__int64)&v17) )
    RtlpCopyAffinityEx(a4, a4->Size, &v17);
  switch ( a5 )
  {
    case 3:
      goto LABEL_22;
    case 4:
LABEL_15:
      v11 = 2;
      break;
    case 5:
LABEL_22:
      v11 = 1;
      break;
    case 6:
      goto LABEL_15;
  }
LABEL_23:
  *a6 = v14;
  return v11;
}
