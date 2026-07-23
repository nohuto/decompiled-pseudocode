/*
 * XREFs of IoReadPartitionTable @ 0x140793AC0
 * Callers:
 *     DifIoReadPartitionTableWrapper @ 0x140661660 (DifIoReadPartitionTableWrapper.c)
 * Callees:
 *     ??0SC_DISK@@QEAA@XZ @ 0x14071F8F4 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x14071F9DC (--1SC_DISK@@UEAA@XZ.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140720128 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140793650 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14079378C (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoReadPartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        BOOLEAN ReturnRecognizedPartitions,
        struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer)
{
  _QWORD *v6; // r9
  struct _DEVICE_OBJECT *v7; // r10
  NTSTATUS v8; // edi
  int PartitionTable; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  DWORD *v12; // rbx
  size_t v13; // rbp
  struct _DRIVE_LAYOUT_INFORMATION *v14; // rax
  __int64 v15; // r8
  struct _DRIVE_LAYOUT_INFORMATION *v16; // r10
  __int64 v17; // rcx
  DWORD *v18; // r9
  char v19; // al
  PVOID P; // [rsp+20h] [rbp-1C8h] BYREF
  _QWORD v22[50]; // [rsp+30h] [rbp-1B8h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v22);
  v22[49] = 0LL;
  v22[0] = &NT_DISK::`vftable';
  P = 0LL;
  *v6 = 0LL;
  v8 = NT_DISK::Initialize((NT_DISK *)v22, v7);
  if ( v8 >= 0 )
  {
    PartitionTable = SC_DISK::ReadPartitionTable((SC_DISK *)v22, (struct SC_DISK_LAYOUT **)&P);
    v12 = (DWORD *)P;
    v8 = PartitionTable;
    if ( PartitionTable >= 0 )
    {
      if ( *(_DWORD *)P == 1 )
      {
        v8 = -1073741637;
      }
      else
      {
        v13 = (unsigned int)(144 * *((_DWORD *)P + 1) + 48);
        v14 = (struct _DRIVE_LAYOUT_INFORMATION *)SC_ENV::Allocate(v13, v10, v11, 0);
        *PartitionBuffer = v14;
        if ( v14 )
        {
          memset_0(v14, 0, v13);
          v15 = 0LL;
          (*PartitionBuffer)->PartitionCount = v12[1];
          for ( (*PartitionBuffer)->Signature = v12[2]; (unsigned int)v15 < v12[1]; v15 = (unsigned int)(v15 + 1) )
          {
            v16 = *PartitionBuffer;
            v17 = (unsigned int)v15;
            v18 = &v12[36 * v15];
            if ( ReturnRecognizedPartitions )
            {
              v19 = *((_BYTE *)v18 + 80);
              if ( !v19 || v19 == 5 || v19 == 15 )
                continue;
            }
            v16->PartitionEntry[v17].StartingOffset.QuadPart = *(_QWORD *)&v12[36 * v15 + 14];
            v16->PartitionEntry[v17].PartitionLength.QuadPart = *(_QWORD *)&v12[36 * v15 + 16];
            v16->PartitionEntry[v17].HiddenSectors = v12[36 * v15 + 21];
            v16->PartitionEntry[v17].PartitionNumber = v12[36 * v15 + 18];
            v16->PartitionEntry[v17].PartitionType = *((_BYTE *)v18 + 80);
            v16->PartitionEntry[v17].BootIndicator = BYTE1(v12[36 * v15 + 20]);
            v16->PartitionEntry[v17].RecognizedPartition = BYTE2(v12[36 * v15 + 20]);
            v16->PartitionEntry[v17].RewritePartition = v12[36 * v15 + 19];
          }
        }
        else
        {
          v8 = -1073741670;
        }
      }
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  v22[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v22);
  return v8;
}
