/*
 * XREFs of IopInitializeMdlCache @ 0x14079B58C
 * Callers:
 *     IoInitSystem @ 0x140CBAC00 (IoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *IopInitializeMdlCache()
{
  __int64 *result; // rax

  IopMcData = 3148801;
  result = &qword_140F84D30;
  FeaturePfnArrayDebug = 0;
  qword_140F84D28 = 0LL;
  qword_140F84D38 = (__int64)&qword_140F84D30;
  qword_140F84D30 = (__int64)&qword_140F84D30;
  qword_140F84D48 = 0LL;
  return result;
}
