/*
 * XREFs of IoWritePartitionTable @ 0x140793F80
 * Callers:
 *     DifIoWritePartitionTableWrapper @ 0x140663130 (DifIoWritePartitionTableWrapper.c)
 * Callees:
 *     ??0SC_DISK@@QEAA@XZ @ 0x14071F8F4 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x14071F9DC (--1SC_DISK@@UEAA@XZ.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1407204DC (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140793650 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14079378C (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoWritePartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG SectorsPerTrack,
        ULONG NumberOfHeads,
        struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer)
{
  DWORD PartitionCount; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct SC_DISK_LAYOUT *v9; // rax
  struct SC_DISK_LAYOUT *v10; // rbx
  NTSTATUS v11; // edi
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD v16[50]; // [rsp+20h] [rbp-1A8h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v16);
  PartitionCount = PartitionBuffer->PartitionCount;
  v16[0] = &NT_DISK::`vftable';
  v16[49] = 0LL;
  v9 = (struct SC_DISK_LAYOUT *)SC_ENV::Allocate(144 * PartitionCount + 48, v7, v8, 0);
  v10 = v9;
  if ( v9 )
  {
    *(_DWORD *)v9 = 0;
    v12 = 0LL;
    *((_DWORD *)v9 + 1) = PartitionBuffer->PartitionCount;
    for ( *((_DWORD *)v9 + 2) = PartitionBuffer->Signature;
          (unsigned int)v12 < PartitionBuffer->PartitionCount;
          *((_DWORD *)v9 + 2 * v13 + 21) = PartitionBuffer->PartitionEntry[v14].HiddenSectors )
    {
      v13 = 18 * v12;
      v14 = (unsigned int)v12;
      v12 = (unsigned int)(v12 + 1);
      *((_DWORD *)v9 + 2 * v13 + 12) = 0;
      *((_QWORD *)v9 + v13 + 7) = PartitionBuffer->PartitionEntry[v14].StartingOffset.QuadPart;
      *((_QWORD *)v9 + v13 + 8) = PartitionBuffer->PartitionEntry[v14].PartitionLength.QuadPart;
      *((_DWORD *)v9 + 2 * v13 + 18) = PartitionBuffer->PartitionEntry[v14].PartitionNumber;
      *((_BYTE *)v9 + 8 * v13 + 76) = PartitionBuffer->PartitionEntry[v14].RewritePartition;
      *((_BYTE *)v9 + 8 * v13 + 80) = PartitionBuffer->PartitionEntry[v14].PartitionType;
      *((_BYTE *)v9 + 8 * v13 + 81) = PartitionBuffer->PartitionEntry[v14].BootIndicator;
      *((_BYTE *)v9 + 8 * v13 + 82) = PartitionBuffer->PartitionEntry[v14].RecognizedPartition;
    }
    v11 = NT_DISK::Initialize((NT_DISK *)v16, DeviceObject);
    if ( v11 >= 0 )
      v11 = SC_DISK::WritePartitionTable((SC_DISK *)v16, v10);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    v11 = -1073741670;
  }
  v16[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v16);
  return v11;
}
