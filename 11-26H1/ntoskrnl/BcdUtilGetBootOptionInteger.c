/*
 * XREFs of BcdUtilGetBootOptionInteger @ 0x1408979C8
 * Callers:
 *     SeAuditBootConfiguration @ 0x14081818C (SeAuditBootConfiguration.c)
 * Callees:
 *     BcdUtilGetBootOption @ 0x140897910 (BcdUtilGetBootOption.c)
 */

__int64 __fastcall BcdUtilGetBootOptionInteger(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 BootOption; // rax
  _QWORD *v4; // r9
  __int64 v5; // rcx

  if ( (a2 & 0xF000000) != 0x5000000 )
    return 3221225485LL;
  BootOption = BcdUtilGetBootOption(a1, a2);
  if ( !BootOption )
    return 3221226021LL;
  v5 = *(_QWORD *)(*(unsigned int *)(BootOption + 4) + BootOption);
  result = 0LL;
  *v4 = v5;
  return result;
}
