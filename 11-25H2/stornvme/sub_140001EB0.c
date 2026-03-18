/*
 * XREFs of sub_140001EB0 @ 0x140001EB0
 * Callers:
 *     sub_140003520 @ 0x140003520 (sub_140003520.c)
 *     sub_1400314C4 @ 0x1400314C4 (sub_1400314C4.c)
 * Callees:
 *     sub_140001010 @ 0x140001010 (sub_140001010.c)
 *     sub_140031878 @ 0x140031878 (sub_140031878.c)
 */

bool __fastcall sub_140001EB0(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  char *v6; // r11
  char *v9; // r10
  unsigned int v10; // edx
  _BYTE *v11; // r11
  char v12; // bl
  unsigned int i; // ecx
  char v14; // al
  char v15; // dl
  int v17; // eax
  __int64 v18; // r11

  v5 = a4;
  v6 = (char *)a3;
  v9 = (char *)a3;
  if ( !a1 || !a3 )
    return 1;
LABEL_3:
  if ( *v6 || (v12 = 0, v6[1]) )
  {
    if ( a2 < (unsigned int)sub_140001010(v6, v5) )
      a3 = a2;
    else
      a3 = (unsigned int)sub_140001010(v11, v10);
    if ( !(_DWORD)a3 )
      return 0;
    v12 = 1;
    a4 = a1 - (_QWORD)v9;
    for ( i = 0; i < (unsigned int)a3; ++i )
    {
      v14 = *v9;
      if ( *v9 == 42 )
      {
        ++v9;
        break;
      }
      v15 = v9[a4];
      if ( !v15 || !v14 || v15 != v14 && v14 != 63 )
      {
        v17 = sub_140001010(v11, v5);
        v6 = (char *)((unsigned int)(v17 + 1) + v18);
        v9 = v6;
        goto LABEL_3;
      }
      ++v9;
    }
  }
  if ( a5 && v12 == 1 && *v9 == 32 )
    return (unsigned __int8)sub_140031878(v9 + 1, a5, a3, a4) != 0;
  return v12;
}
