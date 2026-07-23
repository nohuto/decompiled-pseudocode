/*
 * XREFs of PfSnParametersVerify @ 0x1407CA974
 * Callers:
 *     PfSnParametersRead @ 0x1407CA570 (PfSnParametersRead.c)
 * Callees:
 *     towupper @ 0x14053A280 (towupper.c)
 */

__int64 __fastcall PfSnParametersVerify(_DWORD *a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // esi
  unsigned int i; // edi
  wint_t v5; // cx
  int v6; // edx
  _DWORD *v7; // rcx
  _DWORD *v8; // r8

  v2 = 0;
  v3 = -1073741811;
  while ( v2 < 0x30 )
  {
    if ( !*((_WORD *)a1 + v2 + 24) )
    {
      for ( i = 0; i < 0x80; ++i )
      {
        v5 = *((_WORD *)a1 + i + 72);
        if ( !v5 )
        {
          v6 = 0;
          v7 = a1 + 3;
          v8 = a1;
          while ( v6 < 2 )
          {
            if ( *v8 > 2u
              || *(v7 - 1) > 0x100000u
              || *v7 > 0x4000u
              || (unsigned __int64)(*(_QWORD *)(v7 + 1) + 6000000000LL) > 0x165A0BBFFLL )
            {
              return v3;
            }
            ++v6;
            ++v8;
            v7 += 4;
          }
          if ( a1[10] <= 0x1000u && a1[11] <= 0x1000u && a1[100] < 0x20u && (unsigned int)(a1[101] - 1) <= 9 )
            return 0;
          return v3;
        }
        if ( towupper(v5) != *((_WORD *)a1 + i + 72) )
          return v3;
      }
      return v3;
    }
    ++v2;
  }
  return v3;
}
