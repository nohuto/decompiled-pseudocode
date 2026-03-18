/*
 * XREFs of ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1400FF9B8
 * Callers:
 *     ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1400FEC5C (-bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1400FEDA4 (-bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1400FEF04 (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400FEF94 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z.c)
 * Callees:
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1400FFEE4 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x140100054 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x140101320 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall FHOBJ::bScanLists(FHOBJ *this, struct EFSOBJ *a2, int a3, struct _EFFILTER_INFO *a4)
{
  struct EFSOBJ *v5; // r14
  int v6; // eax
  __int64 i; // r12
  _QWORD *v8; // r15
  int v9; // esi
  __int64 *v10; // rbx
  __int64 v11; // r8
  _DWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  struct tagPvtData *v18; // rax
  __int64 v19; // rsi
  char v20; // di
  char v21; // r14
  FHOBJ *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // esi
  __int64 v26; // rax
  unsigned __int64 v27; // r12
  __int64 v28; // r14
  int v29; // r15d
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int8 *v32; // rbx
  unsigned __int8 v33; // al
  _QWORD *j; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // r8
  unsigned int v40; // esi
  __int64 v41; // rdi
  __int64 v42; // [rsp+30h] [rbp-50h] BYREF
  EFSOBJ *v43; // [rsp+38h] [rbp-48h]
  __int64 v44; // [rsp+40h] [rbp-40h]
  int v45; // [rsp+48h] [rbp-38h]
  int v46; // [rsp+4Ch] [rbp-34h]
  __int64 *v47; // [rsp+50h] [rbp-30h] BYREF
  __int128 v48; // [rsp+58h] [rbp-28h] BYREF
  __int64 v49; // [rsp+68h] [rbp-18h]
  __int64 v50; // [rsp+70h] [rbp-10h] BYREF

  v45 = a3;
  v43 = a2;
  v5 = a2;
  v6 = a3 == 2;
  if ( a3 == 3 )
    v6 = 2;
  v46 = v6;
  for ( i = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL); ; i = *(_QWORD *)(i + 48) )
  {
    v44 = i;
    if ( !i )
      break;
    v8 = *(_QWORD **)(i + 8);
    if ( !v8 || (*(_DWORD *)(i + 32) & 2) != 0 )
      continue;
    *((_DWORD *)a4 + 7) = 1;
    v49 = 0LL;
    v9 = 0;
    *((_DWORD *)a4 + 8) = *(_DWORD *)(i + 24);
    LODWORD(v42) = 0;
    v48 = 0LL;
    while ( 1 )
    {
      v10 = (__int64 *)v8[1];
      v11 = *((unsigned int *)v10 + 3);
      v12 = (_DWORD *)v10[4];
      if ( (v11 & 2) != 0 )
        goto LABEL_14;
      v13 = v12[12];
      if ( (v13 & 0x800000) != 0 || (v11 & 8) != 0 || *((_DWORD *)a4 + 6) && (v13 & 2) != 0 )
        goto LABEL_14;
      if ( *((_DWORD *)a4 + 3) && (v13 & 1) != 0 )
        goto LABEL_14;
      if ( *((_DWORD *)a4 + 4) && (v13 & 1) == 0 )
        goto LABEL_14;
      if ( *(_DWORD *)a4 )
      {
        LOBYTE(this) = (v13 & 2) != 0;
        if ( ((unsigned __int8)this & ((v11 & 1) == 0)) != 0
          && (*((_DWORD *)a4 + 1) != v12[32] || *((_DWORD *)a4 + 2) != v12[33]) )
        {
          goto LABEL_14;
        }
      }
      if ( *((_DWORD *)a4 + 7) && *((_DWORD *)a4 + 8) && (v12[12] & 2) != 0 )
        goto LABEL_14;
      v50 = *v10;
      v14 = v50;
      this = *(FHOBJ **)(W32GetSessionState(this, v12, v11) + 96);
      if ( *(_QWORD *)(v14 + 136) == *((_QWORD *)this + 2548) )
      {
        v18 = PFFOBJ::pPvtDataMatch((PFFOBJ *)&v50);
        if ( !v18 || *((_DWORD *)v18 + 1) )
          goto LABEL_14;
      }
      else if ( !*(_DWORD *)(v14 + 56) )
      {
        goto LABEL_14;
      }
      if ( *((_DWORD *)a4 + 5) && (*((_DWORD *)v10 + 3) & 1) == 0 || (*((_DWORD *)v10 + 3) & 0x44) != 0 )
        goto LABEL_14;
      if ( *((_DWORD *)a4 + 9) != 1 )
      {
        v19 = v10[4];
        v20 = *((_BYTE *)a4 + 36);
        if ( *(_DWORD *)(v19 + 40) )
        {
          if ( v20 == 1 )
          {
            this = *(FHOBJ **)(W32GetSessionState(this, v15, v16) + 96);
            v20 = *((_BYTE *)this + 19712);
          }
          if ( v20 == -2 )
          {
            v20 = -2;
          }
          else
          {
            this = (FHOBJ *)(v19 + *(int *)(v19 + 40));
            v21 = *(_BYTE *)this;
            v22 = (FHOBJ *)((char *)this + 16);
            while ( this < v22 )
            {
              if ( *(_BYTE *)this == v20 )
                goto LABEL_48;
              if ( *(_BYTE *)this == 1 )
                break;
              this = (FHOBJ *)((char *)this + 1);
            }
            v23 = v10[15];
            if ( v23 )
            {
              for ( j = *(_QWORD **)(v23 + 16); ; j = (_QWORD *)*j )
              {
                v35 = v10[15];
                v36 = v35 ? v35 + 16 : *(_QWORD *)(W32GetSessionState(this, v22, v16) + 96) + 14128LL;
                if ( j == (_QWORD *)v36 )
                  break;
                this = *(FHOBJ **)(j[4] + 32LL);
                v37 = *((int *)this + 10);
                if ( (_DWORD)v37 )
                {
                  this = (FHOBJ *)((char *)this + v37);
                  v22 = (FHOBJ *)((char *)this + 16);
                  while ( this < v22 )
                  {
                    if ( *(_BYTE *)this == v20 )
                      goto LABEL_48;
                    if ( *(_BYTE *)this == 1 )
                      break;
                    this = (FHOBJ *)((char *)this + 1);
                  }
                }
                else if ( *((_BYTE *)this + 44) == v20 )
                {
                  goto LABEL_48;
                }
              }
            }
            v20 = v21;
LABEL_48:
            v5 = v43;
          }
        }
        else
        {
          v20 = *(_BYTE *)(v19 + 44);
        }
        v9 = v42;
        if ( v20 != *((_BYTE *)a4 + 36) )
          goto LABEL_14;
      }
      if ( v45 != 1 )
        break;
      v38 = v10[4];
      switch ( *(_WORD *)(v38 + 52) & 0x21 )
      {
        case 1:
          v39 = 2LL;
          this = (FHOBJ *)((char *)&v48 + 8);
          break;
        case 32:
          v39 = 1LL;
          this = (FHOBJ *)((char *)&v48 + 4);
          break;
        case 33:
          v39 = 3LL;
          this = (FHOBJ *)((char *)&v48 + 12);
          break;
        default:
          v39 = 0LL;
          this = (FHOBJ *)&v48;
          break;
      }
      if ( *((_DWORD *)&v48 + (unsigned int)v39) )
        v39 = (unsigned int)(_wcsicmp(
                               (const wchar_t *)(v38 + *(int *)(v38 + 8)),
                               (const wchar_t *)(v38 + *(int *)(v38 + 16))) != 0)
            + 4;
      else
        *(_DWORD *)this = 1;
      if ( !v9 || (_DWORD)v39 == 5 )
      {
        if ( !(unsigned int)EFSOBJ::bAdd(v5, v10, v39, 0LL, 1) )
          return 0LL;
        v9 = 1;
        LODWORD(v42) = 1;
      }
LABEL_14:
      v8 = (_QWORD *)*v8;
      if ( !v8 )
        goto LABEL_15;
    }
    v24 = v10[4];
    v25 = *((_DWORD *)a4 + 9);
    v42 = 0LL;
    v26 = *(int *)(v24 + 40);
    v27 = v26 + v24 + 16;
    v47 = v10;
    BYTE5(v42) = v25;
    v28 = v26;
    v29 = v46 & 2;
    if ( (v46 & 2) != 0 )
    {
      BYTE4(v42) = 2;
      if ( v25 == 1 )
      {
        if ( (_DWORD)v26 )
          LOBYTE(v26) = *(_BYTE *)(v26 + v24);
        else
          LODWORD(v26) = *(unsigned __int8 *)(v24 + 44);
        BYTE5(v42) = v26;
      }
    }
    EFSOBJ::WriteEFE(v43, (const struct _EFENTRY *)&v42, (struct PFEOBJ *)&v47);
    if ( v29 )
    {
      if ( v25 == 1 && *(_DWORD *)(v10[4] + 40) )
      {
        v32 = (unsigned __int8 *)(v28 + v24 + 1);
        v5 = v43;
        while ( 1 )
        {
          v33 = *v32;
          if ( *v32 == 1 || v33 > 0xFDu || (unsigned __int64)v32 >= v27 )
            break;
          LODWORD(v42) = 0;
          BYTE4(v42) = 2;
          HIWORD(v42) = 0;
          BYTE5(v42) = v33;
          EFSOBJ::WriteEFE(v5, (const struct _EFENTRY *)&v42, (struct PFEOBJ *)&v47);
          ++v32;
        }
      }
      else
      {
        v5 = v43;
      }
    }
    else
    {
      v5 = v43;
      if ( *((_DWORD *)v10 + 33) )
      {
        v40 = 0;
        BYTE4(v42) = 3;
        do
        {
          v41 = *((unsigned __int8 *)v10 + v40 + 140);
          HIWORD(v42) = *((unsigned __int8 *)v10 + v40 + 140);
          BYTE5(v42) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(this, v30, v31) + 96) + 19656LL)
                                + 196 * v41
                                + 128);
          EFSOBJ::WriteEFE(v5, (const struct _EFENTRY *)&v42, (struct PFEOBJ *)&v47);
          ++v40;
        }
        while ( v40 < *((_DWORD *)v10 + 33) );
      }
    }
    i = v44;
LABEL_15:
    ;
  }
  return 1LL;
}
