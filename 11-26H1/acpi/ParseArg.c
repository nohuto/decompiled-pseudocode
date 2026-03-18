/*
 * XREFs of ParseArg @ 0x140006850
 * Callers:
 *     ParseTerm @ 0x140006120 (ParseTerm.c)
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 * Callees:
 *     ParseSuperName @ 0x140001A40 (ParseSuperName.c)
 *     PushTerm @ 0x140002590 (PushTerm.c)
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     ParseName @ 0x140006D60 (ParseName.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     ParseIntObj @ 0x140009C30 (ParseIntObj.c)
 *     HeapInsertFreeList @ 0x1400106A0 (HeapInsertFreeList.c)
 *     ParseString @ 0x140038A6C (ParseString.c)
 *     ParseInteger @ 0x140039534 (ParseInteger.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ParseArg(__int64 a1, char a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r13
  unsigned __int8 *v15; // r8
  _BYTE *v16; // rdx
  int v17; // ecx
  unsigned int v18; // edi
  int v20; // ebp
  unsigned int v21; // ebp
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r14
  void *v30; // rcx
  int v31; // eax
  __int64 v32; // r9
  unsigned __int8 *v33; // rdx
  __int64 v34; // r8
  unsigned int v35; // eax
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // [rsp+30h] [rbp-178h] BYREF
  __int64 v41; // [rsp+38h] [rbp-170h]
  __int64 v42; // [rsp+40h] [rbp-168h]
  _BYTE Src[256]; // [rsp+50h] [rbp-158h] BYREF

  v4 = a2;
  v5 = a4;
  v42 = a1;
  v6 = a3;
  if ( a2 == 78 )
  {
    v8 = (__int64)*(&OpcodeTable + **(unsigned __int8 **)(a1 + 120));
    if ( !v8 || (*(_DWORD *)(v8 + 28) & 0x20) == 0 )
    {
      v9 = -1072431103;
      LogError(3222536193LL);
      AcpiDiagTraceAmlError(a1, 3222536193LL);
      v15 = *(unsigned __int8 **)(a1 + 120);
      v17 = 132;
      LODWORD(v16) = *v15;
      goto LABEL_10;
    }
    v9 = ParseName(a1, a1 + 120, Src);
    if ( v9 )
      return v9;
    *(_WORD *)(v6 + 2) = 2;
    v10 = -1LL;
    do
      ++v10;
    while ( Src[v10] );
    v11 = v10 + 1;
    *(_DWORD *)(v6 + 24) = v11;
    v12 = 0LL;
    v13 = gpheapGlobal;
    v14 = 0LL;
    v41 = gpheapGlobal;
    if ( v11 + 16 < v11 )
      goto LABEL_8;
    if ( v11 + 16 >= 0x20 )
    {
      v20 = v11 + 23;
      if ( v11 + 23 < v11 + 16 )
      {
LABEL_8:
        *(_QWORD *)(v6 + 32) = 0LL;
LABEL_9:
        v9 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(v42, 3221225626LL);
        LODWORD(v15) = 0;
        v16 = Src;
        v17 = 131;
LABEL_10:
        PrintDebugMessage(v17, (_DWORD)v16, (_DWORD)v15, 0, 0LL);
        return v9;
      }
    }
    else
    {
      v20 = 39;
    }
    v21 = v20 & 0xFFFFFFF8;
    v22 = gpheapGlobal;
    v40 = gpheapGlobal;
    byte_14008EB20 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v25 = v13;
    v26 = v13;
    v27 = v13;
    while ( 2 )
    {
      if ( v26 )
      {
        v28 = *(_QWORD *)(v27 + 40);
        v14 = v25;
        while ( 1 )
        {
          v12 = v28 - 16;
          if ( v27 + 40 == v12 + 16 )
          {
            v12 = 0LL;
            goto LABEL_22;
          }
          if ( v21 <= *(_DWORD *)(v12 + 4) )
            break;
          v28 = *(_QWORD *)(v12 + 16);
        }
        if ( v12 )
        {
          v36 = *(_QWORD *)(v12 + 16);
          if ( *(_QWORD *)(v36 + 8) != v12 + 16 || (v37 = *(_QWORD **)(v12 + 24), *v37 != v12 + 16) )
            __fastfail(3u);
          *v37 = v36;
          *(_QWORD *)(v36 + 8) = v37;
          v29 = v21;
          if ( *(unsigned int *)(v12 + 4) >= (unsigned __int64)v21 + 32 )
          {
            v38 = v12 + v21;
            *(_DWORD *)v38 = 0;
            v39 = *(_DWORD *)(v12 + 4) - v21;
            *(_QWORD *)(v38 + 8) = v22;
            *(_DWORD *)(v38 + 4) = v39;
            *(_DWORD *)(v12 + 4) = v21;
            HeapInsertFreeList(v22);
          }
          goto LABEL_27;
        }
LABEL_22:
        if ( v21 > *(_DWORD *)(v22 + 8) - *(_DWORD *)(v22 + 32) )
        {
          v26 = *(_QWORD *)(v22 + 24);
          v22 = v26;
          v40 = v26;
          v25 = v26;
          v27 = v26;
          continue;
        }
        v12 = *(_QWORD *)(v22 + 32);
        v29 = v21;
        *(_QWORD *)(v22 + 32) = v12 + v21;
        *(_DWORD *)(v12 + 4) = v21;
        if ( !v12 )
        {
          v13 = v41;
          break;
        }
        goto LABEL_27;
      }
      break;
    }
    if ( v13 == gpheapGlobal )
    {
      if ( v21 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
      {
        v25 = v21 % (unsigned int)gdwGlobalHeapBlkSize;
        if ( (unsigned int)gdwGlobalHeapBlkSize * (v21 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
        {
          if ( v21 > 0x800000 )
            goto LABEL_28;
          LODWORD(gdwGlobalHeapBlkSize) = v21;
        }
        else
        {
          LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v21 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        }
      }
      v31 = NewGlobalHeap(&v40, v25, v23, v24);
    }
    else
    {
      v31 = NewLocalHeap(&v40);
    }
    if ( !v31 )
    {
      v22 = v40;
      *(_QWORD *)(v40 + 16) = v13;
      *(_QWORD *)(v14 + 24) = v22;
      v12 = *(_QWORD *)(v22 + 32);
      v29 = v21;
      *(_QWORD *)(v22 + 32) = v12 + v21;
      *(_DWORD *)(v12 + 4) = v21;
      if ( v12 )
      {
LABEL_27:
        *(_DWORD *)v12 = 1381258056;
        *(_QWORD *)(v12 + 8) = v22;
        memset((void *)(v12 + 16), 0, v29 - 16);
      }
    }
LABEL_28:
    KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
    v30 = (void *)(v12 + 16);
    if ( !v12 )
      v30 = 0LL;
    *(_QWORD *)(v6 + 32) = v30;
    if ( v30 )
    {
      memmove(v30, Src, *(unsigned int *)(v6 + 24));
      return v9;
    }
    goto LABEL_9;
  }
  if ( a2 == 67 )
  {
    return (unsigned int)ParseOpcode(a1, a4, a3);
  }
  else
  {
    switch ( a2 )
    {
      case 'B':
        *(_WORD *)(a3 + 2) = 1;
        v18 = 0;
        *(_QWORD *)(a3 + 16) = 0LL;
        *(_BYTE *)(a3 + 16) = *(_BYTE *)(*(_QWORD *)(a1 + 120))++;
        goto LABEL_42;
      case 'D':
        v18 = ParseInteger(a1 + 120, a3, 4LL);
        break;
      case 'O':
        LOBYTE(a4) = 1;
        v18 = ParseIntObj(a1, a1 + 120, a3, a4);
        if ( v18 == -1072431103 )
        {
          LOBYTE(v32) = 1;
          v18 = ParseString(a1, a1 + 120, v6, v32);
          if ( v18 == -1072431103 )
          {
            v33 = *(unsigned __int8 **)(a1 + 120);
            v34 = *v33;
            if ( (_BYTE)v34 == 17 || (unsigned __int8)(v34 - 18) <= 1u )
            {
              v35 = PushTerm((_QWORD *)a1, (__int64)v33, v5, (__int64)*(&OpcodeTable + v34), v6);
              ++*(_QWORD *)(a1 + 120);
              v18 = v35;
            }
          }
        }
        break;
      case 'S':
        v18 = ParseSuperName((_QWORD *)a1, a3, 0LL, a4);
        break;
      case 'W':
        *(_WORD *)(a3 + 2) = 1;
        v18 = 0;
        *(_QWORD *)(a3 + 16) = 0LL;
        *(_WORD *)(a3 + 16) = **(_WORD **)(a1 + 120);
        *(_QWORD *)(a1 + 120) += 2LL;
LABEL_42:
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("0x%I64x");
        break;
      case 's':
        LOBYTE(a3) = 1;
        v18 = ParseSuperName((_QWORD *)a1, v6, a3, a4);
        break;
      default:
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(121, v4, 0, 0, 0LL);
        v18 = -1072431101;
        break;
    }
  }
  return v18;
}
