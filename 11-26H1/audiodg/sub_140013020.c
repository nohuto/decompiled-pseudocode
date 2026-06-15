/*
 * XREFs of sub_140013020 @ 0x140013020
 * Callers:
 *     sub_1400135E0 @ 0x1400135E0 (sub_1400135E0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140013020(__int64 a1)
{
  int v1; // ebp
  unsigned int v2; // r11d
  unsigned __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v6; // r8
  signed __int64 v7; // r10
  __int128 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  __int128 v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // r8
  char result; // al

  v1 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 80) = 0LL;
  v2 = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  v3 = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 40) = v4;
  v5 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 48) = v5;
  while ( 1 )
  {
    v6 = v3;
    if ( v2 >= 0x100 )
      break;
    v7 = *(_QWORD *)(a1 + 16LL * v2 + 104) - v4;
    v8 = v7 * (__int128)v7;
    v9 = *(_QWORD *)(a1 + 16 * (v2 + 7LL)) - v5;
    if ( (__int64)v8 < 0 )
    {
      if ( *((_QWORD *)&v8 + 1) != -1LL )
        goto LABEL_16;
      v4 = *(_QWORD *)(a1 + 40);
      v5 = *(_QWORD *)(a1 + 48);
    }
    else if ( !is_mul_ok(v7, v7) )
    {
      goto LABEL_16;
    }
    v3 += v8;
    v10 = v6 >> 63;
    if ( (_DWORD)v10 == (unsigned int)((unsigned __int64)(v7 * v7) >> 32) >> 31
      && (_DWORD)v10 != v3 > 0x7FFFFFFFFFFFFFFFLL
      || ((v11 = v7 * (__int128)v9, (__int64)v11 < 0)
        ? (v12 = *((_QWORD *)&v11 + 1) == -1LL)
        : (v12 = *((_QWORD *)&v11 + 1) == 0LL),
          !v12
       || (*((_QWORD *)&v11 + 1) = *(_QWORD *)(a1 + 72),
           v13 = *((_QWORD *)&v11 + 1) + v11,
           *((_QWORD *)&v11 + 1) >>= 63,
           DWORD2(v11) == (unsigned int)((unsigned __int64)(v7 * v9) >> 32) >> 31)
       && DWORD2(v11) != v13 > 0x7FFFFFFFFFFFFFFFLL) )
    {
LABEL_16:
      result = 0;
      goto LABEL_18;
    }
    *(_QWORD *)(a1 + 56) += v7;
    *(_QWORD *)(a1 + 64) += v9;
    ++*(_DWORD *)(a1 + 8);
    ++v2;
    *(_QWORD *)(a1 + 72) = v13;
    *(_QWORD *)(a1 + 80) = v3;
  }
  result = 1;
LABEL_18:
  *(_DWORD *)(a1 + 8) = v1;
  return result;
}
