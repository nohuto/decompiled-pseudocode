/*
 * XREFs of PspEstablishJobHierarchy @ 0x1407FDE6C
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140946FB8 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeInsertSchedulingGroup @ 0x14043D6E0 (KeInsertSchedulingGroup.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     KeRemoveSchedulingGroup @ 0x1404BFB64 (KeRemoveSchedulingGroup.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1404C1C14 (IoSetDiskIoAttributionOnProcess.c)
 *     PspEstablishDfssHierarchy @ 0x1407FDD54 (PspEstablishDfssHierarchy.c)
 *     PspSetEffectiveRateControlJob @ 0x1407FEDD8 (PspSetEffectiveRateControlJob.c)
 *     PspUpdateJobEffectivePriorityLimits @ 0x1407FFAAC (PspUpdateJobEffectivePriorityLimits.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409B8904 (PspAddSchedulingGroupToJobChain.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspSetEffectiveJobLimits @ 0x140ABD918 (PspSetEffectiveJobLimits.c)
 *     MmLinkJobProcess @ 0x140ADA90C (MmLinkJobProcess.c)
 *     PspUnlinkJobProcess @ 0x140AEEF88 (PspUnlinkJobProcess.c)
 *     PspBindProcessSessionToJob @ 0x140AEFF08 (PspBindProcessSessionToJob.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspEstablishJobHierarchy(char *Object, __int64 a2, __int64 a3, int a4)
{
  int v8; // esi
  _QWORD *Pool2; // r14
  unsigned __int64 v10; // r12
  unsigned __int16 *v12; // rcx
  __int64 v13; // rax
  PVOID v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  char v17; // al
  __int64 v18; // rdx
  int i; // eax
  __int64 v20; // rax
  bool v21; // zf
  void *v22; // rcx
  void *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-28h]

  *(_OWORD *)v26 = 0LL;
  v27 = 0LL;
  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 != 3 )
      {
        if ( a4 == 4 || a4 == 5 )
          goto LABEL_10;
        if ( a4 != 6 )
        {
          if ( a4 != 7 )
          {
            v8 = -1073741811;
            goto LABEL_70;
          }
LABEL_10:
          Pool2 = 0LL;
          v10 = *(_QWORD *)(a3 + 1336) + 1LL;
          if ( v10 > 2 )
          {
            Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
            if ( !Pool2 )
              return 3221225626LL;
          }
          if ( (unsigned int)(a4 - 4) <= 1 )
          {
            v8 = PspBindProcessSessionToJob(Object);
            if ( v8 < 0 )
              goto LABEL_57;
          }
          v12 = (unsigned __int16 *)*((_QWORD *)Object + 156);
          if ( v12 )
          {
            KeRemoveSchedulingGroup(v12);
            if ( (*(_DWORD *)(a3 + 1552) & 0x20) == 0 )
            {
              v8 = PspAddSchedulingGroupToJobChain(a3, 0LL);
              if ( v8 < 0 )
              {
                KeInsertSchedulingGroup(
                  (struct _KSCHEDULING_GROUP *)(*((_QWORD *)Object + 155) + 128LL),
                  *(_KSCHEDULING_GROUP_POLICY *)(*((_QWORD *)Object + 155) + 128LL),
                  0LL);
LABEL_57:
                if ( Pool2 )
                  ExFreePoolWithTag(Pool2, 0x624A7350u);
                goto LABEL_70;
              }
            }
            KeInsertSchedulingGroup(
              (struct _KSCHEDULING_GROUP *)(*((_QWORD *)Object + 155) + 128LL),
              *(_KSCHEDULING_GROUP_POLICY *)(*((_QWORD *)Object + 155) + 128LL),
              (struct _KSCHEDULING_GROUP *)(*(_QWORD *)(a3 + 1240) + 128LL));
          }
          else
          {
            v13 = *(_QWORD *)(a3 + 1248);
            if ( v13 )
              *((_QWORD *)Object + 156) = v13;
          }
          v14 = Object;
          if ( a4 != 4 )
            v14 = (PVOID)a3;
          ObfReferenceObjectWithTag(v14, 0x73507350u);
          v15 = *(_QWORD **)(a3 + 1296);
          v16 = Object + 1272;
          if ( *v15 != a3 + 1288 )
            __fastfail(3u);
          *v16 = a3 + 1288;
          *((_QWORD *)Object + 160) = v15;
          *v15 = v16;
          *(_QWORD *)(a3 + 1296) = v16;
          *((_QWORD *)Object + 163) = a3;
          *((_QWORD *)Object + 164) = *(_QWORD *)(a3 + 1312);
          v17 = *(_BYTE *)(a3 + 1102) + 1;
          *((_QWORD *)Object + 167) = v10;
          Object[1102] = v17;
          if ( v10 > 2 )
          {
            if ( v10 > 3 )
            {
              v18 = *(_QWORD *)(a3 + 1336) - 2LL;
              if ( *(_QWORD *)(a3 + 1336) != 2LL )
              {
                do
                {
                  Pool2[v18] = *(_QWORD *)(*(_QWORD *)(a3 + 1344) + 8 * v18 - 8);
                  --v18;
                }
                while ( v18 );
              }
            }
            *Pool2 = *(_QWORD *)(a3 + 1304);
            *((_QWORD *)Object + 168) = Pool2;
            Pool2 = 0LL;
          }
          if ( a4 == 4 )
          {
            PspUnlinkJobProcess(a3);
            MmLinkJobProcess(Object, a2);
          }
          PspSetEffectiveJobLimits(Object, 0LL);
          *((_DWORD *)Object + 266) += *(_DWORD *)(a3 + 1064);
          *((_DWORD *)Object + 267) += *(_DWORD *)(a3 + 1068);
          *((_DWORD *)Object + 269) += *(_DWORD *)(a3 + 1076);
          *((_DWORD *)Object + 268) += *(_DWORD *)(a3 + 1072);
          *((_DWORD *)Object + 270) += *(_DWORD *)(a3 + 1080);
          *((_QWORD *)Object + 226) = *(_QWORD *)(a3 + 1808);
          PspUpdateJobEffectivePriorityLimits(Object, 3LL);
          if ( (*(_DWORD *)(a3 + 1552) & 0x1841000) != 0 )
            _InterlockedOr((volatile signed __int32 *)Object + 388, *(_DWORD *)(a3 + 1552) & 0x1841000);
          for ( i = 0; i < 3; ++i )
          {
            if ( i != 2 && i != 1 && *(_QWORD *)(a3 + 1040) )
              i = PspSetEffectiveRateControlJob(Object);
          }
          if ( *(_DWORD *)(a3 + 1580) )
          {
            v20 = a3;
            v21 = a3 == 0;
          }
          else
          {
            v20 = *(_QWORD *)(a3 + 1584);
            v21 = v20 == 0;
          }
          if ( v21 )
          {
            if ( *((_DWORD *)Object + 395) && a4 == 4 )
              IoSetDiskIoAttributionOnProcess(*((_QWORD *)Object + 198), a2);
          }
          else
          {
            v26[1] = v20;
            LOBYTE(v27) = 1;
            PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v26, 5);
          }
          v22 = *(void **)(a3 + 1792);
          if ( v22 )
          {
            ObfReferenceObjectWithTag(v22, 0x624A7350u);
            *((_QWORD *)Object + 224) = *(_QWORD *)(a3 + 1792);
            *((_QWORD *)Object + 225) = *(_QWORD *)(a3 + 1800);
          }
          v23 = *(void **)(a3 + 1832);
          if ( v23 && !*((_QWORD *)Object + 229) )
          {
            ObfReferenceObjectWithTag(v23, 0x624A7350u);
            *((_QWORD *)Object + 229) = *(_QWORD *)(a3 + 1832);
            *((_QWORD *)Object + 230) = *(_QWORD *)(a3 + 1840);
          }
          if ( a4 == 7 )
            _interlockedbittestandset((volatile signed __int32 *)Object + 389, 0);
          v8 = 0;
          goto LABEL_57;
        }
        _interlockedbittestandset((volatile signed __int32 *)Object + 389, 0);
        goto LABEL_63;
      }
      PspUnlinkJobProcess(a3);
      MmLinkJobProcess(Object, a2);
      ObfReferenceObjectWithTag(Object, 0x73507350u);
      ObfDereferenceObjectWithTag((PVOID)a3, 0x73507350u);
      v24 = *((_QWORD *)Object + 198);
      if ( *((_DWORD *)Object + 395) )
        goto LABEL_62;
      if ( v24 )
      {
        v24 = *(_QWORD *)(v24 + 1584);
LABEL_62:
        IoSetDiskIoAttributionOnProcess(v24, a2);
      }
    }
LABEL_63:
    v8 = 0;
    goto LABEL_70;
  }
  v8 = PspBindProcessSessionToJob(Object);
  if ( v8 >= 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x73507350u);
    MmLinkJobProcess(Object, a2);
  }
  v25 = *((_QWORD *)Object + 198);
  if ( !*((_DWORD *)Object + 395) )
  {
    if ( !v25 )
      goto LABEL_70;
    v25 = *(_QWORD *)(v25 + 1584);
  }
  IoSetDiskIoAttributionOnProcess(v25, a2);
LABEL_70:
  if ( a2 && v8 >= 0 && PsCpuFairShareEnabled )
  {
    if ( (unsigned int)PsGetSessionId(a2) )
      PspEstablishDfssHierarchy((__int64)Object, a2, a4);
  }
  return (unsigned int)v8;
}
