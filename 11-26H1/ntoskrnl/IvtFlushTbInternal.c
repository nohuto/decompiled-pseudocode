/*
 * XREFs of IvtFlushTbInternal @ 0x14043417C
 * Callers:
 *     IvtFlushDomainTb @ 0x1404338C0 (IvtFlushDomainTb.c)
 *     IvtAttachDeviceDomainInternal @ 0x1405A8178 (IvtAttachDeviceDomainInternal.c)
 *     IvtFlushTb @ 0x1405A8D10 (IvtFlushTb.c)
 *     IvtInitializeIommu @ 0x140BF5C90 (IvtInitializeIommu.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     IvtIommuWaitCommand @ 0x140434918 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x140434A6C (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall IvtFlushTbInternal(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  char v13; // di
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  bool v16; // zf
  char v17; // r15
  char v18; // al
  unsigned int v19; // r11d
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int v23; // edx
  _QWORD *v24; // r13
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  char *v27; // r14
  bool v28; // di
  unsigned int v29; // r15d
  __int64 v30; // rsi
  struct _EX_RUNDOWN_REF *v31; // rax
  int v32; // r10d
  __int64 v33; // rbx
  char v34; // r9
  _QWORD *v35; // rbx
  struct _EX_RUNDOWN_REF *v36; // rdx
  _BYTE *v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rcx
  char v40; // cl
  __int16 v41; // dx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r8
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  char v51; // cl
  __int64 v52; // rax
  int v53; // edi
  __int64 v54; // rax
  int v55; // edi
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  char v59; // [rsp+28h] [rbp-61h]
  char v60; // [rsp+29h] [rbp-60h]
  char v61; // [rsp+2Ah] [rbp-5Fh]
  char v62; // [rsp+2Bh] [rbp-5Eh] BYREF
  int v63; // [rsp+2Ch] [rbp-5Dh]
  unsigned int v64; // [rsp+30h] [rbp-59h]
  int v65; // [rsp+34h] [rbp-55h]
  unsigned __int64 v66; // [rsp+38h] [rbp-51h]
  unsigned __int64 v67; // [rsp+40h] [rbp-49h]
  int v68; // [rsp+48h] [rbp-41h]
  __int64 v69; // [rsp+50h] [rbp-39h]
  __int64 v70; // [rsp+58h] [rbp-31h]
  __int64 v71; // [rsp+60h] [rbp-29h]
  __int128 v72; // [rsp+68h] [rbp-21h] BYREF
  __int128 v73; // [rsp+78h] [rbp-11h] BYREF

  v9 = a6;
  v10 = a9;
  v69 = a1;
  v68 = a3;
  v11 = a1;
  v71 = a6;
  v12 = 0x10000LL;
  v70 = a9;
  v72 = 0LL;
  if ( a4 )
    v12 = *(unsigned int *)(a4 + 48);
  v73 = 0LL;
  if ( a5 )
  {
    if ( v12 != 0x10000 )
    {
      if ( a8 && _bittest64((const signed __int64 *)(v11 + 216), 0x27u) )
      {
        v13 = 1;
        v14 = 50LL;
      }
      else
      {
        v13 = 0;
        v14 = 34LL;
      }
      v59 = v13;
LABEL_9:
      v14 = (v12 << 16) ^ ((v12 << 16) ^ v14) & 0xFFFFFFFF0000FFFFuLL;
LABEL_10:
      v15 = v14 | 0xC0;
      goto LABEL_11;
    }
    v13 = 0;
    v59 = 0;
    v15 = 18LL;
  }
  else
  {
    if ( a3 == -1 )
    {
      v59 = 0;
      v13 = 0;
      if ( _bittest64((const signed __int64 *)(v11 + 216), 0x27u) )
      {
        *((_QWORD *)&v73 + 1) |= 0x40uLL;
        v14 = 50LL;
      }
      else
      {
        v14 = 34LL;
      }
      if ( v12 == 0x10000 )
        goto LABEL_10;
      goto LABEL_9;
    }
    v56 = ((unsigned __int64)(a3 & 0xFFFFF) << 32) | 6;
    if ( v12 != 0x10000 )
      v56 |= (unsigned __int64)(unsigned __int16)v12 << 16;
    if ( a8 )
    {
      v13 = 1;
      v15 = v56 | 0x30;
      v59 = 1;
    }
    else
    {
      v59 = 0;
      v15 = v56 & 0xFFFFFFFFFFFFFFCFuLL | 0x20;
      v13 = 0;
    }
  }
LABEL_11:
  v16 = (*(_BYTE *)(v11 + 224) & 4) == 0;
  v67 = v15;
  *(_QWORD *)&v73 = v15;
  if ( !v16 && a6 && *(_QWORD *)(a6 + 88) || a7 )
  {
    v17 = 1;
    v18 = 1;
    v60 = 1;
    if ( a8 )
      goto LABEL_16;
  }
  else
  {
    v17 = 0;
    v60 = 0;
  }
  v18 = 0;
LABEL_16:
  v61 = v18;
  v19 = 0;
  v62 = 0;
  v66 = 0LL;
  v63 = 0;
  v64 = 0;
  do
  {
    if ( v13 || v18 )
    {
      v20 = *(_QWORD *)(v10 + 8LL * v19);
      v21 = v20 >> 12;
      v66 = v20 >> 12;
      LODWORD(v22) = 9 * ((v20 >> 10) & 3);
      v63 = v22;
      v23 = v20 & 0x3FF;
      if ( v23 )
      {
        _BitScanReverse64((unsigned __int64 *)&v22, v21 ^ (v21 + v23 * (1LL << v22)));
        LODWORD(v22) = v22 + 1;
        v63 = v22;
        v21 &= ~((1LL << v22) - 1);
        v66 = v21;
      }
      if ( v13 )
      {
        if ( a5 && (unsigned int)v22 > (*(_WORD *)(v11 + 222) & 0x3Fu) )
        {
          v59 = 0;
          *(_QWORD *)&v73 = v15 & 0xFFFFFFFFFFFFFFCFuLL | 0x20;
        }
        else
        {
          *((_QWORD *)&v73 + 1) = (v21 << 12) | WORD4(v73) & 0xFC0 | (unsigned __int64)(v22 & 0x3F);
        }
LABEL_24:
        IvtIommuSendCommand(v11, &v73, 0LL);
        v15 = v73;
        v19 = v64;
        v67 = v73;
        goto LABEL_25;
      }
    }
    if ( !v19 )
      goto LABEL_24;
LABEL_25:
    if ( !v17 )
      goto LABEL_37;
    v24 = a7;
    if ( v9 )
    {
      v29 = *(_DWORD *)(v9 + 60);
      v30 = *(_QWORD *)(*(_QWORD *)(v9 + 48) + 8LL);
      v51 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 48LL) & 1;
      if ( a5 )
        v28 = 0;
      else
        v28 = (*(_DWORD *)(*(_QWORD *)(v9 + 88) + 48LL) & 0x800) != 0;
      v31 = (struct _EX_RUNDOWN_REF *)(v9 + 64);
      v27 = &v62;
LABEL_91:
      if ( v51 )
        goto LABEL_30;
LABEL_36:
      v17 = v60;
      v9 = v71;
      v11 = v69;
      goto LABEL_37;
    }
    v25 = (_QWORD *)*a7;
    if ( !a5 )
    {
      while ( 1 )
      {
        if ( v25 == a7 )
        {
          v30 = 0LL;
          v29 = 0;
          v28 = 0;
          v31 = 0LL;
          v27 = 0LL;
          v51 = 0;
          goto LABEL_91;
        }
        v52 = v25[5];
        v53 = *(_DWORD *)(v52 + 48);
        if ( (v53 & 1) != 0 )
          break;
        v25 = (_QWORD *)*v25;
      }
      v30 = *(_QWORD *)(v52 + 40);
      v27 = (char *)(v25 + 4);
      v57 = *(_QWORD *)(v52 + 72);
      v24 = v25;
      v51 = 1;
      v29 = *(_DWORD *)(v57 + 60);
      v31 = (struct _EX_RUNDOWN_REF *)(v57 + 64);
      v28 = (v53 & 0x800) != 0;
      goto LABEL_91;
    }
    v24 = (_QWORD *)*a7;
    if ( v25 != a7 )
    {
      v26 = *(v25 - 7);
      v27 = (char *)v24 + 44;
      v28 = 0;
      v29 = *(_DWORD *)(v26 + 60);
      v30 = *(_QWORD *)(*(_QWORD *)(v26 + 48) + 8LL);
      v31 = (struct _EX_RUNDOWN_REF *)(v26 + 64);
LABEL_30:
      v32 = v63;
      v33 = v69;
      v34 = v63 - 1;
      v65 = v63 - 1;
      while ( 1 )
      {
        if ( !*v27 )
        {
          if ( !ExAcquireRundownProtection_0(v31) )
            goto LABEL_33;
          v34 = v65;
          v32 = v63;
          *v27 = 1;
        }
        v72 = 0LL;
        if ( a5 )
          break;
        if ( v68 != -1 )
        {
          v41 = WORD4(v72);
          v42 = (unsigned __int64)(v68 & 0xFFFFF) << 32;
          goto LABEL_62;
        }
        if ( v28 )
        {
          v42 = v72;
          v41 = 1;
LABEL_62:
          v43 = v42 & 0xFFFFFFFF0000FFF8uLL | ((unsigned __int64)(unsigned __int16)v30 << 16) | 8;
          if ( _bittest64((const signed __int64 *)(v33 + 224), 0x29u) )
            v43 = v42 & 0xFFFFF00000FF8LL | ((unsigned __int16)v30 << 16) | 8 | ((v30 & 0xF | ((v30 & 0xFFFFFFFFFFFFFFF0uLL) << 36)) << 12);
          *(_QWORD *)&v72 = (16LL * v29) ^ (v43 ^ (16LL * v29)) & 0xFFFFFFFFFFFFFE0FuLL;
          if ( a8 )
          {
            if ( v32 )
            {
              v44 = v41 & 0xFFE | ((v66 | ((1LL << v34) - 1)) << 12) | 1;
              goto LABEL_67;
            }
            v48 = v41 & 0xFFF;
            v49 = v66 << 12;
          }
          else
          {
            v48 = v41 & 0x7FF;
            v49 = 0x7FFFFFFFFFFFF800LL;
          }
          v46 = v49 | v48;
LABEL_81:
          *((_QWORD *)&v72 + 1) = v46;
          goto LABEL_68;
        }
        v19 = v64;
        if ( !v64 )
        {
          v50 = ((unsigned __int64)(unsigned __int16)v30 << 32) | 3;
          if ( _bittest64((const signed __int64 *)(v33 + 224), 0x29u) )
            v50 |= (v30 & 0xF | ((v30 & 0xFFFFFFFFFFFFFFF0uLL) << 36)) << 12;
          *(_QWORD *)&v72 = ((unsigned __int64)v29 << 16) ^ (v50 ^ ((unsigned __int64)v29 << 16)) & 0xFFFFFFFFFFE0FFFFuLL;
          goto LABEL_68;
        }
LABEL_34:
        if ( !a7 )
          goto LABEL_35;
        v38 = (_QWORD *)*v24;
        if ( a5 )
        {
          v24 = (_QWORD *)*v24;
          if ( v38 == a7 )
            goto LABEL_35;
          v39 = *(v38 - 7);
          v27 = (char *)v24 + 44;
          v28 = 0;
          v29 = *(_DWORD *)(v39 + 60);
          v30 = *(_QWORD *)(*(_QWORD *)(v39 + 48) + 8LL);
          v31 = (struct _EX_RUNDOWN_REF *)(v39 + 64);
        }
        else
        {
          while ( 1 )
          {
            if ( v38 == a7 )
            {
              v30 = 0LL;
              v29 = 0;
              v28 = 0;
              v31 = 0LL;
              v27 = 0LL;
              v40 = 0;
              goto LABEL_53;
            }
            v54 = v38[5];
            v55 = *(_DWORD *)(v54 + 48);
            if ( (v55 & 1) != 0 )
              break;
            v38 = (_QWORD *)*v38;
          }
          v30 = *(_QWORD *)(v54 + 40);
          v27 = (char *)(v38 + 4);
          v58 = *(_QWORD *)(v54 + 72);
          v24 = v38;
          v40 = 1;
          v29 = *(_DWORD *)(v58 + 60);
          v31 = (struct _EX_RUNDOWN_REF *)(v58 + 64);
          v28 = (v55 & 0x800) != 0;
LABEL_53:
          if ( !v40 )
          {
LABEL_35:
            v15 = v67;
            goto LABEL_36;
          }
        }
        v34 = v65;
        v32 = v63;
      }
      v45 = ((unsigned __int64)(unsigned __int16)v30 << 32) | 3;
      if ( _bittest64((const signed __int64 *)(v33 + 224), 0x29u) )
        v45 |= (v30 & 0xF | ((v30 & 0xFFFFFFFFFFFFFFF0uLL) << 36)) << 12;
      *(_QWORD *)&v72 = ((unsigned __int64)v29 << 16) ^ (v45 ^ ((unsigned __int64)v29 << 16)) & 0xFFFFFFFFFFE0FFFFuLL;
      if ( a8 )
      {
        if ( v32 )
        {
          v46 = WORD4(v72) & 0xFFE | ((v66 | ((1LL << v34) - 1)) << 12) | 1;
          goto LABEL_81;
        }
        *((_QWORD *)&v72 + 1) = (v66 << 12) | WORD4(v72) & 0xFFF;
      }
      else
      {
        v44 = WORD4(v72) & 0xFFE | 0x7FFFFFFFFFFFF001LL;
LABEL_67:
        *((_QWORD *)&v72 + 1) = v44;
      }
LABEL_68:
      IvtIommuSendCommand(v33, &v72, 0LL);
LABEL_33:
      v19 = v64;
      goto LABEL_34;
    }
LABEL_37:
    v13 = v59;
    ++v19;
    v18 = v61;
    v10 = v70;
    v64 = v19;
  }
  while ( v19 < a8 );
  IvtIommuWaitCommand(v11, 0LL, 0LL);
  if ( v62 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 64));
  if ( a7 )
  {
    v35 = a7;
    while ( 1 )
    {
      v35 = (_QWORD *)*v35;
      if ( !a5 )
        break;
      if ( v35 == a7 )
        return;
      v36 = (struct _EX_RUNDOWN_REF *)*(v35 - 7);
      v37 = (char *)v35 + 44;
LABEL_46:
      if ( *v37 )
      {
        *v37 = 0;
        ExReleaseRundownProtection_0(v36 + 8);
      }
    }
    while ( v35 != a7 )
    {
      v47 = v35[5];
      if ( (*(_DWORD *)(v47 + 48) & 1) != 0 )
      {
        v36 = *(struct _EX_RUNDOWN_REF **)(v47 + 72);
        v37 = v35 + 4;
        goto LABEL_46;
      }
      v35 = (_QWORD *)*v35;
    }
  }
}
