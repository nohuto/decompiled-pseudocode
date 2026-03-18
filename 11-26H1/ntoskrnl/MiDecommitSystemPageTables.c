/*
 * XREFs of MiDecommitSystemPageTables @ 0x1402A46B8
 * Callers:
 *     MiReturnSystemVa @ 0x1402A4238 (MiReturnSystemVa.c)
 *     MiReleaseDriverPtes @ 0x140A80038 (MiReleaseDriverPtes.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x140285CBC (MiSystemVaTypeToVm.c)
 *     MiDeleteSystemPageTables @ 0x1402A477C (MiDeleteSystemPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
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
