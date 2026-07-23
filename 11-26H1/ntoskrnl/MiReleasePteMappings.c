/*
 * XREFs of MiReleasePteMappings @ 0x1402A3050
 * Callers:
 *     MiInsertCachedPte @ 0x140281740 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x140360F30 (MiEmptyPteBins.c)
 * Callees:
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiReleaseLargePdeMappings @ 0x1402A22D4 (MiReleaseLargePdeMappings.c)
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 *     MiAttemptCoalesce @ 0x1402A3838 (MiAttemptCoalesce.c)
 *     MiTbFlushListPromoteThreshold @ 0x1402A41A0 (MiTbFlushListPromoteThreshold.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiReleasePteMappings(__int64 a1, unsigned __int64 *a2, BOOL a3, int a4)
{
  unsigned __int64 v8; // rax
  ULONG_PTR v9; // rdi
  unsigned int v10; // r12d
  __int64 v11; // r15
  unsigned __int64 v12; // rax
  int v13; // r13d
  unsigned __int64 v14; // rsi
  ULONG_PTR v15; // rax
  unsigned __int64 v16; // rtt
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  ULONG_PTR v21; // r11
  __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  int v25; // r12d
  ULONG_PTR v26; // rax
  unsigned __int64 v27; // r12
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  ULONG_PTR i; // rcx
  unsigned __int64 v32; // r10
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r10
  unsigned int v37; // eax
  ULONG_PTR v38; // r10
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rbp
  volatile signed __int32 *v41; // r11
  unsigned int v42; // eax
  unsigned __int64 v43; // rax
  ULONG_PTR v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r15
  ULONG_PTR v47; // r8
  ULONG_PTR v48; // r10
  __int64 v49; // r15
  unsigned __int64 v50; // rcx
  int v51; // r8d
  unsigned __int64 v52; // r11
  unsigned __int64 v53; // rax
  unsigned int v54; // eax
  int v55; // r8d
  signed __int32 v56[8]; // [rsp+0h] [rbp-168h] BYREF
  int v57; // [rsp+30h] [rbp-138h]
  int v58; // [rsp+34h] [rbp-134h]
  __int64 v59; // [rsp+38h] [rbp-130h]
  unsigned __int64 v60; // [rsp+40h] [rbp-128h]
  _BYTE v61[12]; // [rsp+50h] [rbp-118h] BYREF
  int v62; // [rsp+5Ch] [rbp-10Ch]
  char v63; // [rsp+69h] [rbp-FFh]
  bool v64; // [rsp+6Ah] [rbp-FEh]
  int v65; // [rsp+6Ch] [rbp-FCh]
  __int64 v66; // [rsp+70h] [rbp-F8h]

  memset_0(v61, 0, 0xC8uLL);
  if ( a4 != 2 )
  {
    v8 = *a2;
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
    v12 = v8 >> 16;
    v59 = 0LL;
    v57 = 0;
    if ( a3 )
    {
      _InterlockedOr(v56, 0);
      v58 = KiTbFlushTimeStamp;
    }
    else
    {
      v10 = 1;
      v57 = 1;
      v58 = 0;
    }
    v13 = 0;
    v14 = 16LL;
    if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    {
      v13 = a4;
      v14 = 1LL;
    }
    v16 = v12;
    v15 = v12 / v14;
    v60 = v16 / v14;
    while ( 1 )
    {
      if ( v10 >= 2 )
        return v11;
      BugCheckParameter4 = v15;
      do
      {
        v19 = *(_QWORD *)(a1 + 32);
        v20 = *(_QWORD *)(v19 + 8 * BugCheckParameter4 * v14);
        v21 = v19 + 8 * BugCheckParameter4 * v14;
        if ( (v20 & 4) != 0 )
        {
          v22 = 1LL;
        }
        else
        {
          v44 = *(_QWORD *)(v21 + 8);
          if ( qword_140E2D8C0 )
          {
            if ( (v44 & 0x10) != 0 )
              v44 &= ~0x10uLL;
            else
              v44 &= qword_140E2D8C8;
          }
          v22 = HIDWORD(v44);
        }
        v9 += v22;
        if ( !v20 )
          goto LABEL_23;
        if ( qword_140E2D8C0 )
        {
          if ( (v20 & 0x10) != 0 )
            v20 &= ~0x10uLL;
          else
            v20 &= qword_140E2D8C8;
        }
        v20 = (v20 >> 24) & 0x7FFFFFFFFFLL;
        if ( !v20 )
          goto LABEL_23;
        v23 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v20);
        if ( (*v23 & 4) != 0 )
        {
          v24 = 1LL;
        }
        else
        {
          v43 = v23[1];
          if ( qword_140E2D8C0 )
          {
            if ( (v43 & 0x10) != 0 )
              v43 &= ~0x10uLL;
            else
              v43 &= qword_140E2D8C8;
          }
          v24 = HIDWORD(v43);
        }
        if ( (v20 + v24) / v14 != BugCheckParameter4 )
        {
LABEL_23:
          v26 = v9 / v14;
          v27 = v9 / v14;
          if ( !v13 )
          {
            if ( BugCheckParameter4 >= *(_QWORD *)a1 )
              goto LABEL_56;
            if ( v27 > 1 )
            {
              if ( *(_QWORD *)a1 - BugCheckParameter4 < v27 )
                goto LABEL_56;
              v45 = *(_QWORD *)(a1 + 8);
              v46 = *(_QWORD *)(v45 + 8 * (BugCheckParameter4 >> 6));
              v47 = v45 + 8 * (BugCheckParameter4 >> 6);
              v48 = v45 + 8 * ((BugCheckParameter4 + v26 - 1) >> 6);
              if ( v47 == v48 )
              {
                if ( (v46 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v27) << BugCheckParameter4)) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v27) << BugCheckParameter4 )
                  goto LABEL_56;
              }
              else
              {
                if ( (v46 & (-1LL << BugCheckParameter4)) != -1LL << BugCheckParameter4 )
                  goto LABEL_56;
                while ( 1 )
                {
                  v49 = *(_QWORD *)(v47 + 8);
                  v47 += 8LL;
                  if ( v47 == v48 )
                    break;
                  if ( v49 != -1 )
                    goto LABEL_56;
                }
                if ( (v49 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v26 - 1))) != 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v26 - 1) )
LABEL_56:
                  KeBugCheckEx(0xDAu, 0x504uLL, v21, v9, BugCheckParameter4);
              }
              v11 = v59;
            }
            else if ( v27 != 1
                   || !_bittest64(
                         (const signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * (BugCheckParameter4 >> 6)),
                         BugCheckParameter4 & 0x3F) )
            {
              goto LABEL_56;
            }
          }
          if ( v57 )
          {
            if ( v20 && !v13 )
            {
              if ( v20 / v14 >= *(_QWORD *)a1 )
                KeBugCheckEx(0xDAu, 0x505uLL, v21, *(_QWORD *)v21, v20 / v14);
              v28 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v20);
              if ( (v28 & 0xFE1) != 0 )
                goto LABEL_105;
              if ( v28 )
              {
                v29 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v20);
                if ( qword_140E2D8C0 )
                {
                  if ( (v28 & 0x10) != 0 )
                    v29 = v28 & 0xFFFFFFFFFFFFFFEFuLL;
                  else
                    v29 = qword_140E2D8C8 & v28;
                }
                v30 = (v29 >> 24) & 0x7FFFFFFFFFLL;
              }
              else
              {
                v30 = 0LL;
              }
              if ( v30 / v14 >= *(_QWORD *)a1 )
LABEL_105:
                KeBugCheckEx(0xDAu, 0x506uLL, v21, *(_QWORD *)v21, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v20));
            }
            for ( i = 0LL; i < v9; ++i )
              *(_QWORD *)(v21 + 8 * i) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            if ( v13 )
            {
              v32 = 16 * ((((_DWORD)v9 + 511) & 0xFFFFFE00) / v14);
              if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
                v32 = (((_DWORD)v9 + 511) & 0xFFFFFE00) / v14;
              v33 = *(_QWORD *)(a1 + 32);
              v34 = 16 * BugCheckParameter4;
              if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
                v34 = BugCheckParameter4;
              _InterlockedAdd64((volatile signed __int64 *)(a1 + 56), -(__int64)v32);
              v35 = (v33 + 8 * v34) << 25;
              v36 = (__int64)(v35 + (v32 << 28)) >> 16;
              v37 = *(_DWORD *)(a1 + 44);
              if ( v13 == 1 )
              {
                v51 = 10;
                if ( v37 == 8 )
                  v51 = 12;
                v37 = v51;
              }
              MiReturnSystemVa(v35 >> 16, v36, v37);
              goto LABEL_43;
            }
            v38 = BugCheckParameter4 & 0x1F;
            v39 = v9 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v9);
            v40 = v9 / v14;
            v41 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
            if ( v38 + v27 > 0x20 )
            {
              if ( (BugCheckParameter4 & 0x1F) != 0 )
              {
                _InterlockedAnd(v41, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v38));
                v40 = v27 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
                ++v41;
              }
              if ( v40 >= 0x20 )
              {
                v50 = v40 >> 5;
                v40 += -32LL * (v40 >> 5);
                do
                {
                  *v41++ = 0;
                  --v50;
                }
                while ( v50 );
              }
              if ( v40 )
              {
                v42 = -1 << v40;
LABEL_48:
                _InterlockedAnd(v41, v42);
              }
            }
            else
            {
              if ( v27 != 32 )
              {
                v42 = ~(((1 << v27) - 1) << v38);
                goto LABEL_48;
              }
              *v41 = 0;
            }
            if ( v39 > 0x200000 )
              MiAttemptCoalesce(a1, BugCheckParameter4, v9 / v14);
LABEL_43:
            v11 += v9;
            v59 = v11;
          }
          else
          {
            v52 = (__int64)(v21 << 25) >> 16;
            if ( !v65 )
            {
              v54 = (unsigned int)MiVaToFlushVm(v52);
              MiInitializeTbFlushList((unsigned int)v61, v54, 20, 8, v55);
            }
            MiInsertTbFlushEntry(v61, v52, v9);
            if ( v65 == v62 || (v53 = MiTbFlushListPromoteThreshold(v61), v66 + 1 >= v53) )
            {
              if ( !v63 && !v64 )
                v64 = (unsigned __int64)MiTbFlushListPromoteThreshold(v61) < 0x400;
              MiFlushTbList(v61);
              _InterlockedOr(v56, 0);
              if ( (unsigned int)(KiTbFlushTimeStamp - v58) > 2
                || (v58 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v58) >= 2 )
              {
                v25 = v57;
                v9 = 0LL;
                goto LABEL_101;
              }
            }
          }
          v9 = 0LL;
        }
        BugCheckParameter4 = v20 / v14;
      }
      while ( v20 / v14 );
      v25 = v57;
      if ( v57 )
        goto LABEL_22;
LABEL_101:
      if ( v65 )
        MiFlushTbList(v61);
LABEL_22:
      v15 = v60;
      v10 = v25 + 1;
      v57 = v10;
    }
  }
  return MiReleaseLargePdeMappings(a1, a2, a3);
}
