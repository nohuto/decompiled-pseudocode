/*
 * XREFs of RaidIsUnresponsiveBlockedCmd @ 0x1400134E4
 * Callers:
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsUnresponsiveBlockedCmd(__int64 a1)
{
  int v2; // ecx
  int v3; // eax
  _BYTE *v4; // r9
  char v5; // bl
  unsigned int v6; // edi
  __int64 i; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // r11
  __int64 v10; // r8
  int v11; // ecx
  int v13; // ecx
  _BYTE *v14; // rcx

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
    goto LABEL_14;
  }
  v4 = 0LL;
  v5 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
  {
    v6 = *(_DWORD *)(a1 + 56);
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      v8 = *(unsigned int *)(a1 + 4 * i + 120);
      if ( (unsigned int)v8 >= 0x80 )
      {
        v9 = *(unsigned int *)(a1 + 16);
        if ( (unsigned int)v8 < (unsigned int)v9 )
        {
          v10 = (unsigned int)v8;
          v11 = *(_DWORD *)(v8 + a1) - 64;
          if ( v11 )
          {
            v13 = v11 - 1;
            if ( v13 )
            {
              if ( v13 == 1 && v10 + 40 <= v9 )
              {
                v14 = (_BYTE *)(v10 + a1 + 32);
                if ( !*(_DWORD *)(v10 + a1 + 12) )
                  v14 = v4;
                v4 = v14;
                break;
              }
            }
            else if ( v10 + 56 <= v9 )
            {
              v5 = 1;
              if ( !*(_BYTE *)(v10 + a1 + 10) )
                break;
              v4 = (_BYTE *)(v10 + a1 + 24);
            }
          }
          else if ( v10 + 40 <= v9 )
          {
            if ( *(_BYTE *)(v10 + a1 + 10) )
              v4 = (_BYTE *)(v10 + a1 + 24);
            break;
          }
          if ( v5 )
            break;
        }
      }
    }
  }
LABEL_14:
  if ( !v4 )
    return 1;
  return *v4 != 18 && *v4 != 0xA0;
}
