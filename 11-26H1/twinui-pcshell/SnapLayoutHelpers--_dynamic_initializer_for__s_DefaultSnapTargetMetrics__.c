/*
 * XREFs of SnapLayoutHelpers::_dynamic_initializer_for__s_DefaultSnapTargetMetrics__ @ 0x1801D5760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 SnapLayoutHelpers::_dynamic_initializer_for__s_DefaultSnapTargetMetrics__()
{
  __int64 result; // rax
  __int128 v1; // [rsp+0h] [rbp-30h]
  __int128 v2; // [rsp+10h] [rbp-20h]
  __int128 v3; // [rsp+20h] [rbp-10h]

  result = 25LL;
  LODWORD(v3) = 25;
  *(_QWORD *)((char *)&v3 + 4) = 0x3DCCCCCD00000019LL;
  *(_QWORD *)&v2 = 0x1900000019LL;
  *(_QWORD *)&v1 = 0x1900000019LL;
  HIDWORD(v3) = 1036831949;
  *((_QWORD *)&v2 + 1) = 0x3DCCCCCD3DCCCCCDLL;
  *((_QWORD *)&v1 + 1) = 0x3DCCCCCD3DCCCCCDLL;
  xmmword_1808DA7E8 = v3;
  xmmword_1808DA7F8 = v2;
  xmmword_1808DA808 = v1;
  return result;
}
