/*
 * XREFs of MiProcessRemoveFromWorkingSet @ 0x140870F0C
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x1403C5E90 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiProcessRemoveFromWorkingSet(unsigned __int64 a1, __int64 a2, char a3)
{
  int v4; // edi
  unsigned int v6; // ebx
  _KPROCESS *Process; // rsi
  __int64 result; // rax

  v4 = 4 * (a3 & 1);
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  while ( v6 < a1 )
  {
    result = MiEmptyWorkingSetInitiate(
               (__int64)&Process[2].ReadyListHead.Blink,
               v4,
               *(_QWORD *)(a2 + 16LL * v6) & 0xFFFFFFFFFFFFF000uLL,
               ((*(_QWORD *)(a2 + 16LL * v6) + *(_QWORD *)(a2 + 16LL * v6 + 8) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - 1);
    if ( (int)result < 0 )
      return result;
    ++v6;
  }
  return 0LL;
}
