/*
 * XREFs of VmpConvertPortionVpnRangeToGpnRange @ 0x1402536A0
 * Callers:
 *     VmpFlushTb @ 0x140253324 (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x140253DEC (VmpFlushTbVaRange.c)
 *     VmpQueryAccessedState @ 0x14045D8F4 (VmpQueryAccessedState.c)
 *     VmpFillGpnRanges @ 0x140494F58 (VmpFillGpnRanges.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x1406C57F0 (VmpUpdateCommitStateMemoryRange.c)
 * Callees:
 *     VmpVaMemoryRangeGetNext @ 0x1404DEB84 (VmpVaMemoryRangeGetNext.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x1406C4DA8 (VmpFindNextPinnedPageStateHelper.c)
 */

unsigned __int64 __fastcall VmpConvertPortionVpnRangeToGpnRange(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        _DWORD *a6,
        char a7)
{
  int v8; // esi
  unsigned __int64 *v11; // r9
  _QWORD *v12; // r11
  unsigned __int64 *v13; // rcx
  _QWORD *v14; // r10
  unsigned __int64 v15; // rbp
  __int64 v16; // r14
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 *v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rcx
  __int64 NextPinnedPageStateHelper; // rax
  __int64 v38; // rax
  __int64 Next; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // [rsp+20h] [rbp-68h]
  __int64 v45; // [rsp+20h] [rbp-68h]
  __int128 v46; // [rsp+28h] [rbp-60h]
  unsigned __int64 *v50; // [rsp+A8h] [rbp+20h]
  _QWORD *v51; // [rsp+B0h] [rbp+28h]
  __int64 v52; // [rsp+B8h] [rbp+30h]

  v8 = 0;
  v46 = 0uLL;
  v11 = a2;
  v12 = a1;
LABEL_2:
  v13 = (unsigned __int64 *)(a4 + 2);
  v14 = a4 + 1;
  while ( 1 )
  {
    v51 = v14;
    v50 = v13;
    v15 = *v11;
    v16 = 0LL;
    v17 = *a4;
    a5[1] = 0LL;
    *a6 = 0;
    v18 = v11[1] + v15 - 1;
    if ( !v17 )
      goto LABEL_27;
    if ( *v14 )
    {
      v15 = *v13;
      v16 = *v14;
      *v13 = 0LL;
      *v14 = 0LL;
      goto LABEL_7;
    }
    if ( v15 < *(_QWORD *)(v17 + 24) || v15 > *(_QWORD *)(v17 + 32) )
    {
LABEL_27:
      v17 = v12[6];
      if ( !v17 || v15 > *(_QWORD *)(v17 + 32) || v15 < *(_QWORD *)(v17 + 24) )
      {
        v28 = (unsigned __int64)(v12 + 3);
        if ( (v12[4] & 1) != 0 )
        {
          if ( *(_QWORD *)v28 )
            v17 = *(_QWORD *)v28 ^ v28;
          else
            v17 = 0LL;
        }
        else
        {
          v17 = *(_QWORD *)v28;
        }
        v33 = 0LL;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v17 )
            {
              v17 = v33;
              if ( v33 )
                goto LABEL_73;
              goto LABEL_23;
            }
            if ( v15 <= *(_QWORD *)(v17 + 32) )
              break;
            v34 = *(_QWORD *)(v17 + 8);
            if ( (v12[4] & 1) != 0 && v34 )
              v17 ^= v34;
            else
LABEL_55:
              v17 = v34;
          }
          v34 = *(_QWORD *)v17;
          if ( v15 >= *(_QWORD *)(v17 + 24) )
            break;
          v33 = v17;
          if ( (v12[4] & 1) == 0 || !v34 )
            goto LABEL_55;
          v17 ^= v34;
        }
        if ( (v12[4] & 1) != 0 && v34 )
          v34 ^= v17;
        v35 = 0LL;
        if ( v34 )
        {
          while ( 1 )
          {
            if ( v15 > *(_QWORD *)(v34 + 32) )
            {
              v36 = *(_QWORD *)(v34 + 8);
              if ( (v12[4] & 1) != 0 && v36 )
                goto LABEL_71;
            }
            else
            {
              v36 = *(_QWORD *)v34;
              if ( v15 >= *(_QWORD *)(v34 + 24) )
                v35 = v34;
              if ( (v12[4] & 1) != 0 && v36 )
              {
LABEL_71:
                v34 ^= v36;
                goto LABEL_66;
              }
            }
            v34 = v36;
LABEL_66:
            if ( !v34 )
            {
              if ( v35 )
                v17 = v35;
              break;
            }
          }
        }
LABEL_73:
        v12[6] = v17;
      }
    }
LABEL_7:
    v19 = *(_QWORD *)(v17 + 24);
    if ( v15 < v19 )
    {
      if ( v18 < v19 )
        goto LABEL_23;
      v15 = *(_QWORD *)(v17 + 24);
    }
    *a4 = v17;
    if ( !v16 )
      v16 = *(_QWORD *)(v17 + 40);
    if ( (*(_DWORD *)(v16 + 64) & 1) == 0 || (a7 & 2) != 0 )
      goto LABEL_11;
    v29 = *(_QWORD *)(v17 + 32);
    v30 = *(_QWORD *)(v16 + 48) - v19;
    v31 = *(_QWORD *)(v16 + 56);
    v32 = v15 + v30;
    v44 = v32;
    v52 = v31;
    if ( v18 < v29 )
    {
      v31 += v18 - v29;
      v52 = v31;
    }
    NextPinnedPageStateHelper = VmpFindNextPinnedPageStateHelper(v12, v32, v31, 1LL);
    if ( NextPinnedPageStateHelper == -1 )
    {
      v11 = a2;
      v14 = v51;
      v12 = a1;
LABEL_11:
      v20 = a3;
      goto LABEL_12;
    }
    if ( NextPinnedPageStateHelper != v44 )
    {
      v43 = NextPinnedPageStateHelper - v44;
      v20 = a3;
      if ( v43 < a3 )
        v20 = v43;
      goto LABEL_88;
    }
    v38 = VmpFindNextPinnedPageStateHelper(a1, NextPinnedPageStateHelper, v52, 0LL);
    v45 = v38;
    if ( v38 != -1 )
      break;
    if ( *(_QWORD *)v16 == v17 + 40 )
    {
      v15 = *(_QWORD *)(v17 + 32) + 1LL;
      if ( v15 > v18 )
      {
        v11 = a2;
LABEL_23:
        *(_OWORD *)v11 = v46;
        return v15;
      }
      Next = VmpVaMemoryRangeGetNext(a1, v17);
      v11 = a2;
      *a4 = Next;
      *a2 = v15;
      a2[1] = v18 - v15 + 1;
      goto LABEL_2;
    }
    v14 = v51;
    v11 = a2;
    v12 = a1;
    *v51 = *(_QWORD *)v16;
    v40 = *a2;
    if ( *a2 <= *(_QWORD *)(v17 + 24) )
      v40 = *(_QWORD *)(v17 + 24);
    v13 = v50;
    *v50 = v40;
  }
  v15 = v38 + *(_QWORD *)(v17 + 24) - *(_QWORD *)(v16 + 48);
  v41 = VmpFindNextPinnedPageStateHelper(a1, v38, v52, 1LL);
  v20 = a3;
  if ( v41 == -1 )
  {
LABEL_88:
    v11 = a2;
    v14 = v51;
    v12 = a1;
    goto LABEL_12;
  }
  v42 = v41 - v45;
  v11 = a2;
  v14 = v51;
  v12 = a1;
  if ( v42 < a3 )
    v20 = v42;
LABEL_12:
  v21 = *(_QWORD *)(v17 + 24);
  *a5 = v15 + *(_QWORD *)(v16 + 48) - v21;
  if ( v18 - v15 + 1 > v20 )
    v22 = v15 + v20 - 1;
  else
    v22 = v18;
  v23 = *(_QWORD *)(v17 + 32);
  if ( v22 >= v23 )
  {
    v8 = 1;
    a5[1] = v23 - v15 + 1;
    v25 = v23 + 1;
    v24 = v50;
    *(_QWORD *)&v46 = v25;
  }
  else
  {
    v24 = v50;
    a5[1] = v22 - v15 + 1;
    v25 = v22 + 1;
    *(_QWORD *)&v46 = v22 + 1;
    if ( v22 == v18 )
    {
      v8 = 1;
    }
    else
    {
      *v14 = v16;
      *v50 = v25;
    }
  }
  v26 = v18 - v25 + 1;
  *((_QWORD *)&v46 + 1) = v26;
  if ( (*(_DWORD *)(v17 + 72) & 2) != 0 )
    *a6 |= 2u;
  if ( v8 )
  {
    if ( *(_QWORD *)v16 == v17 + 40 )
    {
      if ( v26 )
        *a4 = VmpVaMemoryRangeGetNext(v12, v17);
      goto LABEL_23;
    }
    *v14 = *(_QWORD *)v16;
    if ( *v11 > v21 )
      v21 = *v11;
    *v24 = v21;
  }
  return v15;
}
