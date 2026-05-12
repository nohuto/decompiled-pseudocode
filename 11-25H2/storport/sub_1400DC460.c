/*
 * XREFs of sub_1400DC460 @ 0x1400DC460
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400E0ABC @ 0x1400E0ABC (sub_1400E0ABC.c)
 */

__int64 __fastcall sub_1400DC460(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  unsigned __int16 i; // bp
  __int64 v5; // rcx
  unsigned int v6; // r9d
  unsigned int j; // edx
  __int64 v8; // r8
  __int64 v9; // rax

  v2 = 0;
  v3 = sub_1400143E0(64LL, 8LL * *(unsigned __int8 *)(a1 + 742), 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 544) = v3;
  if ( v3 )
  {
    for ( i = 0; i < *(unsigned __int8 *)(a1 + 742); ++i )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8LL * i) = sub_14007B110(a1, 0);
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8LL * i);
      if ( !v5 )
        goto LABEL_15;
      if ( *(_BYTE *)(v5 + 2) == 40 )
      {
        v6 = *(_DWORD *)(v5 + 56);
        if ( v6 )
        {
          for ( j = 0; j < v6; ++j )
          {
            v8 = *(unsigned int *)(v5 + 4LL * j + 120);
            if ( (unsigned int)v8 >= 0x80 && (unsigned int)v8 < *(_DWORD *)(v5 + 16) )
            {
              v9 = v5 + v8;
              if ( *(_DWORD *)(v5 + v8) == 67 )
                goto LABEL_14;
            }
          }
        }
      }
      v9 = 0LL;
LABEL_14:
      *(_BYTE *)(v9 + 16) = 12;
      *(_BYTE *)(v9 + 80) = 1;
      *(_WORD *)(v9 + 106) = 0;
    }
  }
  else
  {
LABEL_15:
    v2 = -1073741801;
    sub_1400E0ABC(a1);
  }
  return v2;
}
