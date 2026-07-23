/*
 * XREFs of PpmApplyIdlePolicy @ 0x1402F3220
 * Callers:
 *     PpmResetIdlePolicy @ 0x1402F31E0 (PpmResetIdlePolicy.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1402F3288 (PpmConvertTimeFrom.c)
 */

__int64 __fastcall PpmApplyIdlePolicy(_BYTE *a1)
{
  _BYTE *v1; // r9
  __int64 v2; // r8
  char v3; // dl
  char v4; // al
  __int64 result; // rax
  __int64 v6; // r11

  v1 = PpmCurrentProfile;
  v2 = 712LL * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  a1[88] = *((_BYTE *)PpmCurrentProfile + v2 + 288);
  v3 = v1[v2 + 296];
  a1[87] = v3;
  v4 = v1[v2 + 297];
  a1[85] = v3;
  a1[86] = v4;
  a1[84] = v4;
  result = PpmConvertTimeFrom(*(unsigned int *)&v1[v2 + 292], 1000000LL);
  *(_DWORD *)(v6 + 708) = result;
  return result;
}
