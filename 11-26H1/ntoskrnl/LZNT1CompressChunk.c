/*
 * XREFs of LZNT1CompressChunk @ 0x140C02930
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x140C02800 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  unsigned __int64 v7; // rbp
  char *v8; // r11
  char v9; // r9
  __int64 *v10; // rcx
  char *v12; // rdx
  char *v13; // rbx
  unsigned int v14; // r15d
  int v15; // esi
  char *v16; // r10
  char *v17; // rdi
  int v18; // r14d
  int *v19; // r15
  int v20; // eax
  __int16 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  char *v24; // rax
  bool v25; // cf
  int v26; // edi
  int v28; // eax
  unsigned int v29; // ebp
  char *v30; // rcx
  char *v31; // [rsp+20h] [rbp-58h]
  unsigned __int64 v32; // [rsp+28h] [rbp-50h]
  char v33; // [rsp+88h] [rbp+10h]
  __int64 *v34; // [rsp+90h] [rbp+18h]

  v7 = a3;
  v8 = a4;
  v9 = 0;
  v10 = &LZNT1Formats;
  v34 = &LZNT1Formats;
  v33 = 0;
  if ( (unsigned __int64)(a2 + 4096) < a3 )
    v7 = (unsigned __int64)(a2 + 4096);
  v12 = (char *)a5;
  v13 = a2;
  if ( (unsigned __int64)(v8 + 4095) < a5 )
    v12 = v8 + 4095;
  *(_QWORD *)a7 = a2;
  v32 = (unsigned __int64)v12;
  v14 = 0;
  v31 = v8 + 2;
  LOBYTE(v15) = 0;
  *(_QWORD *)(a7 + 8) = v7;
  *(_DWORD *)(a7 + 16) = 4098;
  v16 = v8 + 2;
  v17 = v8 + 3;
  LOBYTE(v18) = 0;
  if ( (unsigned __int64)a2 >= v7 )
  {
LABEL_17:
    if ( v16 >= v12 )
      LODWORD(v17) = (_DWORD)v17 - 1;
    else
      *v16 = v15;
    v26 = (_DWORD)v17 - (_DWORD)v8;
    *a6 = v26;
    *(_WORD *)v8 = (v26 - 3) & 0xFFF | 0xB000;
    if ( !v33 )
      return 279;
    return v14;
  }
  v19 = &dword_140C0F3FC;
  while ( 1 )
  {
    if ( &a2[*v19] < v13 )
    {
      do
      {
        v28 = *((_DWORD *)v10 + 7);
        v10 = (__int64 *)((char *)v10 + 20);
        *(_DWORD *)(a7 + 16) = v28;
        v19 = (int *)v10 + 3;
      }
      while ( &a2[*((unsigned int *)v10 + 3)] < v13 );
      v34 = v10;
    }
    if ( (unsigned __int64)(v13 + 3) > v7 )
      goto LABEL_11;
    v20 = guard_dispatch_icall_no_overrides((__int64)v13, a7);
    v12 = (char *)v32;
    v21 = v20;
    if ( v20 )
      break;
    v9 = v33;
LABEL_11:
    if ( v17 >= v12 )
      goto LABEL_26;
    v9 |= *v13;
    *v17 = *v13;
    v22 = 1LL;
    v23 = 1LL;
    v33 = v9;
    v15 = (unsigned __int8)v15 & ~(1 << v18);
LABEL_13:
    v24 = &v17[v22];
    v13 += v23;
    v17 = v24;
    v18 = ((_BYTE)v18 + 1) & 7;
    if ( v18 )
    {
      v25 = (unsigned __int64)v13 < v7;
      goto LABEL_15;
    }
    v25 = (unsigned __int64)v13 < v7;
    if ( (unsigned __int64)v13 < v7 )
    {
      v30 = v31;
      v17 = v24 + 1;
      v31 = v24;
      *v30 = v15;
      LOBYTE(v15) = 0;
      v10 = v34;
    }
    else
    {
LABEL_15:
      v10 = v34;
      if ( !v25 )
        goto LABEL_16;
    }
  }
  if ( (unsigned __int64)(v17 + 1) < v32 )
  {
    v9 = v33;
    v23 = v20;
    v22 = 2LL;
    *(_WORD *)v17 = (v21 - 3) | (((_WORD)v13 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v34 + 16));
    v15 = (unsigned __int8)v15 | (1 << v18);
    v12 = (char *)v32;
    goto LABEL_13;
  }
LABEL_26:
  if ( (unsigned __int64)v13 >= v7 )
  {
LABEL_16:
    v16 = v31;
    v14 = 0;
    v8 = a4;
    goto LABEL_17;
  }
  v29 = v7 - (_DWORD)a2;
  if ( (unsigned __int64)&a4[v29 + 2] > a5 )
    return 3221225507LL;
  memmove(a4 + 2, a2, v29);
  *a6 = v29 + 2;
  *(_WORD *)a4 = (v29 - 1) & 0xFFF | 0x3000;
  return 0LL;
}
