/*
 * XREFs of FsRtlRemoveBaseMcbEntry @ 0x1403BE9D0
 * Callers:
 *     FsRtlRemoveLargeMcbEntry @ 0x1404E2060 (FsRtlRemoveLargeMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x1403BF7C0 (FsRtlAddEntry.c)
 *     FsRtlRemoveLargeEntry @ 0x1403BF904 (FsRtlRemoveLargeEntry.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

BOOLEAN __stdcall FsRtlRemoveBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  LONGLONG v3; // r15
  LONGLONG v4; // rdi
  ULONG v6; // r14d
  int v7; // r8d
  unsigned int v8; // r12d
  int v9; // r9d
  unsigned int v10; // eax
  __int64 v11; // rbx
  int v12; // edx
  unsigned int v13; // eax
  _DWORD *Mapping; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // r10d
  char *v18; // r11
  int v19; // eax
  __int64 v20; // rax
  _DWORD *v21; // r10
  int v22; // r8d
  __int64 v23; // rax
  int v25; // ecx
  __int64 v26; // r14
  _DWORD *v27; // r8
  __int64 v28; // rcx
  int v29; // r9d
  _DWORD *v30; // r8
  int v31; // eax
  ULONG PairCount; // eax
  int v33; // r10d
  int v34; // r10d
  int v35; // r10d
  int v36; // r9d
  __int64 v37; // r11
  __int64 v38; // r10
  _DWORD *v39; // rdx
  int v40; // r9d
  int v41; // r8d
  int v42; // eax
  int v43; // eax
  unsigned int v44; // ebp
  __int64 v45; // rcx
  __int64 v46; // rbx
  int v47; // eax
  int v48; // eax

  v3 = SectorCount;
  v4 = Vbn;
  if ( !Vbn )
  {
    PairCount = Mcb->PairCount;
    if ( PairCount )
    {
      if ( SectorCount >= *((unsigned int *)Mcb->Mapping + 2 * PairCount - 2) )
      {
        Mcb->PairCount = 0;
        return 1;
      }
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_2:
        if ( v3 <= 0 )
          return 1;
        v6 = Mcb->PairCount;
        v7 = 0;
        v8 = v6 - 1;
        v9 = v6 - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v7 > v9 )
              return 1;
            v10 = (v9 + v7) / 2;
            v11 = v10;
            if ( v10 )
            {
              v12 = v10 - 1;
              v13 = *((_DWORD *)Mcb->Mapping + 2 * (int)(v10 - 1));
            }
            else
            {
              v13 = 0;
              v12 = -1;
            }
            if ( (unsigned int)v4 >= v13 )
              break;
            v9 = v12;
          }
          Mapping = Mcb->Mapping;
          if ( (unsigned int)v4 <= Mapping[2 * (int)v11] - 1 )
            break;
          v7 = v11 + 1;
        }
        v15 = (unsigned int)(v11 - 1);
        v16 = (_DWORD)v11 ? (unsigned int)Mapping[2 * v15] : 0LL;
        if ( v16 != v4 )
          break;
        v17 = Mapping[2 * v11];
        v18 = (char *)&Mapping[2 * v11];
        if ( (unsigned int)(v17 - 1) >= v4 + v3 )
          break;
        if ( (_DWORD)v11 )
          v19 = Mapping[2 * v15];
        else
          v19 = 0;
        v20 = (unsigned int)(v17 - v19);
        v4 += v20;
        v3 -= v20;
        if ( *((_DWORD *)v18 + 1) != -1 )
        {
          if ( (_DWORD)v11 == v8 )
          {
            if ( (_DWORD)v11
              && ((v21 = &Mapping[2 * (unsigned int)v15], v22 = v21[1], v22 == -1)
               || ((_DWORD)v11 != 1 ? (v48 = Mapping[2 * (unsigned int)(v11 - 2)]) : (v48 = 0), *v21 + v22 + ~v48 == -1)) )
            {
              v23 = (unsigned int)(v15 + 2);
              if ( (unsigned int)v23 < v6 )
                memmove(v21, &Mapping[2 * v23], 8LL * (v6 - (unsigned int)v15 - 2));
              Mcb->PairCount -= 2;
            }
            else
            {
LABEL_91:
              FsRtlRemoveLargeEntry(Mcb, (unsigned int)v11, 1LL);
            }
          }
          else
          {
            if ( (_DWORD)v11 )
            {
              v33 = Mapping[2 * (unsigned int)v15 + 1];
              if ( v33 == -1
                || ((_DWORD)v11 == 1 ? (v43 = 0) : (v43 = Mapping[2 * (unsigned int)(v11 - 2)]),
                    Mapping[2 * (unsigned int)v15] + v33 + ~v43 == -1) )
              {
LABEL_43:
                v34 = Mapping[2 * (unsigned int)v15 + 1];
                if ( v34 == -1 )
                  goto LABEL_44;
                v47 = (_DWORD)v11 == 1 ? 0 : Mapping[2 * (unsigned int)(v11 - 2)];
                if ( Mapping[2 * (unsigned int)v15] + v34 + ~v47 == -1 )
                  goto LABEL_44;
                goto LABEL_84;
              }
            }
            if ( (unsigned int)v11 >= v8 || Mapping[2 * (unsigned int)(v11 + 1) + 1] == -1 )
            {
              if ( (_DWORD)v11 )
                goto LABEL_43;
LABEL_84:
              if ( (unsigned int)v11 >= v8 || Mapping[2 * (unsigned int)(v11 + 1) + 1] == -1 )
                goto LABEL_91;
              if ( (_DWORD)v11 )
              {
LABEL_44:
                v35 = Mapping[2 * v15 + 1];
                if ( v35 == -1 )
                  goto LABEL_45;
                v42 = (_DWORD)v11 == 1 ? 0 : Mapping[2 * (unsigned int)(v11 - 2)];
                if ( v35 + Mapping[2 * v15] + ~v42 == -1 )
                  goto LABEL_45;
LABEL_59:
                FsRtlRemoveLargeEntry(Mcb, (unsigned int)v15, 2LL);
              }
              else
              {
LABEL_45:
                if ( (unsigned int)v11 >= v8 || Mapping[2 * (unsigned int)(v11 + 1) + 1] == -1 )
                  goto LABEL_59;
                Mapping[2 * v11 + 1] = -1;
                FsRtlRemoveLargeEntry(Mcb, (unsigned int)v15, 1LL);
              }
            }
            else
            {
              *((_DWORD *)v18 + 1) = -1;
            }
          }
        }
      }
      v25 = (_DWORD)v11 ? Mapping[2 * v15] : 0;
      v26 = 8 * v11;
      v27 = &Mapping[2 * v11];
      if ( v25 == v4 )
        break;
      v36 = v27[1];
      if ( (unsigned int)(*v27 - 1) < v4 + v3 )
      {
        v44 = *v27 - v4;
        if ( v36 == -1 )
          goto LABEL_71;
        if ( (unsigned int)v11 >= Mcb->PairCount - 1
          || (v45 = (unsigned int)(v11 + 1), v46 = 8 * v45, Mapping[2 * v45 + 1] == -1) )
        {
          *v27 = v4;
LABEL_71:
          v4 += v44;
          v3 -= v44;
        }
        else
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v45, 1LL) )
            return 0;
          *(_DWORD *)((char *)Mcb->Mapping + v46 + 4) = -1;
          *(_DWORD *)((char *)Mcb->Mapping + v46) = *(_DWORD *)((char *)Mcb->Mapping + v26);
          *(_DWORD *)((char *)Mcb->Mapping + v26) -= v44;
          v4 += v44;
          v3 -= v44;
        }
      }
      else
      {
        if ( v36 != -1 )
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v11, 2LL) )
            return 0;
          v37 = 2LL * (unsigned int)(v11 + 2);
          v38 = 8LL * (unsigned int)(v11 + 1);
          *(_DWORD *)((char *)Mcb->Mapping + v26 + 4) = *(_DWORD *)((char *)Mcb->Mapping + v37 * 4 + 4);
          *(_DWORD *)((char *)Mcb->Mapping + v26) = v4;
          *(_DWORD *)((char *)Mcb->Mapping + v38 + 4) = -1;
          *(_DWORD *)((char *)Mcb->Mapping + v38) = v4 + v3;
          v39 = Mcb->Mapping;
          if ( (_DWORD)v11 )
            v40 = v39[2 * (unsigned int)(v11 - 1)];
          else
            v40 = 0;
          if ( (_DWORD)v11 == -1 )
            v41 = 0;
          else
            v41 = v39[2 * v11];
          v39[v37 + 1] += v39[2 * (unsigned int)(v11 + 1)] + v39[2 * v11] - v41 - v40;
        }
        v4 += v3;
        v3 = 0LL;
      }
    }
    if ( v27[1] == -1 )
      goto LABEL_37;
    if ( !(_DWORD)v11 )
      break;
    v28 = (unsigned int)(v11 - 1);
    v29 = Mapping[2 * v28 + 1];
    v30 = &Mapping[2 * v28];
    if ( v29 != -1 )
    {
      v31 = (_DWORD)v11 == 1 ? 0 : Mapping[2 * (unsigned int)(v11 - 2)];
      if ( v29 + *v30 + ~v31 != -1 )
        break;
    }
    *v30 += v3;
    v4 += v3;
    *((_DWORD *)Mcb->Mapping + 2 * v11 + 1) += v3;
    v3 = 0LL;
  }
  if ( (unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v11, 1LL) )
  {
    *((_DWORD *)Mcb->Mapping + 2 * v11 + 1) = -1;
    *((_DWORD *)Mcb->Mapping + 2 * v11) = v3 + v4;
    *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v11 + 1) + 1) += v3;
LABEL_37:
    v4 += v3;
    v3 = 0LL;
    goto LABEL_2;
  }
  return 0;
}
