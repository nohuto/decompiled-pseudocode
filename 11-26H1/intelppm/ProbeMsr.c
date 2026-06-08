/*
 * XREFs of ProbeMsr @ 0x14002A5FC
 * Callers:
 *     InitEnergyCounters @ 0x14002A270 (InitEnergyCounters.c)
 * Callees:
 *     <none>
 */

char __fastcall ProbeMsr(__int64 a1)
{
  __int64 v1; // r9
  unsigned int i; // r10d
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // [rsp+28h] [rbp+10h]

  v6 = __readmsr(0x606u);
  v1 = 0LL;
  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
  {
    v3 = __readmsr(*(_DWORD *)(a1 + 4LL * i + 12));
    v6 |= ((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3;
  }
  while ( (unsigned int)v1 < *(_DWORD *)(a1 + 28) )
  {
    v4 = __readmsr(*(_DWORD *)(a1 + 4 * v1 + 32));
    v6 |= ((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4;
    v1 = (unsigned int)(v1 + 1);
  }
  return 1;
}
