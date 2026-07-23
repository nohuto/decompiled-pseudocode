/*
 * XREFs of MiFlushDeferredAgingBucket @ 0x14029C4F0
 * Callers:
 *     MiTrimPteWorker @ 0x140322C20 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140323430 (MiTrimPte.c)
 *     MiAgeWorkingSetTail @ 0x14032AD10 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTailHelper @ 0x14045D148 (MiTrimWorkingSetTailHelper.c)
 *     MiTrimWorkingSetBuildup @ 0x14048DB10 (MiTrimWorkingSetBuildup.c)
 * Callees:
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 */

char __fastcall MiFlushDeferredAgingBucket(__int64 a1, int a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned int v8; // r9d
  int v9; // r13d
  __int64 v10; // r14
  unsigned int v11; // r11d
  int i; // eax
  unsigned int v13; // edi
  unsigned int v14; // ecx
  __int64 v15; // rax
  _QWORD *v16; // r8
  __int64 j; // rdx
  unsigned __int64 v18; // rbp
  unsigned int v19; // ebp
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rax
  unsigned __int64 k; // rcx
  unsigned int v25; // edx
  __int64 v26; // r8
  unsigned int v27; // r14d
  unsigned int v28; // r8d
  __int64 v29; // rcx
  unsigned int v30; // edi
  unsigned int v31; // edi
  __int64 v32; // r14
  unsigned int v33; // esi
  int v34; // ecx
  _BYTE *v35; // r15
  int v36; // eax
  __int64 v38; // [rsp+30h] [rbp-68h]
  int v41; // [rsp+B8h] [rbp+20h]

  v4 = (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFF000uLL) << 16;
  v6 = a1 & 4;
  v7 = (__int64)(v4 & 0xFFFFFFE000000000uLL) >> 16;
  v41 = v7;
  v8 = 0;
  v9 = (unsigned int)v6 != 0LL ? 0x20 : 0;
  v10 = a1 - (v6 != 0 ? 4 : 0);
  v38 = v10;
  while ( 2 )
  {
    v11 = 0;
    if ( v8 < 0x200 )
      v11 = v8;
    for ( i = 511; ; i = v36 - 1 )
    {
      v13 = i + v9;
      v14 = v11 + v9;
      LODWORD(v15) = i - v11 + 1;
      if ( !(_DWORD)v15 )
      {
LABEL_35:
        v19 = -1;
        goto LABEL_36;
      }
      v16 = (_QWORD *)(v10 + 8 * ((unsigned __int64)v14 >> 6));
      v15 = ~*v16;
      for ( j = v15 | ((1LL << v14) - 1); j == -1; j = ~*v16 )
      {
        if ( (unsigned __int64)++v16 > v10 + 8 * ((unsigned __int64)v13 >> 6) )
          goto LABEL_35;
      }
      _BitScanForward64(&v18, ~j);
      v19 = ((unsigned int)(((__int64)v16 - v10) >> 3) << 6) + v18;
      if ( v19 <= v13 )
        break;
      v19 = -1;
LABEL_36:
      if ( !v11 )
        goto LABEL_13;
      v36 = v8 + 1;
      v11 = 0;
      if ( v8 + 1 > 0x200 )
        v36 = 512;
    }
    if ( v19 == -1 )
      goto LABEL_36;
    v19 -= v9;
LABEL_13:
    if ( v19 >= v8 && v19 != -1 )
    {
      if ( v19 >= 0x200 )
      {
LABEL_47:
        v31 = 0;
      }
      else
      {
        v20 = a1 + 60;
        v21 = (unsigned __int64)v19 >> 5;
        v22 = *(_DWORD *)(a1 + 4 * v21) | ((1 << v19) - 1);
        v23 = a1 + 4 * v21;
        for ( k = v23 + 4; ; k += 4LL )
        {
          v25 = ~v22;
          if ( v25 )
            break;
          if ( k > v20 )
            goto LABEL_47;
          v22 = *(_DWORD *)(v23 + 4);
          v23 += 4LL;
        }
        _BitScanForward64((unsigned __int64 *)&v26, v25);
        v27 = v26 + 32 * ((v23 - a1) >> 2);
        if ( v27 > 0x200 )
        {
          v31 = 0;
          v27 = 512;
          goto LABEL_29;
        }
        v28 = ~(v25 | ((1 << v26) - 1));
        while ( 1 )
        {
          if ( v28 )
          {
            _BitScanForward64((unsigned __int64 *)&v29, v28);
            goto LABEL_26;
          }
          if ( v23 + 4 > v20 )
            break;
          v28 = *(_DWORD *)(v23 + 4);
          v23 += 4LL;
        }
        LODWORD(v29) = 32;
LABEL_26:
        v30 = 32 * ((v23 - a1) >> 2) + v29;
        if ( v30 > 0x200 )
          v30 = 512;
        v31 = v30 - v27;
        if ( v31 )
        {
LABEL_29:
          v32 = v27 - v19;
          LOBYTE(v15) = MiSetVaAgeListEx(a2, (unsigned int)v7 + (v19 << 12), v32, a3, 0);
          v33 = v32;
          if ( (_DWORD)v32 )
          {
            v34 = v19 & 7;
            v35 = (_BYTE *)(a1 + ((unsigned __int64)v19 >> 3));
            if ( (unsigned int)(v34 + v32) > 8 )
            {
              if ( (v19 & 7) != 0 )
              {
                v33 = v34 + v32 - 8;
                LOBYTE(v15) = *v35 & byte_1400327C0[v19 & 7];
                *v35++ = v15;
              }
              if ( v33 > 8 )
              {
                LOBYTE(v15) = (unsigned __int8)RtlSetVolatileMemory(v35, 0, (unsigned __int64)v33 >> 3);
                v35 += (unsigned __int64)v33 >> 3;
                v33 &= 7u;
              }
              if ( v33 )
              {
                LOBYTE(v15) = *v35 & byte_140018470[v33];
                *v35 = v15;
              }
            }
            else
            {
              *v35 &= ~(byte_1400327C0[v32] << v34);
            }
          }
          v8 = v32 + v31 + v19;
          if ( !v31 )
            break;
          LODWORD(v7) = v41;
          v10 = v38;
          if ( v8 == 512 )
            break;
          continue;
        }
      }
      v27 = 512;
      goto LABEL_29;
    }
    break;
  }
  *(_BYTE *)(a1 + 72) = 0;
  return v15;
}
