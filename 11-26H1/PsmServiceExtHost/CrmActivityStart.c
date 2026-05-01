/*
 * XREFs of CrmActivityStart @ 0x180034D80
 * Callers:
 *     CrmRegistrationCreateActivity @ 0x180033DFC (CrmRegistrationCreateActivity.c)
 *     CrmSrvActivityAllocate @ 0x180034360 (CrmSrvActivityAllocate.c)
 *     CrmRpcSrvActivityAllocate @ 0x180034760 (CrmRpcSrvActivityAllocate.c)
 * Callees:
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18001D53C (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     CrmRegistrationNotify @ 0x180020C30 (CrmRegistrationNotify.c)
 *     RmpWnfCreateStateNameForClient @ 0x18003056C (RmpWnfCreateStateNameForClient.c)
 *     CrmRegisterToStateMonitor @ 0x180048560 (CrmRegisterToStateMonitor.c)
 *     CrmActivityPolicyTableEntryGet @ 0x18005A910 (CrmActivityPolicyTableEntryGet.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmActivityStart(__int64 a1, __int64 a2, unsigned int a3, int *a4, void *Source1)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  char *v11; // rbx
  char *v12; // rax
  unsigned int v13; // edi
  __int128 *v14; // rax
  __int128 *v15; // rbx
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  int *v27; // r10
  __int64 v28; // r9
  __int64 v29; // r11
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int128 *v33; // rcx
  __int128 v34; // xmm0
  __int64 v35; // rax
  int StateNameForClient; // eax
  int v37; // ebx
  PVOID Heap; // rax
  unsigned int v39; // r15d
  __int64 v40; // r12
  _DWORD *v41; // r14
  int v42; // eax
  __int64 v43; // rcx
  __int128 v44; // xmm0
  int Key; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A8h]
  __int64 v52; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR Source2; // [rsp+88h] [rbp-80h] BYREF
  __int128 v55; // [rsp+98h] [rbp-70h]
  __int128 v56; // [rsp+A8h] [rbp-60h]
  __int128 v57; // [rsp+B8h] [rbp-50h]
  int *p_Key; // [rsp+C8h] [rbp-40h]
  __int64 v59; // [rsp+D0h] [rbp-38h]
  __int64 *v60; // [rsp+D8h] [rbp-30h]
  __int64 v61; // [rsp+E0h] [rbp-28h]
  __int64 *v62; // [rsp+E8h] [rbp-20h]
  __int64 v63; // [rsp+F0h] [rbp-18h]
  _OWORD v64[43]; // [rsp+F8h] [rbp-10h] BYREF

  LODWORD(v47) = 0;
  memset_0(v64, 0, sizeof(v64));
  v9 = *(unsigned int *)(a2 + 24);
  v50 = 0LL;
  LODWORD(v51) = 0;
  CrmActivityPolicyTableEntryGet(v9, a3, &v50);
  v10 = (int)v51;
  *(_DWORD *)(a1 + 68) = v51;
  *(_DWORD *)(a1 + 64) = a3;
  if ( a4 )
  {
    v13 = 0;
    v27 = a4;
    v28 = 0LL;
    v29 = 8LL;
    do
    {
      v30 = v28 + 72LL * *v27;
      v31 = *(_DWORD *)((char *)&unk_1800B370C + v30);
      if ( v31 )
      {
        v32 = v31;
        v33 = (__int128 *)((char *)&unk_1800B3710 + v30);
        do
        {
          v34 = *v33++;
          v35 = v13++;
          v64[v35] = v34;
          --v32;
        }
        while ( v32 );
      }
      ++v27;
      v28 += 224LL;
      --v29;
    }
    while ( v29 );
    *(_BYTE *)(a1 + 364) = *(_BYTE *)a4;
    *(_BYTE *)(a1 + 365) = *((_BYTE *)a4 + 4);
    *(_BYTE *)(a1 + 366) = *((_BYTE *)a4 + 8);
    *(_BYTE *)(a1 + 367) = *((_BYTE *)a4 + 12);
    *(_BYTE *)(a1 + 368) = *((_BYTE *)a4 + 16);
    *(_BYTE *)(a1 + 369) = *((_BYTE *)a4 + 20);
    *(_BYTE *)(a1 + 370) = *((_BYTE *)a4 + 24);
    *(_BYTE *)(a1 + 371) = *((_BYTE *)a4 + 28);
  }
  else
  {
    Key = v10;
    v11 = (char *)&CrmPolicyTable + 696 * v10;
    v12 = (char *)bsearch(&Key, &CrmPolicyTableIndexerExperimentOverride, 6uLL, 0x2B8uLL, CrmPolicyTableCompare);
    if ( v12 )
      v11 = v12;
    v13 = *((_DWORD *)v11 + 1);
    v14 = v64;
    v15 = (__int128 *)(v11 + 8);
    v16 = 5LL;
    do
    {
      v14 += 8;
      v17 = *v15;
      v18 = v15[1];
      v15 += 8;
      *(v14 - 8) = v17;
      v19 = *(v15 - 6);
      *(v14 - 7) = v18;
      v20 = *(v15 - 5);
      *(v14 - 6) = v19;
      v21 = *(v15 - 4);
      *(v14 - 5) = v20;
      v22 = *(v15 - 3);
      *(v14 - 4) = v21;
      v23 = *(v15 - 2);
      *(v14 - 3) = v22;
      v24 = *(v15 - 1);
      *(v14 - 2) = v23;
      *(v14 - 1) = v24;
      --v16;
    }
    while ( v16 );
    v25 = v15[1];
    *v14 = *v15;
    v26 = v15[2];
    v14[1] = v25;
    v14[2] = v26;
  }
  *(_QWORD *)(a1 + 56) = _InterlockedIncrement64(&qword_1800E3930);
  LODWORD(p_Key) = 0;
  Source2 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  if ( RtlCompareMemory(Source1, &Source2, 0x44uLL) != 68 )
  {
    StateNameForClient = RmpWnfCreateStateNameForClient(Source1, 4, 0, a1 + 144);
    goto LABEL_17;
  }
  if ( a3 == 17 )
  {
    *(_QWORD *)(a1 + 152) = WNF_RM_QUIET_MODE;
    LODWORD(v47) = 255;
    StateNameForClient = RtlPublishWnfStateData(WNF_RM_QUIET_MODE, 0LL, &v47, 4LL, 0LL);
LABEL_17:
    v37 = StateNameForClient;
    if ( StateNameForClient < 0 )
      goto LABEL_35;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 56LL * v13);
  *(_QWORD *)(a1 + 112) = Heap;
  if ( Heap )
  {
    *(_DWORD *)(a1 + 96) = v13;
    v48 = 0LL;
    RtlQueryUnbiasedInterruptTime(&v48);
    v39 = 0;
    *(_QWORD *)(a1 + 128) = v48 / 0x2710;
    *(_QWORD *)(a1 + 240) = MEMORY[0x7FFE0008];
    if ( v13 )
    {
      v40 = 0LL;
      v41 = v64;
      while ( 1 )
      {
        switch ( *v41 )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x17:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1E:
          case 0x1F:
          case 0x20:
          case 0x21:
          case 0x23:
          case 0x25:
            v42 = 0;
            break;
          default:
            v42 = 1;
            break;
        }
        if ( v42 > *(_DWORD *)(a1 + 120) )
          *(_DWORD *)(a1 + 120) = v42;
        v43 = v40 + *(_QWORD *)(a1 + 112);
        *(_QWORD *)(v43 + 48) = 0LL;
        v44 = *(_OWORD *)v41;
        *(_QWORD *)(v43 + 24) = a1;
        *(_OWORD *)(v43 + 32) = v44;
        *(_QWORD *)(v43 + 16) = v43 + 8;
        *(_QWORD *)(v43 + 8) = v43 + 8;
        *(_QWORD *)v43 = CrmActivityListenerCallback;
        v37 = CrmRegisterToStateMonitor();
        if ( v37 < 0 )
          break;
        ++*(_DWORD *)(a1 + 108);
        ++v39;
        v40 += 56LL;
        v41 += 4;
        if ( v39 >= v13 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      RtlAcquireSRWLockExclusive(a1 + 80);
      *(_DWORD *)(a1 + 88) = GetCurrentThreadId();
      if ( *(_DWORD *)(a1 + 64) == 17 )
      {
        CrmRegistrationNotifyWindowClosedReasonChange(a2, a1);
      }
      else
      {
        RtlAcquireSRWLockShared(&unk_1800E3958);
        if ( *(_DWORD *)(a1 + 124) == 4 )
          CrmRegistrationNotify(a2, a1, 1);
        RtlReleaseSRWLockShared(&unk_1800E3958);
      }
      *(_DWORD *)(a1 + 88) = 0;
      RtlReleaseSRWLockExclusive(a1 + 80);
      v37 = 0;
    }
  }
  else
  {
    v37 = -1073741801;
  }
LABEL_35:
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 4) != 0 && (qword_1800E1300 & 4) == qword_1800E1300 )
  {
    *((_QWORD *)&v56 + 1) = 16LL;
    *(_QWORD *)&v56 = &Uuid;
    v52 = *(_QWORD *)(a1 + 56);
    *((_QWORD *)&v57 + 1) = 8LL;
    *(_QWORD *)&v57 = &v52;
    Key = *(_DWORD *)(a1 + 68);
    p_Key = &Key;
    v50 = *(_QWORD *)(a2 + 16);
    v60 = &v50;
    v62 = &v49;
    *(_DWORD *)&EventDescriptor.Level = 5;
    Source2.Ptr = (ULONGLONG)off_1800E12F0;
    v59 = 4LL;
    v61 = 8LL;
    LODWORD(v49) = v37;
    v63 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 4LL;
    Source2.Size = *(unsigned __int16 *)off_1800E12F0;
    *(_QWORD *)&v55 = &unk_1800CC5E1;
    Source2.Reserved = 2;
    *((_QWORD *)&v55 + 1) = 0x100000053LL;
    LODWORD(v48) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E1308, &EventDescriptor, 0LL, 0LL, 7u, &Source2);
  }
  return (unsigned int)v37;
}
