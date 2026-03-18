/*
 * XREFs of PspUserApcKernelRoutine @ 0x140959620
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403F0B90 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     IoRegisterPriorityCallback @ 0x1405CB360 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1405CB4D0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405E4820 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x1405E4DD0 (KeRegisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1406CD094 (ExpDeleteSiloState.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z @ 0x140719D08 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140719F30 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14071A270 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14071A544 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x14071AA24 (--3SC_ENV_ALLOCATOR@@SAXPEAX@Z.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x14071AA3C (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x14071AD4C (--1SC_DISK@@UEAA@XZ.c)
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x14071AE40 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     ?GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14071AFE0 (-GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14071B610 (-SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14071B6DC (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14071BBB0 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x14071C1EC (--1SC_DEVICE@@UEAA@XZ.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x14071C2B0 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 *     ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14071C2E8 (-GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x14071C480 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14071C510 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     PsCreateVsmEnclave @ 0x1407724E8 (PsCreateVsmEnclave.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspUserApcKernelRoutine(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
