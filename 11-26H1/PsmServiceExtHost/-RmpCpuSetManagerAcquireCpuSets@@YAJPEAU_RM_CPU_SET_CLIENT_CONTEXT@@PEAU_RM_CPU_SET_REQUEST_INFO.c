/*
 * XREFs of ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180084594
 * Callers:
 *     ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x180081CB0 (-RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_IN.c)
 *     ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180086BC0 (-RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     RmpWnfCreateStateNameForClient @ 0x18003056C (RmpWnfCreateStateNameForClient.c)
 *     RmpWnfGetPublisherSid @ 0x180030848 (RmpWnfGetPublisherSid.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180059744 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800849A4 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@K@Z @ 0x180084FB4 (-RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST.c)
 *     ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008561C (-RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFOR.c)
 *     ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180086080 (-RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x180086174 (-RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@P.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_CLIENT_CONTEXT ***a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2,
        unsigned int a3,
        struct _RM_CPU_SET_ALLOCATION **a4)
{
  bool v4; // cc
  struct _RM_CPU_SET_CLIENT_CONTEXT **v6; // rbp
  int PublisherSid; // ebx
  struct _RM_CPU_SET_ALLOCATION *Heap; // rax
  struct _RM_CPU_SET_ALLOCATION *v11; // rdi
  unsigned int i; // r9d
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // edx
  struct _RM_CPU_SET_CLIENT_CONTEXT **v16; // rdx
  struct _RM_CPU_SET_CLIENT_CONTEXT *v17; // rax
  unsigned int v19; // [rsp+20h] [rbp-98h] BYREF
  struct _RM_CPU_SET_SCORE *v20; // [rsp+28h] [rbp-90h] BYREF
  _BYTE DestinationSid[80]; // [rsp+30h] [rbp-88h] BYREF

  v4 = *(_DWORD *)a2 <= 0x200u;
  v6 = *a1;
  v19 = 0;
  v20 = 0LL;
  if ( v4 && *(_DWORD *)a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 0xFFFFFFFD) != 0 )
      return (unsigned int)-1073741584;
    PublisherSid = RmpCpuSetManagerCheckRequestSatisfiability((struct _RM_CPU_SET_MANAGER *)v6, a2, a3);
    if ( PublisherSid < 0 )
      return (unsigned int)PublisherSid;
    PublisherSid = RmpCpuSetManagerRankCpuSets((struct _RM_CPU_SET_MANAGER *)v6, a2, &v20, &v19);
    if ( PublisherSid >= 0 )
    {
      Heap = (struct _RM_CPU_SET_ALLOCATION *)HampAllocateHeap(0x170uLL);
      v11 = Heap;
      if ( Heap )
      {
        RmpCpuSetManagerInitializeAllocation((struct _RM_CPU_SET_MANAGER *)v6, a2, Heap);
        memset_0(DestinationSid, 0, 0x44uLL);
        PublisherSid = RmpWnfGetPublisherSid(DestinationSid);
        if ( PublisherSid < 0
          || (PublisherSid = RmpWnfCreateStateNameForClient(DestinationSid, 2056, 0, (__int64)v11 + 96), PublisherSid < 0) )
        {
          RmpObjectRelease((char *)v11);
        }
        else
        {
          for ( i = 0; *((_DWORD *)v11 + 90) < *(_DWORD *)a2; ++*((_DWORD *)v11 + 90) )
          {
            v13 = i++;
            v13 *= 2LL;
            v14 = *((unsigned int *)v20 + 2 * v13);
            v15 = *((_DWORD *)v20 + 2 * v13 + 1);
            v6[v14 + 43] = (struct _RM_CPU_SET_CLIENT_CONTEXT *)((unsigned __int64)v6[v14 + 43] & ~(1LL << v15));
            *((_DWORD *)v6 + 353) |= 1u;
            --*((_DWORD *)v6 + 350);
            *((_QWORD *)v11 + v14 + 13) |= 1LL << v15;
          }
          RmpObjectTableAddObject((struct _RM_OBJECT_TABLE *)(*a1 + 3), v11);
          *((_QWORD *)v11 + 7) = a1;
          v16 = a1[4];
          v17 = (struct _RM_CPU_SET_ALLOCATION *)((char *)v11 + 64);
          if ( *v16 != (struct _RM_CPU_SET_CLIENT_CONTEXT *)(a1 + 3) )
            __fastfail(3u);
          *(_QWORD *)v17 = a1 + 3;
          *((_QWORD *)v11 + 9) = v16;
          *v16 = v17;
          a1[4] = (struct _RM_CPU_SET_CLIENT_CONTEXT **)v17;
          if ( _InterlockedIncrement64((volatile signed __int64 *)v11 + 2) <= 1 )
            __fastfail(0xEu);
          RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_CPU_SET_MANAGER *)v6);
          RmpCpuSetManagerPublishAllocationState(v11);
          PublisherSid = 0;
          *a4 = v11;
        }
      }
      else
      {
        PublisherSid = -1073741801;
      }
    }
  }
  else
  {
    PublisherSid = -1073741584;
  }
  if ( v20 )
    HampFreeHeap(v20);
  return (unsigned int)PublisherSid;
}
