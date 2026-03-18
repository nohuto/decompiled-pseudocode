/*
 * XREFs of MagpFindThreadContext @ 0x1401BA1A0
 * Callers:
 *     MagControl @ 0x1401B92F0 (MagControl.c)
 *     MagSetLensContextInformation @ 0x1401B93FC (MagSetLensContextInformation.c)
 *     MagGetLensContextInformation @ 0x140231FF0 (MagGetLensContextInformation.c)
 *     MagContextThreadCallout @ 0x140270AF0 (MagContextThreadCallout.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MagpFindThreadContext(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; result != a1; result = (_QWORD *)*result )
  {
    if ( a2 == result[2] )
      return result;
  }
  return 0LL;
}
