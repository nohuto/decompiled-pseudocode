/*
 * XREFs of AVrfpQueryProcessVerifierOptions @ 0x180075718
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x1800BB000 (RtlpCommitQueryDebugInfo.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x18010E83C (RtlpDeCommitQueryDebugInfo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AVrfpQueryProcessVerifierOptions(__int64 a1)
{
  int v2; // r10d
  unsigned int *DebugInfo; // rax
  unsigned int *v4; // rbx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x2000100) == 0 )
    return 0LL;
  v2 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, _QWORD))qword_1801C4638)(0LL, &v6, 0LL);
  if ( v2 == -1073741820 )
  {
    DebugInfo = (unsigned int *)RtlpCommitQueryDebugInfo(a1, v6);
    v4 = DebugInfo;
    if ( DebugInfo )
    {
      v7 = v6;
      *DebugInfo = v6;
      DebugInfo[1] = 0;
      v2 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, unsigned int *))qword_1801C4638)(0LL, &v7, DebugInfo);
      if ( v2 < 0 )
        RtlpDeCommitQueryDebugInfo(a1, v4, v6);
      else
        *(_QWORD *)(a1 + 144) = v4;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v2;
}
