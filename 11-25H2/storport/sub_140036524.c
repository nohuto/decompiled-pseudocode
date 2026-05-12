/*
 * XREFs of sub_140036524 @ 0x140036524
 * Callers:
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140036524(__int64 a1)
{
  int v2; // ecx
  int v3; // eax
  _BYTE *v4; // r8
  char v5; // di
  unsigned int v6; // esi
  unsigned int v7; // r11d
  unsigned int *v8; // rbx
  __int64 v9; // rax
  _BYTE *v10; // rbp
  unsigned __int64 v11; // r10

  v2 = *(unsigned __int8 *)(a1 + 2);
  if ( (_BYTE)v2 == 40 )
    v3 = *(_DWORD *)(a1 + 20);
  else
    v3 = v2;
  if ( v3 == 32 || v3 == 19 )
    return 0;
  if ( v3 )
    return 1;
  if ( (_BYTE)v2 != 40 )
  {
    v4 = (_BYTE *)(a1 + 72);
    goto LABEL_15;
  }
  v4 = 0LL;
  v5 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
  {
    v6 = *(_DWORD *)(a1 + 56);
    v7 = 0;
    if ( v6 )
    {
      v8 = (unsigned int *)(a1 + 120);
      do
      {
        v9 = *v8;
        v10 = v4;
        if ( (unsigned int)v9 >= 0x80 )
        {
          v11 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v9 < (unsigned int)v11 )
          {
            if ( *(_DWORD *)(v9 + a1) == 64 )
            {
              if ( v9 + 40 <= v11 )
              {
                if ( *(_BYTE *)(v9 + a1 + 10) )
                  v4 = (_BYTE *)(v9 + a1 + 24);
                break;
              }
            }
            else if ( *(_DWORD *)(v9 + a1) == 65 )
            {
              if ( v9 + 56 <= v11 )
              {
                v5 = 1;
                if ( !*(_BYTE *)(v9 + a1 + 10) )
                  break;
                v4 = (_BYTE *)(v9 + a1 + 24);
              }
            }
            else if ( *(_DWORD *)(v9 + a1) == 66 && v9 + 40 <= v11 )
            {
              v4 = (_BYTE *)(v9 + a1 + 32);
              if ( !*(_DWORD *)(v9 + a1 + 12) )
                v4 = v10;
              break;
            }
            if ( v5 )
              break;
          }
        }
        ++v7;
        ++v8;
      }
      while ( v7 < v6 );
    }
  }
LABEL_15:
  if ( !v4 )
    return 1;
  return *v4 != 18 && *v4 != 0xA0;
}
