/*
 * XREFs of HalpInterruptSetRemappedDestination @ 0x140434D0C
 * Callers:
 *     HalpInterruptSetDestination @ 0x140432F20 (HalpInterruptSetDestination.c)
 * Callees:
 *     HalpInterruptGetRemappedLineState @ 0x140434E54 (HalpInterruptGetRemappedLineState.c)
 *     HalpInterruptDestinationToTarget @ 0x140434F10 (HalpInterruptDestinationToTarget.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x140435084 (HalpIommuUpdateRemappingTableEntry.c)
 */

__int64 __fastcall HalpInterruptSetRemappedDestination(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax
  _DWORD v10[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h]
  _DWORD *v12; // [rsp+30h] [rbp-40h]
  _OWORD v13[3]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+68h] [rbp-8h]
  __int64 v15; // [rsp+98h] [rbp+28h] BYREF

  v4 = 0;
  v15 = 0LL;
  v14 = 0LL;
  memset(v13, 0, sizeof(v13));
  v10[1] = 0;
  if ( (int)HalpInterruptGetRemappedLineState(a1, a2, &v15, v13) < 0 )
  {
    HalpInterruptLastProblemController = 0LL;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblem = 18;
    HalpInterruptLastProblemStatus = 0;
    HalpInterruptLastProblemLine = 844;
    return (unsigned int)-1073741275;
  }
  v11 = a3;
  v10[0] = 1;
  v12 = a2 + 10;
  if ( (int)HalpInterruptDestinationToTarget(v6, v10, (char *)&v13[1] + 8) < 0 )
  {
    v9 = v15;
    HalpInterruptLastProblemController = v15;
    HalpInterruptLastProblem = 22;
    HalpInterruptLastProblemStatus = 0;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblemLine = 866;
    if ( v15 )
    {
      *(_QWORD *)(v15 + 316) = 22LL;
      *(_QWORD *)(v9 + 328) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      *(_DWORD *)(v9 + 336) = 866;
    }
    return (unsigned int)-1073741275;
  }
  if ( a2[1] != 209 && (unsigned int)(DWORD2(v13[1]) - 5) <= 1 )
    HIDWORD(v13[0]) |= 2u;
  LOBYTE(v7) = *a2 == 3;
  HalpIommuUpdateRemappingTableEntry(v7, a2[10] & 0x3FFFFFFF, v13);
  return v4;
}
