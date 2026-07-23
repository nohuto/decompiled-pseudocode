/*
 * XREFs of ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z @ 0x14071E998
 * Callers:
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14071EBC0 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x14071EA38 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140793650 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_GPT::ReadEntries(SC_GPT *this, struct GPT_HEADER *a2, struct GPT_ENTRY **a3)
{
  __int64 v3; // rax
  int v6; // ecx
  struct GPT_ENTRY *v8; // rax
  struct GPT_ENTRY *v9; // rdi
  int Entries; // ebx

  v3 = *(_QWORD *)this;
  v6 = *((_DWORD *)a2 + 20) * *((_DWORD *)a2 + 21);
  *a3 = 0LL;
  v8 = (struct GPT_ENTRY *)SC_ENV::Allocate(
                             -*(_DWORD *)(v3 + 236) & (unsigned int)(*(_DWORD *)(v3 + 236) + v6 - 1),
                             (unsigned int)a2,
                             (unsigned __int8)a3,
                             1u);
  v9 = v8;
  if ( v8 )
  {
    Entries = SC_GPT::ReadEntries(this, a2, v8);
    if ( Entries < 0 )
      PspUserApcKernelRoutine(v9);
    else
      *a3 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Entries;
}
