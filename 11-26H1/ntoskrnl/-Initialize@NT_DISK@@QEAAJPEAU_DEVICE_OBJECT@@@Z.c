/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140790C5C
 * Callers:
 *     IoCreateDisk @ 0x140790DE0 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x140790E90 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x140790F90 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140791160 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140791210 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x1407912F0 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x1407913A0 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x140791450 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x1407915C0 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x14071B1A0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x14071B340 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
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
