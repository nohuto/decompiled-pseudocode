/*
 * XREFs of SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140475CC0
 * Callers:
 *     SepConvertTokenPrivileges @ 0x140475C9C (SepConvertTokenPrivileges.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SepCopyTokenAccessInformation @ 0x140A4E3E8 (SepCopyTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepConvertTokenPrivilegesToLuidAndAttributes(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r11
  unsigned int i; // r9d
  __int64 v4; // r8

  v2 = 0LL;
  for ( i = 0; i <= 0x24; ++i )
  {
    if ( ((1LL << i) & a1[8]) != 0 )
    {
      v4 = 3 * v2;
      *(_QWORD *)(a2 + 4 * v4) = (int)i;
      *(_DWORD *)(a2 + 4 * v4 + 8) = ((a1[9] & (1LL << i)) != 0 ? 2 : 0) | (((1LL << i) & a1[10]) != 0);
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return (unsigned int)v2;
}
