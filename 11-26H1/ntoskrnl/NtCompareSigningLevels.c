/*
 * XREFs of NtCompareSigningLevels @ 0x140ABA550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtCompareSigningLevels(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( SepRmCapTableLock.ReadTransferCount )
    v2 = guard_dispatch_icall_no_overrides(a1, a2);
  return v2 == 0 ? 0xC0000428 : 0;
}
