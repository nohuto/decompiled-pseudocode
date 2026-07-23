/*
 * XREFs of KseHookMmMapIoSpace @ 0x140602230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseHookMmMapIoSpace(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = __readcr3();
  if ( ((a1 ^ v2) & 0xFFFFFFFFFFFFF000uLL) == 0 && (a1 & 3) != 0 )
    a1 &= 0xFFFFFFFFFFFFFFFCuLL;
  return guard_dispatch_icall_no_overrides(a1, a2);
}
