/*
 * XREFs of IoSetPartitionInformationEx @ 0x140793E20
 * Callers:
 *     <none>
 * Callees:
 *     ??0SC_DISK@@QEAA@XZ @ 0x14071F8F4 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x14071F9DC (--1SC_DISK@@UEAA@XZ.c)
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14072036C (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14079378C (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoSetPartitionInformationEx(
        PDEVICE_OBJECT DeviceObject,
        ULONG PartitionNumber,
        struct _SET_PARTITION_INFORMATION_EX *PartitionInfo)
{
  struct _DEVICE_OBJECT *v5; // r9
  NTSTATUS v6; // ebx
  _QWORD v8[50]; // [rsp+20h] [rbp-1B8h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v8);
  v8[49] = 0LL;
  v8[0] = &NT_DISK::`vftable';
  v6 = NT_DISK::Initialize((NT_DISK *)v8, v5);
  if ( v6 >= 0 )
    v6 = SC_DISK::SetPartition((SC_DISK *)v8, PartitionNumber, PartitionInfo);
  v8[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v8);
  return v6;
}
