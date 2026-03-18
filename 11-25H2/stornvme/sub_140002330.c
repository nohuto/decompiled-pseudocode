/*
 * XREFs of sub_140002330 @ 0x140002330
 * Callers:
 *     sub_140001040 @ 0x140001040 (sub_140001040.c)
 *     sub_1400012F0 @ 0x1400012F0 (sub_1400012F0.c)
 *     sub_140001580 @ 0x140001580 (sub_140001580.c)
 *     sub_140001810 @ 0x140001810 (sub_140001810.c)
 *     sub_140001940 @ 0x140001940 (sub_140001940.c)
 *     sub_140001B40 @ 0x140001B40 (sub_140001B40.c)
 *     sub_140001FD0 @ 0x140001FD0 (sub_140001FD0.c)
 *     sub_1400020E0 @ 0x1400020E0 (sub_1400020E0.c)
 *     sub_1400024C0 @ 0x1400024C0 (sub_1400024C0.c)
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 *     sub_140003700 @ 0x140003700 (sub_140003700.c)
 *     sub_140004020 @ 0x140004020 (sub_140004020.c)
 *     sub_140005770 @ 0x140005770 (sub_140005770.c)
 *     sub_140019F10 @ 0x140019F10 (sub_140019F10.c)
 *     sub_14002166C @ 0x14002166C (sub_14002166C.c)
 *     sub_140021754 @ 0x140021754 (sub_140021754.c)
 *     sub_1400217C8 @ 0x1400217C8 (sub_1400217C8.c)
 *     sub_1400219C8 @ 0x1400219C8 (sub_1400219C8.c)
 *     sub_140023450 @ 0x140023450 (sub_140023450.c)
 *     sub_1400235E4 @ 0x1400235E4 (sub_1400235E4.c)
 *     sub_1400279C4 @ 0x1400279C4 (sub_1400279C4.c)
 *     sub_140027B40 @ 0x140027B40 (sub_140027B40.c)
 *     sub_14002E000 @ 0x14002E000 (sub_14002E000.c)
 * Callees:
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140002330(__int64 a1, char a2, char a3, unsigned __int8 a4)
{
  _BYTE *v4; // r10
  unsigned __int8 v5; // r11
  char v6; // r9
  __int64 result; // rax
  __int64 v8; // rbp
  unsigned int *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // edi
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int16 v19; // [rsp+30h] [rbp-18h]

  *(_BYTE *)(a1 + 3) = a2;
  v19 = 0;
  v4 = 0LL;
  v18 = 0LL;
  v5 = 0;
  WORD6(v18) = a4;
  LOBYTE(v18) = -16;
  BYTE2(v18) = a3 & 0xF;
  v6 = 0;
  result = *(unsigned __int8 *)(a1 + 2);
  v8 = 0LL;
  BYTE7(v18) = 10;
  if ( (_BYTE)result == 40 )
  {
    if ( *(_DWORD *)(a1 + 20) )
      return result;
    result = *(unsigned int *)(a1 + 56);
    if ( !(_DWORD)result )
      return result;
    v10 = (unsigned int *)(a1 + 120);
    v11 = (unsigned int)result;
    while ( 1 )
    {
      result = *v10;
      if ( (unsigned int)result < 0x80 || (unsigned int)result > *(_DWORD *)(a1 + 16) )
        goto LABEL_13;
      v12 = a1 + result;
      result = (unsigned int)(*(_DWORD *)(a1 + result) - 64);
      if ( !(_DWORD)result )
        break;
      result = (unsigned int)(result - 1);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == 1 )
      {
        v8 = *(_QWORD *)(v12 + 24);
LABEL_12:
        v5 = *(_BYTE *)(v12 + 9);
        v4 = (_BYTE *)(v12 + 8);
        v6 = 1;
      }
LABEL_13:
      ++v10;
      if ( !--v11 )
      {
        if ( v6 )
        {
LABEL_18:
          if ( v4 )
            *v4 = 2;
          if ( v8 && v5 )
          {
            v13 = v5 <= 0x12u ? v5 : 18;
            v14 = v5;
            result = sub_140032980(v8, &v18, v13);
            *(_BYTE *)(a1 + 3) |= 0x80u;
            if ( v14 > v13 )
            {
              v15 = v14 - v13;
              v16 = v13 + v8;
              if ( (v15 & 3) != 0 )
              {
                if ( v15 )
                  return sub_140032C80(v16, 0LL, v15);
              }
              else
              {
                v17 = v15 >> 2;
                if ( v17 )
                  return sub_140032C80(v16, 0LL, 4LL * v17);
              }
            }
          }
        }
        return result;
      }
    }
    v8 = *(_QWORD *)(v12 + 16);
    goto LABEL_12;
  }
  if ( !(_BYTE)result )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v4 = (_BYTE *)(a1 + 4);
    v5 = *(_BYTE *)(a1 + 11);
    goto LABEL_18;
  }
  return result;
}
