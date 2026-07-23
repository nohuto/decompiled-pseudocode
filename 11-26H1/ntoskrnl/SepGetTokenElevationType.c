/*
 * XREFs of SepGetTokenElevationType @ 0x1404A4C78
 * Callers:
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SepCopyTokenLoggingInformation @ 0x140A4ECB4 (SepCopyTokenLoggingInformation.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepGetTokenElevationType(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 40LL);
  if ( (v1 & 4) != 0 )
    return 3LL;
  else
    return (unsigned int)((v1 & 2) != 0) + 1;
}
