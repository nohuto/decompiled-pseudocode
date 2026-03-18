/*
 * XREFs of sub_14002A6B0 @ 0x14002A6B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 */

__int64 __fastcall sub_14002A6B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rbp
  _BYTE *v7; // rsi
  unsigned int v8; // r14d
  unsigned __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx

  result = sub_140005000(a2);
  v4 = result;
  if ( v5 && *(_BYTE *)(v3 + 3) == 1 )
  {
    v6 = *(_QWORD *)(result + 4200);
    if ( v6 && (v7 = *(_BYTE **)(result + 4160)) != 0LL )
    {
      v8 = 0;
      v9 = (unsigned __int64)(v7 + 2);
      if ( *v7 )
      {
        while ( 1 )
        {
          if ( v9 >= (unsigned __int64)(v7 + 4096) || !v9 )
            goto LABEL_28;
          v10 = *(_DWORD *)v9 & 0x3F;
          if ( v10 == 1 )
            break;
          switch ( v10 )
          {
            case 2:
              v11 = 64LL;
              if ( *(_WORD *)(v9 + 2) <= 0x40u )
                v11 = *(unsigned __int16 *)(v9 + 2);
              v12 = v6 + 232;
              goto LABEL_24;
            case 3:
              v11 = 64LL;
              if ( *(_WORD *)(v9 + 2) <= 0x40u )
                v11 = *(unsigned __int16 *)(v9 + 2);
              v12 = v6 + 296;
              goto LABEL_24;
            case 4:
              v11 = 64LL;
              if ( *(_WORD *)(v9 + 2) <= 0x40u )
                v11 = *(unsigned __int16 *)(v9 + 2);
              v12 = v6 + 360;
              goto LABEL_24;
          }
LABEL_25:
          ++v8;
          v9 += *(unsigned __int16 *)(v9 + 2) + 4LL;
          result = (unsigned __int8)*v7;
          if ( v8 >= (unsigned int)result )
            goto LABEL_28;
        }
        v11 = 64LL;
        if ( *(_WORD *)(v9 + 2) <= 0x40u )
          v11 = *(unsigned __int16 *)(v9 + 2);
        v12 = v6 + 168;
LABEL_24:
        sub_140032980(v12, v9 + 4, v11);
        goto LABEL_25;
      }
    }
    else
    {
      *(_BYTE *)(v3 + 3) = 40;
    }
  }
LABEL_28:
  *(_BYTE *)(v4 + 4225) |= 8u;
  *(_QWORD *)(v4 + 4200) = 0LL;
  return result;
}
