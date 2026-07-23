/*
 * XREFs of SepIsSandboxedToken @ 0x14047CE68
 * Callers:
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIsSandboxedToken(_DWORD *a1, char a2)
{
  if ( !a2 )
    return 0;
  if ( a1[48] == 2 && (int)a1[49] < 2 )
    return 1;
  return (a1[50] & 0x2000) == 0;
}
