/*
 * XREFs of RtlpHpLfhOwnerRunMaintenance @ 0x1800633D0
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x180061EC0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18006251C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180062B00 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x180062990 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x180062C50 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x180063C80 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 */

void __fastcall RtlpHpLfhOwnerRunMaintenance(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 *v4; // r12
  unsigned __int64 *v5; // rsi
  char v7; // r11
  unsigned __int64 v10; // rbx
  _QWORD *v11; // r15
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  _BYTE *v14; // r9
  unsigned __int64 *v15; // r10
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  signed __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 *v21; // rax
  __int64 v22; // rax
  _BYTE *v23; // r9
  unsigned __int64 v24; // r8
  unsigned __int64 *v25; // r10
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rcx
  _BYTE *v33; // r10
  __int64 v34; // rax
  char v35; // dl
  char v36; // dl
  unsigned __int64 *v37; // rbx
  _BYTE *v38; // r8
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  unsigned __int64 *v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 **v44; // rax
  signed __int64 v45; // [rsp+20h] [rbp-50h]
  __int16 v46; // [rsp+24h] [rbp-4Ch]
  __int16 v47; // [rsp+24h] [rbp-4Ch]
  unsigned __int64 *v48; // [rsp+30h] [rbp-40h]
  __int64 v49; // [rsp+38h] [rbp-38h]
  __int64 v50; // [rsp+40h] [rbp-30h]
  __int64 v51; // [rsp+48h] [rbp-28h]
  __int64 v52; // [rsp+50h] [rbp-20h]
  __int64 v53; // [rsp+58h] [rbp-18h]
  __int128 v54; // [rsp+60h] [rbp-10h]
  signed __int64 v55; // [rsp+B8h] [rbp+48h]
  unsigned __int64 v56; // [rsp+B8h] [rbp+48h]
  __int64 v57; // [rsp+B8h] [rbp+48h]

  v4 = *(unsigned __int64 **)(a2 + 24);
  v5 = (unsigned __int64 *)(a2 + 24);
  v7 = a4;
  if ( v4 == (unsigned __int64 *)(a2 + 24) )
    goto LABEL_60;
  do
  {
    v10 = (unsigned __int64)v4;
    v11 = v4;
    v4 = (unsigned __int64 *)*v4;
    if ( *(unsigned __int16 *)(v10 + 18) + *(unsigned __int16 *)(v10 + 32) )
      goto LABEL_99;
    if ( (*(_BYTE *)a2 & 1) == 0 && (v10 ^ *(_QWORD *)(a2 + 56)) - 1 <= 0xFFE )
      goto LABEL_58;
    v51 = 0LL;
    v49 = a2 + 1;
    v12 = a2 + 40;
    v13 = *(_QWORD *)(v10 + 16);
    v14 = 0LL;
    v53 = 0LL;
    HIDWORD(v55) = HIDWORD(v13);
    v48 = v5;
    v50 = a2 + 40;
    v52 = a2 + 40;
    v54 = 0LL;
    v15 = (&v48)[2 * BYTE6(v13)];
    v45 = v13;
    v16 = HIWORD(v13);
    LODWORD(v55) = 0;
    if ( (*(_BYTE *)a2 & 1) == 0 )
      v14 = (_BYTE *)*(&v49 + 2 * (unsigned __int8)v16);
    if ( BYTE6(v55) == 3 )
    {
      v17 = (unsigned __int64)(a2 - a1) >> 6;
      WORD2(v45) = v17;
    }
    else
    {
      LOWORD(v17) = WORD2(v45);
    }
    BYTE6(v45) = 1;
    v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 16), v45, v55);
    if ( (_DWORD)v18 )
    {
LABEL_99:
      if ( ((v7 & 1) != 0 && *(_WORD *)(v10 + 18)
         || *(unsigned __int16 *)(v10 + 18) + *(unsigned __int16 *)(v10 + 32) == *(unsigned __int16 *)(v10 + 34))
        && *(_WORD *)(v10 + 18) )
      {
        RtlpHpLfhSubsegmentDelayFreeListProcess(
          a1,
          v10,
          (unsigned int)_InterlockedExchange((volatile __int32 *)(v10 + 16), 0));
        v7 = a4;
      }
      if ( *(_WORD *)(v10 + 32) == *(_WORD *)(v10 + 34) )
      {
        v23 = 0LL;
        v48 = v5;
        v51 = 0LL;
        v49 = a2 + 1;
        v53 = 0LL;
        v50 = a2 + 40;
        v52 = a2 + 40;
        v56 = *(_QWORD *)(v10 + 16);
        v24 = HIWORD(v56);
        v54 = 0LL;
        v46 = WORD2(v56);
        v25 = (&v48)[2 * BYTE6(v56)];
        if ( (*(_BYTE *)a2 & 1) == 0 )
          v23 = (_BYTE *)*(&v49 + 2 * BYTE6(v56));
        WORD2(v56) = 0;
        LOWORD(v26) = 0;
        if ( (_BYTE)v24 == 3 )
        {
          v26 = (unsigned __int64)(a2 - a1) >> 6;
          WORD2(v56) = v26;
        }
        BYTE6(v56) = 3;
        if ( *(_WORD *)(v10 + 32) == *(_WORD *)(v10 + 34) )
          *(_QWORD *)(v10 + 16) = v56;
        else
          v46 = _InterlockedExchange((volatile __int32 *)(v10 + 20), SHIDWORD(v56));
        if ( v46 != (_WORD)v26 )
        {
          if ( (_WORD)v26 )
          {
            if ( (*(_BYTE *)a2 & 1) == 0 )
              *(_WORD *)(v10 + 46) = *(_WORD *)(a2 + 4);
          }
          else
          {
            *(_WORD *)(v10 + 46) = 0;
          }
        }
        if ( v25 )
        {
          v27 = *v11;
          if ( *(_QWORD *)(*v11 + 8LL) != v10 )
            goto LABEL_96;
          v28 = *(_QWORD **)(v10 + 8);
          if ( *v28 != v10 )
            goto LABEL_96;
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
          if ( v23 )
            --*v23;
        }
        v29 = *a3;
        if ( *(unsigned __int64 **)(*a3 + 8) != a3 )
          goto LABEL_96;
        *v11 = v29;
        *(_QWORD *)(v10 + 8) = a3;
        *(_QWORD *)(v29 + 8) = v10;
        *a3 = v10;
      }
      else if ( (v7 & 4) != 0
             && *(_BYTE *)(v10 + 39) == 1
             && *(_BYTE *)(v10 + 38)
             && ((*(_BYTE *)a2 & 1) != 0 || (v10 ^ *(_QWORD *)(a2 + 56)) - 1 > 0xFFE) )
      {
        RtlpHpLfhSubsegmentReformatAsMulti(a1, v10, 0);
      }
    }
    else
    {
      if ( WORD2(v18) != (_WORD)v17 )
      {
        if ( (_WORD)v17 )
        {
          if ( (*(_BYTE *)a2 & 1) == 0 )
            *(_WORD *)(v10 + 46) = *(_WORD *)(a2 + 4);
        }
        else
        {
          *(_WORD *)(v10 + 46) = 0;
        }
      }
      if ( v15 )
      {
        v19 = *v11;
        if ( *(_QWORD *)(*v11 + 8LL) != v10 )
          goto LABEL_96;
        v20 = *(_QWORD **)(v10 + 8);
        if ( *v20 != v10 )
          goto LABEL_96;
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        if ( v14 )
          --*v14;
      }
      if ( a2 != -40 )
      {
        if ( *(_WORD *)(v10 + 32) == *(_WORD *)(v10 + 34) )
        {
          v21 = *(unsigned __int64 **)(a2 + 48);
          if ( *v21 != v12 )
            goto LABEL_96;
          *v11 = v12;
          *(_QWORD *)(v10 + 8) = v21;
          *v21 = v10;
          *(_QWORD *)(a2 + 48) = v10;
        }
        else
        {
          v22 = *(_QWORD *)v12;
          if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
            goto LABEL_96;
          *v11 = v22;
          *(_QWORD *)(v10 + 8) = v12;
          *(_QWORD *)(v22 + 8) = v10;
          *(_QWORD *)v12 = v10;
        }
      }
    }
LABEL_58:
    v7 = a4;
  }
  while ( v4 != v5 );
  v5 = (unsigned __int64 *)(a2 + 24);
LABEL_60:
  RtlpHpLfhOwnerFreeListProcess(a1, a2, a3, v7);
  while ( 1 )
  {
    if ( (unsigned __int64 *)*a3 == a3 )
      return;
    v30 = a3[1];
    if ( *(_WORD *)(v30 + 32) == *(_WORD *)(v30 + 34) && (a4 & 2) != 0 )
      return;
    v31 = *(_QWORD *)v30;
    if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 )
      goto LABEL_96;
    v32 = *(_QWORD **)(v30 + 8);
    if ( *v32 != v30 )
      goto LABEL_96;
    *v32 = v31;
    *(_QWORD *)(v31 + 8) = v32;
    v33 = 0LL;
    v49 = a2 + 1;
    v50 = a2 + 40;
    v52 = a2 + 40;
    v34 = *(_QWORD *)(v30 + 16);
    v35 = *(_BYTE *)a2;
    v48 = v5;
    v51 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v47 = WORD2(v34);
    v36 = v35 & 1;
    v57 = v34;
    if ( !v36 )
      v33 = (_BYTE *)(a2 + 1);
    v37 = (&v48)[2 * BYTE6(v34)];
    v38 = 0LL;
    if ( !v36 )
    {
      v38 = (_BYTE *)*(&v49 + 2 * BYTE6(v34));
      if ( *v33 >= 8u )
        break;
    }
    if ( BYTE6(v34) == 3 )
    {
      v39 = (unsigned __int64)(a2 - a1) >> 6;
      WORD2(v57) = v39;
    }
    else
    {
      LOWORD(v39) = WORD2(v34);
    }
    BYTE6(v57) = 0;
    if ( *(_WORD *)(v30 + 32) == *(_WORD *)(v30 + 34) )
      *(_QWORD *)(v30 + 16) = v57;
    else
      v47 = _InterlockedExchange((volatile __int32 *)(v30 + 20), SHIDWORD(v57));
    if ( v47 != (_WORD)v39 )
    {
      if ( (_WORD)v39 )
      {
        if ( (*(_BYTE *)a2 & 1) == 0 )
          *(_WORD *)(v30 + 46) = *(_WORD *)(a2 + 4);
      }
      else
      {
        *(_WORD *)(v30 + 46) = 0;
      }
    }
    if ( v37 )
    {
      v40 = *(_QWORD *)v30;
      if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 )
        goto LABEL_96;
      v41 = *(_QWORD **)(v30 + 8);
      if ( *v41 != v30 )
        goto LABEL_96;
      *v41 = v40;
      *(_QWORD *)(v40 + 8) = v41;
      if ( v38 )
        --*v38;
    }
    if ( *(_WORD *)(v30 + 32) == *(_WORD *)(v30 + 34) )
    {
      v42 = (unsigned __int64 *)v5[1];
      if ( (unsigned __int64 *)*v42 != v5 )
        goto LABEL_96;
      *(_QWORD *)v30 = v5;
      *(_QWORD *)(v30 + 8) = v42;
      *v42 = v30;
      v5[1] = v30;
    }
    else
    {
      v43 = *v5;
      if ( *(unsigned __int64 **)(*v5 + 8) != v5 )
        goto LABEL_96;
      *(_QWORD *)v30 = v43;
      *(_QWORD *)(v30 + 8) = v5;
      *(_QWORD *)(v43 + 8) = v30;
      *v5 = v30;
    }
    if ( v33 )
      ++*v33;
  }
  v44 = (unsigned __int64 **)a3[1];
  if ( *v44 != a3 )
LABEL_96:
    __fastfail(3u);
  *(_QWORD *)v30 = a3;
  *(_QWORD *)(v30 + 8) = v44;
  *v44 = (unsigned __int64 *)v30;
  a3[1] = v30;
}
