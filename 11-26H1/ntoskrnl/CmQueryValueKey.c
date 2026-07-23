/*
 * XREFs of CmQueryValueKey @ 0x1408DEEA0
 * Callers:
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     CmQueryValueKeyCallout @ 0x140A74B90 (CmQueryValueKeyCallout.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpQueryKeyValueData @ 0x140941E50 (CmpQueryKeyValueData.c)
 *     CmpLockKcbStackShared @ 0x140946C60 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, unsigned __int16 *a2, int a3, size_t a4, int a5, __int64 a6)
{
  __int64 v6; // rdi
  unsigned int v7; // esi
  __int16 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  struct _PRIVILEGE_SET *v15; // r8
  int v16; // ebx
  __int64 v17; // r13
  __int16 v18; // bx
  signed __int64 v19; // r12
  char *v20; // rdi
  char *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int16 i; // r8
  int v25; // edx
  char v26; // al
  _DWORD *v27; // rdx
  __int64 v28; // r13
  ULONG_PTR v29; // rbx
  unsigned int *v30; // rdx
  __int16 v31; // r8
  unsigned int v32; // r14d
  __int64 v33; // rdx
  __int64 CellFlat; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 CellPaged; // rax
  unsigned __int8 *v38; // rdx
  unsigned __int64 v39; // r12
  WCHAR *v40; // r8
  unsigned __int16 j; // di
  int v42; // esi
  unsigned int v43; // eax
  WCHAR v44; // r14
  unsigned int v45; // esi
  int v46; // edi
  int v47; // edx
  ULONG_PTR v48; // r14
  __int64 v49; // rax
  __int64 v50; // rbx
  int KeyValueData; // edi
  ULONG_PTR *v52; // rbx
  ULONG_PTR *v53; // rcx
  unsigned __int64 v55; // rsi
  __int64 v56; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int16 *v58; // r8
  unsigned __int64 v59; // rax
  unsigned __int8 *v60; // rdx
  unsigned __int16 *v61; // r11
  unsigned __int64 v62; // r9
  unsigned __int64 v63; // r10
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int16 v68; // [rsp+48h] [rbp-C0h]
  __int16 v69; // [rsp+4Ah] [rbp-BEh]
  struct _PRIVILEGE_SET *Privileges; // [rsp+50h] [rbp-B8h]
  WCHAR *v71; // [rsp+58h] [rbp-B0h]
  struct _LIST_ENTRY *v72; // [rsp+58h] [rbp-B0h]
  int v73; // [rsp+60h] [rbp-A8h]
  __int64 v74; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+70h] [rbp-98h] BYREF
  __int64 v76; // [rsp+78h] [rbp-90h] BYREF
  __int64 v77; // [rsp+80h] [rbp-88h]
  __int128 v78; // [rsp+88h] [rbp-80h] BYREF
  __int128 v79; // [rsp+98h] [rbp-70h]
  unsigned int v80; // [rsp+A8h] [rbp-60h]
  int v81; // [rsp+ACh] [rbp-5Ch]
  unsigned __int8 *v82; // [rsp+B0h] [rbp-58h]
  __int64 v83; // [rsp+B8h] [rbp-50h]
  __int64 v84; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v85; // [rsp+C8h] [rbp-40h]
  _DWORD *v86; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int16 *v87; // [rsp+D8h] [rbp-30h]
  __int64 v88; // [rsp+E0h] [rbp-28h]
  size_t Size; // [rsp+E8h] [rbp-20h]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-18h] BYREF

  v6 = a1;
  v7 = -1;
  v88 = a6;
  v77 = a1;
  v8 = 0;
  v78 = 0LL;
  v76 = 0LL;
  LODWORD(v9) = 0;
  v84 = 0LL;
  Size = a4;
  v81 = a3;
  v87 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  WORD1(v78) = -1;
  v79 = 0LL;
  HvpGetCellContextInitialize(&v76);
  HvpGetCellContextInitialize(&v86);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v11, v10, v12, v13);
  v14 = *(_QWORD *)(v6 + 8);
  v15 = 0LL;
  Privileges = 0LL;
  v16 = *(__int16 *)(v14 + 66);
  if ( v16 >= 2 )
  {
    Privileges = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
    v15 = Privileges;
    if ( !Privileges )
    {
      KeyValueData = -1073741670;
      Privileges = (struct _PRIVILEGE_SET *)*((_QWORD *)&v79 + 1);
      goto LABEL_80;
    }
  }
  LOWORD(v78) = v16;
  *((_QWORD *)&v79 + 1) = v15;
  v17 = *(__int16 *)(v14 + 66);
  v69 = v17;
  WORD1(v78) = *(_WORD *)(v14 + 66);
  if ( (_WORD)v17 )
  {
    v66 = *(_QWORD *)(v14 + 192);
    if ( !v66 )
      goto LABEL_5;
    do
    {
      v67 = *(_QWORD *)(v66 + 16);
      if ( (__int16)v17 >= 2 )
      {
        *((_QWORD *)v15 + (__int16)v17 - 2) = v67;
      }
      else
      {
        *((_QWORD *)&v78 + (__int16)v17 + 1) = v67;
        v15 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v79 + 1);
      }
      v66 = *(_QWORD *)(v66 + 24);
      LOWORD(v17) = v17 - 1;
    }
    while ( v66 );
  }
  else
  {
    *((_QWORD *)&v78 + v17 + 1) = v14;
    v15 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v79 + 1);
  }
  LOWORD(v17) = WORD1(v78);
  v69 = WORD1(v78);
  Privileges = v15;
LABEL_5:
  if ( *(_QWORD *)(v6 + 56) || *(_QWORD *)(v6 + 64) )
  {
    CmpLockKcbStackShared(&v78);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v6, 0LL) )
    {
      if ( (*(_BYTE *)(v6 + 48) & 1) != 0 )
      {
        LOBYTE(v23) = 1;
        goto LABEL_115;
      }
LABEL_144:
      LOBYTE(v23) = 0;
LABEL_115:
      KeyValueData = -1073740763;
      if ( !(_BYTE)v23 )
        KeyValueData = -1073741444;
      goto LABEL_75;
    }
    CmpUnlockKcbStack((__int64)&v78);
    KeyValueData = CmpTransSearchAddTransFromKeyBody(v6, &v84);
    if ( KeyValueData < 0 )
      goto LABEL_80;
    v6 = v77;
    v15 = Privileges;
  }
  v18 = 0;
  if ( (v17 & 0x8000u) == 0LL )
  {
    v19 = (char *)v15 - ((char *)&v78 + 8);
    v20 = (char *)&v78 + 8;
    do
    {
      if ( v18 >= 2 )
        v21 = &v20[v19 - 16];
      else
        v21 = v20;
      CmpLockKcbShared(*(_QWORD *)v21);
      ++v18;
      v20 += 8;
    }
    while ( v18 <= (__int16)v17 );
    v6 = v77;
    LODWORD(v9) = 0;
  }
  v22 = v84;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v6, v84) )
  {
    if ( (*(_BYTE *)(v6 + 48) & 1) != 0 )
    {
      LOBYTE(v23) = 1;
      KeyValueData = -1073740763;
      goto LABEL_75;
    }
    goto LABEL_144;
  }
  for ( i = *(_WORD *)(v14 + 66); ; i = v31 - 1 )
  {
    while ( 1 )
    {
      v68 = i;
      if ( i < 0 )
      {
LABEL_65:
        v48 = 0LL;
        goto LABEL_66;
      }
      v9 = i >= 2 ? *((_QWORD *)Privileges + i - 2) : *((_QWORD *)&v78 + i + 1);
      v25 = *(__int16 *)(v9 + 66);
      v23 = *(unsigned __int16 *)(v6 + 4);
      v85 = v9;
      if ( v25 == (_DWORD)v23 )
      {
        v26 = *(_BYTE *)(v9 + 65);
        if ( !v26 )
          goto LABEL_24;
      }
      else
      {
        if ( !(_WORD)v25 )
          goto LABEL_24;
        v26 = *(_BYTE *)(v9 + 65);
      }
      if ( v26 == 1 )
        goto LABEL_65;
LABEL_24:
      if ( *(_DWORD *)(v9 + 40) != -1 )
        break;
      --i;
    }
    if ( !v22 || (v27 = (_DWORD *)(v9 + 280), *(_QWORD *)(v9 + 288) != v22) )
      v27 = (_DWORD *)(v9 + 96);
    v28 = *(unsigned int *)(v6 + 100);
    v29 = *(_QWORD *)(v9 + 32);
    v86 = v27;
    v75 = 0LL;
    v74 = 0LL;
    HvpGetCellContextInitialize(&v75);
    HvpGetCellContextInitialize(&v74);
    v32 = *v30;
    v80 = v32;
    if ( !v32 )
    {
      v7 = -1;
      goto LABEL_64;
    }
    v33 = v30[1];
    if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v29, v33, (unsigned int *)&v75);
    else
      CellFlat = HvpGetCellPaged(v29, v33);
    v83 = CellFlat;
    v35 = CellFlat;
    v23 = 0LL;
    if ( (unsigned int)v28 >= v32 )
      v28 = 0LL;
    while ( 1 )
    {
      v73 = v23;
      if ( (unsigned int)v23 >= v32 )
        break;
      v36 = *(unsigned int *)(v35 + 4 * v28);
      if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v29, v36, (unsigned int *)&v74);
      else
        CellPaged = HvpGetCellPaged(v29, v36);
      v38 = (unsigned __int8 *)(CellPaged + 20);
      v39 = *(unsigned __int16 *)(CellPaged + 2);
      v40 = (WCHAR *)*((_QWORD *)v87 + 1);
      if ( (*(_BYTE *)(CellPaged + 16) & 1) != 0 )
      {
        for ( j = *v87 >> 1; j && (_WORD)v39; --j )
        {
          v44 = *v40++;
          v45 = *v38++;
          v71 = v40;
          v82 = v38;
          if ( v44 != (_WORD)v45 )
          {
            if ( v44 >= 0x61u )
            {
              if ( v44 > 0x7Au )
                v44 = RtlUpcaseUnicodeChar(v44);
              else
                v44 -= 32;
            }
            if ( v45 >= 0x61 )
            {
              if ( v45 > 0x7A )
                LOWORD(v45) = RtlUpcaseUnicodeChar(v45);
              else
                LOWORD(v45) = v45 - 32;
            }
            v42 = v44 - (unsigned __int16)v45;
            if ( v42 )
              goto LABEL_39;
            v40 = v71;
            v38 = v82;
          }
          LOWORD(v39) = v39 - 1;
        }
        v42 = j - (unsigned __int16)v39;
LABEL_39:
        v32 = v80;
      }
      else
      {
        v55 = (unsigned __int64)*v87 >> 1;
        Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
        v59 = v55;
        v72 = Flink;
        if ( v55 > v39 >> 1 )
          v59 = v39 >> 1;
        v60 = (unsigned __int8 *)(v56 - (_QWORD)v58);
        v82 = v60;
        v61 = &v58[v59];
        while ( v58 < v61 )
        {
          v62 = *v58;
          v63 = *(unsigned __int16 *)((char *)v58 + (_QWORD)v60);
          if ( (_WORD)v62 != (_WORD)v63 )
          {
            if ( (unsigned int)v62 >= 0x61 )
            {
              if ( (unsigned int)v62 > 0x7A )
              {
                if ( Flink && (unsigned __int16)v62 >= 0xC0u )
                {
                  v64 = *((unsigned __int16 *)&Flink->Flink + (v62 >> 8)) + (unsigned int)((unsigned __int8)v62 >> 4);
                  Flink = v72;
                  LOWORD(v62) = *((_WORD *)&v72->Flink + (v62 & 0xF) + *((unsigned __int16 *)&v72->Flink + v64)) + v62;
                }
              }
              else
              {
                LOWORD(v62) = v62 - 32;
              }
            }
            if ( (unsigned int)v63 >= 0x61 )
            {
              if ( (unsigned int)v63 > 0x7A )
              {
                if ( Flink && (unsigned __int16)v63 >= 0xC0u )
                {
                  v65 = *((unsigned __int16 *)&Flink->Flink + (v63 >> 8)) + (unsigned int)((unsigned __int8)v63 >> 4);
                  Flink = v72;
                  LOWORD(v63) = *((_WORD *)&v72->Flink + (v63 & 0xF) + *((unsigned __int16 *)&v72->Flink + v65)) + v63;
                }
              }
              else
              {
                LOWORD(v63) = v63 - 32;
              }
            }
            if ( (_WORD)v62 != (_WORD)v63 )
            {
              v42 = (unsigned __int16)v62 - (unsigned __int16)v63;
              goto LABEL_40;
            }
            v60 = v82;
          }
          ++v58;
        }
        v42 = v55 - (v39 >> 1);
      }
LABEL_40:
      if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v29, (__int64)&v74);
      else
        HvpReleaseCellPaged(v29, (unsigned int *)&v74);
      v35 = v83;
      if ( !v42 )
      {
        v7 = *(_DWORD *)(v83 + 4 * v28);
        v46 = 0;
        goto LABEL_59;
      }
      v43 = v28 + 1;
      v23 = (unsigned int)(v73 + 1);
      v28 = 0LL;
      if ( v43 != v32 )
        v28 = v43;
    }
    v46 = -1073741772;
    v7 = -1;
    LODWORD(v28) = *v86;
LABEL_59:
    if ( v35 )
    {
      if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v29, (__int64)&v75);
      else
        HvpReleaseCellPaged(v29, (unsigned int *)&v75);
    }
    if ( v46 >= 0 )
      break;
    v31 = v68;
    v9 = v85;
    v6 = v77;
LABEL_64:
    v47 = *(__int16 *)(v9 + 66);
    v23 = *(unsigned __int16 *)(v6 + 4);
    if ( v47 == (_DWORD)v23 || (_WORD)v47 && *(_BYTE *)(v9 + 65) )
      goto LABEL_65;
    v22 = v84;
  }
  v9 = v85;
  *(_DWORD *)(v77 + 100) = v28;
  v48 = *(_QWORD *)(v9 + 32);
LABEL_66:
  if ( v7 == -1 )
  {
    KeyValueData = -1073741772;
  }
  else
  {
    if ( (*(_BYTE *)(v48 + 140) & 1) != 0 )
      v49 = HvpGetCellFlat(v48, v7, (unsigned int *)&v76);
    else
      v49 = HvpGetCellPaged(v48, v7);
    v50 = v49;
    if ( (*(_DWORD *)(v48 + 160) & 0x80000) != 0 && (*(_BYTE *)(v49 + 16) & 2) != 0 )
    {
      KeyValueData = -1073741772;
    }
    else
    {
      KeyValueData = CmpQueryKeyValueData(v9, v7, v49, v81, Size, a5, v88);
      if ( KeyValueData >= 0 )
        KeyValueData = 0;
    }
    if ( v50 )
    {
      if ( (*(_BYTE *)(v48 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v48, (__int64)&v76);
      else
        HvpReleaseCellPaged(v48, (unsigned int *)&v76);
    }
  }
LABEL_75:
  if ( v69 >= 0 )
  {
    v52 = (ULONG_PTR *)&v78 + 1;
    do
    {
      if ( v8 >= 2 )
        v53 = (ULONG_PTR *)((char *)v52 + (char *)Privileges - ((char *)&v78 + 8) - 16);
      else
        v53 = v52;
      CmpUnlockKcb(*v53);
      ++v8;
      ++v52;
    }
    while ( v8 <= v69 );
  }
LABEL_80:
  CmpUnlockRegistry(v23);
  CmpDetachFromRegistryProcess(&ApcState);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  return (unsigned int)KeyValueData;
}
