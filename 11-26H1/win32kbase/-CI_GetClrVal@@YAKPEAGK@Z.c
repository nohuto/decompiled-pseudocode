/*
 * XREFs of ?CI_GetClrVal@@YAKPEAGK@Z @ 0x1400E2370
 * Callers:
 *     xxxODI_ColorInit @ 0x1400E0F30 (xxxODI_ColorInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CI_GetClrVal(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  unsigned int *v4; // r8
  int i; // r9d
  char v6; // dl
  unsigned __int16 v7; // r10
  unsigned int v9; // [rsp+8h] [rbp+8h] BYREF

  v2 = *a1;
  v9 = 0;
  if ( !v2 )
    return a2;
  v4 = &v9;
  for ( i = 0; i < 3; ++i )
  {
    while ( v2 && (unsigned __int16)(v2 - 48) > 9u )
      v2 = *++a1;
    v2 = *a1;
    if ( !*a1 )
      return a2;
    v6 = 0;
    if ( v2 >= 0x30u )
    {
      v7 = *a1;
      do
      {
        if ( v7 > 0x39u )
          break;
        v6 = *(_BYTE *)a1++ + 10 * v6 - 48;
        v2 = *a1;
        v7 = *a1;
      }
      while ( *a1 >= 0x30u );
    }
    *(_BYTE *)v4 = v6;
    v4 = (unsigned int *)((char *)v4 + 1);
  }
  *(_BYTE *)v4 = 0;
  return v9;
}
