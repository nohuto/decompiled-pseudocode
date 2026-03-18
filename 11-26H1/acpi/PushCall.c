/*
 * XREFs of PushCall @ 0x140003230
 * Callers:
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     ParseLoad @ 0x140052DE0 (ParseLoad.c)
 *     NestAsyncEvalObject @ 0x1400704D4 (NestAsyncEvalObject.c)
 * Callees:
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapInsertFreeList @ 0x1400106A0 (HeapInsertFreeList.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall PushCall(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  _QWORD *v4; // rdi
  _QWORD *v5; // r15
  __int64 v6; // rbx
  _QWORD *v7; // r14
  KIRQL v9; // al
  _QWORD *v10; // r9
  _QWORD *v11; // r8
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  bool v17; // zf
  int v18; // eax
  _QWORD *v20; // r12
  unsigned int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // r13
  int v24; // r14d
  unsigned int v25; // r14d
  _QWORD *v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *i; // rcx
  __int64 v32; // rsi
  __int64 v33; // r15
  void *v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  __int64 v38; // r8
  _QWORD *v39; // rcx
  unsigned int v40; // eax
  char *v41; // r8
  __int64 *v42; // rax
  __int64 **v43; // rcx
  __int64 *v44; // r10
  _QWORD *v45; // r11
  __int64 v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // r11
  _QWORD *v49; // r8
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 *v56; // rcx
  __int64 **v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  unsigned int v61; // eax
  _QWORD *v64; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a1 + 60;
  v5 = a1;
  v6 = 0LL;
  v7 = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v10 = v4;
  byte_14008EB20 = v9;
  v11 = v4;
  v12 = v4;
  v64 = v4;
  v13 = (unsigned __int64)v4;
  while ( 2 )
  {
    if ( v12 )
    {
      v14 = *(_QWORD *)(v13 + 40);
      v13 += 40LL;
      v7 = v11;
      while ( 1 )
      {
        v6 = v14 - 16;
        if ( v13 == v6 + 16 )
        {
          v6 = 0LL;
          goto LABEL_6;
        }
        if ( *(_DWORD *)(v6 + 4) >= 0x1A0u )
          break;
        v14 = *(_QWORD *)(v6 + 16);
      }
      if ( v6 )
      {
        v38 = *(_QWORD *)(v6 + 16);
        if ( *(_QWORD *)(v38 + 8) != v6 + 16 )
          goto LABEL_75;
        v39 = *(_QWORD **)(v6 + 24);
        if ( *v39 != v6 + 16 )
          goto LABEL_75;
        *v39 = v38;
        *(_QWORD *)(v38 + 8) = v39;
        v40 = *(_DWORD *)(v6 + 4);
        if ( v40 >= 0x1C0 )
        {
          v41 = (char *)(v6 + 416);
          *(_DWORD *)(v6 + 416) = 0;
          *(_DWORD *)(v6 + 420) = v40 - 416;
          *(_QWORD *)(v6 + 424) = v10;
          *(_DWORD *)(v6 + 4) = 416;
          v42 = *(__int64 **)v13;
          if ( *(_QWORD *)v13 != v13 )
          {
            do
            {
              if ( v6 + 432 < (unsigned __int64)v42 )
                break;
              v42 = (__int64 *)*v42;
            }
            while ( v42 != (__int64 *)v13 );
          }
          v43 = (__int64 **)v42[1];
          v44 = (__int64 *)(v6 + 432);
          if ( *v43 != v42 )
            goto LABEL_75;
          *(_QWORD *)(v6 + 440) = v43;
          *v44 = (__int64)v42;
          *v43 = v44;
          v42[1] = (__int64)v44;
          v45 = (_QWORD *)*v44;
          v46 = *v44 - 16;
          if ( *v44 != v13 )
          {
            v52 = *(unsigned int *)(v6 + 420);
            if ( (char *)v46 == &v41[v52] )
            {
              *(_DWORD *)(v6 + 420) = v52 + *(_DWORD *)(v46 + 4);
              v53 = *v45;
              if ( *(_QWORD **)(*v45 + 8LL) != v45 )
                goto LABEL_75;
              v54 = (_QWORD *)v45[1];
              if ( (_QWORD *)*v54 != v45 )
                goto LABEL_75;
              *v54 = v53;
              *(_QWORD *)(v53 + 8) = v54;
            }
          }
          v47 = *(_QWORD **)(v6 + 440);
          v48 = v47 - 2;
          if ( v47 != (_QWORD *)v13 )
          {
            v55 = *((unsigned int *)v48 + 1);
            if ( v41 == (char *)v48 + v55 )
            {
              *((_DWORD *)v48 + 1) = *(_DWORD *)(v6 + 420) + v55;
              v56 = (__int64 *)*v44;
              if ( *(__int64 **)(*v44 + 8) != v44 )
                goto LABEL_75;
              v57 = *(__int64 ***)(v6 + 440);
              if ( *v57 != v44 )
                goto LABEL_75;
              *v57 = v56;
              v41 = (char *)v48;
              v56[1] = (__int64)v57;
            }
          }
          if ( v10[4] <= (unsigned __int64)&v41[*((unsigned int *)v41 + 1)] )
          {
            v10[4] = v41;
            v49 = v41 + 16;
            v50 = *v49;
            if ( *(_QWORD **)(*v49 + 8LL) != v49 )
              goto LABEL_75;
            v51 = (_QWORD *)v49[1];
            if ( (_QWORD *)*v51 != v49 )
              goto LABEL_75;
            *v51 = v50;
            *(_QWORD *)(v50 + 8) = v51;
          }
        }
        goto LABEL_11;
      }
LABEL_6:
      if ( (unsigned int)(*((_DWORD *)v10 + 2) - *((_DWORD *)v10 + 8)) < 0x1A0 )
      {
        v12 = (_QWORD *)v10[3];
        v10 = v12;
        v64 = v12;
        v11 = v12;
        v13 = (unsigned __int64)v12;
        continue;
      }
      v6 = v10[4];
      v10[4] = v6 + 416;
      *(_DWORD *)(v6 + 4) = 416;
      if ( v6 )
        goto LABEL_11;
    }
    break;
  }
  if ( v4 == (_QWORD *)gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0x1D8 )
    {
      v13 = 0x1A0 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x1A0 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 416;
    }
    v36 = NewGlobalHeap(&v64, v13, v11, v10);
  }
  else
  {
    v36 = NewLocalHeap(&v64);
  }
  if ( !v36 )
  {
    v10 = v64;
    v64[2] = v4;
    v7[3] = v10;
    v6 = v10[4];
    v10[4] = v6 + 416;
    *(_DWORD *)(v6 + 4) = 416;
    if ( v6 )
    {
LABEL_11:
      *(_DWORD *)v6 = 1297237576;
      *(_QWORD *)(v6 + 8) = v10;
      memset((void *)(v6 + 16), 0, 0x190uLL);
    }
  }
  KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
  v15 = v6 + 16;
  if ( !v6 )
    v15 = 0LL;
  if ( !v15 )
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(v5, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  *(_QWORD *)(v15 + 8) = v5[52];
  v5[52] = v15;
  *(_QWORD *)(v15 + 24) = ParseCall;
  *(_DWORD *)v15 = 1280065859;
  if ( !a2 )
  {
    v5[12] = v15;
    *(_DWORD *)(v15 + 16) = 5;
    goto LABEL_24;
  }
  v16 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(v15 + 48) = a2;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
  if ( (*(_BYTE *)(v16 + 193) & 8) != 0 )
    *(_DWORD *)(v15 + 16) |= 0x10000u;
  if ( *(_WORD *)(a2 + 66) == 8 && _bittest16((const signed __int16 *)(a2 + 64), 9u) )
    *(_DWORD *)(v15 + 16) |= 0x80000u;
  v17 = (*(_BYTE *)(v16 + 193) & 7) == 0;
  v18 = *(_BYTE *)(v16 + 193) & 7;
  *(_DWORD *)(v15 + 60) = v18;
  if ( !v17 )
  {
    v20 = (_QWORD *)v5[40];
    v21 = 40 * v18;
    v22 = 0LL;
    v23 = 0LL;
    if ( v21 + 16 >= v21 )
    {
      if ( v21 + 16 < 0x20 )
      {
        v24 = 39;
LABEL_29:
        v25 = v24 & 0xFFFFFFF8;
        v26 = (_QWORD *)v5[40];
        byte_14008EB20 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        v64 = v20;
        v29 = (__int64)v20;
        v30 = v20;
        for ( i = v20; ; i = v30 )
        {
          if ( !v30 )
            goto LABEL_56;
          v32 = i[5];
          v23 = v29;
          while ( 1 )
          {
            v22 = v32 - 16;
            if ( i + 5 == (_QWORD *)(v22 + 16) )
            {
              v22 = 0LL;
              goto LABEL_34;
            }
            if ( v25 <= *(_DWORD *)(v22 + 4) )
              break;
            v32 = *(_QWORD *)(v22 + 16);
          }
          if ( v22 )
          {
            v58 = *(_QWORD *)(v22 + 16);
            if ( *(_QWORD *)(v58 + 8) == v22 + 16 )
            {
              v59 = *(_QWORD **)(v22 + 24);
              if ( *v59 == v22 + 16 )
              {
                *v59 = v58;
                *(_QWORD *)(v58 + 8) = v59;
                v33 = v25;
                if ( *(unsigned int *)(v22 + 4) >= (unsigned __int64)v25 + 32 )
                {
                  v60 = v25 + v22;
                  *(_DWORD *)v60 = 0;
                  v61 = *(_DWORD *)(v22 + 4) - v25;
                  *(_QWORD *)(v60 + 8) = v26;
                  *(_DWORD *)(v60 + 4) = v61;
                  *(_DWORD *)(v22 + 4) = v25;
                  HeapInsertFreeList(v26);
                }
LABEL_39:
                *(_DWORD *)v22 = 1413563464;
                *(_QWORD *)(v22 + 8) = v26;
                memset((void *)(v22 + 16), 0, v33 - 16);
LABEL_40:
                KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
                v34 = (void *)(v22 + 16);
                if ( !v22 )
                  v34 = 0LL;
                *(_QWORD *)(v15 + 64) = v34;
                if ( v34 )
                {
                  memset(v34, 0, 40LL * *(unsigned int *)(v15 + 60));
                  goto LABEL_24;
                }
                v5 = a1;
LABEL_48:
                LogError(3221225626LL);
                AcpiDiagTraceAmlError(v5, 3221225626LL);
                PrintDebugMessage(152, 0, 0, 0, 0LL);
                v3 = -1073741670;
                goto LABEL_24;
              }
            }
LABEL_75:
            __fastfail(3u);
          }
LABEL_34:
          if ( v25 <= *((_DWORD *)v26 + 2) - *((_DWORD *)v26 + 8) )
            break;
          v30 = (_QWORD *)v26[3];
          v26 = v30;
          v64 = v30;
          v29 = (__int64)v30;
        }
        v22 = v26[4];
        v33 = v25;
        v26[4] = v25 + v22;
        *(_DWORD *)(v22 + 4) = v25;
        if ( v22 )
          goto LABEL_39;
LABEL_56:
        if ( v20 == (_QWORD *)gpheapGlobal )
        {
          if ( v25 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
          {
            v29 = v25 % (unsigned int)gdwGlobalHeapBlkSize;
            LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v25 / (unsigned int)gdwGlobalHeapBlkSize + 1);
            if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
              LODWORD(gdwGlobalHeapBlkSize) = v25;
          }
          v37 = NewGlobalHeap(&v64, v29, v27, v28);
        }
        else
        {
          v37 = NewLocalHeap(&v64);
        }
        if ( !v37 )
        {
          v26 = v64;
          v33 = v25;
          v64[2] = v20;
          *(_QWORD *)(v23 + 24) = v26;
          v22 = v26[4];
          v26[4] = v22 + v25;
          *(_DWORD *)(v22 + 4) = v25;
          if ( v22 )
            goto LABEL_39;
        }
        goto LABEL_40;
      }
      v24 = v21 + 23;
      if ( v21 + 23 >= v21 + 16 )
        goto LABEL_29;
    }
    v35 = v6 + 80;
    if ( !v6 )
      v35 = 64LL;
    *(_QWORD *)v35 = 0LL;
    goto LABEL_48;
  }
LABEL_24:
  *(_QWORD *)(v15 + 392) = a3;
  return v3;
}
