/*
 * XREFs of ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1401025BC
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400B8D04 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z.c)
 *     ?bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x14010245C (-bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x140104268 (-bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1401043B0 (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x140102B24 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x140102DBC (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x140106E28 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall FHOBJ::bScanLists(unsigned __int64 this, struct EFSOBJ *a2, int a3, struct _EFFILTER_INFO *a4)
{
  struct _EFFILTER_INFO *v4; // r13
  int v5; // eax
  __int64 i; // r12
  _QWORD *v7; // r15
  int v8; // eax
  int v9; // r14d
  __int64 *v10; // rbx
  int v11; // eax
  unsigned int *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rsi
  BOOL v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  struct tagPvtData *v18; // rax
  __int64 v19; // rsi
  char v20; // di
  char *v21; // rax
  char v22; // r14
  char *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // esi
  __int64 v27; // rcx
  char *v28; // rdi
  unsigned __int64 v29; // r15
  int v30; // r14d
  __int64 v31; // rdx
  __int64 v32; // r8
  _BYTE *v33; // rbx
  unsigned __int8 v34; // al
  EFSOBJ *v35; // r13
  EFSOBJ *v36; // r13
  unsigned int v37; // esi
  __int64 v38; // rdi
  char v39; // al
  _QWORD *j; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  char *v44; // rax
  __int64 v46; // r9
  int v47; // eax
  __int64 v48; // r8
  __int64 v49; // [rsp+30h] [rbp-39h] BYREF
  EFSOBJ *v50; // [rsp+38h] [rbp-31h]
  int v51; // [rsp+40h] [rbp-29h]
  int v52; // [rsp+44h] [rbp-25h]
  __int64 *v53; // [rsp+48h] [rbp-21h] BYREF
  struct _EFFILTER_INFO *v54; // [rsp+50h] [rbp-19h]
  __int64 v55; // [rsp+58h] [rbp-11h] BYREF
  __int128 v56; // [rsp+68h] [rbp-1h] BYREF

  v54 = a4;
  v51 = a3;
  v4 = a4;
  v50 = a2;
  v5 = a3 == 2;
  if ( a3 == 3 )
    v5 = 2;
  v52 = v5;
  for ( i = *(_QWORD *)(*(_QWORD *)(this + 8) + 24LL); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
      return 1LL;
    v7 = *(_QWORD **)(i + 8);
    if ( v7 )
    {
      if ( (*(_DWORD *)(i + 32) & 2) == 0 )
        break;
    }
LABEL_15:
    ;
  }
  *((_DWORD *)v4 + 7) = 1;
  v8 = *(_DWORD *)(i + 24);
  v9 = 0;
  v56 = 0LL;
  *((_DWORD *)v4 + 8) = v8;
  LODWORD(v49) = 0;
  while ( 1 )
  {
    v10 = (__int64 *)v7[1];
    v11 = *((_DWORD *)v10 + 3);
    v12 = (unsigned int *)v10[4];
    if ( (v11 & 2) != 0 )
      goto LABEL_14;
    v13 = v12[12];
    if ( (v13 & 0x800000) != 0 || (v11 & 8) != 0 || *((_DWORD *)v4 + 6) && (v13 & 2) != 0 )
      goto LABEL_14;
    if ( *((_DWORD *)v4 + 3) && (v13 & 1) != 0 )
      goto LABEL_14;
    if ( *((_DWORD *)v4 + 4) && (v13 & 1) == 0 )
      goto LABEL_14;
    if ( *(_DWORD *)v4 )
    {
      LOBYTE(this) = (v13 & 2) != 0;
      if ( ((unsigned __int8)this & ((v11 & 1) == 0)) != 0
        && (*((_DWORD *)v4 + 1) != v12[32] || *((_DWORD *)v4 + 2) != v12[33]) )
      {
        goto LABEL_14;
      }
    }
    if ( *((_DWORD *)v4 + 7) && *((_DWORD *)v4 + 8) && (v13 & 2) != 0 )
      goto LABEL_14;
    v15 = 1;
    v55 = *v10;
    v14 = v55;
    this = *(_QWORD *)(W32GetSessionState(this, v13, v12) + 96);
    if ( *(_QWORD *)(v14 + 136) == *(_QWORD *)(this + 20408) )
    {
      v18 = PFFOBJ::pPvtDataMatch((PFFOBJ *)&v55);
      if ( v18 )
      {
        this = (unsigned int)-(*((_DWORD *)v18 + 1) != 0);
        v15 = *((_DWORD *)v18 + 1) != 0;
      }
      if ( v15 )
        goto LABEL_14;
    }
    else if ( !*(_DWORD *)(v14 + 56) )
    {
      goto LABEL_14;
    }
    if ( (!*((_DWORD *)v4 + 5) || (*((_DWORD *)v10 + 3) & 1) != 0) && (*((_DWORD *)v10 + 3) & 0x44) == 0 )
    {
      if ( *((_DWORD *)v4 + 9) == 1 )
        goto LABEL_45;
      v19 = v10[4];
      v20 = *((_BYTE *)v4 + 36);
      if ( *(_DWORD *)(v19 + 40) )
      {
        if ( v20 == 1 )
        {
          this = *(_QWORD *)(W32GetSessionState(this, v16, v17) + 96);
          v20 = *(_BYTE *)(this + 19736);
        }
        if ( v20 == -2 )
        {
          v20 = -2;
        }
        else
        {
          v21 = (char *)(v19 + *(int *)(v19 + 40));
          v22 = *v21;
          v23 = v21 + 16;
          while ( v21 < v23 )
          {
            LOBYTE(this) = *v21;
            if ( *v21 == v20 )
              goto LABEL_40;
            if ( (_BYTE)this == 1 )
              break;
            ++v21;
          }
          v24 = v10[15];
          if ( v24 )
          {
            for ( j = *(_QWORD **)(v24 + 16); ; j = (_QWORD *)*j )
            {
              v41 = v10[15];
              v42 = v41 ? v41 + 16 : *(_QWORD *)(W32GetSessionState(this, v23, v17) + 96) + 14136LL;
              if ( j == (_QWORD *)v42 )
                break;
              this = *(_QWORD *)(j[4] + 32LL);
              v43 = *(int *)(this + 40);
              if ( (_DWORD)v43 )
              {
                v44 = (char *)(this + v43);
                v23 = v44 + 16;
                while ( v44 < v23 )
                {
                  LOBYTE(this) = *v44;
                  if ( *v44 == v20 )
                    goto LABEL_40;
                  if ( (_BYTE)this == 1 )
                    break;
                  ++v44;
                }
              }
              else if ( *(_BYTE *)(this + 44) == v20 )
              {
                goto LABEL_40;
              }
            }
          }
          v20 = v22;
LABEL_40:
          v9 = v49;
        }
      }
      else
      {
        v20 = *(_BYTE *)(v19 + 44);
      }
      if ( v20 == *((_BYTE *)v4 + 36) )
      {
LABEL_45:
        if ( v51 != 1 )
        {
          v25 = v10[4];
          v26 = *((_DWORD *)v4 + 9);
          v49 = 0LL;
          v27 = *(int *)(v25 + 40);
          v53 = v10;
          BYTE5(v49) = v26;
          v28 = (char *)(v25 + v27);
          v29 = v25 + v27 + 16;
          v30 = v52 & 2;
          if ( (v52 & 2) != 0 )
          {
            BYTE4(v49) = 2;
            if ( v26 == 1 )
            {
              if ( (_DWORD)v27 )
                v39 = *v28;
              else
                v39 = *(_BYTE *)(v25 + 44);
              BYTE5(v49) = v39;
            }
          }
          EFSOBJ::WriteEFE(v50, (const struct _EFENTRY *)&v49, (struct PFEOBJ *)&v53);
          if ( v30 )
          {
            if ( v26 == 1 )
            {
              if ( *(_DWORD *)(v10[4] + 40) )
              {
                v33 = v28 + 1;
                v34 = v28[1];
                if ( v34 != 1 )
                {
                  v35 = v50;
                  do
                  {
                    if ( v34 > 0xFDu )
                      break;
                    if ( (unsigned __int64)v33 >= v29 )
                      break;
                    LODWORD(v49) = 0;
                    BYTE4(v49) = 2;
                    HIWORD(v49) = 0;
                    BYTE5(v49) = v34;
                    EFSOBJ::WriteEFE(v35, (const struct _EFENTRY *)&v49, (struct PFEOBJ *)&v53);
                    v34 = *++v33;
                  }
                  while ( *v33 != 1 );
                  goto LABEL_56;
                }
              }
            }
          }
          else if ( *((_DWORD *)v10 + 33) )
          {
            v36 = v50;
            v37 = 0;
            BYTE4(v49) = 3;
            do
            {
              v38 = *((unsigned __int8 *)v10 + v37 + 140);
              HIWORD(v49) = *((unsigned __int8 *)v10 + v37 + 140);
              BYTE5(v49) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(this, v31, v32) + 96) + 19680LL)
                                    + 196 * v38
                                    + 128);
              EFSOBJ::WriteEFE(v36, (const struct _EFENTRY *)&v49, (struct PFEOBJ *)&v53);
              ++v37;
            }
            while ( v37 < *((_DWORD *)v10 + 33) );
LABEL_56:
            v4 = v54;
            goto LABEL_15;
          }
          goto LABEL_15;
        }
        v46 = v10[4];
        switch ( *(_WORD *)(v46 + 52) & 0x21 )
        {
          case 1:
            v47 = DWORD2(v56);
            this = (unsigned __int64)&v56 + 8;
            v48 = 2LL;
            break;
          case 32:
            v47 = DWORD1(v56);
            this = (unsigned __int64)&v56 + 4;
            v48 = 1LL;
            break;
          case 33:
            v47 = HIDWORD(v56);
            this = (unsigned __int64)&v56 + 12;
            v48 = 3LL;
            break;
          default:
            v47 = v56;
            this = (unsigned __int64)&v56;
            v48 = 0LL;
            break;
        }
        if ( v47 )
          v48 = (unsigned int)(_wcsicmp(
                                 (const wchar_t *)(v46 + *(int *)(v46 + 8)),
                                 (const wchar_t *)(v46 + *(int *)(v46 + 16))) != 0)
              + 4;
        else
          *(_DWORD *)this = 1;
        if ( !v9 || (_DWORD)v48 == 5 )
          break;
      }
    }
LABEL_14:
    v7 = (_QWORD *)*v7;
    if ( !v7 )
      goto LABEL_15;
  }
  if ( (unsigned int)EFSOBJ::bAdd(v50, v10, v48, 0LL, 1) )
  {
    v9 = 1;
    LODWORD(v49) = 1;
    goto LABEL_14;
  }
  return 0LL;
}
