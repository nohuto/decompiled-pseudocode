/*
 * XREFs of PspValidateJobAssignmentProcessLimits @ 0x140AD39F4
 * Callers:
 *     PspValidateJobChainLimits @ 0x140AD398C (PspValidateJobChainLimits.c)
 * Callees:
 *     PspSendJobNotification @ 0x1404C9CC0 (PspSendJobNotification.c)
 *     PspCheckJobAccessState @ 0x14077BB78 (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspValidateJobAssignmentProcessLimits(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  int v7; // edx
  int v8; // eax
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 500) & 0x4000000) == 0
    || (v6 = *(_QWORD *)(a1 + 528)) == 0
    || (result = PspCheckJobAccessState(v6, a2), (int)result >= 0) )
  {
    if ( *(_DWORD *)(a1 + 1456) == -1 )
      return 3221225540LL;
    v7 = *(_DWORD *)(a1 + 256);
    if ( (v7 & 8) != 0 && (unsigned int)(a3 + *(_DWORD *)(a1 + 216) - *(_DWORD *)(a1 + 1460)) > *(_DWORD *)(a1 + 260) )
    {
      _InterlockedAnd((volatile signed __int32 *)(a2 + 496), 0xFFFFFFDF);
      if ( *(_QWORD *)(a1 + 552) && (*(_DWORD *)(a1 + 1104) & 8) != 0 )
        PspSendJobNotification(a1, 3LL, 0, 1);
      return 3221225540LL;
    }
    if ( (v7 & 4) != 0 && *(_DWORD *)(a1 + 4) )
      return 3221225540LL;
    v8 = *(_DWORD *)(a1 + 1552);
    if ( (v8 & 0x20000000) != 0 )
      return 3221225485LL;
    else
      return (v8 & 0x80u) != 0 ? 0xC000010A : 0;
  }
  return result;
}
