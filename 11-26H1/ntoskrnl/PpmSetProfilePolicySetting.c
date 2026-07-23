/*
 * XREFs of PpmSetProfilePolicySetting @ 0x1409FB634
 * Callers:
 *     PopSetNewPolicyValue @ 0x1409F98F8 (PopSetNewPolicyValue.c)
 * Callees:
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PpmInfoAdjustSetting @ 0x140AC02C8 (PpmInfoAdjustSetting.c)
 *     PpmInfoApplySettingUpdate @ 0x140AD873C (PpmInfoApplySettingUpdate.c)
 *     PpmInfoReleaseLocks @ 0x140AD87EC (PpmInfoReleaseLocks.c)
 *     PpmEventTraceProfileSetting @ 0x140AF8800 (PpmEventTraceProfileSetting.c)
 *     PpmCalculatePropagateClassMax @ 0x140B0C2AC (PpmCalculatePropagateClassMax.c)
 */

__int64 __fastcall PpmSetProfilePolicySetting(_QWORD *a1, _QWORD *a2, int a3, struct _KLOCK_ENTRIES *a4, int a5)
{
  unsigned int v5; // edi
  __int64 v6; // r12
  char v9; // r15
  __int64 v10; // r8
  GUID **v11; // r13
  GUID **v12; // r14
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v16; // rax
  __int64 Next_high; // rsi
  __int64 v18; // rax
  int *v19; // rbx
  char v20; // al
  int v21; // r9d
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int i; // edx
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rbx
  int v29; // eax
  char v30; // al
  int v31; // r9d
  unsigned __int64 v32; // rcx
  unsigned int v33; // ebx
  __int64 v34; // r12
  unsigned __int64 v35; // r9
  __int64 v36; // rsi
  __int64 v37; // r10
  char v38; // dl
  unsigned int v39; // r8d
  int v40; // eax
  char v41; // cl
  unsigned int v42; // [rsp+40h] [rbp-68h]
  int v43; // [rsp+44h] [rbp-64h]
  int v44; // [rsp+44h] [rbp-64h]
  unsigned int v45; // [rsp+48h] [rbp-60h]
  int v46; // [rsp+48h] [rbp-60h]
  GUID v47; // [rsp+50h] [rbp-58h]
  __int64 v48; // [rsp+50h] [rbp-58h]
  __int64 v49; // [rsp+50h] [rbp-58h]
  __int64 v50; // [rsp+60h] [rbp-48h]
  __int64 v51; // [rsp+60h] [rbp-48h]
  struct _KTHREAD *v52; // [rsp+68h] [rbp-40h]
  __int64 v53; // [rsp+70h] [rbp-38h]
  __int64 v54; // [rsp+C8h] [rbp+20h]

  v54 = (__int64)a4;
  v5 = 0;
  v6 = a3;
  v9 = 0;
  LOBYTE(v42) = 0;
  if ( a5 && a4 )
  {
    if ( a3 )
      goto LABEL_4;
    v16 = *a1 - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
    if ( *a1 == *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1 )
      v16 = a1[1] - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
    if ( v16 )
    {
LABEL_4:
      v10 = 0LL;
      v11 = &off_140FBFF78;
      while ( 2 )
      {
        v12 = v11 - 1;
        v13 = 0;
        v47 = **v11;
        LOBYTE(a4) = v47.Data4[7];
        while ( v13 < (*((_BYTE *)v11 + 29) & 4 | 2u) >> 1 )
        {
          v14 = *(_QWORD *)&v47.Data1 - *a2;
          if ( *(_QWORD *)&v47.Data1 == *a2 )
            v14 = *(_QWORD *)v47.Data4 - a2[1];
          if ( !v14 )
          {
            if ( (*((_BYTE *)v12 + 37) & 1) != 0 )
              PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, 0LL, v10);
            else
              PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock, 0LL, v10, a4);
            Next_high = SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
            v52 = (struct _KTHREAD *)PpmCurrentProfile;
            v18 = *a1 - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_DEFAULT.Data1;
            v43 = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
            if ( *a1 == *(_QWORD *)&GUID_POWER_POLICY_PROFILE_DEFAULT.Data1 )
              v18 = a1[1] - *(_QWORD *)GUID_POWER_POLICY_PROFILE_DEFAULT.Data4;
            if ( v18 )
            {
              for ( i = 0; ; ++i )
              {
                if ( i >= (unsigned __int8)PpmProfileCount )
                {
                  PpmInfoReleaseLocks(v11 - 1);
                  return (unsigned int)-1073741275;
                }
                v26 = PpmProfiles + 1504LL * i;
                v27 = *(_QWORD *)(v26 + 12) - *a1;
                if ( !v27 )
                  v27 = *(_QWORD *)(v26 + 20) - a1[1];
                if ( !v27 )
                  break;
              }
              v46 = *((_DWORD *)v12 + 8);
              v28 = v26 + 712 * v6 + 40;
              v49 = (__int64)v12[3] + v13 * v46 + v28;
              v29 = PpmCalculatePropagateClassMax(v11 - 1, v28, v13, 2LL);
              v30 = PpmInfoAdjustSetting((int)v11 - 8, (int)v26 + 712 * (int)v6 + 40, v13, v29, v54, a5);
              v32 = (unsigned __int64)*((unsigned __int8 *)v12 + 36) >> 6;
              v23 = v32 + 2LL * v13;
              *(_QWORD *)(v28 + 8 * v23) |= 1LL << (*((_BYTE *)v12 + 36) & 0x3F);
              if ( v30 )
              {
                LOBYTE(v31) = v13;
                LOBYTE(v32) = *(_BYTE *)(v26 + 8);
                PpmEventTraceProfileSetting(v32, (unsigned int)*v12, (unsigned int)*v11, v31, v49, v46, v6, 0);
                v23 = 1LL;
                if ( v52 == (struct _KTHREAD *)v26 && v43 == (_DWORD)v6 )
                  v9 = 1;
                if ( *(_QWORD *)&PopDirectedDripsDiagLock.ThreadTimerDelay == v26
                  || PopDirectedDripsDiagLock.WriteTransferCount == v26
                  || PopDirectedDripsDiagLock.ReadTransferCount == v26
                  || PopDirectedDripsDiagLock.QueuedScb == (_KSCB *)v26
                  || PopDirectedDripsDiagLock.OtherTransferCount == v26 )
                {
                  v24 = v43 == (_DWORD)v6;
                  goto LABEL_26;
                }
              }
            }
            else
            {
              v48 = v6;
              v53 = 712 * v6;
              v19 = &PopDirectedDripsDiagLock.SchedulerAssistPriorityFloor + 178 * v6;
              v44 = *((_DWORD *)v12 + 8);
              v50 = (__int64)v12[3] + v13 * v44 + (_QWORD)v19;
              v45 = PpmCalculatePropagateClassMax(v11 - 1, v19, v13, 2LL);
              v20 = PpmInfoAdjustSetting(
                      (int)v11 - 8,
                      712 * v6 + (unsigned int)&PopDirectedDripsDiagLock.SchedulerAssistPriorityFloor,
                      v13,
                      v45,
                      v54,
                      a5);
              v22 = 2LL * v13 + ((unsigned __int64)*((unsigned __int8 *)v12 + 36) >> 6);
              v23 = *((_BYTE *)v12 + 36) & 0x3F;
              *(_QWORD *)&v19[2 * v22] |= 1LL << v23;
              if ( v20 )
              {
                LOBYTE(v21) = v13;
                LOBYTE(v22) = PopDirectedDripsDiagLock.KernelWaitTime;
                PpmEventTraceProfileSetting(v22, (unsigned int)*v12, (unsigned int)*v11, v21, v50, v44, v6, 0);
                if ( v52 == (struct _KTHREAD *)&PopDirectedDripsDiagLock.ReservedPreviousReadyTimeValue
                  && (_DWORD)Next_high == (_DWORD)v6 )
                {
                  v9 = 1;
                }
                v33 = 0;
                if ( PpmProfileCount )
                {
                  v51 = Next_high;
                  do
                  {
                    v34 = PpmProfiles + 1504LL * v33;
                    v35 = (unsigned __int64)*((unsigned __int8 *)v12 + 36) >> 6;
                    v36 = v34 + v53;
                    v37 = 1LL << *((_BYTE *)v12 + 36);
                    if ( (v37 & *(_QWORD *)(v34 + v53 + 8 * (v35 + 2LL * v13) + 40)) == 0 )
                    {
                      v38 = 1;
                      v39 = 0;
                      if ( v13 )
                      {
                        while ( v38 )
                        {
                          v41 = 0;
                          if ( (v37 & *(_QWORD *)(v36 + 8 * (v35 + 2LL * v39) + 40)) == 0 )
                            v41 = v38;
                          ++v39;
                          v38 = v41;
                          if ( v39 >= v13 )
                          {
                            if ( !v41 )
                              break;
                            goto LABEL_45;
                          }
                        }
                      }
                      else
                      {
LABEL_45:
                        v40 = PpmCalculatePropagateClassMax(v12, v36 + 40, v13, v45);
                        PpmInfoAdjustSetting((_DWORD)v12, v36 + 40, v13, v40, v54, a5);
                        if ( v52 == (struct _KTHREAD *)v34 && v51 == v48 )
                          v9 = 1;
                      }
                    }
                    ++v33;
                  }
                  while ( v33 < (unsigned __int8)PpmProfileCount );
                }
              }
            }
            v24 = v42;
LABEL_26:
            LOBYTE(v23) = v9;
            PpmInfoApplySettingUpdate(v12, v23, v24);
            return v5;
          }
          ++v13;
          LOBYTE(a4) = (_BYTE)a4 + 1;
          v47.Data4[7] = (unsigned __int8)a4;
        }
        v10 = (unsigned int)(v10 + 1);
        v11 += 5;
        if ( (unsigned int)v10 < 0x4B )
          continue;
        return (unsigned int)-1073741275;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
