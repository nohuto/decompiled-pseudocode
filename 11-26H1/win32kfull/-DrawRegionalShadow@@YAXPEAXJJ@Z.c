/*
 * XREFs of ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1400839F0
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1400833C0 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawRegionalShadow(char *a1, int a2, int a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // rbx
  char *v6; // r9
  char *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx

  v3 = a2;
  if ( a3 > 0 )
  {
    v4 = (unsigned int)a3;
    v5 = 4LL * -a2;
    v6 = &a1[4 * a2 * (a3 - 1)];
    do
    {
      if ( v3 > 0 )
      {
        v7 = v6;
        v8 = v3;
        do
        {
          v9 = *(_DWORD *)v7;
          if ( *(_DWORD *)v7 == 16579836 )
          {
            *(_DWORD *)v7 = 50331648;
          }
          else
          {
            switch ( v9 )
            {
              case 15856113:
                *(_DWORD *)v7 = 234881024;
                break;
              case 13948116:
                *(_DWORD *)v7 = 721420288;
                break;
              case 11250603:
                *(_DWORD *)v7 = 1409286144;
                break;
              case 9342606:
                *(_DWORD *)v7 = 1895825408;
                break;
            }
          }
          v7 += 4;
          --v8;
        }
        while ( v8 );
      }
      v6 += v5;
      --v4;
    }
    while ( v4 );
  }
}
