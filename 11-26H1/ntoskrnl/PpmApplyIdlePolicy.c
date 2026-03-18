/*
 * XREFs of PpmApplyIdlePolicy @ 0x1403E6340
 * Callers:
 *     PpmResetIdlePolicy @ 0x1403E6300 (PpmResetIdlePolicy.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1403E63A8 (PpmConvertTimeFrom.c)
 */

__int64 __fastcall PpmApplyIdlePolicy(_BYTE *a1)
{
  __int64 *v1; // r9
  unsigned __int64 v2; // r8
  char v3; // dl
  char v4; // al
  __int64 result; // rax
  __int64 v6; // r11

  v1 = PpmCurrentProfile;
  v2 = 89LL * dword_140F106CC;
  a1[88] = PpmCurrentProfile[v2 + 36];
  v3 = v1[v2 + 37];
  a1[87] = v3;
  v4 = BYTE1(v1[v2 + 37]);
  a1[85] = v3;
  a1[86] = v4;
  a1[84] = v4;
  result = PpmConvertTimeFrom(HIDWORD(v1[v2 + 36]), 1000000LL);
  *(_DWORD *)(v6 + 708) = result;
  return result;
}
