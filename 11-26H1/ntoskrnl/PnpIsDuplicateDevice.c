/*
 * XREFs of PnpIsDuplicateDevice @ 0x1407A1DC8
 * Callers:
 *     IopIsReportedAlready @ 0x1407A1ADC (IopIsReportedAlready.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpIsDuplicateDevice(_DWORD *a1, _DWORD *a2)
{
  int v2; // edi
  _DWORD *v3; // r9
  unsigned int i; // r10d
  char v5; // bl
  unsigned int v6; // esi
  _DWORD *v7; // r11
  unsigned int v8; // r8d
  _DWORD *v9; // rax

  v2 = 0;
  if ( !*a1 || !*a2 )
    return 0LL;
  while ( 1 )
  {
    v3 = a1 + 5;
    for ( i = 0; i < a1[4]; ++i )
    {
      v5 = *(_BYTE *)v3;
      if ( *(_BYTE *)v3 == 1 || ((v5 - 3) & 0xFB) == 0 )
      {
        v6 = a2[4];
        v7 = a2 + 5;
        v8 = 0;
        if ( v6 )
        {
          while ( v5 != *(_BYTE *)v7 || *(_QWORD *)(v3 + 1) != *(_QWORD *)(v7 + 1) || (v5 == 1) != (*(_BYTE *)v7 == 1) )
          {
            ++v8;
            v7 += 5;
            if ( v8 >= v6 )
              goto LABEL_12;
          }
        }
        else
        {
LABEL_12:
          if ( v8 == v6 )
            return 0LL;
        }
      }
      v3 += 5;
    }
    if ( v2 )
      return 1LL;
    v9 = a2;
    v2 = 1;
    a2 = a1;
    a1 = v9;
  }
}
