/*
 * XREFs of SepAdtIncorporatePerUserPolicy @ 0x140813628
 * Callers:
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     SepAdtAuditThisEventWithContext @ 0x140932EA0 (SepAdtAuditThisEventWithContext.c)
 *     ObInitProcess @ 0x140971938 (ObInitProcess.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     SeAssignPrimaryToken @ 0x140A2C3D0 (SeAssignPrimaryToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140A435C0 (SeAuditingWithTokenForSubcategory.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall SepAdtIncorporatePerUserPolicy(unsigned int a1, char a2, char a3, __int64 a4, _BYTE *a5)
{
  _BYTE *result; // rax
  int v6; // r9d

  if ( *(_BYTE *)(a4 + 119) == 2 )
  {
    result = (_BYTE *)((unsigned __int64)a1 >> 1);
    v6 = (unsigned __int8)result[a4 + 88] >> (4 * (a1 & 1));
    if ( (v6 & 0xF) != 0 )
    {
      if ( a2 && (v6 & 1) != 0 || a3 && (v6 & 4) != 0 )
      {
        result = a5;
        *a5 = 1;
      }
      else if ( a2 && (v6 & 2) != 0 || a3 && (v6 & 8) != 0 )
      {
        result = a5;
        *a5 = 0;
      }
    }
  }
  return result;
}
