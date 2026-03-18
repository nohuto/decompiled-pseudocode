/*
 * XREFs of vAlphaPerPixelOnly @ 0x1400F1090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vAlphaPerPixelOnly(unsigned int *a1, __int64 a2, int a3)
{
  int v3; // r10d
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // r11d

  v3 = a3;
  if ( a3 )
  {
    v4 = a2 - (_QWORD)a1;
    do
    {
      v5 = *(unsigned int *)((char *)a1 + v4);
      --v3;
      if ( HIBYTE(v5) )
      {
        if ( HIBYTE(v5) != 0xFF )
        {
          v7 = *a1;
          v6 = HIBYTE(v5);
          v5 += (((255 - v6) * ((v7 >> 8) & 0xFF00FF)
                + 8388736
                + ((((255 - v6) * ((v7 >> 8) & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) & 0xFF00FF00)
              + ((((255 - v6) * (v7 & 0xFF00FF) + 8388736 + ((((255 - v6) * (v7 & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF);
        }
        *a1 = v5;
      }
      ++a1;
    }
    while ( v3 );
  }
}
