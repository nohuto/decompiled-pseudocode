/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x140AA9D3C
 * Callers:
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PspCheckForInvalidAccessByProtection(char a1, unsigned __int8 a2, unsigned __int8 a3)
{
  char v3; // r9
  int v5; // eax

  v3 = 0;
  if ( a1 )
  {
    if ( (a3 & 7) != 0 )
    {
      if ( (unsigned __int8)(a2 & 7) < (unsigned __int8)(a3 & 7) )
        return 1;
      v5 = *((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)a2 >> 4));
      if ( !_bittest(&v5, a3 >> 4) )
        return 1;
    }
  }
  return v3;
}
