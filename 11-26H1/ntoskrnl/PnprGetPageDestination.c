/*
 * XREFs of PnprGetPageDestination @ 0x14053371C
 * Callers:
 *     PnprCopyReservedMapping @ 0x140507038 (PnprCopyReservedMapping.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnprGetPageDestination(unsigned __int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // rax
  unsigned __int64 v4; // rdx

  v1 = 0;
  v2 = *(_QWORD *)(PnprContext + 24);
  while ( v1 < *(_DWORD *)(v2 + 4) )
  {
    v3 = 16LL * v1;
    v4 = *(_QWORD *)(v3 + v2 + 16);
    if ( a1 >= v4 && a1 <= *(_QWORD *)(v3 + v2 + 24) + v4 - 1 )
      return guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), a1);
    ++v1;
  }
  return 3221226021LL;
}
