/*
 * XREFs of MiDeleteVirtualAddresses @ 0x14036358C
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1404C7A8C (MiDeleteFinalPageTables.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A027C4 (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiDeletePagablePteRange @ 0x140363600 (MiDeletePagablePteRange.c)
 */

unsigned __int64 __fastcall MiDeleteVirtualAddresses(int a1, int a2, int a3, __int64 a4)
{
  _KPROCESS *Process; // rdi
  unsigned __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  MiDeletePagablePteRange((_DWORD)Process + 1024, 2, a1, a2, a3 | 0x80, a4);
  result = *(_QWORD *)(a4 + 24);
  if ( result )
  {
    result = -(__int64)result;
    _InterlockedAdd64((volatile signed __int64 *)Process[1].Padding, result);
  }
  return result;
}
