/*
 * XREFs of RtlpCopyXStateChunk @ 0x14040C07C
 * Callers:
 *     RtlpCopyExtendedContext @ 0x14040BA10 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x140A4D9B0 (RtlCopyContext.c)
 *     RtlpWow64CtxFromAmd64 @ 0x140A660D0 (RtlpWow64CtxFromAmd64.c)
 *     RtlpWow64CtxToAmd64 @ 0x140AA9614 (RtlpWow64CtxToAmd64.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r10
  unsigned int v6; // edi
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  _QWORD *v10; // r15
  unsigned __int64 *v11; // r9
  unsigned __int64 v12; // rsi
  __int64 v13; // r12
  unsigned int v14; // ebx
  unsigned __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // r15
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v21; // rdx
  unsigned int v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 *v24; // [rsp+30h] [rbp-48h]
  _QWORD *v25; // [rsp+38h] [rbp-40h]
  unsigned int v27; // [rsp+90h] [rbp+18h]
  char v28; // [rsp+A0h] [rbp+28h]

  v5 = a1;
  v27 = *(_DWORD *)(a3 + 20);
  v6 = 64;
  v7 = 64;
  v8 = 64;
  v9 = 64;
  v22 = *(_DWORD *)(a5 + 20);
  if ( v27 < 0x40 || *(_DWORD *)(a5 + 20) < 0x40u )
    return 2147483653LL;
  v10 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v11 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v25 = v10;
  v24 = v11;
  v12 = *v10 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & v12) != 0 )
    return 3221225485LL;
  v13 = 0LL;
  v23 = 0LL;
  v14 = 2;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
  {
    v28 = 0;
LABEL_13:
    memset_0(v11, 0, 0x40uLL);
    v11 = v24;
    v19 = v12;
    v5 = a1;
    v17 = v13;
    v16 = v23;
    v24[1] = v13;
    goto LABEL_14;
  }
  v13 = v10[1];
  v15 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0] | 0x8000000000000003uLL;
  v28 = 1;
  v16 = MEMORY[0xFFFFF780000005F8];
  v23 = MEMORY[0xFFFFF780000005F8];
  if ( (~v15 & v13) != 0 || v13 >= 0 || (~v13 & v12) != 0 )
    return 3221225485LL;
  v17 = v11[1];
  v18 = *v11;
  if ( (v5 & 2) != 0 || v17 >= 0 || (v17 & v15) != v17 || (v18 & v17) != v18 )
    goto LABEL_13;
  v12 &= v17;
  v19 = v12 | v18 & ~v13;
LABEL_14:
  *v11 = v19;
  if ( (v5 & 1) == 0 )
  {
    while ( v12 && v14 < 0x40 )
    {
      if ( v28 )
      {
        v21 = 1LL << v14;
        if ( ((1LL << v14) & v13) != 0 )
        {
          v6 = v7;
          if ( (v21 & v16) != 0 )
            v6 = (v7 + 63) & 0xFFFFFFC0;
          v7 = v6 + *(_DWORD *)(4LL * v14 - 0x87FFFFFF9FCLL);
        }
        if ( (v21 & v17) != 0 )
        {
          v8 = v9;
          if ( (v21 & v16) != 0 )
            v8 = (v9 + 63) & 0xFFFFFFC0;
          v9 = v8 + *(_DWORD *)(4LL * v14 - 0x87FFFFFF9FCLL);
        }
      }
      else
      {
        v6 = *(_DWORD *)(8LL * v14 - 0x87FFFFFFC10LL) - 512;
        v8 = v6;
        v7 = v6 + *(_DWORD *)(8LL * v14 - 0x87FFFFFFC0CLL);
        v9 = v7;
      }
      if ( _bittest64((const __int64 *)&v12, v14) )
      {
        if ( v9 > v27 || v7 > v22 )
          return 2147483653LL;
        memmove((char *)v11 + v8, (char *)v25 + v6, v7 - v6);
        v11 = v24;
        _bittestandreset64((__int64 *)&v12, v14);
      }
      v16 = v23;
      ++v14;
    }
  }
  return 0LL;
}
