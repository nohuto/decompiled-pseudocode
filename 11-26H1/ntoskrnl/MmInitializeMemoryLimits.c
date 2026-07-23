/*
 * XREFs of MmInitializeMemoryLimits @ 0x140D01728
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x140CC3490 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeResourceMap @ 0x140CCA408 (IopInitializeResourceMap.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF9A64 (MiInitializePhysicalMemoryBlocks.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MmInitializeMemoryLimits(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rax
  _QWORD *v6; // rcx
  _QWORD **v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *i; // rdx
  _DWORD *PoolMm; // rax
  _QWORD *v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD **v23; // rcx
  unsigned __int64 v24; // rax
  _QWORD *j; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rbx
  _QWORD *result; // rax

  v2 = a1 + 352;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 360);
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      return 0LL;
    v6 = (_QWORD *)(v4 ^ (v2 | 1));
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 360);
  }
  if ( v6 )
  {
    do
    {
      v7 = (_QWORD **)v6[1];
      v8 = v6;
      v9 = v3++;
      if ( v7 )
      {
        v6 = (_QWORD *)v6[1];
        for ( i = *v7; i; i = (_QWORD *)*i )
          v6 = i;
      }
      else
      {
        while ( 1 )
        {
          v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v6 || (_QWORD *)*v6 == v8 )
            break;
          v8 = v6;
        }
      }
    }
    while ( v6 );
    if ( v3 )
    {
      PoolMm = (_DWORD *)ExAllocatePoolMm(
                           64LL,
                           16 * (v9 + 2),
                           1817013581,
                           KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
      v12 = PoolMm;
      if ( PoolMm )
      {
        *PoolMm = v3;
        v13 = 0;
        v14 = *(_QWORD *)(v2 + 8);
        v15 = 0LL;
        v16 = -1LL;
        if ( (v14 & 1) != 0 )
        {
          if ( v14 == 1 )
            goto LABEL_39;
          v17 = v14 ^ (v2 | 1);
        }
        else
        {
          v17 = *(_QWORD *)(v2 + 8);
        }
        if ( v17 )
        {
          do
          {
            v18 = *(int *)(v17 + 24);
            if ( (int)v18 < 49 && *(_BYTE *)(v18 + a2) )
            {
              v19 = *(_QWORD *)(v17 + 40);
              v20 = *(_QWORD *)(v17 + 32);
              v15 += v19;
              if ( v20 == v16 && v13 )
              {
                v12[2 * v13 + 1] += v19;
                v16 += *(_QWORD *)(v17 + 40);
              }
              else
              {
                v21 = 2LL * v13++;
                v12[v21 + 2] = v20;
                v22 = *(_QWORD *)(v17 + 40);
                v12[v21 + 3] = v22;
                v16 = v22 + v20;
              }
            }
            v23 = *(_QWORD ***)(v17 + 8);
            v24 = v17;
            if ( v23 )
            {
              v17 = *(_QWORD *)(v17 + 8);
              for ( j = *v23; j; j = (_QWORD *)*j )
                v17 = (unsigned __int64)j;
            }
            else
            {
              while ( 1 )
              {
                v17 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !v17 || *(_QWORD *)v17 == v24 )
                  break;
                v24 = v17;
              }
            }
          }
          while ( v17 );
          if ( v13 )
          {
            if ( v3 > v13 )
            {
              v26 = ExAllocatePoolMm(
                      64LL,
                      16 * (v13 - 1 + 2LL),
                      1817013581,
                      KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
              v27 = (_QWORD *)v26;
              if ( v26 )
              {
                memmove((void *)(v26 + 16), v12 + 2, 16LL * v13);
                ExFreePoolWithTag(v12, 0);
                v12 = v27;
              }
            }
            goto LABEL_40;
          }
        }
LABEL_39:
        v12[2] = 0LL;
        v12[3] = 0LL;
LABEL_40:
        *(_DWORD *)v12 = v13;
        result = v12;
        v12[1] = v15;
        return result;
      }
    }
  }
  return 0LL;
}
