/*
 * XREFs of MiResolveImageImports @ 0x14087B78C
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x14038D6E0 (MiSetImageProtection.c)
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 *     MiSetImportTableProtection @ 0x140B55DE4 (MiSetImportTableProtection.c)
 */

__int64 __fastcall MiResolveImageImports(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _BYTE *a6)
{
  __int64 result; // rax
  int v11; // esi
  unsigned int *v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rax
  _QWORD *v15; // rax
  int i; // r8d
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  *a6 = 0;
  result = MiSetImportTableProtection(a1, &v17);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)v18 )
    {
      *(_DWORD *)(a1 + 104) |= 0x1000u;
      v11 = MiResolveImageReferences(a1, a4, a3, a2, a5);
      if ( *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) )
      {
        if ( (_QWORD)v17 )
        {
          MiSetImageProtection(a1, v17, SHIDWORD(v18));
        }
        else
        {
          v12 = (unsigned int *)*((_QWORD *)&v17 + 1);
          v13 = *(_QWORD *)(a1 + 48);
          if ( *((_QWORD *)&v17 + 1) )
          {
            do
            {
              v14 = *v12;
              if ( !(_DWORD)v14 )
                break;
              v15 = (_QWORD *)(v13 + v14);
              for ( i = 0; *v15; ++i )
                ++v15;
              MiSetImageProtection(a1, v13 + v12[4], 8 * i);
              v12 += 5;
            }
            while ( v12 );
          }
        }
      }
      *(_DWORD *)(a1 + 104) &= ~0x1000u;
      if ( v11 < 0 )
        *a6 = 1;
      return (unsigned int)v11;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
