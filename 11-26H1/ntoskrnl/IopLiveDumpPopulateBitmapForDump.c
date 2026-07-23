/*
 * XREFs of IopLiveDumpPopulateBitmapForDump @ 0x1405D38C0
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405D1168 (IopLiveDumpCollectPages.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x1405D4098 (IopLiveDumpRemoveSystemCacheFromDump.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x1405D5070 (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
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
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r11
  _QWORD *v17; // rdx
  __int64 v18; // r8
  _QWORD *j; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // r10
  unsigned __int64 v22; // r14
  unsigned __int64 k; // rax
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r14
  __int64 v27; // r11
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r10
  _QWORD *v31; // r9
  __int64 v32; // r8
  _QWORD *m; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // rcx
  unsigned __int64 v36; // r13
  unsigned __int64 n; // rax
  unsigned __int64 *v38; // rax
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rax
  __int64 result; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+20h] [rbp-68h]
  __int128 v45; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v46; // [rsp+98h] [rbp+10h]
  __int64 MillisecondCounter; // [rsp+A0h] [rbp+18h]
  __int64 v48; // [rsp+A8h] [rbp+20h] BYREF

  v48 = 0LL;
  v45 = 0LL;
  MillisecondCounter = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v3 = a1 + 544;
  v46 = *(_QWORD *)(a1 + 544);
  IopLiveDumpRemoveSystemCacheFromDump(a1, a2, &v48);
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
        v12 = v46;
        do
        {
          v13 = *v4;
          if ( *v4 > v11 )
          {
            v15 = v4[1];
            v16 = v15 + 8 * ((v13 - 1) >> 6);
            v17 = (_QWORD *)(v15 + 8 * (v11 >> 6));
            v18 = *v17 | ((1LL << v11) - 1);
            for ( j = v17 + 1; ; ++j )
            {
              v20 = ~v18;
              if ( v20 )
                break;
              if ( (unsigned __int64)j > v16 )
                goto LABEL_19;
              v18 = *++v17;
            }
            _BitScanForward64((unsigned __int64 *)&v21, v20);
            v22 = (unsigned int)v21 + ((__int64)((__int64)v17 - v15) >> 3 << 6);
            if ( v22 > v13 )
            {
LABEL_19:
              v14 = 0LL;
LABEL_30:
              v12 = v46;
              goto LABEL_31;
            }
            for ( k = ~(v20 | ((1LL << v21) - 1)); !k; k = *v24 )
            {
              v24 = v17 + 1;
              if ( (unsigned __int64)(v17 + 1) > v16 )
              {
                LODWORD(k) = 64;
                goto LABEL_27;
              }
              ++v17;
            }
            _BitScanForward64(&k, k);
LABEL_27:
            v25 = ((__int64)((__int64)v17 - v15) >> 3 << 6) + (unsigned int)k;
            if ( v25 > v13 )
              v25 = *v4;
            v14 = v25 - v22;
            if ( !v14 )
              goto LABEL_30;
          }
          else
          {
            v14 = 0LL;
LABEL_31:
            v22 = v12;
          }
          v26 = v22 - v11;
          if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
          {
            RtlSetBitsEx(v3, v11, v26);
          }
          else
          {
            v27 = *(_QWORD *)(a1 + 552);
            v28 = v11 + v26;
            *(_QWORD *)&v45 = v11 + v26;
            v29 = v11;
            v44 = v27;
            *((_QWORD *)&v45 + 1) = v27;
            do
            {
              if ( v28 <= v29 )
                break;
              v30 = v27 + 8 * ((v28 - 1) >> 6);
              v31 = (_QWORD *)(v27 + 8 * (v29 >> 6));
              v32 = *v31 | ((1LL << v29) - 1);
              for ( m = v31 + 1; ; ++m )
              {
                v34 = ~v32;
                if ( v34 )
                  break;
                if ( (unsigned __int64)m > v30 )
                  goto LABEL_56;
                v32 = *++v31;
              }
              _BitScanForward64((unsigned __int64 *)&v35, v34);
              v36 = (unsigned int)v35 + (((__int64)v31 - v27) >> 3 << 6);
              if ( v36 > v28 )
                break;
              for ( n = ~(v34 | ((1LL << v35) - 1)); !n; n = *v38 )
              {
                v38 = v31 + 1;
                if ( (unsigned __int64)(v31 + 1) > v30 )
                {
                  LODWORD(n) = 64;
                  goto LABEL_47;
                }
                ++v31;
              }
              _BitScanForward64(&n, n);
LABEL_47:
              v39 = (((__int64)v31 - v27) >> 3 << 6) + (unsigned int)n;
              if ( v39 > v28 )
                v39 = v11 + v26;
              v40 = v39 - v36;
              if ( !v40 )
                break;
              v41 = *(_QWORD *)(a1 + 688);
              if ( v40 > v41 )
              {
                *(_DWORD *)(a1 + 80) |= 2u;
                v40 = v41;
              }
              if ( v40 )
              {
                RtlSetBitsEx((__int64)&v45, v36, v40);
                *(_QWORD *)(a1 + 688) -= v40;
                v27 = v44;
              }
              result = *(unsigned int *)(a1 + 80);
              if ( (result & 2) != 0 )
                return result;
              v29 = v40 + v36;
            }
            while ( v40 + v36 < v28 );
LABEL_56:
            v3 = a1 + 544;
          }
          v11 += v26 + v14;
          v12 = v46;
        }
        while ( v11 < v46 );
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
    v43 = IopLiveDumpGetMillisecondCounter(0);
    return IopLiveDumpTracePopulateBitmapForDumpDuration(a1, v43 - MillisecondCounter, v48);
  }
  return result;
}
