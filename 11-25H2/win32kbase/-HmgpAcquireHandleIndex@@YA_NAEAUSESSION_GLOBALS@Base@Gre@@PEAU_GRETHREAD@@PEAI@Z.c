/*
 * XREFs of ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x140027AD8
 * Callers:
 *     HmgInsertObjectInternal @ 0x14001F910 (HmgInsertObjectInternal.c)
 *     HmgCreate @ 0x140028D7C (HmgCreate.c)
 *     HmgAllocFast @ 0x1401C5500 (HmgAllocFast.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x140027780 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x140028650 (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 *     ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z @ 0x1400286C0 (-Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     PREALLOCMEM2 @ 0x1401C5838 (PREALLOCMEM2.c)
 *     memset @ 0x140243000 (memset.c)
 */

char __fastcall HmgpAcquireHandleIndex(struct Gre::Base::SESSION_GLOBALS *a1, struct _GRETHREAD *a2, unsigned int *a3)
{
  __int64 v5; // rsi
  __int64 v6; // r15
  char v7; // bl
  __int64 v8; // rsi
  __int64 v9; // r14
  int v10; // r12d
  __int64 v11; // rdi
  __int64 v12; // rcx
  char v13; // r11
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rdi
  __int64 v27; // rcx
  char v28; // r11
  unsigned int v29; // r14d
  __int64 SessionState; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  unsigned int v33; // r8d
  __int64 v34; // rcx
  __int64 v35; // r10
  __int64 v36; // rax
  void *v38; // rax
  void *v39; // rax
  unsigned int j; // ebp
  unsigned int v41; // eax
  struct GdiHandleEntryTable *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rbp
  __int64 v45; // rdi
  __int64 v46; // r14
  unsigned int i; // edi
  unsigned int v48; // eax
  GdiHandleEntryTable *v49; // rcx
  GdiHandleEntryTable *v50; // r15
  void *v51; // rcx
  __int64 v52; // rdi
  _OWORD *v53; // rax
  signed __int32 v54[26]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v55; // [rsp+78h] [rbp+10h] BYREF
  unsigned int *v56; // [rsp+80h] [rbp+18h]

  v56 = a3;
  if ( a2 )
  {
    v5 = *((_QWORD *)a2 + 42);
    if ( v5 )
    {
      if ( *(_BYTE *)(v5 + 80) )
      {
        v22 = *(_QWORD *)(v5 + 32);
        if ( *(_QWORD *)(v5 + 24) != v22 )
        {
LABEL_22:
          v23 = *((_QWORD *)a1 + 709);
          v7 = 1;
          while ( 1 )
          {
            while ( 1 )
            {
              if ( *(_DWORD *)(v23 + 4) >= *(_DWORD *)(v23 + 8) )
                return 0;
              v24 = *(_QWORD *)(v23 + 16);
              if ( *(_BYTE *)v24 )
                return 0;
              v25 = *(_QWORD *)(v24 + 8);
              v55 = 0;
              if ( *(_DWORD *)(v25 + 16) >= *(_DWORD *)(v25 + 8) )
                goto LABEL_83;
              v26 = *(unsigned int *)(v25 + 12);
              if ( (_DWORD)v26 == -1 )
              {
                LODWORD(v26) = *(_DWORD *)(v25 + 20);
                if ( !GdiHandleEntryTable::EntryDataLookupTable::Initialize(
                        *(GdiHandleEntryTable::EntryDataLookupTable **)(v25 + 24),
                        v26) )
                {
LABEL_83:
                  if ( *(_DWORD *)(*(_QWORD *)(v24 + 8) + 16LL) == *(_DWORD *)(*(_QWORD *)(v24 + 8) + 8LL) )
                  {
                    for ( i = 1; ; ++i )
                    {
                      v48 = *(unsigned __int16 *)(v24 + 2);
                      if ( i >= v48 )
                        break;
                      v50 = *(GdiHandleEntryTable **)(v24 + 8LL * i + 8);
                      if ( GdiHandleEntryTable::AcquireEntryIndex(v50, &v55) )
                        goto LABEL_89;
                      if ( *((_DWORD *)v50 + 4) != *((_DWORD *)v50 + 2) )
                        return 0;
                    }
                    if ( (_WORD)v48 != 256 )
                    {
                      *(_QWORD *)(v24 + 8LL * *(unsigned __int16 *)(v24 + 2) + 8) = GdiHandleEntryTable::_Create(
                                                                                      0x10000u,
                                                                                      1);
                      v49 = *(GdiHandleEntryTable **)(v24 + 8LL * *(unsigned __int16 *)(v24 + 2) + 8);
                      if ( !v49 )
                        return 0;
                      GdiHandleEntryTable::AcquireEntryIndex(v49, &v55);
                      i = *(unsigned __int16 *)(v24 + 2);
                      *(_WORD *)(v24 + 2) = i + 1;
LABEL_89:
                      LODWORD(v26) = v55 + *(_DWORD *)(v24 + 2056) + ((i + 0xFFFF) << 16);
                      goto LABEL_29;
                    }
                    *(_BYTE *)v24 = 1;
                  }
                  return 0;
                }
                _InterlockedOr(v54, 0);
                ++*(_DWORD *)(v25 + 20);
              }
              else
              {
                v27 = *(unsigned int *)(*(_QWORD *)v25 + 24 * v26);
                *(_DWORD *)(v25 + 12) = v27;
              }
              ++*(_DWORD *)(v25 + 16);
LABEL_29:
              v28 = 0;
              v29 = *(_DWORD *)(v23 + 4) + 1;
              *(_DWORD *)(v23 + 4) = v29;
              if ( v29 > *(_DWORD *)v23 )
              {
                *(_DWORD *)v23 = v29;
                SessionState = W32GetSessionState(v27);
                v28 = 1;
                *(_DWORD *)(*(_QWORD *)(SessionState + 88) + 1788LL) = v29;
              }
              v31 = *(_QWORD *)(v23 + 16);
              v32 = (unsigned __int16)v26;
              v33 = *(_DWORD *)(v31 + 2056);
              if ( (unsigned __int16)v26 >= v33 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
              {
                v36 = 0LL;
              }
              else
              {
                if ( (unsigned __int16)v26 >= v33 )
                  v34 = (((unsigned __int16)v26 - v33) >> 16) + 1;
                else
                  v34 = 0LL;
                v35 = *(_QWORD *)(v31 + 8 * v34 + 8);
                if ( (_DWORD)v34 )
                  v32 = ((1 - (_DWORD)v34) << 16) - v33 + (unsigned __int16)v26;
                v36 = 0LL;
                if ( (unsigned int)v32 < *(_DWORD *)(v35 + 20) )
                  v36 = *(_QWORD *)v35 + 24 * v32;
              }
              if ( (unsigned int)v26 < 0x10000 )
              {
                if ( v28 || *(_DWORD *)v23 > 0x10000u )
                  *(_BYTE *)(v36 + 13) = 0;
                else
                  LODWORD(v26) = ((unsigned __int8)++*(_BYTE *)(v36 + 13) << 16) + v26;
LABEL_59:
                *a3 = v26;
                *(_DWORD *)(*(_QWORD *)(v5 + 40) + 4LL * (*(_QWORD *)(v5 + 24))++) = v26;
                return v7;
              }
              if ( *(unsigned __int8 *)(v36 + 13) != WORD1(v26) )
                goto LABEL_59;
              if ( !*(_QWORD *)(v23 + 24) )
                break;
LABEL_64:
              *(_DWORD *)(*(_QWORD *)(v23 + 24) + 4LL * (unsigned __int16)v26) = v26;
            }
            v39 = (void *)Win32AllocPoolImpl(256LL, 0x40000uLL, 0x636D6847u);
            *(_QWORD *)(v23 + 24) = v39;
            if ( v39 )
            {
              memset(v39, 0, 0x40000uLL);
              goto LABEL_64;
            }
          }
        }
        v51 = *(void **)(v5 + 40);
        v52 = 2 * v22;
        if ( v51 == (void *)(v5 + 48) )
        {
          v53 = (_OWORD *)PALLOCMEM((unsigned int)(8 * v22), 1852994631LL);
          if ( v53 )
          {
            *v53 = *(_OWORD *)(v5 + 48);
            v53[1] = *(_OWORD *)(v5 + 64);
LABEL_107:
            *(_QWORD *)(v5 + 40) = v53;
            *(_QWORD *)(v5 + 32) = v52;
            goto LABEL_22;
          }
        }
        else
        {
          v53 = (_OWORD *)PREALLOCMEM2(v51);
          if ( v53 )
            goto LABEL_107;
        }
        return 0;
      }
    }
  }
  v6 = *((_QWORD *)a1 + 709);
  v7 = 1;
  while ( 1 )
  {
    if ( *(_DWORD *)(v6 + 4) >= *(_DWORD *)(v6 + 8) )
      return 0;
    v8 = *(_QWORD *)(v6 + 16);
    if ( *(_BYTE *)v8 )
      return 0;
    v9 = *(_QWORD *)(v8 + 8);
    v10 = 0;
    if ( *(_DWORD *)(v9 + 16) >= *(_DWORD *)(v9 + 8) )
      goto LABEL_68;
    v11 = *(unsigned int *)(v9 + 12);
    if ( (_DWORD)v11 == -1 )
    {
      LODWORD(v11) = *(_DWORD *)(v9 + 20);
      if ( GdiHandleEntryTable::EntryDataLookupTable::Initialize(
             *(GdiHandleEntryTable::EntryDataLookupTable **)(v9 + 24),
             v11) )
      {
        _InterlockedOr(v54, 0);
        ++*(_DWORD *)(v9 + 20);
        goto LABEL_9;
      }
LABEL_68:
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 8) + 16LL) == *(_DWORD *)(*(_QWORD *)(v8 + 8) + 8LL) )
      {
        for ( j = 1; ; ++j )
        {
          v41 = *(unsigned __int16 *)(v8 + 2);
          if ( j >= v41 )
            break;
          v45 = *(_QWORD *)(v8 + 8LL * j + 8);
          if ( *(_DWORD *)(v45 + 16) < *(_DWORD *)(v45 + 8) )
          {
            v46 = *(unsigned int *)(v45 + 12);
            if ( (_DWORD)v46 != -1 )
            {
              v12 = *(unsigned int *)(*(_QWORD *)v45 + 24 * v46);
              *(_DWORD *)(v45 + 12) = v12;
              goto LABEL_82;
            }
            LODWORD(v46) = *(_DWORD *)(v45 + 20);
            if ( GdiHandleEntryTable::EntryDataLookupTable::Initialize(
                   *(GdiHandleEntryTable::EntryDataLookupTable **)(v45 + 24),
                   v46) )
            {
              _InterlockedOr(v54, 0);
              ++*(_DWORD *)(v45 + 20);
LABEL_82:
              ++*(_DWORD *)(v45 + 16);
              v10 = v46;
LABEL_78:
              LODWORD(v11) = v10 + *(_DWORD *)(v8 + 2056) + ((j + 0xFFFF) << 16);
              goto LABEL_10;
            }
          }
          if ( *(_DWORD *)(v45 + 16) != *(_DWORD *)(v45 + 8) )
            return 0;
        }
        if ( (_WORD)v41 != 256 )
        {
          v42 = GdiHandleEntryTable::_Create(0x10000u, 1);
          v12 = *(unsigned __int16 *)(v8 + 2);
          *(_QWORD *)(v8 + 8 * v12 + 8) = v42;
          v43 = *(_QWORD *)(v8 + 8LL * *(unsigned __int16 *)(v8 + 2) + 8);
          if ( !v43 )
            return 0;
          if ( *(_DWORD *)(v43 + 16) >= *(_DWORD *)(v43 + 8) )
            goto LABEL_77;
          v44 = *(unsigned int *)(v43 + 12);
          if ( (_DWORD)v44 == -1 )
          {
            LODWORD(v44) = *(_DWORD *)(v43 + 20);
            if ( !GdiHandleEntryTable::EntryDataLookupTable::Initialize(
                    *(GdiHandleEntryTable::EntryDataLookupTable **)(v43 + 24),
                    v44) )
              goto LABEL_77;
            _InterlockedOr(v54, 0);
            ++*(_DWORD *)(v43 + 20);
          }
          else
          {
            v12 = *(unsigned int *)(*(_QWORD *)v43 + 24 * v44);
            *(_DWORD *)(v43 + 12) = v12;
          }
          ++*(_DWORD *)(v43 + 16);
          v10 = v44;
LABEL_77:
          j = *(unsigned __int16 *)(v8 + 2);
          *(_WORD *)(v8 + 2) = j + 1;
          goto LABEL_78;
        }
        *(_BYTE *)v8 = 1;
      }
      return 0;
    }
    v12 = *(unsigned int *)(*(_QWORD *)v9 + 24 * v11);
    *(_DWORD *)(v9 + 12) = v12;
LABEL_9:
    ++*(_DWORD *)(v9 + 16);
LABEL_10:
    v13 = 0;
    v14 = *(_DWORD *)(v6 + 4) + 1;
    *(_DWORD *)(v6 + 4) = v14;
    if ( v14 > *(_DWORD *)v6 )
    {
      *(_DWORD *)v6 = v14;
      v15 = W32GetSessionState(v12);
      v13 = 1;
      *(_DWORD *)(*(_QWORD *)(v15 + 88) + 1788LL) = v14;
    }
    v16 = *(_QWORD *)(v6 + 16);
    v17 = (unsigned __int16)v11;
    v18 = *(_DWORD *)(v16 + 2056);
    if ( (unsigned __int16)v11 >= v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
    {
      v21 = 0LL;
    }
    else
    {
      if ( (unsigned __int16)v11 >= v18 )
        v19 = (((unsigned __int16)v11 - v18) >> 16) + 1;
      else
        v19 = 0LL;
      v20 = *(_QWORD *)(v16 + 8 * v19 + 8);
      if ( (_DWORD)v19 )
        v17 = ((1 - (_DWORD)v19) << 16) - v18 + (unsigned __int16)v11;
      v21 = 0LL;
      if ( (unsigned int)v17 < *(_DWORD *)(v20 + 20) )
        v21 = *(_QWORD *)v20 + 24 * v17;
    }
    if ( (unsigned int)v11 < 0x10000 )
      break;
    if ( *(unsigned __int8 *)(v21 + 13) != WORD1(v11) )
      goto LABEL_44;
    if ( *(_QWORD *)(v6 + 24) )
    {
LABEL_50:
      *(_DWORD *)(*(_QWORD *)(v6 + 24) + 4LL * (unsigned __int16)v11) = v11;
    }
    else
    {
      v38 = (void *)Win32AllocPoolImpl(256LL, 0x40000uLL, 0x636D6847u);
      *(_QWORD *)(v6 + 24) = v38;
      if ( v38 )
      {
        memset(v38, 0, 0x40000uLL);
        goto LABEL_50;
      }
    }
  }
  if ( v13 || *(_DWORD *)v6 > 0x10000u )
    *(_BYTE *)(v21 + 13) = 0;
  else
    LODWORD(v11) = ((unsigned __int8)++*(_BYTE *)(v21 + 13) << 16) + v11;
LABEL_44:
  *v56 = v11;
  return v7;
}
