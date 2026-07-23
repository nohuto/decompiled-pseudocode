/*
 * XREFs of HalGetDmaTransferInfoInternal @ 0x1404393A0
 * Callers:
 *     HalpBuildScatterGatherList @ 0x14043901C (HalpBuildScatterGatherList.c)
 *     HalGetDmaTransferInfo @ 0x140439360 (HalGetDmaTransferInfo.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x140439690 (HalpDmaGetAdapterCacheAlignment.c)
 */

__int64 __fastcall HalGetDmaTransferInfoInternal(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  _DWORD *v8; // r9
  int v9; // r10d
  unsigned __int64 v10; // rax
  unsigned int v11; // ecx
  int v12; // ebp
  int v13; // r12d
  __int64 v14; // r13
  int v15; // esi
  unsigned int v16; // eax
  int v17; // r10d
  unsigned int v19; // eax
  __int64 v20; // r11
  unsigned int v21; // ebx
  unsigned int v22; // r9d
  __int64 *v23; // rdi
  char v24; // cl
  __int64 v25; // rsi
  unsigned int v26; // r10d
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r15
  int v30; // ecx
  int v31; // eax
  char v32; // [rsp+20h] [rbp-48h]
  int v33; // [rsp+24h] [rbp-44h]
  int v34; // [rsp+28h] [rbp-40h]
  __int64 *v35; // [rsp+78h] [rbp+10h]
  unsigned int v36; // [rsp+88h] [rbp+20h]
  char v37; // [rsp+90h] [rbp+28h]

  v35 = a2;
  v8 = a6;
  v9 = *a6;
  v34 = *a6;
  if ( *a6 > 2u )
    return 3221225659LL;
  if ( a2 )
  {
    while ( 1 )
    {
      v10 = *((unsigned int *)a2 + 10);
      if ( a3 < v10 )
        break;
      a2 = (__int64 *)*a2;
      a3 -= v10;
      v35 = a2;
      if ( !a2 )
        return 3221225485LL;
    }
    v11 = *(_DWORD *)(a1 + 448);
    v12 = 0;
    v13 = 0;
    v14 = 0LL;
    v15 = 0;
    if ( v11 < 0x40 )
      v14 = ~((1LL << v11) - 1);
    if ( !a4 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( !a2 )
      {
LABEL_33:
        v8 = a6;
        v9 = v34;
LABEL_7:
        if ( *(_BYTE *)(a1 + 442) || v13 == 1 && !v12 )
        {
          v16 = 24 * v13 + 208;
          if ( v16 < 0xA8 )
            v16 = 168;
        }
        else
        {
          v13 = 1;
          v12 = v15;
          v16 = 232;
        }
        v17 = v9 - 1;
        if ( !v17 )
          goto LABEL_11;
        if ( v17 == 1 )
        {
          v8[4] = v15;
LABEL_11:
          v8[1] = v12;
          v8[2] = v13;
          v8[3] = v16;
          return 0LL;
        }
        return 3221225659LL;
      }
      v32 = 0;
      v19 = a4;
      v20 = 0LL;
      if ( *((_DWORD *)a2 + 10) - (int)a3 <= a4 )
        v19 = *((_DWORD *)a2 + 10) - a3;
      v21 = v19;
      v36 = a4 - v19;
      v22 = ((_WORD)a3 + *((_WORD *)a2 + 22)) & 0xFFF;
      v15 += (v19 + (unsigned __int64)(((_WORD)a3 + *((_WORD *)a2 + 22)) & 0xFFF) + 4095) >> 12;
      v23 = &a2[((unsigned __int64)(unsigned int)(a3 + *((_DWORD *)a2 + 11)) >> 12) + 6];
      v33 = v15;
      if ( v19 )
        break;
LABEL_32:
      a2 = (__int64 *)*a2;
      LODWORD(a3) = 0;
      a4 = v36;
      v35 = a2;
      if ( !v36 )
        goto LABEL_33;
    }
    v24 = *(_BYTE *)(a1 + 442);
    v37 = v24;
    while ( 1 )
    {
      v25 = v22;
      v26 = v21;
      if ( 4096 - v22 <= v21 )
        v26 = 4096 - v22;
      v27 = v12 + 1;
      if ( v24 )
        v27 = v12;
      v28 = *v23 << 12;
      v12 = v27;
      v29 = v28 + v22;
      if ( !HalpDmaCvmConfiguration )
      {
        if ( *(_QWORD *)(a1 + 144) >= v29 + (unsigned __int64)v26 - 1 )
          goto LABEL_25;
        v24 = v37;
      }
      if ( *(_DWORD *)(a1 + 520) != 3 )
        goto LABEL_41;
LABEL_25:
      if ( !*(_BYTE *)(a1 + 445) )
      {
        v30 = HalpDmaGetAdapterCacheAlignment(a1) - 1;
        if ( (v30 & (unsigned int)v29) != 0 || (v26 & v30) != 0 )
        {
          v24 = v37;
LABEL_41:
          v31 = v12 + 1;
          v32 = 1;
          ++v13;
          if ( !v24 )
            v31 = v12;
          v12 = v31;
          goto LABEL_30;
        }
      }
      if ( v22 || v28 != v20 + 1 || ((v28 ^ v20) & v14) != 0 || ((v28 ^ v20) & 0x100000000LL) != 0 || v32 )
      {
        ++v13;
        v32 = 0;
      }
      v24 = v37;
LABEL_30:
      ++v23;
      v22 = 0;
      v20 = v28 + v25 + v26 - 1LL;
      v21 -= v26;
      if ( !v21 )
      {
        a2 = v35;
        v15 = v33;
        goto LABEL_32;
      }
    }
  }
  return 3221225485LL;
}
