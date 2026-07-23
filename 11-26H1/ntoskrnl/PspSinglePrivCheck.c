/*
 * XREFs of PspSinglePrivCheck @ 0x140A51D78
 * Callers:
 *     PspSetQuotaLimits @ 0x1407F6AFC (PspSetQuotaLimits.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     SePrivilegeCheck @ 0x140A51E20 (SePrivilegeCheck.c)
 */

__int64 __fastcall PspSinglePrivCheck(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, __int64 a4)
{
  __int64 v6; // rsi

  *(_BYTE *)(a4 + 52) = a3;
  if ( !a3 )
    return 1LL;
  *(_DWORD *)(a4 + 32) = 1;
  *(_DWORD *)(a4 + 36) = 1;
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)a4);
  v6 = 0LL;
  *(_BYTE *)(a4 + 53) = 0;
  while ( (unsigned int)v6 < 2 )
  {
    *(_QWORD *)(a4 + 40) = *(_QWORD *)*(&PspWorkingSetPrivileges + v6);
    *(_DWORD *)(a4 + 48) = 0;
    if ( SePrivilegeCheck((PPRIVILEGE_SET)(a4 + 32), (PSECURITY_SUBJECT_CONTEXT)a4, a3) == 1 )
    {
      *(_BYTE *)(a4 + 53) = 1;
      return *(unsigned __int8 *)(a4 + 53);
    }
    v6 = (unsigned int)(v6 + 1);
  }
  return *(unsigned __int8 *)(a4 + 53);
}
