/*
 * XREFs of sub_14008ED30 @ 0x14008ED30
 * Callers:
 *     sub_140112BBC @ 0x140112BBC (sub_140112BBC.c)
 *     sub_14019B3C8 @ 0x14019B3C8 (sub_14019B3C8.c)
 *     sub_14019CB58 @ 0x14019CB58 (sub_14019CB58.c)
 * Callees:
 *     sub_1400886B0 @ 0x1400886B0 (sub_1400886B0.c)
 *     sub_14008F4F4 @ 0x14008F4F4 (sub_14008F4F4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14008ED30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // r15
  bool v9; // r14
  bool v10; // bl
  _QWORD *v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  int v20; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-50h] BYREF
  __int128 v22; // [rsp+30h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 176);
  v21 = 0LL;
  v20 = 0;
  v6 = v3 + 104;
  v7 = *(_QWORD *)(v3 + 104);
  v8 = (_QWORD *)(v3 + 120);
  v22 = 0LL;
  if ( !v7 )
    v7 = *(_QWORD *)(v3 + 112) - *((_QWORD *)&v22 + 1);
  v9 = v7 != 0;
  v10 = *v8 != 0LL;
  if ( !v7 && !*v8 || (*(_BYTE *)(v3 + 24) & 8) == 0 )
  {
    sub_1400886B0(a1, v3, &v21, &v20);
    if ( v20 == 16 )
    {
      v11 = v21;
LABEL_8:
      v12 = 36;
      v13 = 16LL;
      goto LABEL_13;
    }
  }
  if ( v9 )
  {
    v11 = (_QWORD *)v6;
    goto LABEL_8;
  }
  if ( !v10 )
  {
    v12 = 68;
    v14 = **(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 592LL);
    *(_BYTE *)(a3 + 3) = a0123456789abcd[**(_WORD **)(*(_QWORD *)(a1 + 16) + 592LL) & 0xF];
    *(_BYTE *)(a3 + 2) = a0123456789abcd[(unsigned __int8)v14 >> 4];
    *(_BYTE *)(a3 + 1) = a0123456789abcd[((unsigned int)v14 >> 8) & 0xF];
    *(_BYTE *)a3 = a0123456789abcd[v14 >> 12];
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL);
    *(_OWORD *)(a3 + 4) = *(_OWORD *)(v15 + 24);
    *(_OWORD *)(a3 + 20) = *(_OWORD *)(v15 + 40);
    *(_QWORD *)(a3 + 36) = *(_QWORD *)(v15 + 56);
    v16 = *(unsigned __int16 *)(a1 + 56);
    *(_BYTE *)(a3 + 47) = a0123456789abcd[*(_WORD *)(a1 + 56) & 0xF];
    *(_BYTE *)(a3 + 46) = a0123456789abcd[(unsigned __int8)v16 >> 4];
    v17 = a0123456789abcd[((unsigned int)v16 >> 8) & 0xF];
    *(_BYTE *)(a3 + 44) = a0123456789abcd[v16 >> 12];
    *(_BYTE *)(a3 + 45) = v17;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL);
    *(_OWORD *)(a3 + 48) = *(_OWORD *)(v18 + 4);
    *(_DWORD *)(a3 + 64) = *(_DWORD *)(v18 + 20);
    return v12;
  }
  v12 = 20;
  v11 = v8;
  v13 = 8LL;
LABEL_13:
  if ( (int)sub_14008F4F4(v13, v11, a3, a3) < 0 )
    return 0;
  return v12;
}
