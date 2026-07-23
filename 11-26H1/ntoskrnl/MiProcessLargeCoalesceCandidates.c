/*
 * XREFs of MiProcessLargeCoalesceCandidates @ 0x1403D2564
 * Callers:
 *     MiRebuildLargePagesThread @ 0x1403D1720 (MiRebuildLargePagesThread.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1403D2D74 (MiPerformOnDemandLargePageCoalesce.c)
 * Callees:
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x1403D2B10 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiCheckLargePagesExist @ 0x1403D30D4 (MiCheckLargePagesExist.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     MiAccumulateTimeBoundTime @ 0x1403D357C (MiAccumulateTimeBoundTime.c)
 */

__int64 __fastcall MiProcessLargeCoalesceCandidates(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned int *v8; // r10
  unsigned int *v9; // r13
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // r11
  __int64 v13; // rbp
  __int64 v14; // r12
  unsigned int v15; // ebx
  int v16; // r12d
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r11
  unsigned __int64 *v30; // r9
  _QWORD *v31; // rax
  unsigned __int64 i; // r8
  __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  __int64 v35; // r8
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // r9
  volatile signed __int32 *v42; // r8
  unsigned int v43; // eax
  __int64 v44; // rcx
  unsigned __int64 v45; // r10
  int v46; // r9d
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned int v52; // eax
  unsigned int *v53; // [rsp+40h] [rbp-C8h]
  int v54; // [rsp+48h] [rbp-C0h]
  __int64 v55; // [rsp+50h] [rbp-B8h]
  __int64 v56; // [rsp+60h] [rbp-A8h]
  __int64 v57; // [rsp+68h] [rbp-A0h]
  _QWORD *v58; // [rsp+70h] [rbp-98h]
  __int64 v59; // [rsp+78h] [rbp-90h]
  __int64 v60; // [rsp+80h] [rbp-88h]
  char CurrentIrql; // [rsp+88h] [rbp-80h]
  unsigned __int64 v62; // [rsp+90h] [rbp-78h]
  unsigned __int64 v63; // [rsp+98h] [rbp-70h]
  unsigned __int64 v64; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v66; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v67; // [rsp+B8h] [rbp-50h]
  int v68; // [rsp+110h] [rbp+8h]
  unsigned __int64 v70; // [rsp+128h] [rbp+20h]

  v4 = a2;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v58 = &a1[6 * a2];
  v60 = 0LL;
  v68 = 0;
  LODWORD(v7) = 1;
  if ( a3 )
  {
    v60 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8 * v4 + 56240);
    v8 = (unsigned int *)MiReferencePageRuns((__int64)a1, 1u);
    v53 = v8;
    v7 = *v8;
    v9 = &v8[4 * v7 + 4];
  }
  else
  {
    v8 = 0LL;
    v53 = 0LL;
    v9 = 0LL;
  }
  v10 = MiPageSizes[v4];
  v11 = 2 * v6;
  v12 = 1LL << (LOBYTE(MiLargePageCoalesceCandidateBitmapShifts[v4]) - (unsigned __int8)MiLargePageShifts[v4]);
  v70 = v10;
  v55 = v12;
  if ( (_DWORD)v4 )
  {
    v13 = 2LL;
    if ( (_DWORD)v4 == 1 )
      v14 = a1[2096];
    else
      v14 = qword_140E3BFB8;
  }
  else
  {
    v14 = a1[2103];
    v13 = 4LL;
  }
  v57 = a1[v11 + 2098];
  v56 = v14;
  v59 = 0LL;
  while ( (_DWORD)v7 )
  {
    v7 = (unsigned int)(v7 - 1);
    v54 = v7;
    if ( !a3 )
    {
      v7 = 0LL;
      v18 = a1[2785] + 1LL;
      goto LABEL_17;
    }
    if ( v9[2 * v7] == *(_DWORD *)(a3 + 12) )
    {
      v37 = 2LL * (unsigned int)v7;
      v7 = *(_QWORD *)&v8[4 * (unsigned int)v7 + 4];
      v18 = v7 + *(_QWORD *)&v8[2 * v37 + 6];
LABEL_17:
      v19 = v10 - 1;
      v20 = v7 - 1 + v10;
      v21 = ~v19;
      LODWORD(v7) = v54;
      v22 = v21 & v20;
      v23 = v21 & v18;
      v63 = v22;
      if ( v22 >= v23 )
        goto LABEL_27;
      v24 = MiLargePageCoalesceCandidateBitmapShifts[v6];
      v25 = v23 - 1;
      v26 = v22 >> v24;
      v27 = a1[v11 + 2097] - 1LL;
      v62 = v25;
      if ( v25 >> v24 < v27 )
        v27 = v25 >> v24;
      v67 = v27;
      v28 = v27 + 1;
      v66 = v27 + 1;
      while ( 2 )
      {
        v8 = v53;
        LODWORD(v7) = v54;
        if ( v28 > v26 )
        {
          v29 = v57 + 8 * (v27 >> 6);
          v30 = (unsigned __int64 *)(v57 + 8 * (v26 >> 6));
          v31 = v30 + 1;
          for ( i = *v30 & ~((1LL << v26) - 1); ; i = *v30 )
          {
            v8 = v53;
            LODWORD(v7) = v54;
            if ( i )
              break;
            if ( (unsigned __int64)v31 > v29 )
              goto LABEL_25;
            ++v30;
            ++v31;
          }
          _BitScanForward64((unsigned __int64 *)&v33, i);
          v34 = (unsigned int)v33 + (((__int64)v30 - v57) >> 3 << 6);
          if ( v34 <= v28 )
          {
            v35 = ((1LL << v33) - 1) | i;
            while ( 1 )
            {
              v36 = ~v35;
              if ( v36 )
                break;
              if ( (unsigned __int64)(v30 + 1) > v29 )
              {
                LODWORD(v38) = 64;
                goto LABEL_40;
              }
              v35 = v30[1];
              ++v30;
            }
            _BitScanForward64((unsigned __int64 *)&v38, v36);
LABEL_40:
            v26 = (((__int64)v30 - v57) >> 3 << 6) + (unsigned int)v38;
            if ( v26 > v28 )
              v26 = v28;
            v64 = v26;
            v12 = v55;
            if ( v26 == v34 )
            {
              LODWORD(v7) = v54;
              break;
            }
            v39 = v56 + v13 * v55 * v34;
LABEL_44:
            if ( v34 >= v26 )
            {
              v28 = v66;
              v27 = v67;
              continue;
            }
            if ( !a3 )
            {
              v40 = v34 & 0x1F;
              LOBYTE(v41) = 1;
              v58[2111] = v34;
              v42 = (volatile signed __int32 *)(a1[2 * v6 + 2098] + 4 * (v34 >> 5));
              if ( v40 + 1 <= 0x20 )
              {
                v43 = ~(1 << v40);
                goto LABEL_48;
              }
              if ( (v34 & 0x1F) == 0 )
                goto LABEL_58;
              _InterlockedAnd(v42, ~(((1 << (32 - (v34 & 0x1F))) - 1) << v40));
              v41 = 1LL - (32 - (unsigned int)(v34 & 0x1F));
              ++v42;
              if ( v41 >= 0x20 )
              {
                v49 = v41 >> 5;
                v41 += -32LL * (v41 >> 5);
                do
                {
                  *v42++ = 0;
                  --v49;
                }
                while ( v49 );
              }
              if ( v41 )
              {
LABEL_58:
                v43 = -1 << v41;
LABEL_48:
                _InterlockedAnd(v42, v43);
              }
            }
            v44 = MiLargePageCoalesceCandidateBitmapShifts[v6];
            v45 = v34 << v44;
            v65 = v34 + 1;
            v46 = v39;
            v47 = ((v34 + 1) << v44) - 1;
            v48 = v39 + v13 * (v12 - 1);
            if ( v47 > v62 )
              v48 -= v13 * ((v47 - v62) / v70);
            if ( v45 < v63 )
            {
              v50 = v63 - v45;
              LODWORD(v45) = v63;
              v46 = v39 + v13 * (v50 / v70);
            }
            v15 = MiProcessLargeCoalesceBitmapCandidates((_DWORD)a1, v45, a2, v46, v48, v13, CurrentIrql, a3);
            if ( a3 )
            {
              if ( v15 == -1073741267 )
              {
                v68 = 1;
              }
              else if ( v15 != 261 )
              {
                goto LABEL_12;
              }
              if ( (++v59 & 0x1F) == 0 && (unsigned int)MiAccumulateTimeBoundTime(*(_QWORD *)(a3 + 32) + 40LL, 0LL) )
                goto LABEL_64;
            }
            else
            {
              v58[2111] = -2LL;
            }
            v39 += v13 * v55;
            v26 = v64;
            v34 = v65;
            v12 = v55;
            goto LABEL_44;
          }
LABEL_25:
          v12 = v55;
        }
        break;
      }
      v11 = 2 * v6;
LABEL_27:
      v10 = v70;
    }
  }
  v15 = 261;
  if ( a3 )
  {
    *(_QWORD *)(*(_QWORD *)(a3 + 32) + 8 * v6 + 16) = v60;
    *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4 * v6) = *(_DWORD *)(a3 + 12);
    v51 = v58[2111];
    if ( v51 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      v16 = v68;
    }
    else
    {
      v52 = MiProcessLargeCoalesceBitmapCandidates(
              (_DWORD)a1,
              v51 << MiLargePageCoalesceCandidateBitmapShifts[v6],
              a2,
              (int)v56 + (int)v13 * (int)v12 * (int)v51,
              v56 + v13 * v12 * v51 + v13 * (v12 - 1),
              v13,
              CurrentIrql,
              a3);
      v15 = v52;
      if ( v52 == -1073741267 )
      {
        v15 = 261;
        v16 = 1;
      }
      else
      {
        v16 = v68;
        if ( v52 != 261 )
          goto LABEL_12;
      }
    }
    if ( (unsigned int)MiCheckLargePagesExist(a3) )
    {
      v15 = 255;
      goto LABEL_12;
    }
    if ( (unsigned int)MiAccumulateTimeBoundTime(*(_QWORD *)(a3 + 32) + 40LL, 0LL) )
    {
LABEL_64:
      v15 = 258;
      goto LABEL_12;
    }
  }
  else
  {
    v16 = v68;
  }
  if ( v16 )
    v15 = -1073741267;
LABEL_12:
  if ( v53 )
    MiDereferencePageRuns(v53);
  return v15;
}
