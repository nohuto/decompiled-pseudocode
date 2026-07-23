/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14079378C
 * Callers:
 *     IoCreateDisk @ 0x140793910 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x1407939C0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x140793AC0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140793C90 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140793D40 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140793E20 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x140793ED0 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x140793F80 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x1407940F0 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x14071FE30 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x14071FFD0 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 */

__int64 __fastcall NT_DISK::Initialize(NT_DISK *this, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned __int8 v5; // r8

  *((_QWORD *)this + 49) = a2;
  result = SC_DISK::Initialize(this);
  if ( (int)result >= 0 )
    return SC_DISK::InitializePartitionCache(this, v4, v5);
  return result;
}
