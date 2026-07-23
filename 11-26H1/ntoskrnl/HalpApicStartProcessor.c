/*
 * XREFs of HalpApicStartProcessor @ 0x1405A4870
 * Callers:
 *     <none>
 * Callees:
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicStartProcessor(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx

  if ( (a4 & 0xFFF00FFF) != 0 )
    return 3221225485LL;
  KeStallExecutionProcessor(0xC8u);
  guard_dispatch_icall_no_overrides(v8, v7);
  if ( !HalpApicX2Mode )
    a2 <<= 24;
  guard_dispatch_icall_no_overrides(a2, 50432LL);
  KeStallExecutionProcessor(0xAu);
  guard_dispatch_icall_no_overrides(a2, 34048LL);
  KeStallExecutionProcessor(0xC8u);
  v9 = (a4 & 0xFF000 | 0x600000u) >> 12;
  guard_dispatch_icall_no_overrides(a2, v9);
  KeStallExecutionProcessor(0xC8u);
  guard_dispatch_icall_no_overrides(v11, v10);
  KeStallExecutionProcessor(0x64u);
  guard_dispatch_icall_no_overrides(a2, v9);
  KeStallExecutionProcessor(0xC8u);
  return 0LL;
}
