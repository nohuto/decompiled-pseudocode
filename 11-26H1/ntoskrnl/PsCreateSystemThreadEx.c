/*
 * XREFs of PsCreateSystemThreadEx @ 0x140A03170
 * Callers:
 *     SmKmStoreHelperStart @ 0x1403F48A0 (SmKmStoreHelperStart.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x1403F4EFC (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403F5378 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiInsertNewZeroThread @ 0x1405161C8 (MiInsertNewZeroThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407A3A98 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     KiStartDpcThread @ 0x1407B98EC (KiStartDpcThread.c)
 *     PfTStart @ 0x1407C67E4 (PfTStart.c)
 *     PopFxCreateStaticWorkPoolThread @ 0x1407CD4F8 (PopFxCreateStaticWorkPoolThread.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083075C (EtwpCovSampCaptureContextStart.c)
 *     ExpWatchLicenseInfoWork @ 0x140836EA0 (ExpWatchLicenseInfoWork.c)
 *     NtMapCMFModule @ 0x1408446A0 (NtMapCMFModule.c)
 *     CmpCreateRegistryThread @ 0x140856F70 (CmpCreateRegistryThread.c)
 *     MiInitializePartitionThreads @ 0x140869C60 (MiInitializePartitionThreads.c)
 *     MiInsertPageFileInList @ 0x14086BC8C (MiInsertPageFileInList.c)
 *     MmStoreRegister @ 0x14087D67C (MmStoreRegister.c)
 *     MiCreatePerNodeZeroingConductor @ 0x14087F110 (MiCreatePerNodeZeroingConductor.c)
 *     ExpWatchProductTypeWork @ 0x140973C50 (ExpWatchProductTypeWork.c)
 *     PsCreateSystemThread @ 0x140A03420 (PsCreateSystemThread.c)
 *     ExpNodeCreateSystemThread @ 0x140A03568 (ExpNodeCreateSystemThread.c)
 *     IopStartApcHardError @ 0x140A03660 (IopStartApcHardError.c)
 *     IoCreateSystemThread @ 0x140A03780 (IoCreateSystemThread.c)
 *     PopInitSystemSleeperThread @ 0x140A03F00 (PopInitSystemSleeperThread.c)
 *     NtGetMUIRegistryInfo @ 0x140AE5010 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeQueryActiveGroupCount @ 0x1404BB3D0 (KeQueryActiveGroupCount.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateThread @ 0x140A0175C (PspCreateThread.c)
 */

__int64 __fastcall PsCreateSystemThreadEx(
        __int64 a1,
        int a2,
        __int128 *a3,
        ULONG_PTR a4,
        void *a5,
        __int64 a6,
        __int64 a7,
        __int128 *a8,
        int *a9)
{
  __int128 *v10; // r12
  char v12; // r13
  int v13; // ebx
  _KPROCESS *v14; // rsi
  unsigned int v15; // ebx
  __int128 v16; // xmm0
  int v17; // eax
  _BYTE *v18; // rcx
  __int64 v20; // rdi
  int v21; // eax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  __int128 v26; // [rsp+80h] [rbp-80h] BYREF
  __int128 v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  void *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int128 v33; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v34[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+F4h] [rbp-Ch]
  __int128 v37; // [rsp+220h] [rbp+120h]

  v10 = a8;
  v31 = a5;
  v30 = a6;
  v32 = a1;
  v29 = a7;
  memset_0(v34, 0, 0x1F8uLL);
  *(_QWORD *)&v28 = 0LL;
  Object = 0LL;
  v26 = 0LL;
  DWORD2(v28) = 0;
  v27 = 0LL;
  v33 = 0LL;
  if ( KeGetCurrentIrql() > 1u )
    KeBugCheckEx(0xC8u, ((unsigned __int64)KeGetCurrentIrql() << 16) | 4, 0LL, 0LL, 0LL);
  v12 = 0;
  if ( a4 )
  {
    v13 = ObpReferenceObjectByHandleWithTag(a4, 2LL, PsProcessType, 0, 0x72437350u, &Object, 0LL, 0LL);
    if ( v13 < 0 )
      return (unsigned int)v13;
    v14 = (_KPROCESS *)Object;
    v12 = 1;
  }
  else
  {
    v14 = (_KPROCESS *)*((_QWORD *)PspSystemPartition + 15);
  }
  v20 = 4096LL;
  v18 = 0LL;
  if ( (v14[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0
    || (v14[3].ActiveGroupsMask.Masks[1] & 0x4000000000000000LL) != 0 )
  {
    if ( !a8 )
    {
      if ( a9 )
      {
        v20 = v35;
        goto LABEL_9;
      }
      v15 = (unsigned __int16)(_InterlockedExchangeAdd(
                                 (volatile signed __int32 *)&PspSiloMonitorLock.SchedulerAssistYieldCounter,
                                 1u)
                             + 1);
      v10 = &v33;
      WORD4(v33) = v15 % KeQueryActiveGroupCount();
      *($353D57E818BB6F967B4B818D974CF463 *)&v33 = *($353D57E818BB6F967B4B818D974CF463 *)((char *)&stru_140FC01F0.116
                                                                                        + 8 * WORD4(v33)
                                                                                        + 4);
    }
    v16 = *v10;
    v35 = 4096LL;
    v37 = v16;
LABEL_9:
    if ( a9 )
    {
      v17 = *a9;
      v35 = v20 | 0x4000;
      v36 = v17;
    }
    v18 = v34;
  }
  if ( a3 )
  {
    v21 = *((_DWORD *)a3 + 6);
    v22 = a3[1];
    v26 = *a3;
    v23 = a3[2];
    v27 = v22;
    DWORD2(v27) = v21 | 0x200;
    v28 = v23;
  }
  else
  {
    LODWORD(v26) = 48;
    v28 = 0LL;
    *((_QWORD *)&v26 + 1) = 0LL;
    DWORD2(v27) = 512;
    *(_QWORD *)&v27 = 0LL;
  }
  v13 = PspCreateThread(v32, a2, &v26, 0LL, v14, (__int64)v18, v31, 0LL, 0LL, 0, v30, v29, 0LL);
  if ( v12 )
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
  return (unsigned int)v13;
}
