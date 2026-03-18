/*
 * XREFs of MiFlushDeferredAgingBucket @ 0x14029CF90
 * Callers:
 *     MiTrimPteWorker @ 0x140320BF0 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140321400 (MiTrimPte.c)
 *     MiAgeWorkingSetTail @ 0x140328CE0 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTailHelper @ 0x140464188 (MiTrimWorkingSetTailHelper.c)
 *     MiTrimWorkingSetBuildup @ 0x140493FC0 (MiTrimWorkingSetBuildup.c)
 * Callees:
 *     MiSetVaAgeListEx @ 0x14029D300 (MiSetVaAgeListEx.c)
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
 */

char __fastcall MiFlushDeferredAgingBucket(__int64 a1, int a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned int v7; // r9d
  int v8; // r13d
  __int64 v9; // r14
  unsigned int v10; // r11d
  int i; // eax
  unsigned int v12; // edi
  unsigned int v13; // ecx
  __int64 v14; // rax
  _QWORD *v15; // r8
  __int64 j; // rdx
  unsigned int v17; // r14d
  unsigned __int64 v18; // r10
  int v19; // r9d
  unsigned __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  unsigned __int64 k; // rcx
  unsigned int v24; // edx
  __int64 v25; // r8
  unsigned int v26; // ebp
  unsigned int v27; // r8d
  __int64 v28; // rcx
  unsigned int v29; // edi
  unsigned int v30; // edi
  __int64 v31; // rbp
  unsigned int v32; // esi
  int v33; // ecx
  _BYTE *v34; // r15
  int v35; // eax
  int v37; // [rsp+30h] [rbp-68h]
  __int64 v40; // [rsp+B8h] [rbp+20h]

  v4 = (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFF000uLL) << 16;
  v5 = a1 & 4;
  v6 = (__int64)(v4 & 0xFFFFFFE000000000uLL) >> 16;
  v37 = v6;
  v7 = 0;
  v8 = (unsigned int)v5 != 0LL ? 0x20 : 0;
  v9 = a1 - (v5 != 0 ? 4 : 0);
  v40 = v9;
  while ( 2 )
  {
    v10 = 0;
    if ( v7 < 0x200 )
      v10 = v7;
    for ( i = 511; ; i = v35 - 1 )
    {
      v12 = i + v8;
      v13 = v10 + v8;
      LODWORD(v14) = i - v10 + 1;
      if ( !(_DWORD)v14 )
      {
LABEL_35:
        v17 = -1;
        goto LABEL_36;
      }
      v15 = (_QWORD *)(v9 + 8 * ((unsigned __int64)v13 >> 6));
      v14 = ~*v15;
      for ( j = v14 | ((1LL << v13) - 1); j == -1; j = ~*v15 )
      {
        if ( (unsigned __int64)++v15 > v9 + 8 * ((unsigned __int64)v12 >> 6) )
          goto LABEL_35;
      }
      _BitScanForward64((unsigned __int64 *)&v14, ~j);
      v17 = ((unsigned int)(((__int64)v15 - v9) >> 3) << 6) + v14;
      if ( v17 <= v12 )
        break;
      v17 = -1;
LABEL_36:
      if ( !v10 )
        goto LABEL_13;
      v9 = v40;
      v35 = v7 + 1;
      v10 = 0;
      if ( v7 + 1 > 0x200 )
        v35 = 512;
    }
    if ( v17 == -1 )
      goto LABEL_36;
    v17 -= v8;
LABEL_13:
    if ( v17 >= v7 && v17 != -1 )
    {
      if ( v17 >= 0x200 )
      {
LABEL_47:
        v30 = 0;
      }
      else
      {
        v18 = a1 + 60;
        v19 = 0;
        v20 = (unsigned __int64)v17 >> 5;
        v21 = *(_DWORD *)(a1 + 4 * v20) | ((1 << v17) - 1);
        v22 = a1 + 4 * v20;
        for ( k = v22 + 4; ; k += 4LL )
        {
          v24 = ~v21;
          if ( v24 )
            break;
          if ( k > v18 )
            goto LABEL_47;
          v21 = *(_DWORD *)(v22 + 4);
          v22 += 4LL;
        }
        _BitScanForward64((unsigned __int64 *)&v25, v24);
        v26 = v25 + 32 * ((v22 - a1) >> 2);
        if ( v26 > 0x200 )
        {
          v30 = 0;
          v26 = 512;
          goto LABEL_29;
        }
        v27 = ~(v24 | ((1 << v25) - 1));
        while ( 1 )
        {
          if ( v27 )
          {
            _BitScanForward64((unsigned __int64 *)&v28, v27);
            goto LABEL_26;
          }
          v19 += 32;
          if ( v22 + 4 > v18 )
            break;
          v27 = *(_DWORD *)(v22 + 4);
          v22 += 4LL;
        }
        LODWORD(v28) = 32;
LABEL_26:
        v29 = 32 * ((v22 - a1) >> 2) + v28;
        if ( v29 > 0x200 )
          v29 = 512;
        v30 = v29 - v26;
        if ( v30 )
        {
LABEL_29:
          v31 = v26 - v17;
          LOBYTE(v14) = MiSetVaAgeListEx(a2, (unsigned int)v6 + (v17 << 12), v31, a3, 0);
          v32 = v31;
          if ( (_DWORD)v31 )
          {
            v33 = v17 & 7;
            v34 = (_BYTE *)(a1 + ((unsigned __int64)v17 >> 3));
            if ( (unsigned int)(v33 + v31) > 8 )
            {
              if ( (v17 & 7) != 0 )
              {
                v32 = v33 + v31 - 8;
                LOBYTE(v14) = *v34 & byte_140032340[v17 & 7];
                *v34++ = v14;
              }
              if ( v32 > 8 )
              {
                LOBYTE(v14) = (unsigned __int8)RtlSetVolatileMemory(v34, 0, (unsigned __int64)v32 >> 3);
                v34 += (unsigned __int64)v32 >> 3;
                v32 &= 7u;
              }
              if ( v32 )
              {
                LOBYTE(v14) = *v34 & byte_140017F38[v32];
                *v34 = v14;
              }
            }
            else
            {
              *v34 &= ~(byte_140032340[v31] << v33);
            }
          }
          v7 = v31 + v30 + v17;
          if ( !v30 )
            break;
          LODWORD(v6) = v37;
          v9 = v40;
          if ( v7 == 512 )
            break;
          continue;
        }
      }
      v26 = 512;
      goto LABEL_29;
    }
    break;
  }
  *(_BYTE *)(a1 + 72) = 0;
  return v14;
}
