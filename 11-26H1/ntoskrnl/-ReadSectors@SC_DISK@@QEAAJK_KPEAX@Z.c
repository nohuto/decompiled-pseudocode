/*
 * XREFs of ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14071B52C
 * Callers:
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x140719DA8 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140719E30 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x14071B570 (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14071BBB0 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x14071BF18 (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SC_DISK::ReadSectors(SC_DISK *this, __int64 a2, __int64 a3, void *a4)
{
  return guard_dispatch_icall_no_overrides(this, a3 << *((_DWORD *)this + 60));
}
