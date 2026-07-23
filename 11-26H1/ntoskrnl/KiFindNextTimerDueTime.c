/*
 * XREFs of KiFindNextTimerDueTime @ 0x14050F30C
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x1404F5E20 (KiGetNextTimerExpirationDueTime.c)
 *     KePrepareClockTimerForIdle @ 0x1405EFCA8 (KePrepareClockTimerForIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiFindNextTimerDueTime(__int64 a1, unsigned __int64 a2, char a3, unsigned __int64 *a4)
{
  unsigned __int64 *v4; // rsi
  char v5; // r11
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r10
  unsigned int v11; // edi
  unsigned __int64 v12; // rdx
  unsigned int v13; // edi
  int v14; // r8d
  unsigned __int8 v15; // di
  unsigned __int64 v16; // rsi
  __int64 v17; // r13
  unsigned __int64 v18; // r11
  unsigned __int64 k; // rdi
  unsigned __int64 v20; // r8
  _QWORD *v21; // r9
  __int64 m; // r8
  __int64 v23; // r11
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  int v26; // ecx
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // r15
  unsigned __int16 v29; // r11
  unsigned __int64 v30; // rsi
  __int64 v31; // r14
  unsigned __int64 v32; // r9
  unsigned __int64 i; // r8
  unsigned __int64 v34; // rax
  unsigned __int64 *v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // r13
  unsigned __int64 v42; // r14
  __int64 v43; // r15
  unsigned __int64 v44; // r11
  unsigned __int64 v45; // r8
  unsigned __int64 j; // r9
  unsigned __int64 v47; // rcx
  unsigned __int64 *v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // r8
  unsigned int v51; // ecx
  unsigned int v53; // [rsp+0h] [rbp-78h]
  int v54; // [rsp+4h] [rbp-74h]
  unsigned __int64 v55; // [rsp+10h] [rbp-68h]
  __int64 v56; // [rsp+18h] [rbp-60h]
  unsigned __int64 v57; // [rsp+20h] [rbp-58h]

  v4 = a4;
  v5 = a3;
  v6 = a1;
  v7 = -1LL;
  v8 = a2;
  v9 = -1LL;
  v56 = -1LL;
  v10 = -1LL;
  v55 = -1LL;
  if ( KiGlobalTimerResolutionRequests || KePseudoHrTimeIncrement != KeMaximumIncrement )
  {
    v11 = 0;
    v54 = 1;
  }
  else
  {
    v54 = -1;
    v11 = 1;
  }
  while ( 1 )
  {
    v53 = v11;
    if ( v11 >= 2 )
      return v7;
    v12 = -1LL;
    v13 = (unsigned __int8)(v8 >> 18);
    if ( !KiSerializeTimerExpiration )
    {
      if ( v13 == (unsigned __int8)*(_DWORD *)(v6 + 4LL * v53 + 33552) )
      {
        if ( v5 )
        {
          v28 = v13 << 9;
          v10 = 0xFFFFFFFFLL;
          v29 = 0;
          while ( 1 )
          {
            v30 = KiPendingTimerBitmaps[2 * v29];
            v31 = KiPendingTimerBitmaps[2 * v29 + 1];
            v32 = v28 & -(__int64)(v28 < v30);
            for ( i = v30 - 1; ; i = v37 - 1 )
            {
              if ( i - v32 == -1LL )
              {
                LODWORD(v34) = -1;
              }
              else
              {
                v35 = (unsigned __int64 *)(v31 + 8 * (v32 >> 6));
                while ( !*v35 )
                {
                  if ( (unsigned __int64)++v35 > v31 + 8 * (i >> 6) )
                    goto LABEL_50;
                }
                _BitScanForward64(&v36, *v35);
                v34 = (((__int64)v35 - v31) >> 3 << 6) + v36;
                if ( v34 > i )
                {
LABEL_50:
                  LODWORD(v34) = -1;
                }
                else if ( v34 != -1LL )
                {
                  break;
                }
              }
              if ( !v32 )
                break;
              v37 = v28 + 1;
              v32 = 0LL;
              if ( v28 + 1 > v30 )
                v37 = KiPendingTimerBitmaps[2 * v29];
            }
            if ( (_DWORD)v34 != -1 )
            {
              v38 = (unsigned __int8)(((unsigned int)v34 >> 9) - v13);
              if ( v38 < v10 )
                v10 = v38;
            }
            if ( ++v29 >= (unsigned __int16)KiActiveGroups )
            {
              v9 = v55;
              v6 = a1;
              v5 = a3;
              v4 = a4;
              if ( v10 != 0xFFFFFFFF )
                v12 = (unsigned int)KePseudoHrTimeIncrement + (v8 & 0xFFFFFFFFFFFC0000uLL) + (v10 << 18);
              goto LABEL_38;
            }
          }
        }
        v10 = 0LL;
        v39 = *(_QWORD *)(v6 + 200);
        v40 = 2LL * *(unsigned __int8 *)(v6 + 208);
        v41 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(v6 + 208) + 1];
        while ( 1 )
        {
          v42 = KiPendingTimerBitmaps[v40];
          v43 = KiPendingTimerBitmaps[v40 + 1];
          v44 = (unsigned __int64)v13 << 9;
          v45 = v42 - 1;
          for ( j = v44 & -(__int64)(v44 < v42); ; j = 0LL )
          {
            if ( v45 - j == -1LL )
            {
              LODWORD(v47) = -1;
            }
            else
            {
              v48 = (unsigned __int64 *)(v43 + 8 * (j >> 6));
              while ( !*v48 )
              {
                if ( (unsigned __int64)++v48 > v43 + 8 * (v45 >> 6) )
                  goto LABEL_70;
              }
              _BitScanForward64(&v49, *v48);
              v47 = v49 + (((__int64)v48 - v43) >> 3 << 6);
              if ( v47 > v45 )
              {
LABEL_70:
                LODWORD(v47) = -1;
              }
              else if ( v47 != -1LL )
              {
                break;
              }
            }
            if ( !j )
              break;
            v50 = v44 + 1;
            if ( v44 + 1 > v42 )
              v50 = KiPendingTimerBitmaps[v40];
            v45 = v50 - 1;
          }
          if ( (_DWORD)v47 == -1 )
            goto LABEL_36;
          v51 = (unsigned int)v47 >> 9;
          v10 += (unsigned __int8)(v51 - v13);
          if ( v10 > 0x100 )
            goto LABEL_36;
          if ( (v39 & *(_QWORD *)(((unsigned __int64)v51 << 6) + v41)) != 0 )
          {
            v8 = a2;
            v12 = (unsigned int)KePseudoHrTimeIncrement + (a2 & 0xFFFFFFFFFFFC0000uLL) + (v10 << 18);
            goto LABEL_37;
          }
          ++v10;
          v13 = (unsigned __int8)(v51 + 1);
        }
      }
      return 0LL;
    }
    if ( !v5 )
      goto LABEL_39;
    v14 = *(_DWORD *)(KiProcessorBlock[0] + 4LL * v53 + 33552);
    v15 = v13 - v14;
    if ( v15 > 1uLL )
      return 0LL;
    v16 = KiProcessorBlock[0] + ((unsigned __int64)v53 << 13);
    v17 = (unsigned __int8)v14;
    v10 = 0LL;
    v57 = (v8 & 0xFFFFFFFFFFFC0000uLL) - ((unsigned __int64)v15 << 18) + 0x4000000;
    while ( 2 )
    {
      v18 = KiPendingTimerBitmaps[0] - 1;
      for ( k = (unsigned int)v17 & (unsigned __int64)-(__int64)((unsigned __int64)(unsigned int)v17 < KiPendingTimerBitmaps[0]);
            ;
            k = 0LL )
      {
        if ( v18 - k == -1LL )
        {
          LODWORD(v20) = -1;
          goto LABEL_20;
        }
        v21 = (_QWORD *)(qword_140FC2698[0] + 8 * (k >> 6));
        for ( m = ~*v21 | ((1LL << k) - 1); m == -1; m = ~*v21 )
        {
          if ( (unsigned __int64)++v21 > qword_140FC2698[0] + 8 * (v18 >> 6) )
            goto LABEL_17;
        }
        _BitScanForward64((unsigned __int64 *)&m, ~m);
        v20 = (((__int64)v21 - qword_140FC2698[0]) >> 3 << 6) + m;
        if ( v20 > v18 )
        {
LABEL_17:
          LODWORD(v20) = -1;
          goto LABEL_20;
        }
        if ( v20 != -1LL )
          break;
LABEL_20:
        if ( !k )
          break;
        v23 = v17 + 1;
        if ( (unsigned __int64)(v17 + 1) > KiPendingTimerBitmaps[0] )
          v23 = KiPendingTimerBitmaps[0];
        v18 = v23 - 1;
      }
      if ( (_DWORD)v20 != -1 )
      {
        v10 += (unsigned __int8)(v20 - v17 + 1);
        if ( v10 <= 0x100 && v10 <= v55 )
        {
          v24 = 32LL * (unsigned int)v20;
          v25 = *(_QWORD *)(v16 + v24 + 17176);
          if ( v25 >= v12 || *(_DWORD *)(v16 + v24 + 17180) == -1 )
            goto LABEL_34;
          if ( v25 >= v57 )
          {
            v12 = *(_QWORD *)(v16 + v24 + 17176);
LABEL_34:
            v17 = (unsigned __int8)(v20 + 1);
            continue;
          }
          v26 = (unsigned __int8)(v25 >> 18);
          if ( v26 != (_DWORD)v20 )
          {
            v27 = v25 & 0xFFFFFFFFFFFC0000uLL;
            if ( v27 + ((unsigned __int64)(unsigned __int8)(v20 - v26) << 18) < v12 )
              v12 = v27 + ((unsigned __int64)(unsigned __int8)(v20 - v26) << 18);
            goto LABEL_34;
          }
          v12 = *(_QWORD *)(v16 + v24 + 17176);
        }
      }
      break;
    }
LABEL_36:
    v8 = a2;
LABEL_37:
    v9 = v55;
    v6 = a1;
    v5 = a3;
    v4 = a4;
LABEL_38:
    v7 = v56;
LABEL_39:
    if ( v53 )
    {
      *v4 = v12;
    }
    else
    {
      v7 = v12;
      v56 = v12;
    }
    if ( v12 != -1LL )
    {
      if ( v9 >= v10 + 1 )
        v9 = v10 + 1;
      v55 = v9;
    }
    v11 = v54 + v53;
  }
}
