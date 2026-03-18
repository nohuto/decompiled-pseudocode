/*
 * XREFs of ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14071B930
 * Callers:
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14071A270 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14071A544 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x14071BF18 (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_RAW@@QEAAJXZ @ 0x14071C624 (-CreatePartitionTable@SC_RAW@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SC_DISK::WriteSectors(SC_DISK *this, __int64 a2, __int64 a3, void *a4)
{
  return guard_dispatch_icall_no_overrides(this, a3 << *((_DWORD *)this + 60));
}
