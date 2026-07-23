/*
 * XREFs of BcdUtilGetBootOptionBoolean @ 0x140897980
 * Callers:
 *     SeAuditBootConfiguration @ 0x14081818C (SeAuditBootConfiguration.c)
 * Callees:
 *     BcdUtilGetBootOption @ 0x140897910 (BcdUtilGetBootOption.c)
 */

__int64 __fastcall BcdUtilGetBootOptionBoolean(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 BootOption; // rax
  _BYTE *v4; // r9
  char v5; // cl

  if ( (a2 & 0xF000000) != 0x6000000 )
    return 3221225485LL;
  BootOption = BcdUtilGetBootOption(a1, a2);
  if ( !BootOption )
    return 3221226021LL;
  v5 = *(_BYTE *)(*(unsigned int *)(BootOption + 4) + BootOption);
  result = 0LL;
  *v4 = v5;
  return result;
}
