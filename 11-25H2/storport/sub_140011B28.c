/*
 * XREFs of sub_140011B28 @ 0x140011B28
 * Callers:
 *     sub_140010F80 @ 0x140010F80 (sub_140010F80.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140011B28(__int64 a1)
{
  char v1; // al
  int v3; // ecx
  _BYTE *v5; // r8
  char v6; // di
  unsigned int v7; // esi
  unsigned int v8; // r11d
  unsigned int *v9; // rbx
  __int64 v10; // rax
  _BYTE *v11; // rbp
  unsigned __int64 v12; // r10
  char v13; // cl

  v1 = *(_BYTE *)(a1 + 2);
  if ( v1 == 40 )
    v3 = *(_DWORD *)(a1 + 20);
  else
    v3 = *(unsigned __int8 *)(a1 + 2);
  if ( v3 )
    return 0;
  if ( v1 != 40 )
  {
    v5 = (_BYTE *)(a1 + 72);
    goto LABEL_14;
  }
  v5 = 0LL;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
  {
    v7 = *(_DWORD *)(a1 + 56);
    v8 = 0;
    if ( v7 )
    {
      v9 = (unsigned int *)(a1 + 120);
      do
      {
        v10 = *v9;
        v11 = v5;
        if ( (unsigned int)v10 >= 0x80 )
        {
          v12 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v10 < (unsigned int)v12 )
          {
            if ( *(_DWORD *)(v10 + a1) == 64 )
            {
              if ( v10 + 40 <= v12 )
              {
                if ( *(_BYTE *)(v10 + a1 + 10) )
                  v5 = (_BYTE *)(v10 + a1 + 24);
                break;
              }
            }
            else if ( *(_DWORD *)(v10 + a1) == 65 )
            {
              if ( v10 + 56 <= v12 )
              {
                v6 = 1;
                if ( !*(_BYTE *)(v10 + a1 + 10) )
                  break;
                v5 = (_BYTE *)(v10 + a1 + 24);
              }
            }
            else if ( *(_DWORD *)(v10 + a1) == 66 && v10 + 40 <= v12 )
            {
              v5 = (_BYTE *)(v10 + a1 + 32);
              if ( !*(_DWORD *)(v10 + a1 + 12) )
                v5 = v11;
              break;
            }
            if ( v6 )
              break;
          }
        }
        ++v8;
        ++v9;
      }
      while ( v8 < v7 );
    }
  }
LABEL_14:
  if ( v5 && ((v13 = *v5, ((*v5 - 8) & 0x5D) == 0) || v13 == 37 || v13 == -98 || (unsigned __int8)(v13 - 94) <= 1u) )
    return 1;
  else
    return 0;
}
