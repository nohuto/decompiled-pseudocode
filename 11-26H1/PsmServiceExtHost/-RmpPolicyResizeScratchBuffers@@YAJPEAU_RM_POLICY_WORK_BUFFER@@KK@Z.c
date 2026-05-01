/*
 * XREFs of ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x180031BF4
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180023F94 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x180031BC0 (-RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 */

__int64 __fastcall RmpPolicyResizeScratchBuffers(struct _RTL_BITMAP *a1, unsigned int a2, int a3)
{
  ULONG v5; // ebx
  unsigned int SizeOfBitMap; // ecx
  ULONG v7; // edx
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned int v10; // edi
  void *v11; // r15
  ULONG *v12; // rax
  ULONG *v13; // rbp
  void *v14; // rcx
  PULONG v15; // rcx
  unsigned int v16; // ebx
  ULONG *Heap; // rdi
  PULONG Buffer; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rax

  v5 = (a3 + 32) & 0xFFFFFFE0;
  if ( v5 > a1[1].SizeOfBitMap )
  {
    Heap = (ULONG *)HampAllocateHeap((unsigned __int64)v5 >> 3);
    if ( !Heap )
      return (unsigned int)-1073741801;
    Buffer = a1[1].Buffer;
    if ( Buffer )
      HampFreeHeap(Buffer);
    RtlInitializeBitMap(a1 + 1, Heap, v5);
  }
  SizeOfBitMap = a1[2].SizeOfBitMap;
  if ( SizeOfBitMap <= a2 )
  {
    if ( a2 )
    {
      v10 = 4;
      if ( SizeOfBitMap > 4 )
        v10 = a1[2].SizeOfBitMap;
      while ( v10 < a2 )
      {
        v20 = v10;
        v10 = -1;
        v21 = 2 * v20;
        if ( v21 <= 0xFFFFFFFF )
          v10 = v21;
      }
    }
    else
    {
      v10 = a1[2].SizeOfBitMap;
    }
  }
  else
  {
    v7 = a1[2].SizeOfBitMap;
    do
    {
      v8 = v7;
      v9 = 4;
      v7 >>= 1;
      if ( 2 * a2 > 4 )
        v9 = 2 * a2;
    }
    while ( v7 >= v9 );
    v10 = v8;
  }
  if ( v10 == SizeOfBitMap )
    return 0;
  v11 = HampAllocateHeap((unsigned __int64)v10 << 6);
  v12 = (ULONG *)HampAllocateHeap(24LL * v10);
  v13 = v12;
  if ( v11 && v12 )
  {
    v14 = *(void **)&a1->SizeOfBitMap;
    *(_QWORD *)&a1->SizeOfBitMap = v11;
    if ( v14 )
      HampFreeHeap(v14);
    v15 = a1->Buffer;
    a1->Buffer = v13;
    if ( v15 )
      HampFreeHeap(v15);
    a1[2].SizeOfBitMap = v10;
    return 0;
  }
  v16 = a1[2].SizeOfBitMap < a2 ? 0xC0000017 : 0;
  if ( v11 )
    HampFreeHeap(v11);
  if ( v13 )
    HampFreeHeap(v13);
  return v16;
}
