/*
 * XREFs of HalpInterruptFindControllerAndLineState @ 0x140433754
 * Callers:
 *     HalpInterruptSetRemappedDestinationHv @ 0x14043306C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptGetRemappedLineState @ 0x140434E54 (HalpInterruptGetRemappedLineState.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140433D18 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 */

__int64 __fastcall HalpInterruptFindControllerAndLineState(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 LinesForGsiRange; // rax
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // r10
  int v13; // r11d
  unsigned int v14; // r8d
  unsigned int v15; // edx
  __int64 result; // rax

  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  v6 = 0LL;
  if ( LinesForGsiRange )
  {
    v7 = HalpInterruptLookupController(*(unsigned int *)(LinesForGsiRange + 16));
    v9 = v7;
    if ( v7 )
    {
      v10 = (_QWORD *)(v7 + 264);
      v11 = *(_QWORD **)(v7 + 264);
      while ( v11 != v10 )
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        v13 = *((_DWORD *)v12 + 5);
        if ( v13 <= v8 && *((_DWORD *)v12 + 6) > v8 )
        {
          v14 = v8 - v13;
          if ( v12 )
          {
            v15 = v6;
            v6 = v12[5] + 56LL * v14;
            goto LABEL_9;
          }
          break;
        }
      }
      HalpInterruptLastProblemController = v9;
      HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblemLine = 657;
      HalpInterruptLastProblem = 18;
      HalpInterruptLastProblemStatus = v6;
      *(_QWORD *)(v9 + 316) = 18LL;
      *(_QWORD *)(v9 + 328) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      *(_DWORD *)(v9 + 336) = 657;
    }
    else
    {
      HalpInterruptLastProblemController = v6;
      HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblem = 17;
      HalpInterruptLastProblemStatus = v6;
      HalpInterruptLastProblemLine = 641;
    }
    v15 = -1073741275;
  }
  else
  {
    HalpInterruptLastProblemController = 0LL;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    v15 = -1073741811;
    HalpInterruptLastProblem = 18;
    HalpInterruptLastProblemStatus = 0;
    HalpInterruptLastProblemLine = 628;
  }
  v9 = v6;
LABEL_9:
  *a2 = v9;
  result = v15;
  *a3 = v6;
  return result;
}
