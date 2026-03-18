/*
 * XREFs of AsyncEvalObject @ 0x140009DE0
 * Callers:
 *     SyncEvalObject @ 0x14000EE78 (SyncEvalObject.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     DebugRunMethod @ 0x14006EF70 (DebugRunMethod.c)
 * Callees:
 *     FreeContext @ 0x140003D30 (FreeContext.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     InitContext @ 0x14000A6D8 (InitContext.c)
 *     AcpiDiagTraceFrequentAmlEvaluation @ 0x14000A834 (AcpiDiagTraceFrequentAmlEvaluation.c)
 *     GetObjectPathNoLock @ 0x14000A9F0 (GetObjectPathNoLock.c)
 *     RestartContext @ 0x14000E2E0 (RestartContext.c)
 *     ReadObject @ 0x140011B40 (ReadObject.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     ReferenceObjectEx @ 0x140036D50 (ReferenceObjectEx.c)
 *     AmliEnableWatchdog @ 0x140038F08 (AmliEnableWatchdog.c)
 *     PrintObject @ 0x1400553E8 (PrintObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x14006DFE8 (AMLIReadNamespaceOverrideObject.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall AsyncEvalObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v8; // r13
  unsigned int v10; // r15d
  KIRQL CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r11
  __int64 v13; // r9
  __int64 v14; // rcx
  PVOID v15; // rax
  __int64 v16; // rsi
  KIRQL v17; // al
  int v18; // edx
  KIRQL v19; // al
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  __int16 v22; // ax
  __int64 v23; // rcx
  char v24; // al
  char v25; // al
  __int64 v26; // rdi
  KIRQL v27; // bl
  _BYTE *ObjectPathNoLock; // r14
  _BYTE *v29; // rax
  __int64 v30; // rcx
  __int64 Pool2; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  _QWORD *v34; // rcx
  __int64 *v35; // rax
  __int64 *v36; // rbx
  __int64 v37; // rcx
  bool v38; // zf
  int v39; // eax
  __int64 v40; // rbx
  unsigned int Object; // ebp
  __int64 v43; // rax
  __int16 v44; // dx
  __int64 *v45; // rax
  __int16 v46; // di
  __int64 v47; // rdx
  __int64 v48; // r9
  char *v49; // r8
  __int16 v50; // cx
  __int64 *v51; // rax
  __int64 *v52; // rax
  const void *v53; // r8
  unsigned int v54; // ecx
  const void *v55; // rdx
  __int64 v56; // rdi
  unsigned __int16 v57; // ax
  const char *ObjectPath; // rax
  struct _KTHREAD *v59; // rdx
  char *v60; // rdi
  __int64 v61; // rcx
  unsigned __int16 v62; // bx
  __int16 v63; // [rsp+30h] [rbp-A8h] BYREF
  __int16 v64; // [rsp+34h] [rbp-A4h] BYREF
  __int64 v65; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+40h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-88h] BYREF
  __int64 v68; // [rsp+60h] [rbp-78h]
  int v69; // [rsp+68h] [rbp-70h]
  int v70; // [rsp+6Ch] [rbp-6Ch]
  __int16 *v71; // [rsp+70h] [rbp-68h]
  __int64 v72; // [rsp+78h] [rbp-60h]
  __int64 *v73; // [rsp+80h] [rbp-58h]
  __int64 v74; // [rsp+88h] [rbp-50h]

  v66 = a4;
  v8 = a3;
  v10 = 0;
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  v13 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_14008ED10 )
  {
    v14 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_14008ED08 + 1, 1u) % (unsigned int)qword_14008ED08);
    *(_QWORD *)((char *)qword_14008ED10 + v14 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_14008ED10 + v14) = 1095981390;
    *(_QWORD *)((char *)qword_14008ED10 + v14 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_14008ED10 + v14 + 24) = 0LL;
    *(_QWORD *)((char *)qword_14008ED10 + v14 + 32) = 0LL;
    *(_QWORD *)((char *)qword_14008ED10 + v14 + 40) = v13;
    *(_QWORD *)((char *)qword_14008ED10 + v14 + 48) = CurrentIrql;
    *(_QWORD *)((char *)qword_14008ED10 + v14 + 56) = a1;
    *(_QWORD *)((char *)qword_14008ED10 + v14 + 64) = 0LL;
  }
  v15 = ExAllocateFromNPagedLookasideList(&AMLIContextLookAsideList);
  v16 = (__int64)v15;
  if ( !v15 )
    return (unsigned int)-1073741670;
  memset(v15, 0, 0x238uLL);
  v17 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  v18 = gdwcCTObjs + 1;
  gdwcCTObjs = v18;
  if ( v18 > 0 && v18 > (unsigned int)gdwcCTObjsMax )
    gdwcCTObjsMax = v18;
  KeReleaseSpinLock(&gdwGContextSpinLock, v17);
  InitContext((PVOID)v16);
  v19 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v20 = off_14008CA60[0];
  NewIrql = v19;
  v21 = (_QWORD *)(v16 + 16);
  if ( *(_UNKNOWN ***)off_14008CA60[0] != &glistCtxtHead )
    __fastfail(3u);
  *(_UNKNOWN ***)(v16 + 24) = off_14008CA60[0];
  *v21 = &glistCtxtHead;
  *v20 = v21;
  off_14008CA60[0] = (_UNKNOWN **)(v16 + 16);
  KeReleaseSpinLock(&gmutCtxtList, NewIrql);
  v22 = *(_WORD *)(a1 + 64);
  if ( (v22 & 0x400) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 136);
  }
  else
  {
    v23 = 0LL;
    if ( (v22 & 0x200) != 0 )
      v23 = a1;
  }
  v24 = gdwfAMLI;
  *(_QWORD *)(v16 + 72) = a1;
  if ( (v24 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  v25 = gdwfAMLI;
  *(_QWORD *)(v16 + 80) = a1;
  if ( (v25 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  if ( v23 )
  {
    *(_QWORD *)(v16 + 424) = v23;
    ReferenceObjectEx();
    a1 = v61;
  }
  v26 = *(_QWORD *)(v16 + 72);
  *(_QWORD *)(v16 + 168) = a5;
  *(_QWORD *)(v16 + 184) = a6;
  *(_QWORD *)(v16 + 176) = a2;
  v27 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ObjectPathNoLock = (_BYTE *)GetObjectPathNoLock(v26);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v27);
  RtlInitUnicodeString((PUNICODE_STRING)(v16 + 440), 0LL);
  if ( ObjectPathNoLock )
  {
    if ( *ObjectPathNoLock )
    {
      v29 = ObjectPathNoLock;
      v30 = 512LL;
      while ( *v29 )
      {
        ++v29;
        if ( !--v30 )
        {
          v62 = 512;
          goto LABEL_25;
        }
      }
      v62 = 512 - v30;
LABEL_25:
      Pool2 = ExAllocatePool2(64LL, 2LL * ((unsigned int)v62 + 1), 1399874369LL);
      *(_QWORD *)(v16 + 448) = Pool2;
      if ( Pool2 )
      {
        v46 = 2 * (v62 + 1);
        *(_WORD *)(v16 + 442) = v46;
        *(_WORD *)(v16 + 440) = v46 - 2;
        if ( v62 )
        {
          v47 = 0LL;
          v48 = v62;
          v49 = ObjectPathNoLock;
          do
          {
            v50 = *v49;
            v47 += 2LL;
            ++v49;
            *(_WORD *)(v47 + *(_QWORD *)(v16 + 448) - 2) = v50;
            --v48;
          }
          while ( v48 );
        }
        *(_WORD *)(*(_QWORD *)(v16 + 448) + 2LL * v62) = 0;
      }
    }
    ExFreePoolWithTag(ObjectPathNoLock, 0);
  }
  v32 = *(_QWORD *)(v16 + 464);
  if ( v32 )
  {
    v43 = *(_QWORD *)(a1 + 16);
    if ( v43 )
    {
      v44 = *(_WORD *)(v43 + 66);
      if ( v44 == 6 || (unsigned __int16)(v44 - 12) <= 1u )
        *(_QWORD *)(v32 + 8) = *(_QWORD *)(v43 + 104);
    }
    AmliEnableWatchdog(*(PVOID *)(v16 + 464));
  }
  AcpiDiagTraceFrequentAmlEvaluation(v16);
  v65 = 0LL;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
    && EtwEventEnabled(*(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
  {
    v57 = *(_WORD *)(v16 + 440);
    v69 = v57;
    v63 = v57 >> 1;
    UserData.Ptr = (unsigned __int64)&v63;
    v68 = *(_QWORD *)(v16 + 448);
    v64 = 1;
    v71 = &v64;
    v73 = &v65;
    *(_QWORD *)&UserData.Size = 2LL;
    v70 = 0;
    v72 = 2LL;
    v74 = 8LL;
    EtwWrite(
      *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
      &ACPI_ETW_EVENT_AML_METHOD_TRACE,
      0LL,
      4u,
      &UserData);
  }
  if ( a7 )
    *(_DWORD *)(v16 + 64) |= 0x100u;
  v33 = v16 + 128;
  v34 = (_QWORD *)(v16 + 480);
  if ( (*(_WORD *)(a1 + 64) & 0x180) != 0 )
  {
    v45 = HeapAlloc(v34, 1297237576, 0x38u);
    if ( !v45 )
      goto LABEL_72;
    v45[1] = *(_QWORD *)(v16 + 416);
    *(_QWORD *)(v16 + 416) = v45;
    v45[3] = (__int64)ProcessEvalObj;
    *(_DWORD *)v45 = 1414745936;
    v45[4] = a1;
    v45[5] = 0LL;
    v45[6] = v33;
    Object = AMLIReadNamespaceOverrideObject(v16, a1, v16 + 128);
    if ( Object == 32772 )
      goto LABEL_74;
  }
  else
  {
    if ( *(_WORD *)(a1 + 66) == 8 )
    {
      v35 = HeapAlloc(v34, 1297237576, 0x190u);
      v36 = v35;
      if ( v35 )
      {
        v35[1] = *(_QWORD *)(v16 + 416);
        *(_QWORD *)(v16 + 416) = v35;
        *(_DWORD *)v35 = 1280065859;
        v35[3] = (__int64)ParseCall;
        v37 = *(_QWORD *)(a1 + 96);
        v35[6] = a1;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
        if ( (*(_BYTE *)(v37 + 193) & 8) != 0 )
          *((_DWORD *)v35 + 4) |= 0x10000u;
        if ( *(_WORD *)(a1 + 66) == 8 && _bittest16((const signed __int16 *)(a1 + 64), 9u) )
          *((_DWORD *)v35 + 4) |= 0x80000u;
        v38 = (*(_BYTE *)(v37 + 193) & 7) == 0;
        v39 = *(_BYTE *)(v37 + 193) & 7;
        *((_DWORD *)v36 + 15) = v39;
        if ( !v38 )
        {
          v52 = HeapAlloc(*(_QWORD **)(v16 + 320), 1413563464, 40 * v39);
          v36[8] = (__int64)v52;
          if ( !v52 )
          {
            Object = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError(v16, -1073741670);
            PrintDebugMessage(0x98u, 0LL, 0LL, 0LL, 0LL);
            v36[49] = v33;
            FreeContext((char *)v16);
            return Object;
          }
          memset(v52, 0, 40LL * *((unsigned int *)v36 + 15));
        }
        v36[49] = v33;
        v40 = *(_QWORD *)(v16 + 416);
        if ( (_DWORD)v8 == *(_DWORD *)(v40 + 60) )
        {
          if ( (gDebugger & 0xD0) != 0 )
          {
            ObjectPath = (const char *)GetObjectPath(a1);
            v59 = KeGetCurrentThread();
            v60 = (char *)ObjectPath;
            if ( ObjectPath )
            {
              ConPrintf("\nAMLI: %p: %s(", v59, ObjectPath);
              ExFreePoolWithTag(v60, 0);
            }
            else
            {
              ConPrintf("\nAMLI: %p: %s(", v59, byte_140075A82);
            }
          }
          *(_DWORD *)(v40 + 56) = 0;
          if ( !(_DWORD)v8 )
          {
LABEL_47:
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf(")\n");
            *(_WORD *)(v40 + 16) = 2;
            return (unsigned int)RestartContext((PVOID)v16);
          }
          v56 = v66;
          while ( 1 )
          {
            Object = DupObjData(*(_QWORD *)(v16 + 320), *(_QWORD *)(v40 + 64) + 40LL * v10, v56 + 40LL * v10);
            if ( Object )
              break;
            if ( (gDebugger & 0xD0) != 0 )
            {
              PrintObject(v56 + 40LL * *(unsigned int *)(v40 + 56));
              if ( *(_DWORD *)(v40 + 56) + 1 < (unsigned int)v8 )
                ConPrintf(",");
            }
            v10 = ++*(_DWORD *)(v40 + 56);
            if ( v10 >= (unsigned int)v8 )
              goto LABEL_47;
          }
LABEL_74:
          FreeContext((char *)v16);
          return Object;
        }
        Object = -1072431093;
        LogError(-1072431093);
        AcpiDiagTraceAmlError(v16, -1072431093);
        v53 = (const void *)*(unsigned int *)(v40 + 60);
        v55 = (const void *)v8;
        v54 = 12;
LABEL_73:
        PrintDebugMessage(v54, v55, v53, 0LL, 0LL);
        goto LABEL_74;
      }
LABEL_72:
      Object = -1072431102;
      LogError(-1072431102);
      AcpiDiagTraceAmlError(v16, -1072431102);
      v53 = 0LL;
      v54 = 153;
      v55 = 0LL;
      goto LABEL_73;
    }
    v51 = HeapAlloc(v34, 1297237576, 0x38u);
    if ( !v51 )
      goto LABEL_72;
    v51[1] = *(_QWORD *)(v16 + 416);
    *(_QWORD *)(v16 + 416) = v51;
    v51[3] = (__int64)ProcessEvalObj;
    *(_DWORD *)v51 = 1414745936;
    v51[4] = a1;
    v51[5] = 0LL;
    v51[6] = v33;
    Object = ReadObject(v16, a1 + 64, v16 + 128);
    if ( Object == 32772 )
      goto LABEL_74;
  }
  return (unsigned int)RestartContext((PVOID)v16);
}
