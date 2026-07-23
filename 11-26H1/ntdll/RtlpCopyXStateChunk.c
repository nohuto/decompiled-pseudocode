/*
 * XREFs of RtlpCopyXStateChunk @ 0x1800C14F8
 * Callers:
 *     RtlpWow64CtxFromAmd64 @ 0x1800C0580 (RtlpWow64CtxFromAmd64.c)
 *     RtlCopyContext @ 0x1800C0D00 (RtlCopyContext.c)
 *     RtlpCopyExtendedContext @ 0x180146300 (RtlpCopyExtendedContext.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r11d
  unsigned int v7; // edi
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  unsigned int v11; // r10d
  _QWORD *v12; // r12
  unsigned __int64 *v13; // r9
  unsigned __int64 v14; // rsi
  __int64 v15; // r15
  unsigned int v16; // ebx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // r12
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v23; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v24; // [rsp+28h] [rbp-50h]
  _QWORD *v25; // [rsp+30h] [rbp-48h]
  char v26; // [rsp+80h] [rbp+8h]
  unsigned int v27; // [rsp+90h] [rbp+18h]
  unsigned int v28; // [rsp+A0h] [rbp+28h]

  v6 = *(_DWORD *)(a3 + 20);
  v7 = 64;
  v27 = v6;
  v8 = 64;
  v9 = 64;
  v10 = 64;
  v11 = *(_DWORD *)(a5 + 20);
  v28 = v11;
  if ( v6 < 0x40 || v11 < 0x40 )
    return 2147483653LL;
  v12 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v13 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v25 = v12;
  v14 = *v12 & 0xFFFFFFFFFFFFFFFCuLL;
  v24 = v13;
  if ( (~(MEMORY[0x7FFE05F0] | MEMORY[0x7FFE03D8]) & v14) != 0 )
    return 3221225485LL;
  v15 = 0LL;
  v23 = 0LL;
  v16 = 2;
  if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
  {
    v26 = 0;
    goto LABEL_12;
  }
  v15 = v12[1];
  v17 = MEMORY[0x7FFE05F8];
  v18 = MEMORY[0x7FFE05F0] | MEMORY[0x7FFE03D8] | 0x8000000000000003uLL;
  v26 = 1;
  v23 = MEMORY[0x7FFE05F8];
  if ( (~v18 & v15) != 0 || v15 >= 0 || (~v15 & v14) != 0 )
    return 3221225485LL;
  v19 = v13[1];
  if ( v19 < 0 && (v19 & v18) == v19 && (*v13 & v19) == *v13 )
  {
    v14 &= v19;
    v20 = v14 | *v13 & ~v15;
    goto LABEL_13;
  }
LABEL_12:
  memset_thunk_772440563353939046(v13, 0, 0x40uLL);
  v13 = v24;
  v20 = v14;
  v17 = v23;
  v19 = v15;
  v11 = v28;
  v6 = v27;
  v24[1] = v15;
LABEL_13:
  *v13 = v20;
  while ( v14 && v16 < 0x40 )
  {
    if ( v26 )
    {
      v21 = 1LL << v16;
      if ( ((1LL << v16) & v15) != 0 )
      {
        v7 = v8;
        if ( (v21 & v17) != 0 )
          v7 = (v8 + 63) & 0xFFFFFFC0;
        v8 = v7 + *(_DWORD *)(4LL * v16 + 0x7FFE0604);
      }
      if ( (v21 & v19) != 0 )
      {
        v9 = v10;
        if ( (v21 & v17) != 0 )
          v9 = (v10 + 63) & 0xFFFFFFC0;
        v10 = v9 + *(_DWORD *)(4LL * v16 + 0x7FFE0604);
      }
    }
    else
    {
      v7 = *(_DWORD *)(8LL * v16 + 0x7FFE03F0) - 512;
      v8 = v7 + *(_DWORD *)(8LL * v16 + 0x7FFE03F4);
      v9 = v7;
      v10 = v8;
    }
    if ( _bittest64((const __int64 *)&v14, v16) )
    {
      if ( v10 > v6 || v8 > v11 )
        return 2147483653LL;
      memmove((char *)v13 + v9, (char *)v25 + v7, v8 - v7);
      v13 = v24;
      _bittestandreset64((__int64 *)&v14, v16);
    }
    v17 = v23;
    ++v16;
    v11 = v28;
    v6 = v27;
  }
  return 0LL;
}
