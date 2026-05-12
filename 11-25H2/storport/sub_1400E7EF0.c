/*
 * XREFs of sub_1400E7EF0 @ 0x1400E7EF0
 * Callers:
 *     sub_1400CD79C @ 0x1400CD79C (sub_1400CD79C.c)
 *     sub_1400D6CBC @ 0x1400D6CBC (sub_1400D6CBC.c)
 * Callees:
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 *     sub_1400EFBBC @ 0x1400EFBBC (sub_1400EFBBC.c)
 */

__int64 __fastcall sub_1400E7EF0(unsigned int *SystemArgument2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx

  if ( *(_DWORD *)(*((_QWORD *)SystemArgument2 + 74) + 516LL) && (SystemArgument2[34] & 0x20000) == 0 )
  {
    result = sub_1400ED47C(SystemArgument2);
    if ( (int)result < 0 )
      return result;
    v3 = 0xFFFFFFFFLL;
    v4 = SystemArgument2[2];
    v5 = v4 * *((unsigned __int16 *)SystemArgument2 + 11);
    if ( v5 <= 0xFFFFFFFF )
    {
      v3 = v4 * *((unsigned __int16 *)SystemArgument2 + 11);
      if ( !v5 )
        v3 = 128LL;
    }
    v6 = *((_QWORD *)SystemArgument2 + 131);
    if ( v6 )
    {
      v7 = *(unsigned int *)(v6 + 120);
      if ( (_DWORD)v7 )
      {
        if ( v3 >= v7 )
          LODWORD(v3) = *(_DWORD *)(v6 + 120);
      }
    }
    *(_DWORD *)(*((_QWORD *)SystemArgument2 + 16) + 380LL) = v3;
    *(_DWORD *)(*((_QWORD *)SystemArgument2 + 16) + 384LL) = v3;
  }
  result = sub_1400ED768(SystemArgument2);
  if ( (int)result >= 0 )
  {
    sub_1400EFBBC(SystemArgument2);
    return 0LL;
  }
  return result;
}
