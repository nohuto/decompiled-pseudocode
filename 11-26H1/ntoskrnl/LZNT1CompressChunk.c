/*
 * XREFs of LZNT1CompressChunk @ 0x140C08B40
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x140C08A10 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  unsigned __int64 v8; // rbp
  char v9; // dl
  _WORD *v10; // r10
  __int64 *v11; // r9
  char *v12; // rcx
  _BYTE *v13; // r15
  _BYTE *v14; // rbx
  _BYTE *v15; // rsi
  unsigned int v16; // r11d
  int v17; // edi
  __int64 v18; // rcx
  int v19; // r14d
  int *v20; // r12
  int v21; // eax
  __int16 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rax
  bool v27; // cf
  int v28; // eax
  int v29; // esi
  unsigned int v31; // ebp
  __int64 *v32; // [rsp+20h] [rbp-58h]
  unsigned __int64 v33; // [rsp+28h] [rbp-50h]
  char v34; // [rsp+88h] [rbp+10h]

  v8 = a3;
  v9 = 0;
  v10 = a4;
  v11 = &LZNT1Formats;
  v34 = 0;
  v32 = &LZNT1Formats;
  if ( (unsigned __int64)(a2 + 4096) < a3 )
    v8 = (unsigned __int64)(a2 + 4096);
  v12 = (char *)a5;
  v13 = v10 + 1;
  v14 = a2;
  v15 = (char *)v10 + 3;
  if ( (unsigned __int64)v10 + 4095 < a5 )
    v12 = (char *)v10 + 4095;
  v16 = 0;
  v33 = (unsigned __int64)v12;
  LOBYTE(v17) = 0;
  v18 = a7;
  LOBYTE(v19) = 0;
  *(_QWORD *)a7 = a2;
  *(_QWORD *)(a7 + 8) = v8;
  *(_DWORD *)(a7 + 16) = 4098;
  if ( (unsigned __int64)a2 >= v8 )
  {
LABEL_24:
    if ( (unsigned __int64)v13 >= v33 )
      LODWORD(v15) = (_DWORD)v15 - 1;
    else
      *v13 = v17;
    v29 = (_DWORD)v15 - (_DWORD)v10;
    *a6 = v29;
    *v10 = (v29 - 3) & 0xFFF | 0xB000;
    if ( !v9 )
      return 279;
    return v16;
  }
  v20 = &dword_140C1561C;
  do
  {
    while ( 1 )
    {
      if ( &a2[*v20] < v14 )
      {
        do
        {
          v28 = *((_DWORD *)v11 + 7);
          v11 = (__int64 *)((char *)v11 + 20);
          *(_DWORD *)(v18 + 16) = v28;
          v20 = (int *)v11 + 3;
        }
        while ( &a2[*((unsigned int *)v11 + 3)] < v14 );
        v32 = v11;
      }
      if ( (unsigned __int64)(v14 + 3) > v8 )
        goto LABEL_11;
      v21 = guard_dispatch_icall_no_overrides((__int64)v14, v18);
      v22 = v21;
      if ( !v21 )
      {
        v9 = v34;
        v11 = v32;
LABEL_11:
        if ( (unsigned __int64)v15 >= v33 )
          goto LABEL_22;
        v9 |= *v14;
        *v15 = *v14;
        v23 = 1LL;
        v24 = 1LL;
        v34 = v9;
        v17 = (unsigned __int8)v17 & ~(1 << v19);
        goto LABEL_13;
      }
      if ( (unsigned __int64)(v15 + 1) >= v33 )
        goto LABEL_22;
      v11 = v32;
      v24 = v21;
      v23 = 2LL;
      *(_WORD *)v15 = (v22 - 3) | (((_WORD)v14 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v32 + 16));
      v17 = (unsigned __int8)v17 | (1 << v19);
      v9 = v34;
LABEL_13:
      v25 = &v14[v24];
      v26 = &v15[v23];
      v14 = v25;
      v15 = v26;
      v19 = ((_BYTE)v19 + 1) & 7;
      if ( v19 )
        break;
      v27 = (unsigned __int64)v25 < v8;
      if ( (unsigned __int64)v25 >= v8 )
        goto LABEL_21;
      v18 = a7;
      v15 = v26 + 1;
      *v13 = v17;
      LOBYTE(v17) = 0;
      v13 = v26;
    }
    v27 = (unsigned __int64)v25 < v8;
LABEL_21:
    v18 = a7;
  }
  while ( v27 );
LABEL_22:
  if ( (unsigned __int64)v14 >= v8 )
  {
    v9 = v34;
    v16 = 0;
    v10 = a4;
    goto LABEL_24;
  }
  v31 = v8 - (_DWORD)a2;
  if ( (unsigned __int64)a4 + v31 + 2 > a5 )
    return 3221225507LL;
  memmove(a4 + 1, a2, v31);
  *a6 = v31 + 2;
  *a4 = (v31 - 1) & 0xFFF | 0x3000;
  return 0LL;
}
