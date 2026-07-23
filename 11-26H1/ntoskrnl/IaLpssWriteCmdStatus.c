/*
 * XREFs of IaLpssWriteCmdStatus @ 0x14072668C
 * Callers:
 *     IaLpssPciSetPower @ 0x1407262C8 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssWriteCmdStatus(unsigned int *a1)
{
  if ( !qword_140EF00D8 || !a1 )
    return 2LL;
  guard_dispatch_icall_no_overrides(qword_140EF00D8, *a1);
  return 0LL;
}
