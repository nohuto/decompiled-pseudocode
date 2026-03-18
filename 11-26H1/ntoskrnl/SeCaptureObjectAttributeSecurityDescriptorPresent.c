/*
 * XREFs of SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x1402604DC
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     NtDuplicateToken @ 0x1408EB8C0 (NtDuplicateToken.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureObjectAttributeSecurityDescriptorPresent(__int64 a1, char a2, _BYTE *a3)
{
  __int64 ULong64FromUser; // rax

  *a3 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      ULong64FromUser = RtlReadULong64FromUser(a1 + 32);
    }
    else
    {
      ULong64FromUser = *(_QWORD *)(a1 + 32);
    }
    if ( ULong64FromUser )
      *a3 = 1;
  }
  return 0LL;
}
