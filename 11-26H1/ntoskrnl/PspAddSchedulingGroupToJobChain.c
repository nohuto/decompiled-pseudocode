/*
 * XREFs of PspAddSchedulingGroupToJobChain @ 0x1409B8904
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x1407FDE6C (PspEstablishJobHierarchy.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeInsertSchedulingGroup @ 0x14043D6E0 (KeInsertSchedulingGroup.c)
 *     PspFreeRateControl @ 0x1409B8C78 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1409B90E0 (PspAllocateRateControl.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAddSchedulingGroupToJobChain(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 Pool2; // rax
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v9; // rsi
  __int64 v10; // r14
  struct _KSCHEDULING_GROUP **v11; // rdi
  __int64 v12; // r15
  struct _KSCHEDULING_GROUP *v13; // r14
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 RateControl; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  void *v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD P[2]; // [rsp+30h] [rbp-10h] BYREF

  P[1] = P;
  v3 = P;
  P[0] = P;
  if ( a2 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v3 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 16) = a2;
      v6 = P[0];
      if ( *(_QWORD **)(P[0] + 8LL) == P )
      {
        *v3 = P[0];
        v3[1] = P;
        *(_QWORD *)(v6 + 8) = v3;
        P[0] = v3;
        goto LABEL_10;
      }
LABEL_4:
      __fastfail(3u);
    }
    return 3221225626LL;
  }
  else
  {
LABEL_10:
    while ( a1 && (*(_DWORD *)(a1 + 1552) & 0x20) == 0 )
    {
      RateControl = PspAllocateRateControl(2LL);
      *(_QWORD *)(a1 + 1240) = RateControl;
      if ( !RateControl )
      {
LABEL_6:
        while ( 1 )
        {
          v7 = (_QWORD *)P[0];
          if ( (_QWORD *)P[0] == P )
            return 3221225626LL;
          v19 = *(_QWORD *)(P[0] + 16LL);
          v20 = *(void **)(v19 + 1240);
          if ( v20 )
          {
            PspFreeRateControl(v20);
            *(_QWORD *)(v19 + 1240) = 0LL;
            _InterlockedAnd((volatile signed __int32 *)(v19 + 1552), 0xFFFFFFDF);
          }
          v21 = *v7;
          if ( *(_QWORD **)(*v7 + 8LL) != v7 )
            goto LABEL_4;
          v22 = (_QWORD *)v7[1];
          if ( (_QWORD *)*v22 != v7 )
            goto LABEL_4;
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          ExFreePoolWithTag(v7, 0x624A7350u);
        }
      }
      *(_DWORD *)(RateControl + 132) |= 3u;
      *(_DWORD *)(RateControl + 128) = 655370000;
      *(_DWORD *)(*(_QWORD *)(a1 + 1240) + 44LL) = *(_DWORD *)(RateControl + 128);
      *(_DWORD *)(*(_QWORD *)(a1 + 1240) + 40LL) |= 0x40u;
      v17 = ExAllocatePool2(0x100uLL);
      v3 = (_QWORD *)v17;
      if ( !v17 )
      {
        PspFreeRateControl(*(PVOID *)(a1 + 1240));
        *(_QWORD *)(a1 + 1240) = 0LL;
        goto LABEL_6;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x20u);
      *(_QWORD *)(v17 + 16) = a1;
      v18 = P[0];
      if ( *(_QWORD **)(P[0] + 8LL) != P )
        goto LABEL_4;
      *v3 = P[0];
      v3[1] = P;
      *(_QWORD *)(v18 + 8) = v3;
      P[0] = v3;
      a1 = *(_QWORD *)(a1 + 1304);
    }
    while ( v3 != P )
    {
      v9 = v3[2];
      v10 = *(_QWORD *)(v9 + 1304);
      v11 = (struct _KSCHEDULING_GROUP **)(v9 + 1248);
      v12 = *(_QWORD *)(v9 + 1240);
      if ( v10 )
      {
        v13 = (struct _KSCHEDULING_GROUP *)(*(_QWORD *)(v10 + 1240) + 128LL);
      }
      else
      {
        v13 = *v11;
        if ( PsCpuFairShareEnabled && v13 )
          ObfReferenceObjectWithTag(*(PVOID *)(v9 + 1344), 0x624A7350u);
      }
      KeInsertSchedulingGroup((struct _KSCHEDULING_GROUP *)(v12 + 128), *(_KSCHEDULING_GROUP_POLICY *)(v12 + 128), v13);
      if ( *v11 )
        PspEnumJobsAndProcessesInJobHierarchy((PVOID)v9, 0LL, 8);
      PspEnumJobsAndProcessesInJobHierarchy((PVOID)v9, *(_QWORD *)(v9 + 1240), 8);
      v14 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 )
        goto LABEL_4;
      v15 = (_QWORD *)v3[1];
      if ( (_QWORD *)*v15 != v3 )
        goto LABEL_4;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      ExFreePoolWithTag(v3, 0x624A7350u);
      v3 = (_QWORD *)P[0];
    }
    return 0LL;
  }
}
