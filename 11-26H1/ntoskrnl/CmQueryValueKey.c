/*
 * XREFs of CmQueryValueKey @ 0x1408D88E0
 * Callers:
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     CmQueryValueKeyCallout @ 0x140A67BC0 (CmQueryValueKeyCallout.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     RtlUpcaseUnicodeChar @ 0x1408D5170 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpQueryKeyValueData @ 0x14097FE40 (CmpQueryKeyValueData.c)
 *     CmpLockKcbStackShared @ 0x140984C50 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, unsigned __int16 *a2, int a3, size_t a4, int a5, __int64 a6)
{
  __int64 v6; // rdi
  unsigned int v7; // esi
  __int16 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r14
  struct _PRIVILEGE_SET *v12; // r8
  int v13; // ebx
  __int64 v14; // r13
  __int16 v15; // bx
  signed __int64 v16; // r12
  char *v17; // rdi
  char *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int16 i; // r8
  int v22; // edx
  char v23; // al
  _DWORD *v24; // rdx
  __int64 v25; // r13
  ULONG_PTR v26; // rbx
  unsigned int *v27; // rdx
  __int16 v28; // r8
  unsigned int v29; // r14d
  __int64 v30; // rdx
  __int64 CellFlat; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 CellPaged; // rax
  unsigned __int8 *v35; // rdx
  unsigned __int64 v36; // r12
  WCHAR *v37; // r8
  unsigned __int16 j; // di
  int v39; // esi
  unsigned int v40; // eax
  WCHAR v41; // r14
  unsigned int v42; // esi
  int v43; // edi
  int v44; // edx
  ULONG_PTR v45; // r14
  __int64 v46; // rax
  __int64 v47; // rbx
  int KeyValueData; // edi
  ULONG_PTR *v49; // rbx
  ULONG_PTR *v50; // rcx
  unsigned __int64 v52; // rsi
  __int64 v53; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int16 *v55; // r8
  unsigned __int64 v56; // rax
  unsigned __int8 *v57; // rdx
  unsigned __int16 *v58; // r11
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // r10
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  __int16 v65; // [rsp+48h] [rbp-C0h]
  __int16 v66; // [rsp+4Ah] [rbp-BEh]
  struct _PRIVILEGE_SET *Privileges; // [rsp+50h] [rbp-B8h]
  WCHAR *v68; // [rsp+58h] [rbp-B0h]
  struct _LIST_ENTRY *v69; // [rsp+58h] [rbp-B0h]
  int v70; // [rsp+60h] [rbp-A8h]
  __int64 v71; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+70h] [rbp-98h] BYREF
  __int64 v73; // [rsp+78h] [rbp-90h] BYREF
  __int64 v74; // [rsp+80h] [rbp-88h]
  __int128 v75; // [rsp+88h] [rbp-80h] BYREF
  __int128 v76; // [rsp+98h] [rbp-70h]
  unsigned int v77; // [rsp+A8h] [rbp-60h]
  int v78; // [rsp+ACh] [rbp-5Ch]
  unsigned __int8 *v79; // [rsp+B0h] [rbp-58h]
  __int64 v80; // [rsp+B8h] [rbp-50h]
  __int64 v81; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-40h]
  _DWORD *v83; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int16 *v84; // [rsp+D8h] [rbp-30h]
  __int64 v85; // [rsp+E0h] [rbp-28h]
  size_t Size; // [rsp+E8h] [rbp-20h]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-18h] BYREF

  v6 = a1;
  v7 = -1;
  v85 = a6;
  v74 = a1;
  v8 = 0;
  v75 = 0LL;
  v73 = 0LL;
  LODWORD(v9) = 0;
  v81 = 0LL;
  Size = a4;
  v78 = a3;
  v84 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  WORD1(v75) = -1;
  v76 = 0LL;
  HvpGetCellContextInitialize(&v73);
  HvpGetCellContextInitialize(&v83);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v10);
  v11 = *(_QWORD *)(v6 + 8);
  v12 = 0LL;
  Privileges = 0LL;
  v13 = *(__int16 *)(v11 + 66);
  if ( v13 >= 2 )
  {
    Privileges = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
    v12 = Privileges;
    if ( !Privileges )
    {
      KeyValueData = -1073741670;
      Privileges = (struct _PRIVILEGE_SET *)*((_QWORD *)&v76 + 1);
      goto LABEL_80;
    }
  }
  LOWORD(v75) = v13;
  *((_QWORD *)&v76 + 1) = v12;
  v14 = *(__int16 *)(v11 + 66);
  v66 = v14;
  WORD1(v75) = *(_WORD *)(v11 + 66);
  if ( (_WORD)v14 )
  {
    v63 = *(_QWORD *)(v11 + 192);
    if ( !v63 )
      goto LABEL_5;
    do
    {
      v64 = *(_QWORD *)(v63 + 16);
      if ( (__int16)v14 >= 2 )
      {
        *((_QWORD *)v12 + (__int16)v14 - 2) = v64;
      }
      else
      {
        *((_QWORD *)&v75 + (__int16)v14 + 1) = v64;
        v12 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v76 + 1);
      }
      v63 = *(_QWORD *)(v63 + 24);
      LOWORD(v14) = v14 - 1;
    }
    while ( v63 );
  }
  else
  {
    *((_QWORD *)&v75 + v14 + 1) = v11;
    v12 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v76 + 1);
  }
  LOWORD(v14) = WORD1(v75);
  v66 = WORD1(v75);
  Privileges = v12;
LABEL_5:
  if ( *(_QWORD *)(v6 + 56) || *(_QWORD *)(v6 + 64) )
  {
    CmpLockKcbStackShared(&v75);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v6, 0LL) )
    {
      if ( (*(_BYTE *)(v6 + 48) & 1) != 0 )
      {
        LOBYTE(v20) = 1;
        goto LABEL_115;
      }
LABEL_144:
      LOBYTE(v20) = 0;
LABEL_115:
      KeyValueData = -1073740763;
      if ( !(_BYTE)v20 )
        KeyValueData = -1073741444;
      goto LABEL_75;
    }
    CmpUnlockKcbStack((__int64)&v75);
    KeyValueData = CmpTransSearchAddTransFromKeyBody(v6, &v81);
    if ( KeyValueData < 0 )
      goto LABEL_80;
    v6 = v74;
    v12 = Privileges;
  }
  v15 = 0;
  if ( (v14 & 0x8000u) == 0LL )
  {
    v16 = (char *)v12 - ((char *)&v75 + 8);
    v17 = (char *)&v75 + 8;
    do
    {
      if ( v15 >= 2 )
        v18 = &v17[v16 - 16];
      else
        v18 = v17;
      CmpLockKcbShared(*(_QWORD *)v18);
      ++v15;
      v17 += 8;
    }
    while ( v15 <= (__int16)v14 );
    v6 = v74;
    LODWORD(v9) = 0;
  }
  v19 = v81;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v6, v81) )
  {
    if ( (*(_BYTE *)(v6 + 48) & 1) != 0 )
    {
      LOBYTE(v20) = 1;
      KeyValueData = -1073740763;
      goto LABEL_75;
    }
    goto LABEL_144;
  }
  for ( i = *(_WORD *)(v11 + 66); ; i = v28 - 1 )
  {
    while ( 1 )
    {
      v65 = i;
      if ( i < 0 )
      {
LABEL_65:
        v45 = 0LL;
        goto LABEL_66;
      }
      v9 = i >= 2 ? *((_QWORD *)Privileges + i - 2) : *((_QWORD *)&v75 + i + 1);
      v22 = *(__int16 *)(v9 + 66);
      v20 = *(unsigned __int16 *)(v6 + 4);
      v82 = v9;
      if ( v22 == (_DWORD)v20 )
      {
        v23 = *(_BYTE *)(v9 + 65);
        if ( !v23 )
          goto LABEL_24;
      }
      else
      {
        if ( !(_WORD)v22 )
          goto LABEL_24;
        v23 = *(_BYTE *)(v9 + 65);
      }
      if ( v23 == 1 )
        goto LABEL_65;
LABEL_24:
      if ( *(_DWORD *)(v9 + 40) != -1 )
        break;
      --i;
    }
    if ( !v19 || (v24 = (_DWORD *)(v9 + 280), *(_QWORD *)(v9 + 288) != v19) )
      v24 = (_DWORD *)(v9 + 96);
    v25 = *(unsigned int *)(v6 + 100);
    v26 = *(_QWORD *)(v9 + 32);
    v83 = v24;
    v72 = 0LL;
    v71 = 0LL;
    HvpGetCellContextInitialize(&v72);
    HvpGetCellContextInitialize(&v71);
    v29 = *v27;
    v77 = v29;
    if ( !v29 )
    {
      v7 = -1;
      goto LABEL_64;
    }
    v30 = v27[1];
    if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v26, v30, (unsigned int *)&v72);
    else
      CellFlat = HvpGetCellPaged(v26, v30);
    v80 = CellFlat;
    v32 = CellFlat;
    v20 = 0LL;
    if ( (unsigned int)v25 >= v29 )
      v25 = 0LL;
    while ( 1 )
    {
      v70 = v20;
      if ( (unsigned int)v20 >= v29 )
        break;
      v33 = *(unsigned int *)(v32 + 4 * v25);
      if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v26, v33, (unsigned int *)&v71);
      else
        CellPaged = HvpGetCellPaged(v26, v33);
      v35 = (unsigned __int8 *)(CellPaged + 20);
      v36 = *(unsigned __int16 *)(CellPaged + 2);
      v37 = (WCHAR *)*((_QWORD *)v84 + 1);
      if ( (*(_BYTE *)(CellPaged + 16) & 1) != 0 )
      {
        for ( j = *v84 >> 1; j && (_WORD)v36; --j )
        {
          v41 = *v37++;
          v42 = *v35++;
          v68 = v37;
          v79 = v35;
          if ( v41 != (_WORD)v42 )
          {
            if ( v41 >= 0x61u )
            {
              if ( v41 > 0x7Au )
                v41 = RtlUpcaseUnicodeChar(v41);
              else
                v41 -= 32;
            }
            if ( v42 >= 0x61 )
            {
              if ( v42 > 0x7A )
                LOWORD(v42) = RtlUpcaseUnicodeChar(v42);
              else
                LOWORD(v42) = v42 - 32;
            }
            v39 = v41 - (unsigned __int16)v42;
            if ( v39 )
              goto LABEL_39;
            v37 = v68;
            v35 = v79;
          }
          LOWORD(v36) = v36 - 1;
        }
        v39 = j - (unsigned __int16)v36;
LABEL_39:
        v29 = v77;
      }
      else
      {
        v52 = (unsigned __int64)*v84 >> 1;
        Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
        v56 = v52;
        v69 = Flink;
        if ( v52 > v36 >> 1 )
          v56 = v36 >> 1;
        v57 = (unsigned __int8 *)(v53 - (_QWORD)v55);
        v79 = v57;
        v58 = &v55[v56];
        while ( v55 < v58 )
        {
          v59 = *v55;
          v60 = *(unsigned __int16 *)((char *)v55 + (_QWORD)v57);
          if ( (_WORD)v59 != (_WORD)v60 )
          {
            if ( (unsigned int)v59 >= 0x61 )
            {
              if ( (unsigned int)v59 > 0x7A )
              {
                if ( Flink && (unsigned __int16)v59 >= 0xC0u )
                {
                  v61 = *((unsigned __int16 *)&Flink->Flink + (v59 >> 8)) + (unsigned int)((unsigned __int8)v59 >> 4);
                  Flink = v69;
                  LOWORD(v59) = *((_WORD *)&v69->Flink + (v59 & 0xF) + *((unsigned __int16 *)&v69->Flink + v61)) + v59;
                }
              }
              else
              {
                LOWORD(v59) = v59 - 32;
              }
            }
            if ( (unsigned int)v60 >= 0x61 )
            {
              if ( (unsigned int)v60 > 0x7A )
              {
                if ( Flink && (unsigned __int16)v60 >= 0xC0u )
                {
                  v62 = *((unsigned __int16 *)&Flink->Flink + (v60 >> 8)) + (unsigned int)((unsigned __int8)v60 >> 4);
                  Flink = v69;
                  LOWORD(v60) = *((_WORD *)&v69->Flink + (v60 & 0xF) + *((unsigned __int16 *)&v69->Flink + v62)) + v60;
                }
              }
              else
              {
                LOWORD(v60) = v60 - 32;
              }
            }
            if ( (_WORD)v59 != (_WORD)v60 )
            {
              v39 = (unsigned __int16)v59 - (unsigned __int16)v60;
              goto LABEL_40;
            }
            v57 = v79;
          }
          ++v55;
        }
        v39 = v52 - (v36 >> 1);
      }
LABEL_40:
      if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v26, (__int64)&v71);
      else
        HvpReleaseCellPaged(v26, (unsigned int *)&v71);
      v32 = v80;
      if ( !v39 )
      {
        v7 = *(_DWORD *)(v80 + 4 * v25);
        v43 = 0;
        goto LABEL_59;
      }
      v40 = v25 + 1;
      v20 = (unsigned int)(v70 + 1);
      v25 = 0LL;
      if ( v40 != v29 )
        v25 = v40;
    }
    v43 = -1073741772;
    v7 = -1;
    LODWORD(v25) = *v83;
LABEL_59:
    if ( v32 )
    {
      if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v26, (__int64)&v72);
      else
        HvpReleaseCellPaged(v26, (unsigned int *)&v72);
    }
    if ( v43 >= 0 )
      break;
    v28 = v65;
    v9 = v82;
    v6 = v74;
LABEL_64:
    v44 = *(__int16 *)(v9 + 66);
    v20 = *(unsigned __int16 *)(v6 + 4);
    if ( v44 == (_DWORD)v20 || (_WORD)v44 && *(_BYTE *)(v9 + 65) )
      goto LABEL_65;
    v19 = v81;
  }
  v9 = v82;
  *(_DWORD *)(v74 + 100) = v25;
  v45 = *(_QWORD *)(v9 + 32);
LABEL_66:
  if ( v7 == -1 )
  {
    KeyValueData = -1073741772;
  }
  else
  {
    if ( (*(_BYTE *)(v45 + 140) & 1) != 0 )
      v46 = HvpGetCellFlat(v45, v7, (unsigned int *)&v73);
    else
      v46 = HvpGetCellPaged(v45, v7);
    v47 = v46;
    if ( (*(_DWORD *)(v45 + 160) & 0x80000) != 0 && (*(_BYTE *)(v46 + 16) & 2) != 0 )
    {
      KeyValueData = -1073741772;
    }
    else
    {
      KeyValueData = CmpQueryKeyValueData(v9, v7, v46, v78, Size, a5, v85);
      if ( KeyValueData >= 0 )
        KeyValueData = 0;
    }
    if ( v47 )
    {
      if ( (*(_BYTE *)(v45 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v45, (__int64)&v73);
      else
        HvpReleaseCellPaged(v45, (unsigned int *)&v73);
    }
  }
LABEL_75:
  if ( v66 >= 0 )
  {
    v49 = (ULONG_PTR *)&v75 + 1;
    do
    {
      if ( v8 >= 2 )
        v50 = (ULONG_PTR *)((char *)v49 + (char *)Privileges - ((char *)&v75 + 8) - 16);
      else
        v50 = v49;
      CmpUnlockKcb(*v50);
      ++v8;
      ++v49;
    }
    while ( v8 <= v66 );
  }
LABEL_80:
  CmpUnlockRegistry(v20);
  CmpDetachFromRegistryProcess(&ApcState);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  return (unsigned int)KeyValueData;
}
