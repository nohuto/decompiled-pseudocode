/*
 * XREFs of NewNameSpaceObject @ 0x14000FA34
 * Callers:
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     InitializeNativeNamespace @ 0x1400542D0 (InitializeNativeNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x14006D664 (AMLIAddNamespaceOverride.c)
 * Callees:
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     HeapInsertFreeList @ 0x1400106A0 (HeapInsertFreeList.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall NewNameSpaceObject(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 i; // rbx
  __int64 v14; // rbx
  int v16; // eax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v8 = a1;
  v20 = a1;
  byte_14008EB20 = v5;
  v9 = a1;
  v10 = a1;
  v11 = a1;
  while ( 2 )
  {
    if ( v10 )
    {
      v12 = (__int64 *)(v11 + 40);
      v4 = v9;
      for ( i = *v12; ; i = *(_QWORD *)(v3 + 16) )
      {
        v3 = i - 16;
        if ( v12 == (__int64 *)(v3 + 16) )
        {
          v3 = 0LL;
          goto LABEL_6;
        }
        if ( *(_DWORD *)(v3 + 4) >= 0xB0u )
          break;
      }
      if ( v3 )
      {
        v17 = *(_QWORD *)(v3 + 16);
        if ( *(_QWORD *)(v17 + 8) != v3 + 16 || (v18 = *(_QWORD **)(v3 + 24), *v18 != v3 + 16) )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        v19 = *(_DWORD *)(v3 + 4);
        if ( v19 >= 0xD0 )
        {
          *(_DWORD *)(v3 + 176) = 0;
          *(_DWORD *)(v3 + 180) = v19 - 176;
          *(_QWORD *)(v3 + 184) = v8;
          *(_DWORD *)(v3 + 4) = 176;
          HeapInsertFreeList(v8);
        }
        goto LABEL_11;
      }
LABEL_6:
      if ( (unsigned int)(*(_DWORD *)(v8 + 8) - *(_DWORD *)(v8 + 32)) < 0xB0 )
      {
        v10 = *(_QWORD *)(v8 + 24);
        v8 = v10;
        v20 = v10;
        v9 = v10;
        v11 = v10;
        continue;
      }
      v3 = *(_QWORD *)(v8 + 32);
      *(_QWORD *)(v8 + 32) = v3 + 176;
      *(_DWORD *)(v3 + 4) = 176;
      if ( v3 )
        goto LABEL_11;
    }
    break;
  }
  if ( a1 == gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0xE8 )
    {
      v9 = 0xB0 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0xB0 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 176;
    }
    v16 = NewGlobalHeap(&v20, v9, v6, v7);
  }
  else
  {
    v16 = NewLocalHeap(&v20);
  }
  if ( v16 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = v20;
    *(_QWORD *)(v20 + 16) = a1;
    *(_QWORD *)(v4 + 24) = v8;
    v3 = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 32) = v3 + 176;
    *(_DWORD *)(v3 + 4) = 176;
  }
  if ( v3 )
  {
LABEL_11:
    *(_DWORD *)v3 = 1330859592;
    *(_QWORD *)(v3 + 8) = v8;
    memset((void *)(v3 + 16), 0, 0xA0uLL);
  }
  KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
  v14 = (v3 + 16) & -(__int64)(v3 != 0);
  if ( v14 )
  {
    memset((void *)v14, 0, 0xA0uLL);
    *(_QWORD *)(v14 + 32) = v14 + 24;
    *(_QWORD *)(v14 + 24) = v14 + 24;
    *(_DWORD *)(v14 + 112) = 2;
    *(_DWORD *)(v14 + 128) = 1;
    *(_QWORD *)(v14 + 120) = v14;
    *(_QWORD *)(v14 + 144) = 0LL;
    *(_QWORD *)(v14 + 152) = -1LL;
  }
  return v14;
}
