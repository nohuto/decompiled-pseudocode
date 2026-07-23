/*
 * XREFs of MmInvalidateDumpAddresses @ 0x140C07760
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 */

__int64 __fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 PteAddress; // rax
  unsigned int v5; // ecx
  _QWORD *v6; // rdx
  struct _KTHREAD *Thread; // rcx
  __int64 v8; // rdx
  __int64 result; // rax

  v3 = a1;
  PteAddress = MiGetPteAddress(a1);
  v5 = 0;
  v6 = (_QWORD *)PteAddress;
  if ( a2 )
  {
    do
    {
      ++v5;
      *v6++ = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    }
    while ( v5 < a2 );
    do
    {
      MiFlushSingleTbEntry(v3, 0xFFFFFFFFLL);
      v3 += 4096LL;
      --a2;
    }
    while ( a2 );
  }
  Thread = stru_140E2ED08.WaitBlock[2].Thread;
  v8 = 257LL;
  result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  do
  {
    *(_QWORD *)&Thread->Header.Lock = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    Thread = (struct _KTHREAD *)((char *)Thread + 8);
    --v8;
  }
  while ( v8 );
  return result;
}
