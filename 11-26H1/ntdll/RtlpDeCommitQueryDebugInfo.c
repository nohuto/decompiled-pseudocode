/*
 * XREFs of RtlpDeCommitQueryDebugInfo @ 0x18010E83C
 * Callers:
 *     AVrfpQueryProcessVerifierOptions @ 0x180075718 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlQueryProcessModuleInformation @ 0x180075A08 (RtlQueryProcessModuleInformation.c)
 *     RtlDeCommitDebugInfo @ 0x18010E830 (RtlDeCommitDebugInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpDeCommitQueryDebugInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r8
  __int64 result; // rax

  if ( a3 <= 0xFFFFFFF8 )
  {
    v3 = *(_QWORD *)(a1 + 72) - ((a3 + 7) & 0xFFFFFFF8);
    result = v3 + a1;
    if ( a2 == v3 + a1 )
      *(_QWORD *)(a1 + 72) = v3;
  }
  return result;
}
