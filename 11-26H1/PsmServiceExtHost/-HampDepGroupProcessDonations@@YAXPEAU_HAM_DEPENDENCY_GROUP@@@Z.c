/*
 * XREFs of ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016330
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015B68 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampDepGroupGetFirstDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017210 (-HampDepGroupGetFirstDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU1@@Z @ 0x180018128 (-HampDepGroupGetNextDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004394C (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x180047A00 (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampDepGroupProcessDonations(struct _HAM_DEPENDENCY_GROUP *a1)
{
  struct _HAM_DONATION_DEPENDENCY *FirstDonation; // rbx
  struct _HAM_DONATION_DEPENDENCY *i; // rax
  struct _HAM_DONATION_DEPENDENCY *v4; // rbx
  __int64 v5; // rax
  __m128i *v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+50h] [rbp-48h]
  _OWORD v17[2]; // [rsp+60h] [rbp-38h] BYREF

  memset(v17, 0, sizeof(v17));
  v15 = 0LL;
  v16 = 0LL;
  FirstDonation = HampDepGroupGetFirstDonation(a1);
  if ( FirstDonation )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)FirstDonation;
      v9 = *((_QWORD *)FirstDonation + 6);
      if ( (*(_BYTE *)(*(_QWORD *)FirstDonation + 552LL) & 8) == 0 )
      {
        if ( *((_BYTE *)FirstDonation + 104) )
          goto LABEL_11;
        if ( (*(_DWORD *)(v8 + 112) & 0x80000) != 0 )
          break;
      }
LABEL_15:
      FirstDonation = HampDepGroupGetNextDonation(FirstDonation);
      if ( !FirstDonation )
        goto LABEL_2;
    }
    *((_BYTE *)FirstDonation + 104) = 1;
LABEL_11:
    if ( *((_QWORD *)FirstDonation + 8) == *(_QWORD *)(v9 + 808) )
    {
      if ( (*(_DWORD *)(v8 + 112) & 0x80000) != 0 )
      {
        v12 = *((_QWORD *)FirstDonation + 7);
        v13 = 1184LL;
        if ( v12 )
          v13 = v12 + 1128;
        v10 = *(_QWORD *)v13;
        *(_OWORD *)((char *)FirstDonation + 72) = *(_OWORD *)(v9 + 912);
        v14 = *(_OWORD *)(v9 + 928);
        v11 = (unsigned __int64 *)(v9 + 968);
        *(_OWORD *)((char *)FirstDonation + 88) = v14;
      }
      else
      {
        v10 = *(_QWORD *)(v8 + 456);
        v11 = (unsigned __int64 *)(v9 + 960);
      }
      RmpCommitValuesAdd(*v11, v10, v11);
    }
    else if ( (unsigned int)*(unsigned __int8 *)(v8 + 562) - 2 <= 1 )
    {
      HampActRequestStopEx(v8, 1LL, 11LL, 0LL, 6912, 0, 0LL);
    }
    goto LABEL_15;
  }
LABEL_2:
  for ( i = HampDepGroupGetFirstDonation(a1); ; i = HampDepGroupGetNextDonation(v4) )
  {
    v4 = i;
    if ( !i )
      break;
    v5 = *(_QWORD *)i;
    if ( (*(_BYTE *)(*(_QWORD *)v4 + 552LL) & 8) == 0 && !*((_BYTE *)v4 + 104) )
    {
      v6 = (__m128i *)*((_QWORD *)v4 + 6);
      v7 = *(_QWORD *)(v5 + 456);
      HampHostComputeStaticEnforcementSettings(
        v6,
        (struct _RM_ENFORCEMENT_SETTINGS *)v17,
        (struct _RM_COMMIT_THRESHOLDS *)&v15,
        0LL,
        0LL);
      if ( v7 <= *((_QWORD *)&v16 + 1) )
      {
        *((_BYTE *)v4 + 104) = 1;
        RmpCommitValuesAdd(v6[60].m128i_u64[0], v7, (unsigned __int64 *)&v6[60]);
      }
      else
      {
        *((_BYTE *)v4 + 104) = 2;
      }
    }
  }
}
