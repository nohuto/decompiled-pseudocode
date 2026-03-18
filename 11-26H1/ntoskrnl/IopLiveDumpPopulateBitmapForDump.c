/*
 * XREFs of IopLiveDumpPopulateBitmapForDump @ 0x1405D10C0
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405CE958 (IopLiveDumpCollectPages.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14036F510 (RtlSetBitsEx.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404E48C0 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x1405D18B0 (IopLiveDumpRemoveSystemCacheFromDump.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x1405D2880 (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 */

__int64 __fastcall IopLiveDumpPopulateBitmapForDump(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 *v4; // r12
  __int64 *v5; // r8
  unsigned __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 i; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r15
  __int64 v16; // r11
  unsigned __int64 v17; // rdi
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _QWORD *j; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // r10
  unsigned __int64 v23; // r14
  unsigned __int64 k; // rax
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r14
  __int64 v28; // rdi
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rcx
  __int64 v31; // r10
  unsigned __int64 v32; // r11
  _QWORD *v33; // r9
  __int64 v34; // r8
  _QWORD *m; // rax
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  unsigned __int64 v38; // r13
  unsigned __int64 n; // rax
  unsigned __int64 *v40; // rax
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rax
  __int64 result; // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+20h] [rbp-68h]
  __int128 v47; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v48; // [rsp+98h] [rbp+10h]
  __int64 MillisecondCounter; // [rsp+A0h] [rbp+18h]
  __int64 v50; // [rsp+A8h] [rbp+20h] BYREF

  v50 = 0LL;
  v47 = 0LL;
  MillisecondCounter = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v3 = a1 + 544;
  v48 = *(_QWORD *)(a1 + 544);
  IopLiveDumpRemoveSystemCacheFromDump(a1, a2, &v50);
  v4 = (unsigned __int64 *)(a1 + 600);
  while ( v4 )
  {
    v5 = (__int64 *)v4[1];
    v6 = *v4 - 1;
    if ( *v4 )
    {
      v7 = (__int64 *)v4[1];
      for ( i = *v5; ; i = *v7 )
      {
        v9 = ~i;
        if ( v9 != -1 )
          break;
        if ( ++v7 > &v5[v6 >> 6] )
          goto LABEL_58;
      }
      _BitScanForward64(&v10, ~v9);
      v11 = ((v7 - v5) << 6) + v10;
      if ( v11 <= v6 && v11 != -1LL )
      {
        v12 = v48;
        do
        {
          v13 = *v4;
          if ( *v4 > v11 )
          {
            v15 = v4[1];
            v16 = 0LL;
            v17 = v15 + 8 * ((v13 - 1) >> 6);
            v18 = (_QWORD *)(v15 + 8 * (v11 >> 6));
            v19 = *v18 | ((1LL << v11) - 1);
            for ( j = v18 + 1; ; ++j )
            {
              v21 = ~v19;
              if ( v21 )
                break;
              if ( (unsigned __int64)j > v17 )
                goto LABEL_19;
              v19 = *++v18;
            }
            _BitScanForward64((unsigned __int64 *)&v22, v21);
            v23 = (unsigned int)v22 + ((__int64)((__int64)v18 - v15) >> 3 << 6);
            if ( v23 > v13 )
            {
LABEL_19:
              v14 = 0LL;
LABEL_30:
              v12 = v48;
              goto LABEL_31;
            }
            for ( k = ~(v21 | ((1LL << v22) - 1)); !k; k = *v25 )
            {
              v16 += 64LL;
              v25 = v18 + 1;
              if ( (unsigned __int64)(v18 + 1) > v17 )
              {
                LODWORD(k) = 64;
                goto LABEL_27;
              }
              ++v18;
            }
            _BitScanForward64(&k, k);
LABEL_27:
            v26 = ((__int64)((__int64)v18 - v15) >> 3 << 6) + (unsigned int)k;
            if ( v26 > v13 )
              v26 = *v4;
            v14 = v26 - v23;
            if ( !v14 )
              goto LABEL_30;
          }
          else
          {
            v14 = 0LL;
LABEL_31:
            v23 = v12;
          }
          v27 = v23 - v11;
          if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
          {
            RtlSetBitsEx(v3, v11, v27);
          }
          else
          {
            v28 = *(_QWORD *)(a1 + 552);
            v29 = v11 + v27;
            *(_QWORD *)&v47 = v11 + v27;
            v30 = v11;
            v46 = v28;
            *((_QWORD *)&v47 + 1) = v28;
            do
            {
              if ( v29 <= v30 )
                break;
              v31 = 0LL;
              v32 = v28 + 8 * ((v29 - 1) >> 6);
              v33 = (_QWORD *)(v28 + 8 * (v30 >> 6));
              v34 = *v33 | ((1LL << v30) - 1);
              for ( m = v33 + 1; ; ++m )
              {
                v36 = ~v34;
                if ( v36 )
                  break;
                if ( (unsigned __int64)m > v32 )
                  goto LABEL_56;
                v34 = *++v33;
              }
              _BitScanForward64((unsigned __int64 *)&v37, v36);
              v38 = (unsigned int)v37 + (((__int64)v33 - v28) >> 3 << 6);
              if ( v38 > v29 )
                break;
              for ( n = ~(v36 | ((1LL << v37) - 1)); !n; n = *v40 )
              {
                v31 += 64LL;
                v40 = v33 + 1;
                if ( (unsigned __int64)(v33 + 1) > v32 )
                {
                  LODWORD(n) = 64;
                  goto LABEL_47;
                }
                ++v33;
              }
              _BitScanForward64(&n, n);
LABEL_47:
              v41 = (((__int64)v33 - v28) >> 3 << 6) + (unsigned int)n;
              if ( v41 > v29 )
                v41 = v11 + v27;
              v42 = v41 - v38;
              if ( !v42 )
                break;
              v43 = *(_QWORD *)(a1 + 688);
              if ( v42 > v43 )
              {
                *(_DWORD *)(a1 + 80) |= 2u;
                v42 = v43;
              }
              if ( v42 )
              {
                RtlSetBitsEx((__int64)&v47, v38, v42);
                *(_QWORD *)(a1 + 688) -= v42;
              }
              result = *(unsigned int *)(a1 + 80);
              if ( (result & 2) != 0 )
                return result;
              v30 = v42 + v38;
              v28 = v46;
            }
            while ( v30 < v29 );
LABEL_56:
            v3 = a1 + 544;
          }
          v11 += v27 + v14;
          v12 = v48;
        }
        while ( v11 < v48 );
      }
    }
LABEL_58:
    if ( v4 == (unsigned __int64 *)(a1 + 600) && (*(_DWORD *)(a1 + 40) & 4) != 0 )
      v4 = (unsigned __int64 *)(a1 + 656);
    else
      v4 = 0LL;
  }
  result = *(unsigned int *)(a1 + 80);
  if ( (result & 0x80u) != 0LL )
  {
    v45 = IopLiveDumpGetMillisecondCounter(0);
    return IopLiveDumpTracePopulateBitmapForDumpDuration(a1, v45 - MillisecondCounter, v50);
  }
  return result;
}
