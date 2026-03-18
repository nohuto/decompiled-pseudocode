/*
 * XREFs of MiProcessLargeCoalesceCandidates @ 0x1403C8674
 * Callers:
 *     MiRebuildLargePagesThread @ 0x1403C7830 (MiRebuildLargePagesThread.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1403C8EC4 (MiPerformOnDemandLargePageCoalesce.c)
 * Callees:
 *     MiReferencePageRuns @ 0x14028EEEC (MiReferencePageRuns.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x1403C8C60 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiCheckLargePagesExist @ 0x1403C9224 (MiCheckLargePagesExist.c)
 *     MiDereferencePageRuns @ 0x1403C9634 (MiDereferencePageRuns.c)
 *     MiAccumulateTimeBoundTime @ 0x1403C96CC (MiAccumulateTimeBoundTime.c)
 */

__int64 __fastcall MiProcessLargeCoalesceCandidates(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // r8d
  __int64 v6; // r14
  unsigned int *v7; // r11
  __int64 v8; // r12
  unsigned int *v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // r12d
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // r10
  unsigned __int64 v29; // rbx
  _QWORD *v30; // r9
  unsigned __int64 v31; // r8
  _QWORD *i; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r11
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
  unsigned int *v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // [rsp+40h] [rbp-C8h]
  unsigned int *v55; // [rsp+48h] [rbp-C0h]
  int v56; // [rsp+58h] [rbp-B0h]
  __int64 v57; // [rsp+60h] [rbp-A8h]
  __int64 v58; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+70h] [rbp-98h]
  _QWORD *v60; // [rsp+78h] [rbp-90h]
  __int64 v61; // [rsp+80h] [rbp-88h]
  __int64 v62; // [rsp+88h] [rbp-80h]
  char CurrentIrql; // [rsp+90h] [rbp-78h]
  unsigned __int64 v64; // [rsp+98h] [rbp-70h]
  unsigned __int64 v65; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v66; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v67; // [rsp+B8h] [rbp-50h]
  int v68; // [rsp+110h] [rbp+8h]
  unsigned __int64 v70; // [rsp+120h] [rbp+18h]
  unsigned __int64 v71; // [rsp+128h] [rbp+20h]

  v5 = a2;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v62 = 0LL;
  v68 = 0;
  v60 = &a1[6 * a2];
  if ( a3 )
  {
    v62 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8LL * a2 + 56240);
    v49 = (unsigned int *)MiReferencePageRuns((__int64)a1, 1u);
    v5 = a2;
    v7 = v49;
    v55 = v49;
    v8 = *v49;
    v9 = &v49[4 * v8 + 4];
  }
  else
  {
    v7 = 0LL;
    LODWORD(v8) = 1;
    v55 = 0LL;
    v9 = 0LL;
  }
  v10 = 2 * v6;
  v71 = MiPageSizes[v6];
  v11 = 1LL << (LOBYTE(MiLargePageCoalesceCandidateBitmapShifts[v6]) - (unsigned __int8)MiLargePageShifts[v6]);
  v54 = v11;
  if ( v5 )
  {
    v12 = 2LL;
    if ( v5 == 1 )
      v13 = a1[2096];
    else
      v13 = qword_140E3BE38;
  }
  else
  {
    v13 = a1[2103];
    v12 = 4LL;
  }
  v57 = v13;
  v58 = a1[v10 + 2098];
  v61 = 0LL;
LABEL_7:
  v14 = v71;
  while ( (_DWORD)v8 )
  {
    v8 = (unsigned int)(v8 - 1);
    v56 = v8;
    if ( a3 )
    {
      if ( v9[2 * v8] != *(_DWORD *)(a3 + 12) )
        goto LABEL_7;
      v18 = *(_QWORD *)&v7[4 * (unsigned int)v8 + 4];
      v14 = v71;
      v19 = v18 + *(_QWORD *)&v7[4 * (unsigned int)v8 + 6];
    }
    else
    {
      v18 = 0LL;
      v19 = a1[2785] + 1LL;
    }
    v20 = ~(v14 - 1);
    v21 = v20 & (v14 + v18 - 1);
    v22 = v20 & v19;
    v65 = v21;
    if ( v21 < v22 )
    {
      v23 = MiLargePageCoalesceCandidateBitmapShifts[v6];
      v24 = v22 - 1;
      v64 = v24;
      v25 = v21 >> v23;
      v26 = a1[v10 + 2097] - 1LL;
      if ( v24 >> v23 < v26 )
        v26 = v24 >> v23;
      v67 = v26;
      v27 = v26 + 1;
      v59 = v26 + 1;
      while ( 2 )
      {
        v7 = v55;
        LODWORD(v8) = v56;
        if ( v27 > v25 )
        {
          v28 = 0LL;
          v29 = v58 + 8 * (v26 >> 6);
          v30 = (_QWORD *)(v58 + 8 * (v25 >> 6));
          v31 = *v30 & ~((1LL << v25) - 1);
          for ( i = v30 + 1; ; ++i )
          {
            v7 = v55;
            LODWORD(v8) = v56;
            if ( v31 )
              break;
            if ( (unsigned __int64)i > v29 )
              goto LABEL_26;
            v31 = *++v30;
          }
          _BitScanForward64((unsigned __int64 *)&v33, v31);
          v34 = (unsigned int)v33 + (((__int64)v30 - v58) >> 3 << 6);
          v70 = v34;
          if ( v34 > v59 )
          {
LABEL_26:
            v11 = v54;
            break;
          }
          v35 = ((1LL << v33) - 1) | v31;
          while ( 1 )
          {
            v36 = ~v35;
            if ( v36 )
              break;
            v28 += 64LL;
            if ( (unsigned __int64)(v30 + 1) > v29 )
            {
              LODWORD(v37) = 64;
              goto LABEL_35;
            }
            v35 = v30[1];
            ++v30;
          }
          _BitScanForward64((unsigned __int64 *)&v37, v36);
LABEL_35:
          v25 = (((__int64)v30 - v58) >> 3 << 6) + (unsigned int)v37;
          if ( v25 > v59 )
            v25 = v59;
          v66 = v25;
          if ( v25 == v34 )
          {
            LODWORD(v8) = v56;
            goto LABEL_26;
          }
          v38 = v54;
          v39 = v57 + v12 * v54 * v34;
LABEL_39:
          if ( v34 >= v25 )
          {
            v11 = v54;
            v27 = v59;
            v26 = v67;
            continue;
          }
          if ( !a3 )
          {
            v40 = v34 & 0x1F;
            LOBYTE(v41) = 1;
            v60[2111] = v34;
            v42 = (volatile signed __int32 *)(a1[2 * v6 + 2098] + 4 * (v34 >> 5));
            if ( v40 + 1 <= 0x20 )
            {
              v43 = ~(1 << v40);
              goto LABEL_43;
            }
            if ( (v34 & 0x1F) == 0 )
              goto LABEL_53;
            _InterlockedAnd(v42, ~(((1 << (32 - (v34 & 0x1F))) - 1) << v40));
            v41 = 1LL - (32 - (unsigned int)(v34 & 0x1F));
            ++v42;
            if ( v41 >= 0x20 )
            {
              v50 = v41 >> 5;
              v41 += -32LL * (v41 >> 5);
              do
              {
                *v42++ = 0;
                --v50;
              }
              while ( v50 );
            }
            if ( v41 )
            {
LABEL_53:
              v43 = -1 << v41;
LABEL_43:
              _InterlockedAnd(v42, v43);
            }
          }
          v44 = MiLargePageCoalesceCandidateBitmapShifts[v6];
          v45 = v70 << v44;
          v46 = v39;
          v47 = (++v70 << v44) - 1;
          v48 = v39 + v12 * (v38 - 1);
          if ( v47 > v64 )
            v48 -= v12 * ((v47 - v64) / v71);
          if ( v45 < v65 )
          {
            v51 = v65 - v45;
            LODWORD(v45) = v65;
            v46 = v39 + v12 * (v51 / v71);
          }
          v15 = MiProcessLargeCoalesceBitmapCandidates((_DWORD)a1, v45, a2, v46, v48, v12, CurrentIrql, a3);
          if ( a3 )
          {
            if ( v15 == -1073741267 )
            {
              v68 = 1;
            }
            else if ( v15 != 261 )
            {
              goto LABEL_13;
            }
            if ( (++v61 & 0x1F) == 0 && (unsigned int)MiAccumulateTimeBoundTime(*(_QWORD *)(a3 + 32) + 40LL, 0LL) )
              goto LABEL_59;
          }
          else
          {
            v60[2111] = -2LL;
          }
          v39 += v12 * v54;
          v25 = v66;
          v34 = v70;
          v38 = v54;
          goto LABEL_39;
        }
        break;
      }
      v10 = 2 * v6;
      goto LABEL_7;
    }
  }
  v15 = 261;
  if ( a3 )
  {
    *(_QWORD *)(*(_QWORD *)(a3 + 32) + 8 * v6 + 16) = v62;
    *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4 * v6) = *(_DWORD *)(a3 + 12);
    v52 = v60[2111];
    if ( v52 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      v16 = v68;
    }
    else
    {
      v53 = MiProcessLargeCoalesceBitmapCandidates(
              (_DWORD)a1,
              v52 << MiLargePageCoalesceCandidateBitmapShifts[v6],
              a2,
              (int)v57 + (int)v12 * (int)v11 * (int)v52,
              v57 + v12 * v11 * v52 + v12 * (v11 - 1),
              v12,
              CurrentIrql,
              a3);
      v15 = v53;
      if ( v53 == -1073741267 )
      {
        v15 = 261;
        v16 = 1;
      }
      else
      {
        v16 = v68;
        if ( v53 != 261 )
          goto LABEL_13;
      }
    }
    if ( (unsigned int)MiCheckLargePagesExist(a3) )
    {
      v15 = 255;
      goto LABEL_13;
    }
    if ( (unsigned int)MiAccumulateTimeBoundTime(*(_QWORD *)(a3 + 32) + 40LL, 0LL) )
    {
LABEL_59:
      v15 = 258;
      goto LABEL_13;
    }
  }
  else
  {
    v16 = v68;
  }
  if ( v16 )
    v15 = -1073741267;
LABEL_13:
  if ( v55 )
    MiDereferencePageRuns(v55);
  return v15;
}
