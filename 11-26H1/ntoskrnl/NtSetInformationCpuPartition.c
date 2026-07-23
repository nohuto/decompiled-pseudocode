/*
 * XREFs of NtSetInformationCpuPartition @ 0x1407F7C30
 * Callers:
 *     DifNtSetInformationCpuPartitionWrapper @ 0x14068F1A0 (DifNtSetInformationCpuPartitionWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeQueryActiveGroupCount @ 0x1404B4BB0 (KeQueryActiveGroupCount.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     KeCpuPartitionMoveCpus @ 0x1405F6240 (KeCpuPartitionMoveCpus.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1407F8814 (PspReferenceCpuPartitionByHandle.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetInformationCpuPartition(
        ULONG_PTR a1,
        int a2,
        volatile void *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  struct _KAFFINITY_EX *v9; // r14
  char PreviousMode; // r13
  size_t v12; // r12
  int ULongFromUser; // eax
  int v14; // ebx
  _QWORD *Pool2; // rax
  _QWORD *v16; // rsi
  unsigned int v17; // ecx
  USHORT v18; // bx
  USHORT *v19; // rdx
  __int64 v20; // r8
  USHORT v21; // ax
  size_t v22; // rbx
  __int64 v23; // rax
  unsigned __int16 v24; // dx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int16 v27; // [rsp+38h] [rbp-50h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  PVOID v29[2]; // [rsp+50h] [rbp-38h] BYREF

  Object = 0LL;
  v9 = 0LL;
  v29[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a2 )
      return 3221225475LL;
    v12 = a4;
    ProbeForRead(a3, a4, 8u);
    ULongFromUser = RtlReadULongFromUser(a7);
    RtlWriteULongToUser(a7, ULongFromUser);
  }
  else
  {
    v12 = a4;
  }
  if ( !a2 )
  {
    if ( a4 < 0x20 || (a4 & 0xF) != 0 )
      return 3221225476LL;
    Pool2 = (_QWORD *)ExAllocatePool2(0x101uLL);
    v16 = Pool2;
    v29[1] = Pool2;
    if ( !Pool2 )
      goto LABEL_11;
    if ( PreviousMode )
      RtlCopyFromUser(Pool2, (void *)a3, v12);
    else
      RtlCopyVolatileMemory(Pool2, (const void *)a3, v12);
    v17 = *((unsigned __int16 *)v16 + 6);
    if ( (a4 - 16) >> 4 < v17 || *((_DWORD *)v16 + 2) )
      goto LABEL_16;
    v18 = 0;
    if ( (_WORD)v17 )
    {
      v19 = (USHORT *)(v16 + 3);
      v20 = *((unsigned __int16 *)v16 + 6);
      do
      {
        v21 = *v19;
        if ( *v19 <= v18 )
          v21 = v18;
        v18 = v21;
        v19 += 8;
        --v20;
      }
      while ( v20 );
    }
    if ( v18 >= KeQueryActiveGroupCount() )
    {
LABEL_16:
      v14 = -1073741811;
      goto LABEL_34;
    }
    v27 = v18 + 1;
    v22 = 8LL * (unsigned __int16)(v18 + 1);
    v23 = ExAllocatePool2(0x41uLL);
    v9 = (struct _KAFFINITY_EX *)v23;
    if ( !v23 )
    {
LABEL_11:
      v14 = -1073741670;
LABEL_34:
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x50707350u);
      if ( v29[0] )
        ObfDereferenceObjectWithTag(v29[0], 0x50707350u);
      if ( v9 )
        ExFreePoolWithTag(v9, 0x50707350u);
      if ( v16 )
        ExFreePoolWithTag(v16, 0x50707350u);
      goto LABEL_42;
    }
    *(_WORD *)v23 = 1;
    *(_WORD *)(v23 + 2) = v27;
    *(_DWORD *)(v23 + 4) = 0;
    memset_0((void *)(v23 + 8), 0, v22);
    v24 = 0;
    if ( !*((_WORD *)v16 + 6) )
    {
LABEL_31:
      v14 = PspReferenceCpuPartitionByHandle(*v16, (__int64)v29);
      if ( v14 >= 0 )
      {
        v14 = PspReferenceCpuPartitionByHandle(a1, (__int64)&Object);
        if ( v14 >= 0 )
          v14 = KeCpuPartitionMoveCpus(*(_QWORD *)Object, *(_WORD ***)v29[0], v9, 0);
      }
      goto LABEL_34;
    }
    while ( 1 )
    {
      v25 = v16[2 * v24 + 2];
      v26 = LOWORD(v16[2 * v24 + 3]);
      if ( v9->Count > (unsigned __int16)v26 )
        goto LABEL_29;
      if ( v9->Size > (unsigned __int16)v26 )
        break;
LABEL_30:
      if ( ++v24 >= *((_WORD *)v16 + 6) )
        goto LABEL_31;
    }
    v9->Count = v26 + 1;
LABEL_29:
    v9->Bitmap[v26] |= v25;
    goto LABEL_30;
  }
  v14 = -1073741821;
LABEL_42:
  if ( PreviousMode )
    RtlWriteULongToUser(a7, 0);
  else
    *a7 = 0;
  return (unsigned int)v14;
}
