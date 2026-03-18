/*
 * XREFs of GdiPreUserProcessCallout @ 0x14015E660
 * Callers:
 *     ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x1401D7A2C (--0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GdiPreUserProcessCallout(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( a2 )
  {
    result = a1 + 28;
    a1[10] = 0LL;
    a1[29] = a1 + 28;
    a1[28] = a1 + 28;
  }
  return result;
}
