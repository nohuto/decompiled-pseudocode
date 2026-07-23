/*
 * XREFs of RtlCopyXStateArea @ 0x140505DF0
 * Callers:
 *     KeContextFromKframes @ 0x1403D7680 (KeContextFromKframes.c)
 *     KxContextToKframes @ 0x1403D82B0 (KxContextToKframes.c)
 *     PspGetContext @ 0x140A4D120 (PspGetContext.c)
 *     PspSetContext @ 0x140A4D570 (PspSetContext.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall RtlCopyXStateArea(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r13
  _OWORD *v12; // rax
  __int64 v13; // r8
  _OWORD *v14; // rcx
  __int128 v15; // xmm1
  unsigned int v16; // r15d
  _DWORD *v17; // r8
  unsigned __int64 v18; // rdx
  int v19; // r9d
  unsigned __int64 v20; // r13
  unsigned int v21; // r12d
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // r10d
  unsigned int *v25; // rsi
  unsigned __int64 v26; // [rsp+20h] [rbp-58h]
  unsigned __int64 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+30h] [rbp-48h]
  int v29; // [rsp+88h] [rbp+10h]
  int v30; // [rsp+98h] [rbp+20h]

  if ( a2 )
  {
    v5 = 0;
    v6 = 2;
    v7 = a2 & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0] | 3LL);
    v8 = v7 & *(_QWORD *)(a3 + 512);
    *(_QWORD *)(a1 + 512) = v8 | *(_QWORD *)(a1 + 512) & ~v7;
    if ( (v8 & 3) == 2 )
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a3 + 24);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v9 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0] | 0x8000000000000003uLL;
      v10 = v9 & *(_QWORD *)(a3 + 520);
      v11 = v9 & *(_QWORD *)(a1 + 520);
      if ( (v8 & 1) != 0 )
      {
        *(_OWORD *)a1 = *(_OWORD *)a3;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(a3 + 16);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(a3 + 32);
        *(_OWORD *)(a1 + 48) = *(_OWORD *)(a3 + 48);
        *(_OWORD *)(a1 + 64) = *(_OWORD *)(a3 + 64);
        *(_OWORD *)(a1 + 80) = *(_OWORD *)(a3 + 80);
        *(_OWORD *)(a1 + 96) = *(_OWORD *)(a3 + 96);
        *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 112);
        *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 128);
        *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 144);
      }
      if ( (v8 & 2) != 0 )
      {
        v12 = (_OWORD *)(a1 + 160);
        v13 = 2LL;
        v14 = (_OWORD *)(a3 + 160);
        do
        {
          *v12 = *v14;
          v12[1] = v14[1];
          v12[2] = v14[2];
          v12[3] = v14[3];
          v12[4] = v14[4];
          v12[5] = v14[5];
          v12[6] = v14[6];
          v12 += 8;
          v15 = v14[7];
          v14 += 8;
          *(v12 - 1) = v15;
          --v13;
        }
        while ( v13 );
      }
      v16 = 576;
      v17 = (_DWORD *)0xFFFFF7800000060CLL;
      v18 = v10 >> 2;
      v19 = 576;
      v20 = v11 >> 2;
      v21 = 576;
      v29 = 576;
      v22 = v18 & v20 & (v8 >> 2);
      v30 = 576;
      v23 = MEMORY[0xFFFFF780000005F8] >> 2;
      v24 = 576;
      v27 = MEMORY[0xFFFFF780000005F8] >> 2;
      v26 = v18;
      v28 = 0xFFFFF7800000060CuLL;
      do
      {
        if ( (v18 & 1) != 0 )
        {
          v16 = v19;
          if ( (v23 & 1) != 0 )
            v16 = (v19 + 63) & 0xFFFFFFC0;
          v19 = v16 + *v17;
          v29 = v19;
        }
        if ( (v20 & 1) != 0 )
        {
          v21 = v24;
          if ( (v23 & 1) != 0 )
            v21 = (v24 + 63) & 0xFFFFFFC0;
          v30 = v21 + *v17;
        }
        if ( (v22 & 1) != 0 )
        {
          memmove((void *)(a1 + v21), (const void *)(a3 + v16), v19 - v16);
          v18 = v26;
          v17 = (_DWORD *)v28;
        }
        v23 = v27 >> 1;
        v18 >>= 1;
        v20 >>= 1;
        v22 >>= 1;
        v26 = v18;
        v27 >>= 1;
        if ( !v22 )
          break;
        v19 = v29;
        ++v17;
        v24 = v30;
        ++v6;
        v28 = (unsigned __int64)v17;
      }
      while ( v6 < 0x40 );
    }
    else
    {
      v25 = (unsigned int *)0xFFFFF780000003F4LL;
      do
      {
        if ( (v8 & 1) != 0 )
          memmove((void *)(*(v25 - 1) + a1), (const void *)(*(v25 - 1) + a3), *v25);
        v8 >>= 1;
        if ( !v8 )
          break;
        ++v5;
        v25 += 2;
      }
      while ( v5 < 0x40 );
    }
  }
}
