/*
 * XREFs of IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1405D0970
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBitsEx @ 0x14036F510 (RtlSetBitsEx.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404E48C0 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsProcessPageIncluded @ 0x1405D021C (IopLiveDumpIsProcessPageIncluded.c)
 *     MmTryIdentifyPage @ 0x1406EF388 (MmTryIdentifyPage.c)
 */

__int64 __fastcall IopLiveDumpMirrorPhysicalMemoryCallback(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 MillisecondCounter; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  __int64 v13; // r9
  unsigned __int64 v14; // r14
  _QWORD *v15; // r8
  __int64 v16; // rdx
  _QWORD *i; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r11
  unsigned __int64 j; // rax
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v28; // [rsp+20h] [rbp-68h]
  __int128 v29; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+90h] [rbp+8h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v2 = IopLiveDumpContext;
  v4 = a2;
  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v6 = *(_QWORD *)(v2 + 576);
  v7 = a1 >> 12;
  v28 = MillisecondCounter;
  v8 = ((v4 & 0xFFF) != 0) + (v4 >> 12);
  v31 = v8 + v7 - 1;
  if ( v7 < v6 )
  {
    if ( v8 + v7 - 1 >= v6 )
    {
      v31 = v6 - 1;
      v8 = v6 - v7;
    }
    if ( v8 )
    {
      v9 = *(_QWORD *)(v2 + 584);
      v33 = v9;
      v10 = v31 + 1;
      while ( v10 > v7 )
      {
        v13 = 0LL;
        v14 = v9 + 8 * (v31 >> 6);
        v15 = (_QWORD *)(v9 + 8 * (v7 >> 6));
        v16 = *v15 | ((1LL << v7) - 1);
        for ( i = v15 + 1; ; ++i )
        {
          v18 = ~v16;
          if ( v18 )
            break;
          if ( (unsigned __int64)i > v14 )
            goto LABEL_14;
          v16 = *++v15;
        }
        _BitScanForward64((unsigned __int64 *)&v19, v18);
        v11 = (unsigned int)v19 + (((__int64)v15 - v9) >> 3 << 6);
        if ( v11 > v10 )
        {
LABEL_14:
          v11 = v10;
          goto LABEL_8;
        }
        for ( j = ~(v18 | ((1LL << v19) - 1)); !j; j = *v21 )
        {
          v13 += 64LL;
          v21 = v15 + 1;
          if ( (unsigned __int64)(v15 + 1) > v14 )
          {
            LODWORD(j) = 64;
            goto LABEL_21;
          }
          ++v15;
        }
        _BitScanForward64(&j, j);
LABEL_21:
        v22 = (((__int64)v15 - v9) >> 3 << 6) + (unsigned int)j;
        if ( v22 > v10 )
          v22 = v10;
        v12 = v22 - v11;
        if ( !v12 )
          goto LABEL_24;
        v23 = v11 - v7;
LABEL_26:
        if ( v23 )
        {
          v24 = v23;
          while ( 2 )
          {
            if ( (*(_DWORD *)(v2 + 40) & 4) == 0 )
              goto LABEL_34;
            v29 = 0LL;
            v30 = 0LL;
            if ( !(unsigned int)MmTryIdentifyPage(v7, &v29) || !(unsigned int)IopLiveDumpIsProcessPageIncluded(v2, &v29) )
              goto LABEL_36;
            if ( v30 < 0xFFFF800000000000uLL )
            {
              if ( v30 - 1 <= 0x7FFFFFFEFFFELL )
              {
                v25 = v2 + 656;
                goto LABEL_35;
              }
            }
            else
            {
LABEL_34:
              v25 = v2 + 600;
LABEL_35:
              RtlSetBitsEx(v25, v7, 1uLL);
            }
LABEL_36:
            ++v7;
            if ( !--v24 )
            {
              v10 = v31 + 1;
              break;
            }
            continue;
          }
        }
        if ( v8 > v23 + v12 )
        {
          v7 = v12 + v11;
          v8 = v8 - v23 - v12;
          v9 = v33;
          if ( v8 )
            continue;
        }
        v4 = a2;
        goto LABEL_41;
      }
      v11 = v7;
LABEL_8:
      v12 = 0LL;
LABEL_24:
      v23 = v8;
      goto LABEL_26;
    }
  }
LABEL_41:
  v26 = IopLiveDumpGetMillisecondCounter(0) - v28;
  if ( (*(_DWORD *)(v2 + 80) & 1) != 0 )
  {
    *(_QWORD *)(v2 + 472) += v4;
    *(_QWORD *)(v2 + 464) += v26;
  }
  else
  {
    *(_QWORD *)(v2 + 512) += v4;
    *(_QWORD *)(v2 + 504) += v26;
  }
  return 0LL;
}
