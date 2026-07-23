/*
 * XREFs of SepEqualAsciiWideStringCaseInSensitive @ 0x14081C1B8
 * Callers:
 *     SepSecureBootFindMatchingRegistryRule @ 0x14081C240 (SepSecureBootFindMatchingRegistryRule.c)
 * Callees:
 *     <none>
 */

char __fastcall SepEqualAsciiWideStringCaseInSensitive(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v2; // r8
  char *v3; // rcx
  char *v4; // rdx
  char *v5; // r10
  signed __int64 v6; // rdx
  unsigned int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  int v10; // eax

  v2 = *a1;
  if ( (_DWORD)v2 != *a2 )
    return 0;
  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = (char *)*((_QWORD *)a2 + 1);
  v5 = &v3[v2];
  while ( (unsigned int)v2 >= 8 && *(_QWORD *)v3 == *(_QWORD *)v4 )
  {
    LODWORD(v2) = v2 - 8;
    if ( !(_DWORD)v2 )
      return 1;
    v3 += 8;
    v4 += 8;
  }
  v6 = v4 - v3;
  while ( v3 < v5 )
  {
    v7 = *(unsigned __int16 *)v3;
    v8 = *(unsigned __int16 *)&v3[v6];
    if ( (_WORD)v7 != (_WORD)v8 )
    {
      v9 = *(unsigned __int16 *)v3;
      if ( v7 >= 0x61 && v7 <= 0x7A )
        v9 = v7 - 32;
      v10 = *(unsigned __int16 *)&v3[v6];
      if ( v8 >= 0x61 && v8 <= 0x7A )
        v10 -= 32;
      if ( v9 != v10 )
        return 0;
    }
    v3 += 2;
  }
  return 1;
}
