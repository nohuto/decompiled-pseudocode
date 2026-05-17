/*
 * XREFs of AVrfpQueryProcessVerifierOptions @ 0x1800909B8
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpDeCommitQueryDebugInfo @ 0x18008F354 (RtlpDeCommitQueryDebugInfo.c)
 *     RtlpCommitQueryDebugInfo @ 0x180092020 (RtlpCommitQueryDebugInfo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AVrfpQueryProcessVerifierOptions(__int64 a1)
{
  int v2; // r10d
  _DWORD *DebugInfo; // rax
  __int64 v4; // rbx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x2000100) == 0 )
    return 0LL;
  v2 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, _QWORD))qword_1801C5638)(0LL, &v6, 0LL);
  if ( v2 == -1073741820 )
  {
    DebugInfo = (_DWORD *)RtlpCommitQueryDebugInfo(a1, v6);
    v4 = (__int64)DebugInfo;
    if ( DebugInfo )
    {
      v7 = v6;
      *DebugInfo = v6;
      DebugInfo[1] = 0;
      v2 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, _DWORD *))qword_1801C5638)(0LL, &v7, DebugInfo);
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
