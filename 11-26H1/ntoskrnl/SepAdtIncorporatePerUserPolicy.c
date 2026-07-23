/*
 * XREFs of SepAdtIncorporatePerUserPolicy @ 0x140819488
 * Callers:
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     ObInitProcess @ 0x1409BCC28 (ObInitProcess.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 *     SeAssignPrimaryToken @ 0x140A7BF34 (SeAssignPrimaryToken.c)
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
