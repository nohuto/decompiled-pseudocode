/*
 * XREFs of MiDecommitSystemPageTables @ 0x1402A3C08
 * Callers:
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 *     MiReleaseDriverPtes @ 0x140A85EA8 (MiReleaseDriverPtes.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiDeleteSystemPageTables @ 0x1402A3CCC (MiDeleteSystemPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiDecommitSystemPageTables(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdx
  void *volatile *AnyMultiplexedVm; // rbx
  int v5; // r8d
  int v6; // r9d
  int v7; // r10d

  AnyMultiplexedVm = MiSystemVaTypeToVm(a3);
  if ( !AnyMultiplexedVm )
    AnyMultiplexedVm = (void *volatile *)MiGetAnyMultiplexedVm(6LL, v3);
  MiDeleteSystemPageTables((_DWORD)AnyMultiplexedVm, v7, v5, v6 - 1, 1);
  return *((unsigned int *)AnyMultiplexedVm + 46);
}
