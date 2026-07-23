/*
 * XREFs of PfSetSuperfetchInformation @ 0x140B60C94
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     PfpPartitionDereferenceParent @ 0x140383530 (PfpPartitionDereferenceParent.c)
 *     PfpPartitionRundownProtectionRelease @ 0x140447AD8 (PfpPartitionRundownProtectionRelease.c)
 *     PfpPartitionRundownProtectionAcquire @ 0x1404AB540 (PfpPartitionRundownProtectionAcquire.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     PfTSetTraceWorkerPriority @ 0x1406029F4 (PfTSetTraceWorkerPriority.c)
 *     MmSetAgingOptions @ 0x1406FCB28 (MmSetAgingOptions.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     PfGenerateTrace @ 0x14077C418 (PfGenerateTrace.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     PfTCleanup @ 0x1407C92B4 (PfTCleanup.c)
 *     PfTInitialize @ 0x1407C9604 (PfTInitialize.c)
 *     PfTStart @ 0x1407C9844 (PfTStart.c)
 *     PfpPartitionFindOrCreate @ 0x1407CA138 (PfpPartitionFindOrCreate.c)
 *     PfpSetParameter @ 0x1407CB008 (PfpSetParameter.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PfpPrefetchRequest @ 0x140980100 (PfpPrefetchRequest.c)
 *     EtwTiLogSyscallUsage @ 0x140A5C578 (EtwTiLogSyscallUsage.c)
 *     PfpPfnPrioRequest @ 0x140A5C74C (PfpPfnPrioRequest.c)
 *     PfpPartitionFindByHandle @ 0x140A5D140 (PfpPartitionFindByHandle.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x140AF2140 (PfpDeprioritizeOldPagesInWs.c)
 *     PfpRpControlRequest @ 0x140B04938 (PfpRpControlRequest.c)
 *     PfpProcessScenarioPhase @ 0x140B1F0C8 (PfpProcessScenarioPhase.c)
 *     PfpLogEventRequest @ 0x140B51D4C (PfpLogEventRequest.c)
 *     PfpPartitionAccessTraceLockAcquire @ 0x140BEF5B0 (PfpPartitionAccessTraceLockAcquire.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140BFE9BC (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxServiceThreadSet @ 0x140BFED14 (PfpScenCtxServiceThreadSet.c)
 *     PfpPartitionAccessTraceLockRelease @ 0x140BFF0AC (PfpPartitionAccessTraceLockRelease.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSetSuperfetchInformation(__int64 a1, void *a2, int a3, KPROCESSOR_MODE a4)
{
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // edx
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  size_t v13; // r8
  int v14; // eax
  __int64 v15; // r13
  int v16; // ebx
  __int64 v17; // r13
  __int64 v18; // r13
  __int64 v19; // r8
  __int64 v20; // r15
  int v22[2]; // [rsp+38h] [rbp-180h] BYREF
  __int128 v23; // [rsp+40h] [rbp-178h] BYREF
  volatile void *Address[2]; // [rsp+50h] [rbp-168h]
  int v25; // [rsp+60h] [rbp-158h] BYREF
  int v26; // [rsp+64h] [rbp-154h] BYREF
  int v27; // [rsp+68h] [rbp-150h]
  __int64 v28; // [rsp+70h] [rbp-148h] BYREF
  __int64 v29; // [rsp+78h] [rbp-140h] BYREF
  PVOID P; // [rsp+80h] [rbp-138h]
  __int128 v31; // [rsp+88h] [rbp-130h] BYREF
  volatile void *v32; // [rsp+98h] [rbp-120h]
  __int64 v33; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-110h]
  HANDLE Handle; // [rsp+B0h] [rbp-108h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-100h] BYREF
  __int128 Src; // [rsp+C8h] [rbp-F0h] BYREF
  __int128 v38; // [rsp+D8h] [rbp-E0h]
  __int128 v39; // [rsp+E8h] [rbp-D0h] BYREF
  __int128 v40; // [rsp+F8h] [rbp-C0h] BYREF
  unsigned int v41; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+110h] [rbp-A8h]
  __int64 v43; // [rsp+118h] [rbp-A0h]
  __int64 v44; // [rsp+120h] [rbp-98h]
  __int64 v45; // [rsp+128h] [rbp-90h]
  __int64 v46; // [rsp+130h] [rbp-88h]
  __int64 v47; // [rsp+138h] [rbp-80h]
  __int64 v48; // [rsp+140h] [rbp-78h]
  __int64 v49; // [rsp+148h] [rbp-70h]
  __int64 v50; // [rsp+150h] [rbp-68h]
  __int64 v51; // [rsp+158h] [rbp-60h] BYREF
  int v52; // [rsp+160h] [rbp-58h]
  _DWORD v53[8]; // [rsp+168h] [rbp-50h] BYREF

  v23 = 0LL;
  *(_OWORD *)Address = 0LL;
  memset(v53, 0, sizeof(v53));
  v29 = 0LL;
  v40 = 0LL;
  v25 = 0;
  v26 = 0;
  Src = 0LL;
  v38 = 0LL;
  DWORD2(v39) = 0;
  *(_QWORD *)&v39 = 0LL;
  v51 = 0LL;
  v52 = 0;
  v33 = 0LL;
  v28 = 0LL;
  v27 = 0;
  *(_QWORD *)v22 = 0LL;
  v34 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
  {
    v7 = -1073741790;
    goto LABEL_139;
  }
  if ( a3 != 32 )
  {
    v7 = -1073741820;
    goto LABEL_139;
  }
  if ( a4 )
    RtlCopyFromUser(&v23, a2, 0x20uLL);
  else
    RtlCopyVolatileMemory(&v23, a2, 0x20uLL);
  if ( (_QWORD)v23 != 0x6B7568430000002DLL )
  {
    v7 = -1073741811;
    goto LABEL_139;
  }
  if ( SDWORD2(v23) > 14 )
  {
    switch ( DWORD2(v23) )
    {
      case 0xF:
        if ( LODWORD(Address[1]) != 4 )
          goto LABEL_19;
        if ( a4 )
        {
          v50 = 1LL;
          ProbeForRead(Address[0], 1uLL, 4u);
          RtlCopyFromUser(&v25, (void *)Address[0], 4uLL);
        }
        else
        {
          RtlCopyVolatileMemory(&v25, (const void *)Address[0], 4uLL);
        }
        v26 = v25 + HIDWORD(stru_140E66D40.WriteOperationCount);
        v7 = PfpSetParameter(stru_140E66D40.WaitBlock[1].WaitListEntry.Blink, L"BaseTime", v19, &v26, 4u);
        if ( v7 >= 0 )
          HIDWORD(stru_140E66D40.WriteOperationCount) = v26;
        goto LABEL_139;
      case 0x12:
        if ( LODWORD(Address[1]) != 32 )
          goto LABEL_19;
        if ( a4 )
        {
          v49 = 1LL;
          ProbeForRead(Address[0], 1uLL, 8u);
          RtlCopyFromUser(&Src, (void *)Address[0], 0x20uLL);
        }
        else
        {
          RtlCopyVolatileMemory(&Src, (const void *)Address[0], 0x20uLL);
        }
        if ( (_DWORD)Src == 3 && DWORD1(Src) < 2 && (DWORD2(Src) & 0xFFFFFFFC) == 0 )
        {
          if ( DWORD1(Src) || !*((_QWORD *)&v38 + 1) )
          {
            v7 = PsReferencePartitionByHandle(v38, 2031619, a4, 0x74506650u, &v28);
            if ( v7 >= 0 )
            {
              v7 = PfpPartitionFindOrCreate(
                     (PEX_RUNDOWN_REF_CACHE_AWARE **)v22,
                     (__int64)&stru_140E66D40.WaitBlock[1],
                     v28);
              if ( v7 >= 0 )
              {
                v27 = 1;
                v15 = *(_QWORD *)v22;
                PfpPartitionAccessTraceLockAcquire(*(_QWORD *)v22);
                if ( DWORD1(Src) )
                {
                  v17 = *(_QWORD *)v22;
                  v16 = ~DWORD2(Src) & *(_DWORD *)(*(_QWORD *)v22 + 72LL);
                  PfTCleanup(*(__int64 *)v22, 0);
                  PfTInitialize(v17, 1);
                }
                else
                {
                  v16 = DWORD2(Src) & ~*(_DWORD *)(v15 + 72);
                }
                v18 = *(_QWORD *)v22;
                v7 = PfTStart(*(__int64 *)v22, v16, a4, &Handle);
                if ( v7 >= 0 )
                {
                  PfpPartitionAccessTraceLockRelease(v18);
                  v27 = 0;
                  if ( !DWORD1(Src) )
                  {
                    v34 = v18;
                    PfpPartitionRundownProtectionAcquire(v18);
                    *((_QWORD *)&v38 + 1) = Handle;
                    if ( a4 )
                    {
                      ProbeForWrite(Address[0], 0x20uLL, 8u);
                      RtlCopyToUser((void *)Address[0], &Src, 0x20uLL);
                    }
                    else
                    {
                      RtlCopyVolatileMemory((void *)Address[0], &Src, 0x20uLL);
                    }
                  }
                  PfpScenCtxServiceThreadSet((struct _KTHREAD *)&stru_140E66D40.OtherOperationCount);
                  if ( v34 )
                    PfpPartitionRundownProtectionRelease(v34);
                  v34 = 0LL;
                  Handle = 0LL;
                }
              }
            }
          }
          else
          {
            v7 = -1073741776;
          }
          goto LABEL_139;
        }
LABEL_77:
        v7 = -1073741811;
        goto LABEL_139;
      case 0x13:
        if ( LODWORD(Address[1]) != 12 )
          goto LABEL_19;
        v7 = 0;
        if ( a4 )
        {
          v48 = 1LL;
          ProbeForRead(Address[0], 1uLL, 4u);
          RtlCopyFromUser(&v51, (void *)Address[0], 0xCuLL);
        }
        else
        {
          RtlCopyVolatileMemory(&v51, (const void *)Address[0], 0xCuLL);
        }
        if ( (_DWORD)v51 != 2 || SHIDWORD(v51) >= 5 || (unsigned __int8)v52 > 7u || BYTE1(v52) > 7u || HIWORD(v52) )
          goto LABEL_77;
        v36 = 0LL;
        LODWORD(v36) = 2;
        DWORD2(v36) = HIDWORD(v51);
        WORD6(v36) = v52;
        break;
      case 0x16:
        goto LABEL_95;
      case 0x19:
        if ( LODWORD(Address[1]) != 8 )
          goto LABEL_19;
        v7 = 0;
        if ( a4 )
        {
          v47 = 1LL;
          ProbeForRead(Address[0], 1uLL, 4u);
          RtlCopyFromUser(&v33, (void *)Address[0], 8uLL);
        }
        else
        {
          RtlCopyVolatileMemory(&v33, (const void *)Address[0], 8uLL);
        }
        if ( (_DWORD)v33 != 1 )
          goto LABEL_77;
        v36 = __PAIR64__(HIDWORD(v33), 1);
        break;
      case 0x1A:
        v14 = PfpDeprioritizeOldPagesInWs((__int64)&v23, a4);
LABEL_79:
        v7 = v14;
        goto LABEL_139;
      case 0x1D:
        goto LABEL_95;
      default:
LABEL_87:
        v7 = -1073741821;
        goto LABEL_139;
    }
    MmSetAgingOptions((__int64 *)PspSystemPartition, (__int64)&v36);
    goto LABEL_139;
  }
  if ( DWORD2(v23) == 14 )
  {
    v14 = PfpRpControlRequest((__int64)&v23, a4);
    goto LABEL_79;
  }
  if ( DWORD2(v23) == 3 )
  {
    if ( LODWORD(Address[1]) != 24 )
      goto LABEL_19;
    if ( a4 )
    {
      v46 = 1LL;
      ProbeForRead(Address[0], 1uLL, 8u);
      RtlCopyFromUser(&v31, (void *)Address[0], 0x18uLL);
    }
    else
    {
      RtlCopyVolatileMemory(&v31, (const void *)Address[0], 0x18uLL);
    }
    if ( (_DWORD)v31 != 1 )
      goto LABEL_54;
    if ( v32 )
    {
      v11 = DWORD1(v31) >> 7;
      if ( DWORD1(v31) >> 7 )
      {
        switch ( BYTE4(v31) & 0x1F )
        {
          case 2:
          case 3:
            v12 = 36;
            break;
          case 5:
            v12 = 12;
            break;
          case 27:
            v12 = 16;
            break;
          default:
            v7 = -1073741637;
            goto LABEL_139;
        }
        if ( v11 >= v12 && v11 < 0xFF0 )
        {
          v7 = PfpPartitionFindByHandle((__int64 *)v22, &v28, *((__int64 *)&v31 + 1), a4);
          if ( v7 < 0 )
            goto LABEL_139;
          P = (PVOID)ExAllocatePool2(0x100uLL);
          if ( !P )
          {
            v7 = -1073741670;
            goto LABEL_139;
          }
          if ( a4 )
            ProbeForRead(v32, (unsigned __int64)DWORD1(v31) >> 7, 2u);
          v13 = (unsigned __int64)DWORD1(v31) >> 7;
          if ( a4 )
            RtlCopyFromUser(P, (void *)v32, v13);
          else
            RtlCopyVolatileMemory(P, (const void *)v32, v13);
          v32 = P;
          v8 = PfpLogEventRequest(*(__int64 *)v22, (__int64)&v31);
          goto LABEL_76;
        }
      }
    }
    goto LABEL_77;
  }
  if ( DWORD2(v23) != 4 )
  {
    if ( DWORD2(v23) == 5 )
    {
      v7 = PfpPrefetchRequest((__int64)&v23, a4);
      v9 = 17;
      v10 = v7;
LABEL_41:
      EtwTiLogSyscallUsage(v10, v9);
      goto LABEL_139;
    }
    if ( DWORD2(v23) != 7 )
    {
      if ( DWORD2(v23) == 10 )
      {
        if ( LODWORD(Address[1]) != 32 )
          goto LABEL_19;
        if ( a4 )
        {
          v44 = 1LL;
          ProbeForRead(Address[0], 1uLL, 8u);
          RtlCopyFromUser(v53, (void *)Address[0], 0x20uLL);
        }
        else
        {
          RtlCopyVolatileMemory(v53, (const void *)Address[0], 0x20uLL);
        }
        v8 = PfpProcessScenarioPhase(v53, a4);
        goto LABEL_76;
      }
      if ( DWORD2(v23) != 11 )
      {
        if ( DWORD2(v23) == 13 )
        {
          if ( LODWORD(Address[1]) != 8 )
          {
LABEL_19:
            v7 = -1073741306;
            goto LABEL_139;
          }
          if ( a4 )
          {
            v42 = 1LL;
            ProbeForRead(Address[0], 1uLL, 4u);
            RtlCopyFromUser(&v29, (void *)Address[0], 8uLL);
          }
          else
          {
            RtlCopyVolatileMemory(&v29, (const void *)Address[0], 8uLL);
          }
          if ( (_WORD)v29 == 1 && (unsigned int)(HIDWORD(v29) - 1) <= 4 )
          {
            v8 = PfpScenCtxPrefetchStateSet((struct _KTHREAD *)&stru_140E66D40.OtherOperationCount);
LABEL_76:
            v7 = v8;
            goto LABEL_139;
          }
          goto LABEL_77;
        }
        goto LABEL_87;
      }
      if ( LODWORD(Address[1]) != 16 )
        goto LABEL_19;
      if ( a4 )
      {
        v43 = 1LL;
        ProbeForRead(Address[0], 1uLL, 8u);
        RtlCopyFromUser(&v40, (void *)Address[0], 0x10uLL);
      }
      else
      {
        RtlCopyVolatileMemory(&v40, (const void *)Address[0], 0x10uLL);
      }
      if ( (_DWORD)v40 == 1 )
      {
        v7 = PfpPartitionFindByHandle((__int64 *)v22, &v28, *((__int64 *)&v40 + 1), a4);
        if ( v7 >= 0 )
        {
          v7 = 0;
          if ( (int)PfTSetTraceWorkerPriority(*(__int64 *)v22, DWORD1(v40)) > 31 )
            v7 = -1073741431;
        }
        goto LABEL_139;
      }
LABEL_54:
      v7 = -1073741735;
      goto LABEL_139;
    }
LABEL_95:
    v7 = PfpPfnPrioRequest((__int64)&v23, a4, &v41);
    v9 = 22;
    if ( DWORD2(v23) != 7 )
      v9 = (DWORD2(v23) != 22) + 23;
    v10 = v7;
    goto LABEL_41;
  }
  if ( LODWORD(Address[1]) != 16 )
    goto LABEL_19;
  v39 = 0LL;
  if ( a4 )
  {
    v45 = 1LL;
    ProbeForRead(Address[0], 1uLL, 8u);
    RtlCopyFromUser(&v39, (void *)Address[0], 0x10uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v39, (const void *)Address[0], 0x10uLL);
  }
  if ( (_DWORD)v39 != 1 )
    goto LABEL_54;
  v7 = PfpPartitionFindByHandle((__int64 *)v22, &v28, *((__int64 *)&v39 + 1), a4);
  if ( v7 >= 0 )
  {
    PfGenerateTrace(*(__int64 *)v22, 0);
    v7 = 0;
  }
LABEL_139:
  if ( v27 )
    PfpPartitionAccessTraceLockRelease(*(_QWORD *)v22);
  v20 = v34;
  if ( v34 )
  {
    PfpPartitionAccessTraceLockAcquire(v34);
    PfTCleanup(v20, 0);
    PfTInitialize(v20, 1);
    PfpPartitionAccessTraceLockRelease(v20);
    PfpPartitionRundownProtectionRelease(v20);
  }
  if ( *(_QWORD *)v22 )
    PfpPartitionRundownProtectionRelease(*(__int64 *)v22);
  if ( v28 )
    PfpPartitionDereferenceParent(v28);
  if ( Handle )
    ObCloseHandle(Handle, a4);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v7;
}
