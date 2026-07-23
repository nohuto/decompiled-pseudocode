/*
 * XREFs of IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1405D3180
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsProcessPageIncluded @ 0x1405D2A2C (IopLiveDumpIsProcessPageIncluded.c)
 *     MmTryIdentifyPage @ 0x1406F4028 (MmTryIdentifyPage.c)
 */

__int64 __fastcall IopLiveDumpMirrorPhysicalMemoryCallback(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 MillisecondCounter; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // r11
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r10
  _QWORD *v15; // r8
  __int64 v16; // rdx
  _QWORD *i; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  unsigned __int64 j; // rax
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  __int128 v27; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-58h]
  unsigned __int64 v29; // [rsp+90h] [rbp+8h]
  unsigned __int64 v30; // [rsp+90h] [rbp+8h]
  __int64 v32; // [rsp+A0h] [rbp+18h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v2 = IopLiveDumpContext;
  v4 = a2;
  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v6 = *(_QWORD *)(v2 + 576);
  v7 = a1 >> 12;
  v33 = MillisecondCounter;
  v8 = ((v4 & 0xFFF) != 0) + (v4 >> 12);
  v29 = v8 + v7 - 1;
  if ( v7 < v6 )
  {
    if ( v8 + v7 - 1 >= v6 )
    {
      v29 = v6 - 1;
      v8 = v6 - v7;
    }
    if ( v8 )
    {
      v9 = v29;
      v10 = *(_QWORD *)(v2 + 584);
      v32 = v10;
      v11 = v29 + 1;
      while ( v11 > v7 )
      {
        v14 = v10 + 8 * (v9 >> 6);
        v15 = (_QWORD *)(v10 + 8 * (v7 >> 6));
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
        v12 = (unsigned int)v19 + (((__int64)v15 - v10) >> 3 << 6);
        if ( v12 > v11 )
        {
LABEL_14:
          v12 = v11;
          goto LABEL_8;
        }
        for ( j = ~(v18 | ((1LL << v19) - 1)); !j; j = *v21 )
        {
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
        v22 = (((__int64)v15 - v10) >> 3 << 6) + (unsigned int)j;
        if ( v22 > v11 )
          v22 = v11;
        v13 = v22 - v12;
        if ( !v13 )
          goto LABEL_24;
        v23 = v12 - v7;
LABEL_26:
        if ( v23 )
        {
          v30 = v23;
          while ( 2 )
          {
            if ( (*(_DWORD *)(v2 + 40) & 4) == 0 )
              goto LABEL_34;
            v27 = 0LL;
            v28 = 0LL;
            if ( !(unsigned int)MmTryIdentifyPage(v7, &v27) || !(unsigned int)IopLiveDumpIsProcessPageIncluded(v2, &v27) )
              goto LABEL_36;
            if ( v28 < 0xFFFF800000000000uLL )
            {
              if ( v28 - 1 <= 0x7FFFFFFEFFFELL )
              {
                v24 = v2 + 656;
                goto LABEL_35;
              }
            }
            else
            {
LABEL_34:
              v24 = v2 + 600;
LABEL_35:
              RtlSetBitsEx(v24, v7, 1uLL);
            }
LABEL_36:
            ++v7;
            if ( !--v30 )
            {
              v10 = v32;
              break;
            }
            continue;
          }
        }
        if ( v8 > v23 + v13 )
        {
          v7 = v13 + v12;
          v8 = v8 - v23 - v13;
          if ( v8 )
            continue;
        }
        v4 = a2;
        goto LABEL_41;
      }
      v12 = v7;
LABEL_8:
      v13 = 0LL;
LABEL_24:
      v23 = v8;
      goto LABEL_26;
    }
  }
LABEL_41:
  v25 = IopLiveDumpGetMillisecondCounter(0) - v33;
  if ( (*(_DWORD *)(v2 + 80) & 1) != 0 )
  {
    *(_QWORD *)(v2 + 472) += v4;
    *(_QWORD *)(v2 + 464) += v25;
  }
  else
  {
    *(_QWORD *)(v2 + 512) += v4;
    *(_QWORD *)(v2 + 504) += v25;
  }
  return 0LL;
}
