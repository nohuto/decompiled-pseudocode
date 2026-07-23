/*
 * XREFs of PpmPerfCheckRequired @ 0x1404D98E8
 * Callers:
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmPerfCheckRequired(__int64 a1)
{
  char v1; // dl
  unsigned int i; // r8d
  char v4; // cl
  char v5; // r9
  int v7; // eax
  PBOOLEAN j; // rax

  v1 = 0;
  for ( i = 0; i < 3; ++i )
  {
    v4 = *(_BYTE *)(i + a1 + 59);
    v5 = *(_BYTE *)(i + a1 + 62);
    if ( v4 != v5 )
      return 1;
    if ( v4 == 100 && v5 == 100 )
    {
      v7 = *(_DWORD *)(a1 + 112);
      if ( v7 == 1 || v7 == 3 )
      {
        for ( j = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
              j != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
              j = *(PBOOLEAN *)j )
        {
          if ( *((_DWORD *)j + 115) > 0x64u )
            return 1;
        }
      }
    }
  }
  return v1;
}
