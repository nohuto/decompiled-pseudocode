/*
 * XREFs of ParseCall @ 0x14000B5D0
 * Callers:
 *     <none>
 * Callees:
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     ParseArg @ 0x140006850 (ParseArg.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     ParseRelease @ 0x14000C360 (ParseRelease.c)
 *     FreeObjOwner @ 0x14000C7F0 (FreeObjOwner.c)
 *     FreeNameSpaceObjects @ 0x14000DBBC (FreeNameSpaceObjects.c)
 *     HeapInsertFreeList @ 0x1400106A0 (HeapInsertFreeList.c)
 *     PushScope @ 0x1400138A0 (PushScope.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     PerformNativeMethodCall @ 0x14004A244 (PerformNativeMethodCall.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ParseCall(_QWORD *a1, __int64 a2, unsigned int a3)
{
  int *v3; // rdi
  unsigned int v4; // esi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r13
  unsigned int v10; // eax
  int v11; // ecx
  _BYTE *v12; // r8
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  KIRQL v16; // al
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v22; // eax
  bool v23; // zf
  _QWORD *v24; // rsi
  __int64 v25; // rdi
  _QWORD *v26; // r15
  KIRQL v27; // al
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  _QWORD *v30; // r8
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rdi
  _QWORD *v34; // rcx
  struct _EX_RUNDOWN_REF *v35; // rsi
  struct _EX_RUNDOWN_REF **v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rdi
  _QWORD *v42; // r12
  _QWORD *v43; // r15
  KIRQL v44; // al
  __int64 v45; // r9
  _QWORD *v46; // rsi
  unsigned __int64 v47; // rdx
  _QWORD *v48; // rax
  _QWORD *v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // eax
  int v63; // eax
  __int64 v64; // r8
  _QWORD *v65; // rcx
  unsigned int v66; // eax
  char *v67; // r8
  _QWORD *v68; // r9
  _QWORD *v69; // rax
  _QWORD *v70; // r10
  _QWORD *v71; // rcx
  _QWORD *v72; // r10
  __int64 v73; // rcx
  _QWORD *v74; // rax
  _QWORD *v75; // r10
  _QWORD *v76; // r8
  __int64 v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // r11
  __int64 v80; // rcx
  _QWORD *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rcx
  _QWORD *v85; // rax
  __int64 v86; // rdx
  _QWORD *v87; // rcx
  unsigned int v88; // eax
  __int128 v89; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v90[24]; // [rsp+50h] [rbp-59h]
  __int128 v91; // [rsp+68h] [rbp-41h]
  __int128 v92; // [rsp+78h] [rbp-31h] BYREF
  __int128 v93; // [rsp+88h] [rbp-21h]
  __int64 v94; // [rsp+98h] [rbp-11h]
  __int128 v95; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v96; // [rsp+B0h] [rbp+7h]
  __int64 v97; // [rsp+C0h] [rbp+17h]
  _QWORD *v98; // [rsp+118h] [rbp+6Fh] BYREF

  v3 = (int *)(a2 + 16);
  v4 = a3;
  if ( a3 )
    v7 = 5;
  else
    v7 = *v3 & 0xF;
  v8 = *(_QWORD *)(a2 + 48);
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 96);
  else
    v9 = 0LL;
  switch ( v7 )
  {
    case 0:
      ++*v3;
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("(");
      goto LABEL_58;
    case 1:
      goto LABEL_58;
    case 2:
      goto LABEL_30;
    case 3:
      goto LABEL_32;
    case 4:
      goto LABEL_96;
    case 5:
      goto LABEL_6;
    case 6:
      goto LABEL_22;
    default:
      return v4;
  }
  do
  {
LABEL_58:
    while ( 1 )
    {
      v39 = *(_DWORD *)(a2 + 56);
      if ( v39 >= *(_DWORD *)(a2 + 60) )
        break;
      if ( (gDebugger & 0xD0) != 0 && v39 )
        ConPrintf(",");
      v40 = *(unsigned int *)(a2 + 56);
      *(_DWORD *)(a2 + 56) = v40 + 1;
      v4 = ParseArg((__int64)a1, 67, *(_QWORD *)(a2 + 64) + 40 * v40, 0LL);
      if ( v4 || a2 != a1[52] )
        return v4;
    }
    if ( v4 || a2 != a1[52] )
      return v4;
  }
  while ( v39 < *(_DWORD *)(a2 + 60) );
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf(")");
  ++*(_DWORD *)(a2 + 16);
  v3 = (int *)(a2 + 16);
LABEL_30:
  ++*v3;
  if ( !v9 )
  {
    v4 = -1072431101;
    LogError(-1072431101);
    AcpiDiagTraceAmlError((__int64)a1, -1072431101);
    PrintDebugMessage(0x7Bu, 0LL, 0LL, 0LL, 0LL);
    return v4;
  }
  if ( (*(_BYTE *)(v9 + 193) & 8) != 0 )
  {
    v41 = 0LL;
    v42 = a1 + 60;
    v43 = 0LL;
    v44 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v46 = a1 + 60;
    v98 = a1 + 60;
    byte_14008EB20 = v44;
    v47 = (unsigned __int64)(a1 + 60);
    v48 = a1 + 60;
    v49 = a1 + 60;
    while ( 2 )
    {
      if ( v48 )
      {
        v50 = v49[5];
        v43 = (_QWORD *)v47;
        while ( 1 )
        {
          v41 = v50 - 16;
          if ( v49 + 5 == (_QWORD *)(v41 + 16) )
          {
            v41 = 0LL;
            goto LABEL_68;
          }
          if ( *(_DWORD *)(v41 + 4) >= 0x50u )
            break;
          v50 = *(_QWORD *)(v41 + 16);
        }
        if ( v41 )
        {
          v86 = *(_QWORD *)(v41 + 16);
          if ( *(_QWORD *)(v86 + 8) != v41 + 16 )
            goto LABEL_51;
          v87 = *(_QWORD **)(v41 + 24);
          if ( *v87 != v41 + 16 )
            goto LABEL_51;
          *v87 = v86;
          *(_QWORD *)(v86 + 8) = v87;
          v88 = *(_DWORD *)(v41 + 4);
          if ( v88 >= 0x70 )
          {
            *(_DWORD *)(v41 + 80) = 0;
            *(_DWORD *)(v41 + 84) = v88 - 80;
            *(_QWORD *)(v41 + 88) = v46;
            *(_DWORD *)(v41 + 4) = 80;
            HeapInsertFreeList(v46);
          }
          goto LABEL_84;
        }
LABEL_68:
        if ( (unsigned int)(*((_DWORD *)v46 + 2) - *((_DWORD *)v46 + 8)) < 0x50 )
        {
          v48 = (_QWORD *)v46[3];
          v46 = v48;
          v98 = v48;
          v47 = (unsigned __int64)v48;
          v49 = v48;
          continue;
        }
        v41 = v46[4];
        v46[4] = v41 + 80;
        *(_DWORD *)(v41 + 4) = 80;
        if ( v41 )
          goto LABEL_84;
      }
      break;
    }
    if ( v42 == (_QWORD *)gpheapGlobal )
    {
      if ( (unsigned int)gdwGlobalHeapBlkSize < 0x88 )
      {
        v47 = 0x50 % (unsigned int)gdwGlobalHeapBlkSize;
        LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x50 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
          LODWORD(gdwGlobalHeapBlkSize) = 80;
      }
      v63 = NewGlobalHeap(&v98, v47, 0LL, v45);
    }
    else
    {
      v63 = NewLocalHeap(&v98);
    }
    if ( !v63 )
    {
      v46 = v98;
      v98[2] = v42;
      v43[3] = v46;
      v41 = v46[4];
      v46[4] = v41 + 80;
      *(_DWORD *)(v41 + 4) = 80;
      if ( v41 )
      {
LABEL_84:
        *(_DWORD *)v41 = 1297237576;
        *(_QWORD *)(v41 + 8) = v46;
        memset((void *)(v41 + 16), 0, 0x40uLL);
      }
    }
    KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
    v55 = v41 + 16;
    if ( !v41 )
      v55 = 0LL;
    if ( v55 )
    {
      *(_QWORD *)(v55 + 8) = a1[52];
      v4 = 0;
      a1[52] = v55;
      *(_QWORD *)(v55 + 24) = ParseAcquire;
      v56 = v41 + 48;
      *(_DWORD *)v55 = 1179730753;
      if ( !v41 )
        v56 = 32LL;
      *(_QWORD *)v56 = v9;
      v57 = v41 + 56;
      if ( !v41 )
        v57 = 40LL;
      v58 = v41 + 64;
      *(_WORD *)v57 = -1;
      if ( !v41 )
        v58 = 48LL;
      *(_QWORD *)v58 = *(_QWORD *)(a2 + 392);
    }
    else
    {
      v4 = -1072431102;
      LogError(-1072431102);
      AcpiDiagTraceAmlError((__int64)a1, -1072431102);
      PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
LABEL_32:
    v22 = *v3 + 1;
    v23 = *(_DWORD *)a2 == 1280065859;
    *v3 = v22;
    if ( v23 && (v22 & 0x80000) != 0 )
    {
      *(_QWORD *)(a2 + 32) = a1[12];
      a1[12] = a2;
      *v3 |= 0x40000u;
      v4 = PerformNativeMethodCall(0LL, a1, a2);
      if ( v4 == 32772 )
        return v4;
LABEL_96:
      v59 = *v3 + 1;
      v23 = *(_DWORD *)a2 == 1280065859;
      *v3 = v59;
      if ( v23 && (v59 & 0x80000) != 0 )
        v4 = PerformNativeMethodCall(1LL, a1, a2);
LABEL_6:
      v10 = 0;
      v11 = *v3 + 1;
      *v3 = v11;
      if ( v4 != 32770 )
        v10 = v4;
      v4 = v10;
      if ( *(_DWORD *)a2 == 1280065859 && (v11 & 0x80000) != 0 )
      {
        if ( (v11 & 0x40000) != 0 )
        {
          v51 = *(_QWORD *)(a2 + 392);
          v52 = a1[40];
          v92 = 0LL;
          v94 = 0LL;
          v93 = 0LL;
          v4 = DupObjData(v52, &v92, v51);
          if ( (v4 & 0x80000000) != 0 )
            return v4;
          if ( ghNativeMethodEvalObject )
          {
            *(_QWORD *)&v89 = 2LL;
            *((_QWORD *)&v89 + 1) = a2 + 72;
            *(_QWORD *)v90 = *(_QWORD *)(a2 + 392);
            *(_OWORD *)&v90[8] = 0LL;
            v91 = 0LL;
            ghNativeMethodEvalObject(&v89);
          }
          v53 = *(_QWORD *)(a2 + 392);
          if ( (__int128 *)v53 != &v92 )
          {
            *(_OWORD *)v53 = v92;
            *(_OWORD *)(v53 + 16) = v93;
            *(_QWORD *)(v53 + 32) = v94;
          }
          goto LABEL_15;
        }
LABEL_16:
        v18 = *(_QWORD *)(a2 + 48);
        if ( v18 )
        {
          DereferenceObjectEx(v18);
          *(_QWORD *)(a2 + 48) = 0LL;
        }
        v19 = *(_QWORD *)(a2 + 64);
        if ( v19 )
        {
          FreeDataBuffs(v19, *(_DWORD *)(a2 + 60));
          HeapFree(*(_QWORD *)(a2 + 64));
        }
        if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
        {
          v89 = 0x464C4552uLL;
          *(_QWORD *)&v90[4] = 0LL;
          v91 = 0LL;
          *(_DWORD *)&v90[12] = 0;
          *(_QWORD *)&v90[16] = v9;
          *(_DWORD *)v90 = 393216;
          ParseRelease(a1, &v89, 0LL);
        }
LABEL_22:
        v20 = a1[52];
        a1[52] = *(_QWORD *)(v20 + 8);
        HeapFree(v20);
        return v4;
      }
      v12 = *(_BYTE **)(a2 + 392);
      if ( (*v12 & 1) != 0 )
      {
        v60 = a1[40];
        v95 = 0LL;
        v97 = 0LL;
        v96 = 0LL;
        v4 = DupObjData(v60, &v95, v12);
        if ( (v4 & 0x80000000) != 0 )
          return v4;
        FreeDataBuffs(*(_QWORD *)(a2 + 392), 1u);
        v61 = *(_QWORD *)(a2 + 392);
        if ( (__int128 *)v61 != &v95 )
        {
          *(_OWORD *)v61 = v95;
          *(_OWORD *)(v61 + 16) = v96;
          *(_QWORD *)(v61 + 32) = v97;
        }
      }
      FreeDataBuffs(a2 + 72, 8u);
      if ( (*v3 & 0x40000) != 0 )
      {
        v13 = (_QWORD *)a1[11];
        byte_14008EB40 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
        v14 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13 )
          goto LABEL_51;
        v15 = (_QWORD *)v13[1];
        if ( (_QWORD *)*v15 != v13 )
          goto LABEL_51;
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        KeReleaseSpinLock(&gmutOwnerList, byte_14008EB40);
        v16 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        v17 = v13[3];
        if ( v17 )
        {
          do
          {
            v54 = *(_QWORD *)(v17 + 56);
            ExReleaseSpinLockExclusive(&ACPINamespaceLock, v16);
            if ( (gdwfAMLI & 4) != 0 )
              AMLIDereferenceHandleEx(v17 + 120);
            else
              FreeNameSpaceObjects(v17);
            v16 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
            v17 = v54;
          }
          while ( v54 );
        }
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v16);
        FreeObjOwner(0LL, a1[11]);
      }
      else if ( *(_QWORD *)(a2 + 48) )
      {
        goto LABEL_16;
      }
LABEL_15:
      a1[11] = *(_QWORD *)(a2 + 40);
      a1[12] = *(_QWORD *)(a2 + 32);
      goto LABEL_16;
    }
    if ( (v22 & 0x10000) != 0 )
      *v3 = v22 | 0x20000;
    v24 = (_QWORD *)a1[40];
    v25 = 0LL;
    v26 = 0LL;
    v27 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v29 = (unsigned __int64)v24;
    byte_14008EB20 = v27;
    v98 = v24;
    v30 = v24;
    v31 = v24;
    v32 = v24;
    while ( 2 )
    {
      if ( v31 )
      {
        v33 = v32[5];
        v34 = v32 + 5;
        v26 = v30;
        while ( 1 )
        {
          v25 = v33 - 16;
          if ( v34 == (_QWORD *)(v25 + 16) )
          {
            v25 = 0LL;
            goto LABEL_40;
          }
          if ( *(_DWORD *)(v25 + 4) >= 0x50u )
            break;
          v33 = *(_QWORD *)(v25 + 16);
        }
        if ( v25 )
        {
          v64 = *(_QWORD *)(v25 + 16);
          if ( *(_QWORD *)(v64 + 8) != v25 + 16 )
            goto LABEL_51;
          v65 = *(_QWORD **)(v25 + 24);
          if ( *v65 != v25 + 16 )
            goto LABEL_51;
          *v65 = v64;
          *(_QWORD *)(v64 + 8) = v65;
          v66 = *(_DWORD *)(v25 + 4);
          if ( v66 >= 0x70 )
          {
            v67 = (char *)(v25 + 80);
            *(_DWORD *)(v25 + 80) = 0;
            v68 = (_QWORD *)(v29 + 40);
            *(_DWORD *)(v25 + 84) = v66 - 80;
            *(_QWORD *)(v25 + 88) = v29;
            *(_DWORD *)(v25 + 4) = 80;
            v69 = *(_QWORD **)(v29 + 40);
            if ( v69 != (_QWORD *)(v29 + 40) )
            {
              do
              {
                if ( v25 + 96 < (unsigned __int64)v69 )
                  break;
                v69 = (_QWORD *)*v69;
              }
              while ( v69 != v68 );
            }
            v70 = (_QWORD *)v69[1];
            v71 = (_QWORD *)(v25 + 96);
            if ( (_QWORD *)*v70 != v69 )
              goto LABEL_51;
            *v71 = v69;
            *(_QWORD *)(v25 + 104) = v70;
            *v70 = v71;
            v69[1] = v71;
            v72 = (_QWORD *)*v71;
            v73 = *v71 - 16LL;
            if ( v72 != v68 )
            {
              v79 = *(unsigned int *)(v25 + 84);
              if ( (char *)v73 == &v67[v79] )
              {
                *(_DWORD *)(v25 + 84) = v79 + *(_DWORD *)(v73 + 4);
                v80 = *v72;
                if ( *(_QWORD **)(*v72 + 8LL) == v72 )
                {
                  v81 = (_QWORD *)v72[1];
                  if ( (_QWORD *)*v81 == v72 )
                  {
                    *v81 = v80;
                    *(_QWORD *)(v80 + 8) = v81;
                    goto LABEL_124;
                  }
                }
LABEL_51:
                __fastfail(3u);
              }
            }
LABEL_124:
            v74 = *(_QWORD **)(v25 + 104);
            v75 = v74 - 2;
            if ( v74 != v68 )
            {
              v82 = *((unsigned int *)v75 + 1);
              if ( v67 == (char *)v75 + v82 )
              {
                v83 = v25 + 96;
                *((_DWORD *)v75 + 1) = *(_DWORD *)(v25 + 84) + v82;
                v84 = *(_QWORD *)(v25 + 96);
                if ( *(_QWORD *)(*(_QWORD *)v83 + 8LL) != v83 )
                  goto LABEL_51;
                v85 = *(_QWORD **)(v25 + 104);
                if ( *v85 != v83 )
                  goto LABEL_51;
                *v85 = v84;
                v67 = (char *)v75;
                *(_QWORD *)(v84 + 8) = v85;
              }
            }
            if ( *(_QWORD *)(v29 + 32) <= (unsigned __int64)&v67[*((unsigned int *)v67 + 1)] )
            {
              *(_QWORD *)(v29 + 32) = v67;
              v76 = v67 + 16;
              v77 = *v76;
              if ( *(_QWORD **)(*v76 + 8LL) != v76 )
                goto LABEL_51;
              v78 = (_QWORD *)v76[1];
              if ( (_QWORD *)*v78 != v76 )
                goto LABEL_51;
              *v78 = v77;
              *(_QWORD *)(v77 + 8) = v78;
            }
          }
          goto LABEL_45;
        }
LABEL_40:
        if ( (unsigned int)(*(_DWORD *)(v29 + 8) - *(_DWORD *)(v29 + 32)) < 0x50 )
        {
          v31 = *(_QWORD **)(v29 + 24);
          v29 = (unsigned __int64)v31;
          v98 = v31;
          v30 = v31;
          v32 = v31;
          continue;
        }
        v25 = *(_QWORD *)(v29 + 32);
        *(_QWORD *)(v29 + 32) = v25 + 80;
        *(_DWORD *)(v25 + 4) = 80;
        if ( v25 )
          goto LABEL_45;
      }
      break;
    }
    if ( v24 == (_QWORD *)gpheapGlobal )
    {
      if ( (unsigned int)gdwGlobalHeapBlkSize < 0x88 )
      {
        v29 = 0x50 % (unsigned int)gdwGlobalHeapBlkSize;
        LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x50 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
          LODWORD(gdwGlobalHeapBlkSize) = 80;
      }
      v62 = NewGlobalHeap(&v98, v29, v30, v28);
    }
    else
    {
      v62 = NewLocalHeap(&v98);
    }
    if ( !v62 )
    {
      v29 = (unsigned __int64)v98;
      v98[2] = v24;
      v26[3] = v29;
      v25 = *(_QWORD *)(v29 + 32);
      *(_QWORD *)(v29 + 32) = v25 + 80;
      *(_DWORD *)(v25 + 4) = 80;
      if ( v25 )
      {
LABEL_45:
        *(_QWORD *)(v25 + 8) = v29;
        *(_DWORD *)v25 = 1314344776;
        memset((void *)(v25 + 16), 0, 0x40uLL);
      }
    }
    KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
    v35 = (struct _EX_RUNDOWN_REF *)(v25 + 16);
    if ( !v25 )
      v35 = 0LL;
    if ( !v35 )
    {
      v4 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      PrintDebugMessage(0x71u, 0LL, 0LL, 0LL, 0LL);
      v3 = (int *)(a2 + 16);
      goto LABEL_96;
    }
    memset(v35, 0, 0x40uLL);
    LODWORD(v35[2].Count) = 1380865871;
    ExInitializeRundownProtection(v35 + 4);
    KeInitializeSpinLock(&v35[5].Count);
    byte_14008EB40 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    v36 = (struct _EX_RUNDOWN_REF **)off_14008CA70;
    if ( *off_14008CA70 != (_UNKNOWN *)&glistObjOwners )
      goto LABEL_51;
    v35->Count = (unsigned __int64)&glistObjOwners;
    v35[1].Count = (unsigned __int64)v36;
    *v36 = v35;
    off_14008CA70 = (_UNKNOWN **)v35;
    KeReleaseSpinLock(&gmutOwnerList, byte_14008EB40);
    *(_QWORD *)(a2 + 40) = a1[11];
    v37 = a1[12];
    a1[11] = v35;
    *(_QWORD *)(a2 + 32) = v37;
    a1[12] = a2;
    v38 = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(a2 + 16) |= 0x40000u;
    return (unsigned int)PushScope(
                           (_DWORD)a1,
                           (int)v9 + 194,
                           *(_DWORD *)(v38 + 96) + *(_DWORD *)(v38 + 88),
                           a1[15],
                           v38,
                           (__int64)v35,
                           a1[40],
                           *(_QWORD *)(a2 + 392));
  }
  return v4;
}
