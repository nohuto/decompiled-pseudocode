/*
 * XREFs of PnpGetDeviceLocationStrings @ 0x1409DB334
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PiQueryRemovableDeviceOverride @ 0x1409DA988 (PiQueryRemovableDeviceOverride.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpQueryInterface @ 0x1409DB9B4 (PnpQueryInterface.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetDeviceLocationStrings(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // r14
  _BYTE *v4; // rsi
  _QWORD *v5; // rcx
  unsigned int v6; // r15d
  _QWORD *v7; // rax
  PVOID *v8; // r13
  _DWORD *v9; // r12
  unsigned int v10; // r13d
  int v11; // esi
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // edi
  __int64 v16; // r14
  PVOID *v17; // rbx
  void *v18; // rax
  int v19; // r8d
  int v20; // r9d
  unsigned int v21; // edx
  _WORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v26; // rsi
  void *v27; // rax
  _WORD *v28; // rax
  unsigned int v29; // r12d
  int v30; // r14d
  char v31; // dl
  char v32; // r8
  __int64 v33; // rcx
  unsigned int v34; // r10d
  char *v35; // rbx
  unsigned int v36; // esi
  unsigned int v37; // edi
  unsigned int v38; // r12d
  unsigned int v39; // eax
  char *v40; // r14
  char v41; // r13
  char v42; // r9
  char v43; // r15
  unsigned int v44; // edx
  _WORD *v45; // rsi
  char v46; // dl
  char v47; // r8
  __int64 v48; // r8
  __int64 v49; // rcx
  char *v50; // r14
  __int64 v51; // r8
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // r11d
  unsigned int v56; // [rsp+38h] [rbp-69h]
  int v57; // [rsp+3Ch] [rbp-65h]
  unsigned int v58; // [rsp+40h] [rbp-61h]
  PVOID P; // [rsp+48h] [rbp-59h] BYREF
  int v60; // [rsp+50h] [rbp-51h]
  unsigned int v61; // [rsp+54h] [rbp-4Dh]
  unsigned int v62; // [rsp+58h] [rbp-49h]
  PVOID Pool2; // [rsp+60h] [rbp-41h]
  unsigned int v64; // [rsp+68h] [rbp-39h]
  unsigned int v65; // [rsp+6Ch] [rbp-35h]
  __int64 v66; // [rsp+70h] [rbp-31h]
  PVOID v67; // [rsp+78h] [rbp-29h]
  int v68; // [rsp+80h] [rbp-21h]
  __int64 v69; // [rsp+88h] [rbp-19h]
  __int128 v70; // [rsp+90h] [rbp-11h] BYREF
  __int128 v71; // [rsp+A0h] [rbp-1h]
  __int64 v72; // [rsp+B0h] [rbp+Fh]
  __int64 v73; // [rsp+108h] [rbp+67h]
  char v74; // [rsp+108h] [rbp+67h]

  v73 = a1;
  v3 = a1;
  P = 0LL;
  v72 = 0LL;
  LOBYTE(v60) = 0;
  v61 = -1;
  v56 = -1;
  v4 = 0LL;
  v67 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v5 = IopRootDeviceNode;
  *a2 = 0LL;
  *a3 = 0;
  if ( (_QWORD *)v3 == v5 )
    return 3221225486LL;
  v6 = 0;
  v7 = (_QWORD *)v3;
  do
  {
    v7 = (_QWORD *)v7[2];
    ++v6;
  }
  while ( v7 != v5 );
  v65 = v6;
  v69 = v6;
  Pool2 = (PVOID)ExAllocatePool2(0x100uLL);
  v8 = (PVOID *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v66 = ExAllocatePool2(0x100uLL);
  v9 = (_DWORD *)v66;
  if ( !v66 )
  {
    v14 = -1073741670;
    goto LABEL_19;
  }
  v10 = 0;
  v11 = 1;
  v57 = 1;
  v12 = 0;
LABEL_10:
  if ( (PVOID)v3 != IopRootDeviceNode )
  {
    v14 = PnpQueryInterface(*(PVOID *)(v3 + 32), 0LL, &v70);
    if ( v14 < 0 )
    {
      v4 = 0LL;
      goto LABEL_18;
    }
    if ( !v72 )
    {
      v14 = -1073741823;
      goto LABEL_46;
    }
    P = 0LL;
    v14 = guard_dispatch_icall_no_overrides(*((__int64 *)&v70 + 1), (__int64)&P);
    if ( v14 < 0 )
      goto LABEL_14;
    if ( !P )
    {
      v14 = -1073741637;
LABEL_14:
      if ( P )
      {
        ExFreePoolWithTag(P, 0);
        P = 0LL;
      }
      goto LABEL_46;
    }
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v9[v10] = 0;
    v22 = P;
    if ( *(_WORD *)P )
    {
      do
      {
        ++v19;
        v23 = -1LL;
        v9[v10] = v19;
        do
          ++v23;
        while ( v22[v23] );
        v20 += v23 + 1;
        v24 = -1LL;
        do
          ++v24;
        while ( v22[v24] );
        if ( (unsigned int)v24 <= v21 )
          LODWORD(v24) = v21;
        v21 = v24;
        v25 = -1LL;
        do
          ++v25;
        while ( v22[v25] );
        v22 += v25 + 1;
      }
      while ( *v22 );
      v3 = v73;
    }
    v12 += v21;
    v57 = v19 * v11;
    v26 = 2LL * (unsigned int)(v20 + 1);
    v27 = (void *)ExAllocatePool2(0x100uLL);
    *((_QWORD *)Pool2 + v10) = v27;
    if ( !v27 )
    {
      v14 = -1073741670;
      goto LABEL_45;
    }
    memmove(v27, P, v26);
    v28 = (_WORD *)*((_QWORD *)Pool2 + v10);
    if ( !*v28 )
      goto LABEL_64;
    v29 = v61;
    LOBYTE(v30) = v60;
LABEL_54:
    v31 = 0;
    v32 = 0;
    while ( 1 )
    {
      if ( *v28 == 33 )
      {
        v31 = 1;
      }
      else
      {
        if ( *v28 != 64 )
        {
          v30 = (unsigned __int8)v30;
          if ( v32 )
            v30 = 1;
          if ( v31 && v29 == -1 )
            v29 = v10;
          v33 = -1LL;
          do
            ++v33;
          while ( v28[v33] );
          v28 += v33 + 1;
          if ( !*v28 )
          {
            v60 = v30;
            v3 = v73;
            v61 = v29;
            v9 = (_DWORD *)v66;
LABEL_64:
            ++v10;
LABEL_45:
            ExFreePoolWithTag(P, 0);
            v6 = v65;
            v11 = v57;
            P = 0LL;
LABEL_46:
            if ( *((_QWORD *)&v71 + 1) )
              guard_dispatch_icall_no_overrides(*((__int64 *)&v70 + 1), v13);
            if ( v14 < 0 )
            {
              v4 = v67;
              goto LABEL_18;
            }
            if ( v14 != 288 && v10 != v6 )
            {
              v3 = *(_QWORD *)(v3 + 16);
              ++v12;
              v73 = v3;
              goto LABEL_10;
            }
            break;
          }
          goto LABEL_54;
        }
        v32 = 1;
      }
      ++v28;
    }
  }
  v68 = 0;
  v14 = 0;
  v18 = (void *)ExAllocatePool2(0x100uLL);
  v67 = v18;
  v4 = v18;
  if ( !v18 )
  {
    v14 = -1073741670;
    goto LABEL_18;
  }
  v34 = v10 - 1;
  v35 = (char *)v18;
  v36 = 0;
  v58 = v10 - 1;
  v62 = 0;
  if ( !v57 )
    goto LABEL_105;
  v37 = v57;
  do
  {
    v38 = v34;
    v39 = v37;
    v40 = v35;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    while ( 2 )
    {
      v64 = v39;
      v74 = v42;
      v44 = v36 / (v39 / *(_DWORD *)(v66 + 4LL * v38)) % *(_DWORD *)(v66 + 4LL * v38);
      v45 = (_WORD *)*((_QWORD *)Pool2 + v38);
      if ( v44 )
      {
        v53 = v44;
        do
        {
          v54 = -1LL;
          do
            ++v54;
          while ( v45[v54] );
          v45 += v54 + 1;
          --v53;
        }
        while ( v53 );
        v37 = v57;
      }
      v46 = 0;
      v47 = 0;
      while ( 1 )
      {
        if ( *v45 == 33 )
        {
          v46 = 1;
          goto LABEL_99;
        }
        if ( *v45 != 64 )
          break;
        v47 = 1;
LABEL_99:
        ++v45;
      }
      if ( v38 == v34 )
      {
        v74 = v46;
        v41 = v46;
        v42 = v46;
        v43 = v46;
        if ( v46 )
        {
          v56 = v38;
          goto LABEL_96;
        }
        v56 = -1;
LABEL_81:
        v74 = 0;
        goto LABEL_82;
      }
      if ( !v46 )
        goto LABEL_81;
LABEL_96:
      if ( (_BYTE)v60 || v43 )
      {
        v56 = v38;
        v41 = 1;
        v43 = v42 != 0 ? v43 : 0;
LABEL_82:
        if ( v47 )
        {
          v55 = -1;
          v74 = v46;
          v40 = v35;
          v41 = v46;
          v43 = v46;
          if ( v46 )
            v55 = v38;
          v56 = v55;
        }
        v48 = -1LL;
        do
          ++v48;
        while ( v45[v48] );
        memmove(v40, v45, 2 * v48);
        v49 = -1LL;
        do
          ++v49;
        while ( v45[v49] );
        v50 = &v40[2 * v49];
        if ( v38 )
        {
          v51 = v66;
          v52 = v64;
          v42 = v74;
          v36 = v62;
          v34 = v58;
          *(_WORD *)v50 = 35;
          v40 = v50 + 2;
          v39 = v52 / *(_DWORD *)(v51 + 4LL * v38--);
          continue;
        }
        if ( !v41 || v43 && v56 <= v61 )
        {
          *(_WORD *)v50 = 0;
          v35 = v50 + 2;
        }
        v34 = v58;
      }
      break;
    }
    v36 = v62 + 1;
    v62 = v36;
  }
  while ( v36 < v37 );
  v14 = v68;
  v9 = (_DWORD *)v66;
LABEL_105:
  v4 = v67;
  *(_WORD *)v35 = 0;
  *a2 = v4;
  *a3 = (v35 - v4 + 2) >> 1;
LABEL_18:
  v8 = (PVOID *)Pool2;
LABEL_19:
  if ( v65 )
  {
    v16 = v69;
    v17 = v8;
    do
    {
      if ( *v17 )
        ExFreePoolWithTag(*v17, 0);
      ++v17;
      --v16;
    }
    while ( v16 );
  }
  ExFreePoolWithTag(v8, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v14 < 0 )
  {
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v14;
}
