/*
 * XREFs of SetPerformanceEnergyBiasPolicy @ 0x140003D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SetPerformanceEnergyBiasPolicy(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+40h] [rbp+8h]

  if ( *(_DWORD *)(*(_QWORD *)a1 + 80LL) )
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_140019580)(
             *(unsigned int *)(*(_QWORD *)a1 + 84LL),
             432LL,
             -16LL,
             ((1500 - 15 * a2) / 0x64u) & 0xF);
  v2 = __readmsr(0x1B0u);
  HIDWORD(v4) = HIDWORD(v2);
  LODWORD(v4) = ((1500 - 15 * a2) / 0x64u) & 0xF | v2 & 0xFFFFFFF0;
  result = v4;
  __writemsr(0x1B0u, v4);
  return result;
}
