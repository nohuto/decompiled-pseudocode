/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x140950150
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x14094FD80 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     PiDqQueryAddObjectToResultSet @ 0x14094E98C (PiDqQueryAddObjectToResultSet.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14094EA98 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryLock @ 0x140950830 (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x1409508A4 (PiDqQueryUnlock.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140950A70 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryFreeActiveData @ 0x140950AA4 (PiDqQueryFreeActiveData.c)
 *     PiDqSameUserHive @ 0x14095220C (PiDqSameUserHive.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryEvaluateFilter @ 0x1409683B0 (PiDqQueryEvaluateFilter.c)
 *     PiDqQueryAppendActionEntry @ 0x140968F98 (PiDqQueryAppendActionEntry.c)
 */

int __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // r13d
  bool v4; // di
  char v5; // r12
  char v6; // r15
  unsigned int AddObjectToResultSet; // ebp
  int v10; // eax
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int v13; // edi
  __int64 v14; // r14
  __int64 v15; // r15
  char v16; // r9
  unsigned int v17; // r14d
  unsigned int v18; // ebp
  __int64 j; // rdi
  __int64 v20; // r15
  __int64 v21; // rax
  char v22; // r12
  unsigned int v23; // ebp
  unsigned int v24; // edi
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  const wchar_t *v29; // rdx
  const wchar_t *v30; // rcx
  __int64 *v31; // rdi
  bool v32; // r12
  unsigned __int8 v33; // cl
  __int64 *v34; // r14
  bool v35; // r15
  __int64 v36; // r8
  __int64 *v37; // r15
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  const wchar_t *v41; // rdx
  const wchar_t *v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  const wchar_t *k; // r12
  __int64 v46; // rax
  bool v47; // zf
  int v48; // ecx
  const wchar_t *v49; // rbp
  unsigned __int8 v50; // dl
  unsigned __int8 v51; // r8
  __int64 v52; // r14
  const wchar_t *i; // rdi
  __int64 v54; // rax
  int v56; // [rsp+30h] [rbp-48h]
  _QWORD v57[8]; // [rsp+38h] [rbp-40h] BYREF
  char v58; // [rsp+88h] [rbp+10h]
  __int64 v59; // [rsp+90h] [rbp+18h] BYREF
  __int64 Buffer; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v3 = 0;
  v4 = 0;
  v56 = 0;
  v57[0] = 0LL;
  v5 = 0;
  LOBYTE(Buffer) = 0;
  v6 = 0;
  v58 = 0;
  LOBYTE(v59) = 0;
  AddObjectToResultSet = 0;
  if ( (v2 & 1) != 0 )
  {
    PiDqQueryLock(a1);
    Buffer = *(_QWORD *)(a2 + 8);
    v4 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
    LOBYTE(Buffer) = v4;
    PiDqQueryUnlock(a1);
  }
  v10 = *(_DWORD *)(a2 + 4);
  if ( (v10 & 1) != 0 && !v4 || (v10 & 2) != 0 || (v10 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
  {
LABEL_45:
    if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
    {
      v32 = Buffer;
      v31 = (__int64 *)(a2 + 8);
    }
    else
    {
      PiDqQueryLock(a1);
      v31 = (__int64 *)(a2 + 8);
      v59 = *(_QWORD *)(a2 + 8);
      v32 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &v59) != 0LL;
      PiDqQueryUnlock(a1);
    }
    LODWORD(v21) = *(_DWORD *)(a2 + 4);
    if ( (v21 & 2) != 0 )
    {
      v34 = v31;
      if ( v32 )
      {
        v3 = 3;
        v35 = 1;
        PiDqQueryLock(a1);
        v39 = *v31;
        goto LABEL_69;
      }
LABEL_131:
      v35 = 0;
      goto LABEL_70;
    }
    if ( (v21 & 1) == 0 )
    {
      if ( !v6 )
      {
        v33 = v32;
        goto LABEL_51;
      }
      v31 = (__int64 *)(a2 + 8);
    }
    v36 = *(_QWORD *)(a1 + 24);
    v37 = (__int64 *)(a1 + 24);
    v38 = *(_DWORD *)(v36 + 20);
    if ( v38 )
    {
      v34 = v31;
      v48 = v38 - 1;
      if ( v48 )
      {
        if ( v48 != 1 )
          goto LABEL_67;
        v49 = *(const wchar_t **)(v36 + 32);
        v33 = 0;
        LOBYTE(v59) = 0;
        if ( !*v49 )
        {
          AddObjectToResultSet = v56;
          goto LABEL_67;
        }
        v50 = 0;
        v51 = 0;
        do
        {
          v31 = (__int64 *)(a2 + 8);
          LODWORD(v21) = v51;
          if ( v50 )
            break;
          v47 = wcsicmp(v49, *(const wchar_t **)(*v31 + 16)) == 0;
          v21 = -1LL;
          v33 = v47;
          LOBYTE(v59) = v47;
          do
            v47 = v49[++v21] == 0;
          while ( !v47 );
          v50 = v33;
          v49 += v21 + 1;
          v51 = v33;
          LODWORD(v21) = v33;
        }
        while ( *v49 );
        AddObjectToResultSet = v56;
        v37 = (__int64 *)(a1 + 24);
      }
      else
      {
        v33 = wcsicmp(*(const wchar_t **)(v36 + 24), *(const wchar_t **)(*v31 + 16)) == 0;
        LOBYTE(v59) = v33;
        LODWORD(v21) = v33;
      }
      v34 = v31;
      if ( !(_BYTE)v21 )
      {
LABEL_67:
        if ( v32 )
        {
          v3 = 3;
          v35 = 1;
          PiDqQueryLock(a1);
          v39 = *v34;
LABEL_69:
          PiDqQueryDeleteObjectFromResultSet(a1, v39);
          LODWORD(v21) = PiDqQueryUnlock(a1);
LABEL_70:
          if ( (AddObjectToResultSet & 0x80000000) == 0 )
          {
            if ( !v35 )
              return v21;
            if ( (int)PiDqQueryActionQueueEntryCreate(v3, *v34, (volatile signed __int32 *)a2, (__int64)v57) >= 0 )
            {
              PiDqQueryLock(a1);
              PiDqQueryAppendActionEntry(a1, v57[0]);
              LODWORD(v21) = PiDqQueryUnlock(a1);
              return v21;
            }
          }
LABEL_75:
          PiDqQueryLock(a1);
          *(_DWORD *)(a1 + 216) |= 1u;
          PiDqQueryFreeActiveData(a1);
          LODWORD(v21) = PiDqQueryUnlock(a1);
          return v21;
        }
        goto LABEL_131;
      }
    }
    else
    {
      v33 = 1;
      LOBYTE(v59) = 1;
    }
    v21 = *v37;
    v34 = v31;
    if ( !*(_DWORD *)(*v37 + 20) )
    {
      LODWORD(v21) = PiPnpRtlApplyMandatoryFilters(
                       PiPnpRtlCtx,
                       *(_QWORD *)(*v31 + 16),
                       *(_DWORD *)(*v31 + 28),
                       0,
                       (PSECURITY_SUBJECT_CONTEXT)(a1 + 32),
                       (__int64)&v59);
      AddObjectToResultSet = v21;
      if ( (_DWORD)v21 == -1073741772 || (_DWORD)v21 == -1073741275 )
        goto LABEL_66;
      if ( (int)v21 < 0 )
        goto LABEL_75;
      v33 = v59;
      v31 = (__int64 *)(a2 + 8);
    }
    v34 = v31;
    if ( !v33 )
      goto LABEL_67;
    v21 = *v37;
    if ( !*(_QWORD *)(*v37 + 88) )
      goto LABEL_51;
    LODWORD(v21) = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(*v31 + 16), &v59);
    AddObjectToResultSet = v21;
    if ( (_DWORD)v21 != -1073741772 )
    {
      if ( (int)v21 < 0 )
        goto LABEL_75;
      v33 = v59;
LABEL_51:
      v34 = v31;
      if ( v33 )
      {
        if ( v32 )
        {
          v3 = 2;
          v35 = v58 != 0;
        }
        else
        {
          v3 = 1;
          PiDqQueryLock(a1);
          AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *v31);
          LODWORD(v21) = PiDqQueryUnlock(a1);
          v35 = 1;
        }
        v34 = (__int64 *)(a2 + 8);
        goto LABEL_70;
      }
      goto LABEL_67;
    }
LABEL_66:
    AddObjectToResultSet = 0;
    goto LABEL_67;
  }
  if ( (v10 & 4) != 0 )
  {
    v56 = PiDqSameUserHive(a1 + 32, a2 + 24, &v59);
    if ( v56 < 0 )
      goto LABEL_75;
    v5 = v59;
  }
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_DWORD *)(v11 + 40) & 4;
  if ( (*(_DWORD *)(v11 + 40) & 2) != 0 )
  {
    if ( !v12 )
    {
LABEL_96:
      v16 = 1;
      v58 = 1;
      goto LABEL_24;
    }
    if ( *(_DWORD *)(a2 + 76) )
    {
      do
      {
        v52 = 32LL * AddObjectToResultSet;
        if ( *(_DWORD *)(v52 + a2 + 100) != 1 || v5 )
        {
          if ( !*(_QWORD *)(v52 + a2 + 104) )
            goto LABEL_96;
          for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v54 + 1 )
          {
            if ( !wcsicmp(*(const wchar_t **)(v52 + a2 + 104), i) )
              goto LABEL_96;
            v54 = -1LL;
            do
              v47 = i[++v54] == 0;
            while ( !v47 );
          }
        }
        ++AddObjectToResultSet;
      }
      while ( AddObjectToResultSet < *(_DWORD *)(a2 + 76) );
    }
    goto LABEL_23;
  }
  if ( v12 )
  {
    v17 = 0;
    if ( *(_DWORD *)(v11 + 64) )
    {
      while ( 1 )
      {
        v18 = 0;
        for ( j = *(_QWORD *)(v11 + 72) + 32LL * v17; v18 < *(_DWORD *)(a2 + 76); ++v18 )
        {
          v20 = a2 + 32LL * v18;
          if ( *(_DWORD *)(j + 16) == *(_DWORD *)(v20 + 96) )
          {
            v43 = *(_QWORD *)j - *(_QWORD *)(v20 + 80);
            if ( *(_QWORD *)j == *(_QWORD *)(v20 + 80) )
              v43 = *(_QWORD *)(j + 8) - *(_QWORD *)(v20 + 88);
            if ( !v43 )
            {
              v44 = *(_DWORD *)(v20 + 100);
              if ( *(_DWORD *)(j + 20) == v44 && (v44 != 1 || v5) )
              {
                if ( !*(_QWORD *)(v20 + 104) )
                  goto LABEL_96;
                for ( k = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *k; k += v46 + 1 )
                {
                  if ( !wcsicmp(*(const wchar_t **)(v20 + 104), k) )
                    goto LABEL_96;
                  v46 = -1LL;
                  do
                    v47 = k[++v46] == 0;
                  while ( !v47 );
                }
              }
            }
          }
          v5 = v59;
        }
        v11 = *(_QWORD *)(a1 + 24);
        if ( ++v17 >= *(_DWORD *)(v11 + 64) )
          break;
        v5 = v59;
      }
    }
    goto LABEL_23;
  }
  if ( !*(_DWORD *)(v11 + 64) )
  {
LABEL_23:
    v16 = 0;
    goto LABEL_24;
  }
  do
  {
    v13 = 0;
    v14 = *(_QWORD *)(v11 + 72) + 32LL * AddObjectToResultSet;
    while ( 1 )
    {
      if ( v13 >= *(_DWORD *)(a2 + 76) )
      {
        v16 = v58;
        goto LABEL_16;
      }
      v15 = a2 + 32LL * v13;
      if ( *(_DWORD *)(v14 + 16) == *(_DWORD *)(v15 + 96) )
      {
        v40 = *(_QWORD *)v14 - *(_QWORD *)(v15 + 80);
        if ( *(_QWORD *)v14 == *(_QWORD *)(v15 + 80) )
          v40 = *(_QWORD *)(v14 + 8) - *(_QWORD *)(v15 + 88);
        if ( !v40 && *(_DWORD *)(v14 + 20) == *(_DWORD *)(v15 + 100) )
        {
          v41 = *(const wchar_t **)(v15 + 104);
          v42 = *(const wchar_t **)(v14 + 24);
          if ( (v42 == v41 || v42 && v41 && !wcsicmp(v42, v41)) && (*(_DWORD *)(v15 + 100) != 1 || v5) )
            break;
        }
      }
      ++v13;
    }
    v16 = 1;
    v58 = 1;
LABEL_16:
    v11 = *(_QWORD *)(a1 + 24);
    ++AddObjectToResultSet;
  }
  while ( AddObjectToResultSet < *(_DWORD *)(v11 + 64) );
LABEL_24:
  v21 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v21 + 20) && (LODWORD(v21) = *(_DWORD *)(a2 + 4), (v21 & 8) != 0) )
  {
    v6 = 1;
  }
  else
  {
    v22 = v59;
    v6 = 0;
    v23 = 0;
LABEL_27:
    if ( v23 < *(_DWORD *)(a2 + 76) )
    {
      v24 = 0;
      v25 = a2 + 32LL * v23;
      while ( 1 )
      {
        v26 = *(_QWORD *)(a1 + 24);
        if ( v24 >= *(_DWORD *)(v26 + 80) )
        {
          ++v23;
          goto LABEL_27;
        }
        LODWORD(v21) = *(_DWORD *)(v25 + 96);
        v27 = *(_QWORD *)(v26 + 88) + 56LL * v24;
        if ( *(_DWORD *)(v27 + 24) == (_DWORD)v21 )
        {
          v28 = *(_QWORD *)(v27 + 8) - *(_QWORD *)(v25 + 80);
          if ( !v28 )
            v28 = *(_QWORD *)(v27 + 16) - *(_QWORD *)(v25 + 88);
          if ( !v28 )
          {
            LODWORD(v21) = *(_DWORD *)(v25 + 100);
            if ( *(_DWORD *)(v27 + 28) == (_DWORD)v21 )
            {
              v29 = *(const wchar_t **)(v25 + 104);
              v30 = *(const wchar_t **)(v27 + 32);
              if ( v30 == v29 || v30 && v29 && (LODWORD(v21) = wcsicmp(v30, v29), !(_DWORD)v21) )
              {
                if ( *(_DWORD *)(v25 + 100) != 1 || v22 )
                  break;
              }
            }
          }
        }
        ++v24;
      }
      v6 = 1;
    }
    v16 = v58;
  }
  if ( v16 || v6 )
  {
    AddObjectToResultSet = v56;
    goto LABEL_45;
  }
  return v21;
}
