/*
 * XREFs of PerfSelectionLegacyPcc @ 0x14000E250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfSelectionLegacyPcc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // edx
  unsigned int v5; // kr00_4
  __int64 result; // rax

  v3 = qword_140015BD8;
  v4 = *(_DWORD *)(a3 + 16);
  *(_QWORD *)a3 = (unsigned int)(100 - v4);
  v5 = *(_DWORD *)(v3 + 28) * v4;
  result = 1374389535 * v5;
  *(_DWORD *)(a3 + 20) = v5 / 0x64;
  return result;
}
