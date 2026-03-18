/*
 * XREFs of ViIsDriverSuspectForVerifier @ 0x140C21D58
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x140640700 (VfIsVerificationEnabledForImage.c)
 *     MmIsDriverSuspectForVerifier @ 0x140C211A0 (MmIsDriverSuspectForVerifier.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140C353F8 (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140C355E0 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall ViIsDriverSuspectForVerifier(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  const UNICODE_STRING *v3; // rdi

  v1 = VfSuspectDriversList;
  result = 0LL;
  if ( a1 && (__int64 *)VfSuspectDriversList != &VfSuspectDriversList )
  {
    v3 = (const UNICODE_STRING *)(a1 + 88);
    do
    {
      result = RtlEqualUnicodeString((PCUNICODE_STRING)(v1 + 40), v3, 1u);
      if ( (_BYTE)result )
        break;
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &VfSuspectDriversList );
  }
  return result;
}
