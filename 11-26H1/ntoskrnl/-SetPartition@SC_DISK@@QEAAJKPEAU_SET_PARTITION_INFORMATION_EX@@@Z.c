/*
 * XREFs of ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14072036C
 * Callers:
 *     IoSetPartitionInformation @ 0x140793D40 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140793E20 (IoSetPartitionInformationEx.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14071EEA8 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsUnused@SC_PART_ENTRY@@QEAAEXZ @ 0x14072001C (-IsUnused@SC_PART_ENTRY@@QEAAEXZ.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140720128 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x140720200 (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1407204DC (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_DISK::SetPartition(SC_DISK *this, unsigned int a2, struct _SET_PARTITION_INFORMATION_EX *a3)
{
  __int64 v4; // r14
  unsigned int v5; // r8d
  int v7; // ebx
  int v8; // eax
  struct SC_DISK_LAYOUT *v9; // rdi
  __int64 v10; // rcx
  int v11; // r9d
  _OWORD *v12; // rdx
  BYTE PartitionType; // al
  struct SC_DISK_LAYOUT *v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v5 = *((_DWORD *)this + 64);
  v15 = 0LL;
  if ( v5 >= 2 )
    return (unsigned int)-1073741637;
  if ( v5 != a3->PartitionStyle )
    return (unsigned int)-1073741811;
  v8 = SC_DISK::ReadPartitionTable(this, &v15);
  v9 = v15;
  v7 = v8;
  if ( v8 >= 0 )
  {
    if ( *(_DWORD *)v15 != *((_DWORD *)this + 64)
      || (unsigned int)v4 >= *((_DWORD *)v15 + 1)
      || SC_PART_ENTRY::IsUnused((struct SC_DISK_LAYOUT *)((char *)v15 + 144 * v4 + 48))
      || (v12 = (_OWORD *)(v10 + 32), !*(_DWORD *)v10) && (*(_BYTE *)v12 == 5 || *(_BYTE *)v12 == 15) )
    {
      v7 = -1073741811;
    }
    else
    {
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          *v12 = *(_OWORD *)&a3->Mbr.PartitionType;
          *(GUID *)(v10 + 48) = a3->Gpt.PartitionId;
          *(_QWORD *)(v10 + 64) = a3->Gpt.Attributes;
          RtlStringCbCopyW((char *)(v10 + 72), (__int64)v12, (char *)a3->Gpt.Name);
        }
      }
      else
      {
        PartitionType = a3->Mbr.PartitionType;
        *(_BYTE *)(v10 + 28) = 1;
        *(_BYTE *)v12 = PartitionType;
        v7 = SC_DISK::ResetPartitionCache(this);
        if ( v7 < 0 )
          goto LABEL_18;
      }
      v7 = SC_DISK::WritePartitionTable(this, v9);
    }
  }
LABEL_18:
  if ( v9 )
    PspUserApcKernelRoutine(v9);
  return (unsigned int)v7;
}
