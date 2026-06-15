/*
 * XREFs of sub_14007FDC0 @ 0x14007FDC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14007F9EC @ 0x14007F9EC (sub_14007F9EC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

FARPROC __fastcall sub_14007FDC0(unsigned int a1)
{
  FARPROC result; // rax

  if ( qword_1400E9798 )
    return (FARPROC)sub_1400B6010(a1);
  result = sub_14007F9EC("LogStagedFeatureUsage");
  qword_1400E9798 = (__int64)result;
  if ( result )
    return (FARPROC)sub_1400B6010(a1);
  return result;
}
