/*
 * XREFs of ParseObjName @ 0x14000FE10
 * Callers:
 *     ParsePackage @ 0x1400387D0 (ParsePackage.c)
 * Callees:
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     ParseName @ 0x140006D60 (ParseName.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapInsertFreeList @ 0x1400106A0 (HeapInsertFreeList.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ParseObjName(__int64 a1, char **a2, __int64 a3, char a4)
{
  char *v4; // rax
  __int64 v5; // rdi
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // r15
  void *v15; // rcx
  int v17; // esi
  unsigned int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 i; // rbx
  int v27; // eax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h]
  char Src[256]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = *a2;
  v5 = a1;
  v33 = a1;
  v8 = (__int64)*(&OpcodeTable + (unsigned __int8)*v4);
  if ( v8 && (*(_DWORD *)(v8 + 28) & 0x20) != 0 )
  {
    v9 = ParseName(a1, a2, Src);
    if ( v9 )
      return v9;
    *(_WORD *)(a3 + 2) = 2;
    v10 = -1LL;
    do
      ++v10;
    while ( Src[v10] );
    v11 = v10 + 1;
    v12 = 0LL;
    v13 = 0LL;
    *(_DWORD *)(a3 + 24) = v11;
    v14 = gpheapGlobal;
    if ( v11 + 16 < v11 )
      goto LABEL_7;
    if ( v11 + 16 >= 0x20 )
    {
      v17 = v11 + 23;
      if ( v11 + 23 < v11 + 16 )
      {
LABEL_7:
        v15 = (void *)((v12 + 16) & -(__int64)(v12 != 0));
        *(_QWORD *)(a3 + 32) = v15;
        if ( v15 )
        {
          memmove(v15, Src, *(unsigned int *)(a3 + 24));
        }
        else
        {
          LogError(-1073741670);
          AcpiDiagTraceAmlError(v5, -1073741670);
          PrintDebugMessage(0x83u, Src, 0LL, 0LL, 0LL);
          return (unsigned int)-1073741670;
        }
        return v9;
      }
    }
    else
    {
      v17 = 39;
    }
    v18 = v17 & 0xFFFFFFF8;
    v19 = gpheapGlobal;
    v32 = gpheapGlobal;
    byte_14008EB20 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v22 = v14;
    v23 = v14;
    v24 = v14;
    while ( 2 )
    {
      if ( v23 )
      {
        v25 = (__int64 *)(v24 + 40);
        v13 = v22;
        for ( i = *v25; ; i = *(_QWORD *)(v12 + 16) )
        {
          v12 = i - 16;
          if ( v25 == (__int64 *)(v12 + 16) )
          {
            v12 = 0LL;
            goto LABEL_17;
          }
          if ( v18 <= *(_DWORD *)(v12 + 4) )
            break;
        }
        if ( v12 )
        {
          v28 = *(_QWORD *)(v12 + 16);
          if ( *(_QWORD *)(v28 + 8) != v12 + 16 || (v29 = *(_QWORD **)(v12 + 24), *v29 != v12 + 16) )
            __fastfail(3u);
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          if ( *(unsigned int *)(v12 + 4) >= (unsigned __int64)v18 + 32 )
          {
            v30 = v12 + v18;
            *(_DWORD *)v30 = 0;
            v31 = *(_DWORD *)(v12 + 4) - v18;
            *(_QWORD *)(v30 + 8) = v19;
            *(_DWORD *)(v30 + 4) = v31;
            *(_DWORD *)(v12 + 4) = v18;
            HeapInsertFreeList(v19);
          }
          goto LABEL_22;
        }
LABEL_17:
        if ( v18 > *(_DWORD *)(v19 + 8) - *(_DWORD *)(v19 + 32) )
        {
          v23 = *(_QWORD *)(v19 + 24);
          v19 = v23;
          v32 = v23;
          v22 = v23;
          v24 = v23;
          continue;
        }
        v12 = *(_QWORD *)(v19 + 32);
        *(_QWORD *)(v19 + 32) = v12 + v18;
        *(_DWORD *)(v12 + 4) = v18;
        if ( v12 )
        {
LABEL_22:
          *(_DWORD *)v12 = 1381258056;
          *(_QWORD *)(v12 + 8) = v19;
          memset((void *)(v12 + 16), 0, v18 - 16LL);
LABEL_23:
          KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
          v5 = v33;
          goto LABEL_7;
        }
      }
      break;
    }
    if ( v14 == gpheapGlobal )
    {
      if ( v18 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
      {
        v22 = v18 % (unsigned int)gdwGlobalHeapBlkSize;
        if ( (unsigned int)gdwGlobalHeapBlkSize * (v18 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
        {
          if ( v18 > 0x800000 )
          {
            v19 = 0LL;
            v27 = -1073741670;
LABEL_29:
            if ( v27 )
            {
              v19 = 0LL;
            }
            else
            {
              *(_QWORD *)(v19 + 16) = v14;
              *(_QWORD *)(v13 + 24) = v19;
              v12 = *(_QWORD *)(v19 + 32);
              *(_QWORD *)(v19 + 32) = v12 + v18;
              *(_DWORD *)(v12 + 4) = v18;
            }
            if ( !v12 )
              goto LABEL_23;
            goto LABEL_22;
          }
          LODWORD(gdwGlobalHeapBlkSize) = v18;
        }
        else
        {
          LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v18 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        }
      }
      v27 = NewGlobalHeap(&v32, v22, v20, v21);
    }
    else
    {
      v27 = NewLocalHeap(&v32);
    }
    v19 = v32;
    goto LABEL_29;
  }
  v9 = -1072431103;
  if ( !a4 )
  {
    LogError(-1072431103);
    AcpiDiagTraceAmlError(v5, -1072431103);
    PrintDebugMessage(0x84u, (const void *)(unsigned __int8)**a2, *a2, 0LL, 0LL);
  }
  return v9;
}
