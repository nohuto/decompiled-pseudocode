/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x1403BEF30
 * Callers:
 *     FsRtlAddBaseMcbEntry @ 0x1403BEF10 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     FsRtlAddEntry @ 0x1403BF7C0 (FsRtlAddEntry.c)
 *     FsRtlRemoveLargeEntry @ 0x1403BF904 (FsRtlRemoveLargeEntry.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  int v4; // r13d
  int v5; // r14d
  unsigned int v6; // ebx
  int v8; // ebp
  signed int v9; // r8d
  __int64 PairCount; // r15
  int v11; // esi
  signed int v12; // r9d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  _DWORD *Mapping; // r8
  int v16; // r9d
  unsigned int v17; // r11d
  int v18; // edx
  int v20; // ecx
  int v21; // eax
  ULONG v22; // edx
  ULONG v23; // eax
  __int64 v24; // rdx
  int v25; // r10d
  int v26; // eax
  int i; // r10d
  int v28; // eax
  __int64 v29; // r9
  __int64 v30; // rax
  _DWORD *v31; // r9
  signed int v32; // ecx
  signed int v33; // r8d
  unsigned int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // r14
  unsigned int *v37; // rcx
  unsigned int v38; // ebp
  unsigned int v39; // edx
  __int64 v40; // r15
  unsigned int v41; // r10d
  int v42; // r11d
  unsigned int v43; // r8d
  __int64 v44; // rcx
  ULONG MaximumPairCount; // edx
  char *v46; // rsi
  ULONG v47; // eax
  __int64 v48; // rcx
  unsigned int v49; // ecx
  unsigned __int64 v50; // rax
  ULONG v51; // ebp
  PVOID v52; // rax
  void *v53; // rsi
  _DWORD *v54; // r10
  __int64 v55; // rcx
  int v56; // r8d
  _DWORD *v57; // rdx
  int v58; // r9d
  int v59; // eax
  __int64 v60; // rax
  int v61; // r8d
  unsigned int v62; // r8d
  _DWORD *v63; // r11
  int v64; // r10d
  int v65; // edx
  __int64 v66; // rdx
  int v67; // ecx
  int v68; // ecx
  _DWORD *v69; // rdx
  __int64 v70; // rcx
  int v71; // r9d
  _DWORD *v72; // r8
  int v73; // eax
  PVOID v74; // rdx
  int v75; // edx
  int v76; // eax
  _DWORD *v77; // rdx
  int v78; // r8d
  int v79; // eax
  unsigned int v80; // ecx
  unsigned __int64 v81; // rax
  ULONG v82; // ebp
  char *PoolWithTag; // rax
  PVOID v84; // rdx
  __int64 v85; // rbp
  int v86; // edx
  unsigned int v87; // [rsp+60h] [rbp+8h]
  int v88; // [rsp+70h] [rbp+18h]

  v88 = Lbn;
  v4 = SectorCount;
  v5 = Lbn;
  v6 = Vbn;
  if ( Vbn >= 0 && Lbn >= 0 && SectorCount > 0 )
  {
    v8 = 0;
    v9 = 0;
    PairCount = Mcb->PairCount;
    v11 = PairCount - 1;
    v87 = PairCount - 1;
    v12 = PairCount - 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v9 > v12 )
          goto LABEL_22;
        v13 = (v12 + v9) / 2;
        v14 = v13;
        if ( !v13 || (unsigned int)Vbn >= *((_DWORD *)Mcb->Mapping + 2 * (int)v13 - 2) )
          break;
        v12 = v13 - 1;
      }
      Mapping = Mcb->Mapping;
      if ( (unsigned int)Vbn <= Mapping[2 * v13] - 1 )
        break;
      v9 = v13 + 1;
    }
    v16 = Mapping[2 * v13 + 1];
    v17 = v4 + Vbn - 1;
    if ( v16 == -1 )
    {
      for ( i = 0; ; i = v28 + 1 )
      {
        while ( 1 )
        {
          if ( i > v11 )
            goto LABEL_21;
          v28 = (v11 + i) / 2;
          v29 = (unsigned int)v28;
          if ( !v28 || v17 >= Mapping[2 * v28 - 2] )
            break;
          v11 = v28 - 1;
        }
        if ( v17 <= Mapping[2 * v28] - 1 )
          break;
      }
      v30 = (unsigned int)(v28 - 1);
      if ( v14 == (_DWORD)v30 )
      {
        v20 = 0;
        if ( (_DWORD)v29 )
          v20 = Mapping[2 * v30];
        if ( Mapping[2 * v29 + 1] != v5 + v20 - (_DWORD)Vbn )
          return -1073741823;
        if ( (_DWORD)v29 )
          v21 = Mapping[2 * v30];
        else
          v21 = 0;
        v4 = v21 - Vbn;
      }
LABEL_21:
      v11 = PairCount - 1;
    }
    else
    {
      if ( v13 )
        v18 = Mapping[2 * v13 - 2];
      else
        v18 = 0;
      if ( v5 != v6 + v16 - v18 )
        return -1073741823;
      v25 = Mapping[2 * v13];
      if ( v17 <= v25 - 1 )
        return 0;
      if ( v13 < (unsigned int)PairCount )
      {
        v6 = Mapping[2 * v13];
        if ( v13 == -1 )
          v6 = 0;
      }
      else
      {
        v6 = 0;
      }
      if ( v13 )
        v26 = Mapping[2 * v13 - 2];
      else
        v26 = 0;
      v5 = v16 + v25 - v26;
      v88 = v5;
      v4 = v17 - v6 + 1;
    }
LABEL_22:
    if ( (_DWORD)PairCount )
    {
      v31 = Mcb->Mapping;
      if ( v31[2 * (unsigned int)(PairCount - 1)] > v6 )
      {
        v32 = 0;
        v33 = v11;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v32 > v33 )
              goto LABEL_81;
            v34 = (v33 + v32) / 2;
            v35 = v34;
            if ( !v34 || v6 >= v31[2 * v34 - 2] )
              break;
            v33 = v34 - 1;
          }
          if ( v6 <= v31[2 * v34] - 1 )
            break;
          v32 = v34 + 1;
        }
        v36 = 8LL * v34;
        v37 = &v31[(unsigned __int64)v36 / 4];
        v38 = v6 + v4;
        v39 = v6 + v4 - 1;
        if ( v31[(unsigned __int64)v36 / 4 + 1] != -1 )
          return -1073741823;
        v40 = v34 - 1;
        if ( v34 )
        {
          if ( v31[2 * v40] > v6 )
            return -1073741823;
        }
        v41 = *v37 - 1;
        if ( v39 > v41 )
          return -1073741823;
        v42 = 0;
        if ( v34 )
          v43 = v31[2 * v40];
        else
          v43 = 0;
        if ( v43 >= v6 || v39 >= v41 )
        {
          v60 = 2 * v40;
          if ( (_DWORD)v35 )
            v61 = v31[2 * v40];
          else
            v61 = 0;
          if ( v61 == v6 && v39 < v41 )
          {
            v77 = &v31[v60];
            if ( (_DWORD)v35 )
            {
              v78 = v77[1];
              if ( v78 != -1 )
              {
                if ( (_DWORD)v35 == 1 )
                  v79 = 0;
                else
                  v79 = v31[2 * (unsigned int)(v35 - 2)];
                v42 = *v77 + v78 - v79;
              }
            }
            if ( v42 == v88 )
            {
              if ( (_DWORD)v35 )
              {
                *v77 += v4;
                return 0;
              }
              if ( (unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
              {
                *((_DWORD *)Mcb->Mapping + 1) = v88;
                *(_DWORD *)Mcb->Mapping = v4;
                return 0;
              }
            }
            else if ( (unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v35, 1LL) )
            {
              *(_DWORD *)((char *)Mcb->Mapping + v36 + 4) = v88;
              *(_DWORD *)((char *)Mcb->Mapping + v36) = v38;
              return 0;
            }
          }
          else
          {
            if ( (_DWORD)v35 )
              v62 = v31[2 * v40];
            else
              v62 = 0;
            v63 = &v31[v60];
            if ( v62 >= v6 || v39 != v41 )
            {
              v64 = 0;
              if ( (_DWORD)v35 )
              {
                v75 = v63[1];
                if ( v75 == -1 )
                {
                  v65 = 0;
                }
                else
                {
                  if ( (_DWORD)v35 == 1 )
                    v76 = 0;
                  else
                    v76 = v31[2 * (unsigned int)(v35 - 2)];
                  v65 = *v63 + v75 - v76;
                }
              }
              else
              {
                v65 = 0;
              }
              if ( v65 == v88 )
              {
                v66 = (unsigned int)(v35 + 1);
                v67 = -1;
                if ( (unsigned int)v35 < v87 )
                  v67 = v31[2 * v66 + 1];
                if ( v67 == v88 + v4 )
                {
                  if ( (_DWORD)v35 )
                  {
                    *v63 = v31[2 * v66];
                    FsRtlRemoveLargeEntry(Mcb, (unsigned int)v35, 2LL);
                  }
                  else
                  {
                    v31[3] = v88;
                    FsRtlRemoveLargeEntry(Mcb, 0LL, 1LL);
                  }
                  return 0;
                }
              }
              if ( (unsigned int)v35 >= v87 )
                v68 = -1;
              else
                v68 = v31[2 * (unsigned int)(v35 + 1) + 1];
              if ( v68 == v88 + v4 )
              {
                *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v35 + 1) + 1) = v88;
              }
              else
              {
                if ( !(_DWORD)v35 )
                  goto LABEL_152;
                v69 = Mcb->Mapping;
                v70 = (unsigned int)(v35 - 1);
                v71 = v69[2 * v70 + 1];
                v72 = &v69[2 * v70];
                if ( v71 != -1 )
                {
                  if ( (_DWORD)v35 == 1 )
                    v73 = 0;
                  else
                    v73 = v69[2 * (unsigned int)(v35 - 2)];
                  v64 = v71 + *v72 - v73;
                }
                if ( v64 != v88 )
                {
LABEL_152:
                  *((_DWORD *)Mcb->Mapping + 2 * v35 + 1) = v88;
                  return 0;
                }
                *v72 = v69[2 * v35];
              }
              FsRtlRemoveLargeEntry(Mcb, (unsigned int)v35, 1LL);
              return 0;
            }
            v85 = (unsigned int)(v35 + 1);
            if ( (unsigned int)v35 >= v87 )
              v86 = -1;
            else
              v86 = v31[2 * v85 + 1];
            if ( v86 == v88 + v4 )
            {
              *v37 = v6;
              *((_DWORD *)Mcb->Mapping + 2 * v85 + 1) = v88;
              return 0;
            }
            if ( (unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v35, 1LL) )
            {
              *(_DWORD *)((char *)Mcb->Mapping + v36 + 4) = -1;
              *(_DWORD *)((char *)Mcb->Mapping + v36) = v6;
              *((_DWORD *)Mcb->Mapping + 2 * v85 + 1) = v88;
              return 0;
            }
          }
        }
        else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v34, 2LL) )
        {
          v44 = (unsigned int)(v35 + 1);
          *(_DWORD *)((char *)Mcb->Mapping + v36 + 4) = -1;
          *(_DWORD *)((char *)Mcb->Mapping + v36) = v6;
          *((_DWORD *)Mcb->Mapping + 2 * v44 + 1) = v88;
          *((_DWORD *)Mcb->Mapping + 2 * v44) = v38;
          return 0;
        }
        return -1073741670;
      }
LABEL_81:
      v54 = Mcb->Mapping;
      v55 = (unsigned int)(PairCount - 1);
      v56 = v54[2 * v55];
      v57 = &v54[2 * v55];
      if ( v56 == v6 )
      {
        v58 = v57[1];
        if ( v58 != -1 )
        {
          if ( (_DWORD)PairCount == 1 )
            v59 = 0;
          else
            v59 = v54[2 * (unsigned int)(PairCount - 2)];
          v8 = v58 + v56 - v59;
        }
        if ( v8 == v5 )
        {
          *v57 = v56 + v4;
          return 0;
        }
      }
    }
    if ( v6 && (!(_DWORD)PairCount || *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(PairCount - 1)) != v6) )
    {
      MaximumPairCount = Mcb->MaximumPairCount;
      if ( Mcb->PairCount + 2 <= Mcb->MaximumPairCount )
      {
        v46 = (char *)Mcb->Mapping;
        goto LABEL_69;
      }
      v80 = 2 * MaximumPairCount;
      if ( MaximumPairCount >= 0x800 )
        v80 = MaximumPairCount + 2048;
      v81 = 8LL * v80;
      v82 = v80;
      if ( v81 <= 0xFFFFFFFF )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)Mcb->PoolType, (unsigned int)v81, 0x6D695346u);
        v46 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, Mcb->Mapping, 8LL * Mcb->PairCount);
          if ( Mcb->MaximumPairCount == 15 )
          {
            v84 = Mcb->Mapping;
            if ( Mcb->PoolType == 1 )
              ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlFirstPagedMappingLookasideList, v84);
            else
              ExFreeToNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, v84);
            Mcb->Mapping = v46;
            Mcb->MaximumPairCount = v82;
          }
          else
          {
            ExFreePoolWithTag(Mcb->Mapping, 0);
            Mcb->Mapping = v46;
            Mcb->MaximumPairCount = v82;
          }
LABEL_69:
          v47 = Mcb->PairCount;
          if ( (unsigned int)PairCount < v47 )
          {
            memmove(
              (char *)Mcb->Mapping + 8 * (unsigned int)(PairCount + 2),
              (char *)Mcb->Mapping + 8 * PairCount,
              8LL * (v47 - (unsigned int)PairCount));
            v46 = (char *)Mcb->Mapping;
          }
          Mcb->PairCount += 2;
          v48 = 8 * PairCount;
          *(_DWORD *)&v46[v48 + 4] = -1;
          *(_DWORD *)((char *)Mcb->Mapping + v48) = v6;
          v24 = 8LL * (unsigned int)(PairCount + 1);
          goto LABEL_28;
        }
      }
      if ( (Mcb->Flags & 1) != 0 )
LABEL_140:
        RtlRaiseStatus(-1073741670);
      return -1073741670;
    }
    v22 = Mcb->MaximumPairCount;
    if ( Mcb->PairCount + 1 <= Mcb->MaximumPairCount )
    {
LABEL_25:
      v23 = Mcb->PairCount;
      if ( (unsigned int)PairCount < v23 )
        memmove(
          (char *)Mcb->Mapping + 8 * (unsigned int)(PairCount + 1),
          (char *)Mcb->Mapping + 8 * PairCount,
          8LL * (v23 - (unsigned int)PairCount));
      ++Mcb->PairCount;
      v24 = 8 * PairCount;
LABEL_28:
      *(_DWORD *)((char *)Mcb->Mapping + v24 + 4) = v5;
      *(_DWORD *)((char *)Mcb->Mapping + v24) = v6 + v4;
      return 0;
    }
    v49 = 2 * v22;
    if ( v22 >= 0x800 )
      v49 = v22 + 2048;
    v50 = 8LL * v49;
    v51 = v49;
    if ( v50 <= 0xFFFFFFFF )
    {
      v52 = ExAllocatePoolWithTag((POOL_TYPE)Mcb->PoolType, (unsigned int)v50, 0x6D695346u);
      v53 = v52;
      if ( v52 )
      {
        memmove(v52, Mcb->Mapping, 8LL * Mcb->PairCount);
        if ( Mcb->MaximumPairCount == 15 )
        {
          v74 = Mcb->Mapping;
          if ( Mcb->PoolType == 1 )
            ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlFirstPagedMappingLookasideList, v74);
          else
            ExFreeToNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, v74);
          Mcb->Mapping = v53;
          Mcb->MaximumPairCount = v51;
        }
        else
        {
          ExFreePoolWithTag(Mcb->Mapping, 0);
          Mcb->Mapping = v53;
          Mcb->MaximumPairCount = v51;
        }
        goto LABEL_25;
      }
    }
    if ( (Mcb->Flags & 1) != 0 )
      goto LABEL_140;
    return -1073741670;
  }
  return -1073741811;
}
