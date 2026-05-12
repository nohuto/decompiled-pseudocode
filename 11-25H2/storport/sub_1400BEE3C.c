/*
 * XREFs of sub_1400BEE3C @ 0x1400BEE3C
 * Callers:
 *     sub_1401ADB60 @ 0x1401ADB60 (sub_1401ADB60.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BEB00 @ 0x1400BEB00 (sub_1400BEB00.c)
 *     sub_14013CEA0 @ 0x14013CEA0 (sub_14013CEA0.c)
 */

__int64 __fastcall sub_1400BEE3C(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  char v5; // al
  _QWORD *v6; // rsi
  _QWORD *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int16 v10; // cx
  __int64 v11; // r8
  __int16 v12; // dx
  __int64 v13; // rcx
  char v14; // al
  __int64 result; // rax
  __int64 *v16; // rdx

  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(_BYTE *)(a2 + 93);
  if ( *(_BYTE *)(a2 + 92) )
  {
    if ( !v5 )
      return sub_1400BEB00(a2 + 32);
    *(_DWORD *)(a2 + 88) = 1;
  }
  else if ( v5 )
  {
    v6 = *(_QWORD **)(a2 + 80);
    if ( v6 )
    {
      v7 = *(_QWORD **)(v3 + 160);
      if ( v7 )
      {
        v8 = v6[1] - v7[1];
        if ( !v8 )
          v8 = v6[2] - v7[2];
        if ( !v8 && !(unsigned int)sub_14013CEA0((char *)v6 + 25, (char *)v7 + 25, 64LL) )
        {
          v9 = *(_QWORD *)((char *)v6 + 90) - *(_QWORD *)((char *)v7 + 90);
          if ( !v9 )
            v9 = *(_QWORD *)((char *)v6 + 98) - *(_QWORD *)((char *)v7 + 98);
          if ( v9 )
          {
            v10 = *(_WORD *)(v3 + 122);
            v11 = *(_QWORD *)(v3 + 128);
            v12 = *(_WORD *)(v3 + 120);
            *(_QWORD *)(v3 + 128) = *(_QWORD *)(a2 + 48);
            *(_WORD *)(v3 + 120) = *(_WORD *)(a2 + 40);
            *(_WORD *)(v3 + 122) = *(_WORD *)(a2 + 42);
            *(_QWORD *)(a2 + 48) = v11;
            *(_WORD *)(a2 + 40) = v12;
            *(_WORD *)(a2 + 42) = v10;
            v13 = *(_QWORD *)(v3 + 24);
            if ( v13 )
            {
              v14 = *(_BYTE *)(v13 + 108);
              if ( (v14 & 0x20) == 0 )
                *(_BYTE *)(v13 + 108) = v14 | 0x20;
            }
            *(_DWORD *)(a2 + 88) = 2;
          }
          return sub_1400BEB00(a2 + 32);
        }
      }
    }
    *(_BYTE *)(v3 + 504) |= 0x40u;
  }
  result = sub_1400143E0(64LL, 96LL, 1950703954LL, *(_QWORD *)(*a1 + 8LL));
  if ( result )
  {
    *(_OWORD *)result = *(_OWORD *)a2;
    *(_OWORD *)(result + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(result + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(result + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(result + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(result + 80) = *(_OWORD *)(a2 + 80);
    if ( *(_DWORD *)(a2 + 88) == 1 )
      a1[7] = 0LL;
    result += 16LL;
    v16 = (__int64 *)a1[16];
    if ( (_QWORD *)*v16 != a1 + 15 )
      __fastfail(3u);
    *(_QWORD *)result = a1 + 15;
    *(_QWORD *)(result + 8) = v16;
    *v16 = result;
    a1[16] = result;
  }
  return result;
}
