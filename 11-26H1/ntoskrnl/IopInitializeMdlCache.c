/*
 * XREFs of IopInitializeMdlCache @ 0x14079E0CC
 * Callers:
 *     IoInitSystem @ 0x140CC0C78 (IoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *IopInitializeMdlCache()
{
  __int64 *result; // rax

  IopMcData = 3148801;
  result = &qword_140F850D0;
  FeaturePfnArrayDebug = 0;
  qword_140F850C8 = 0LL;
  qword_140F850D8 = (__int64)&qword_140F850D0;
  qword_140F850D0 = (__int64)&qword_140F850D0;
  qword_140F850E8 = 0LL;
  return result;
}
