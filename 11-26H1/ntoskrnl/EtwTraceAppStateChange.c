/*
 * XREFs of EtwTraceAppStateChange @ 0x1409CF9F8
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x1409CF794 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408FBFFC (EtwpQueryTokenPackageInfo.c)
 *     PsQueryStatisticsProcess @ 0x1409CDFC0 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x1409CED00 (ObGetProcessHandleCount.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1409D0688 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpInitStateChangeInfo @ 0x1409D0CD8 (EtwpInitStateChangeInfo.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1409D0D94 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChange @ 0x1409D1170 (EtwpWriteAppStateChange.c)
 *     EtwpQueryProcessCommandLine @ 0x1409D37CC (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x1409D3984 (EtwpQueryProcessOtherInfo.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140AFF404 (EtwpWriteAppStateChangeWithStats.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceAppStateChange(struct _EX_RUNDOWN_REF *PROCESS, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  char v7; // r10
  unsigned __int64 v8; // kr00_8
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  int v12; // r8d
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  _OWORD *v16; // r15
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  char v19; // r14
  char v20; // si
  void *v21; // rbx
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v25[5]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  _OWORD v30[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-20h]
  int v32; // [rsp+E8h] [rbp-18h]
  _BYTE v33[41]; // [rsp+ECh] [rbp-14h] BYREF
  unsigned __int64 v34; // [rsp+115h] [rbp+15h]
  unsigned __int64 v35; // [rsp+11Dh] [rbp+1Dh]
  unsigned __int64 v36; // [rsp+125h] [rbp+25h]
  unsigned __int64 v37; // [rsp+12Dh] [rbp+2Dh]
  unsigned __int64 v38; // [rsp+135h] [rbp+35h]
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF
  WCHAR PackageSize[336]; // [rsp+180h] [rbp+80h] BYREF

  memset_0(v33, 0, 0x62uLL);
  memset(v30, 0, sizeof(v30));
  v31 = 0LL;
  v32 = 0;
  if ( dword_140E08F40
    && (qword_140E08F50 & 0x600000000001LL) != 0
    && (qword_140E08F58 & 0x600000000001LL) == qword_140E08F58 )
  {
    EtwpInitStateChangeInfo(PROCESS, v33);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - PROCESS[208].Count;
    v7 = *(_BYTE *)(a2 + 52);
    v33[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v33[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    v34 = v8 / 0x2710;
    v35 = v9 / 0x2710;
    v36 = v6 / 0x2710;
    v37 = v5 / 0x2710;
    v38 = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      memset_0(v25, 0, 0x68uLL);
      PsQueryStatisticsProcess(PROCESS, v25, v10, v11);
      LODWORD(v30[0]) = ObGetProcessHandleCount(PROCESS, 0LL);
      v12 = -1;
      v13 = -1;
      *(_QWORD *)((char *)v30 + 4) = PROCESS[123].Count << 12;
      *(_QWORD *)((char *)v30 + 12) = PROCESS[124].Count << 12;
      v14 = -1;
      if ( v26 < 0xFFFFFFFFLL )
        v14 = v26;
      HIDWORD(v30[1]) = v14;
      v15 = -1;
      if ( v27 < 0xFFFFFFFFLL )
        v15 = v27;
      LODWORD(v31) = v15;
      if ( v28 / 1024 < 0xFFFFFFFFLL )
        v13 = v28 / 1024;
      HIDWORD(v31) = v13;
      if ( v29 / 1024 < 0xFFFFFFFFLL )
        v12 = v29 / 1024;
      v32 = v12;
      *(_QWORD *)((char *)&v30[1] + 4) = v25[3];
      EtwpWriteAppStateChangeWithStats(PROCESS, v33, v30, 1024LL);
      v16 = v30;
    }
    else
    {
      EtwpWriteAppStateChange(v33);
      LODWORD(v16) = 0;
    }
    if ( dword_140E08F40
      && (qword_140E08F50 & 0x400000000000LL) != 0
      && (qword_140E08F58 & 0x400000000000LL) == qword_140E08F58 )
    {
      memset_0(PackageSize, 0, sizeof(PackageSize));
      v23 = 0LL;
      memset(&ApcState, 0, sizeof(ApcState));
      v19 = 0;
      v20 = 1;
      v22 = 0;
      *(_OWORD *)P = 0LL;
      if ( (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process != PROCESS )
      {
        if ( ExAcquireRundownProtection_0(PROCESS + 61) )
        {
          KeStackAttachProcess((PRKPROCESS)PROCESS, &ApcState);
          v19 = 1;
        }
        else
        {
          v20 = 0;
        }
      }
      v21 = (void *)PsReferencePrimaryTokenWithTag((__int64)PROCESS, 0x746C6644u, v17, v18);
      EtwpQueryTokenPackageInfo(v21, PackageSize, &v22);
      ObFastDereferenceObject((signed __int64 *)&PROCESS[73], (ULONG_PTR)v21, 0x746C6644u);
      if ( v20 )
      {
        if ( PROCESS[92].Count && (unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(PROCESS) )
          EtwpQueryProcessCommandLine(PROCESS, P);
        EtwpQueryProcessOtherInfo(PROCESS, &v23);
      }
      if ( v19 )
      {
        KiUnstackDetachProcess((__int64)&ApcState, 0);
        ExReleaseRundownProtection_0(PROCESS + 61);
      }
      EtwpWriteAppStateChangeSummary(
        (_DWORD)PROCESS,
        (unsigned int)v33,
        (_DWORD)v16,
        (unsigned int)PackageSize,
        (__int64)&v23,
        (__int64)P);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
    }
  }
}
