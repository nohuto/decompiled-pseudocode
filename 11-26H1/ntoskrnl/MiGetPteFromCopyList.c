/*
 * XREFs of MiGetPteFromCopyList @ 0x1402849F0
 * Callers:
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiCopyFilePage @ 0x1406FE0B0 (MiCopyFilePage.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiCompressTbFlushList @ 0x1404D427C (MiCompressTbFlushList.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  unsigned int v6; // edx
  int v7; // r14d
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 i; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r8d
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r11
  struct _LIST_ENTRY **v16; // rdx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rdi
  unsigned int v20; // r10d
  __int64 v21; // r15
  unsigned int v22; // r8d
  int j; // r12d
  unsigned __int64 *v24; // r11
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 *v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r13
  unsigned __int64 v37; // rbx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  _QWORD *v44; // [rsp+20h] [rbp-E0h]
  struct _LIST_ENTRY **v46; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+38h] [rbp-C8h]
  int v48; // [rsp+3Ch] [rbp-C4h]
  int v49; // [rsp+40h] [rbp-C0h]
  int v50; // [rsp+44h] [rbp-BCh]
  char v51; // [rsp+48h] [rbp-B8h]
  __int16 v52; // [rsp+49h] [rbp-B7h]
  unsigned int v53; // [rsp+4Ch] [rbp-B4h]
  __int64 v54; // [rsp+50h] [rbp-B0h]
  _QWORD Base[21]; // [rsp+58h] [rbp-A8h] BYREF

  v4 = a2;
  memset_0(&v46, 0, 0xC8uLL);
  v6 = *a1;
  v44 = a1 + 4;
  v7 = (a3 != -1) + 1;
  v8 = 9LL;
  if ( v7 + *a1 <= a1[1] )
  {
    v44 = a1 + 4;
  }
  else
  {
    v9 = (__int64)(*((_QWORD *)a1 + 2) << 25) >> 16;
    for ( i = v9; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    if ( i >= 0xFFFF800000000000uLL )
    {
      if ( i > qword_140E2DFD0 || i < qword_140E2DFC0 )
        v11 = (unsigned __int8)byte_140E37BF0[((i >> 39) & 0x1FF) - 256];
      else
        v11 = 1LL;
    }
    else
    {
      v11 = 1LL;
    }
    v12 = MiSystemVaTypeToVm(v11, 0LL);
    v48 = 20;
    v49 = 8;
    v16 = (struct _LIST_ENTRY **)&unk_140E37340;
    if ( v12 )
      v16 = (struct _LIST_ENTRY **)v12;
    v50 = v13;
    v46 = v16;
    v51 = v13 & ((unsigned __int8)*((_DWORD *)v16 + 46) >> 6);
    if ( ((_DWORD)v16[23] & 0xF) != 0 || v16 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v17 = 0;
      if ( ((_DWORD)v16[23] & 0xF) == 0 )
        v17 = v13;
      v18 = v49;
    }
    else
    {
      v17 = 0;
      v18 = 9;
    }
    v19 = *a1;
    v20 = 0;
    v21 = 0LL;
    v47 = v17;
    v22 = v18 & 0xFFFFFFDB;
    v52 = 0;
    v53 = 0;
    v54 = 0LL;
    v49 = v22;
    Base[0] = 0LL;
    if ( v17 != 1 && v9 >= v14 && v9 <= v15 )
    {
      v22 |= 4u;
      v49 = v22;
    }
LABEL_15:
    for ( j = 0; ; j = 1 )
    {
      if ( v20 )
      {
        if ( (v22 & 2) == 0 )
        {
          v24 = &Base[v20 - 1];
          v25 = *v24;
          if ( (*v24 & 0xC00) == 0 )
          {
            v26 = *v24 & 0x3FF;
            if ( (v25 & 0xFFFFFFFFFFFFF000uLL) + ((v26 + 1) << 12) == v9 && v26 + v19 <= 0x3FF && v26 + v19 > v26 )
            {
              v54 = v19 + v21;
              *v24 = (v25 + v19) ^ (v25 ^ (v25 + v19)) & 0xFFFFFFFFFFFFFC00uLL;
              goto LABEL_37;
            }
          }
        }
        if ( (v22 & 2) == 0 )
        {
          v27 = &Base[v20 - 1];
          v28 = *v27;
          if ( (*v27 & 0xC00) == 0 && (v28 & 0xFFFFFFFFFFFFF000uLL) == (v19 << 12) + v9 )
          {
            v43 = *v27 & 0x3FF;
            if ( v43 + v19 <= 0x3FF && v43 + v19 > v43 )
            {
              v54 = v19 + v21;
              *v27 = (v28 - (v19 << 12) + v19) ^ ((v28 - (v19 << 12) + v19) ^ (v28 - (v19 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
              goto LABEL_37;
            }
          }
        }
      }
      if ( v20 != v48 )
        break;
      if ( j )
      {
        if ( !(_BYTE)v52 )
          LOBYTE(v52) = 1;
        goto LABEL_37;
      }
      if ( (_BYTE)v52 )
        goto LABEL_37;
      qsort(Base, v20, 8uLL, MiTbFlushSort);
      MiCompressTbFlushList(&v46);
      v20 = v53;
      LOBYTE(v22) = v49;
      v21 = v54;
    }
    while ( v19 )
    {
      v29 = 1024LL;
      if ( (unsigned __int64)(v19 - 1) <= 0x3FF )
        v29 = v19;
      v30 = v9 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v29 - 1) & 0x3FF;
      v9 += v29 << 12;
      Base[v20] = v30;
      v20 = v53 + 1;
      v21 = v29 + v54;
      ++v53;
      v54 += v29;
      v19 -= v29;
      if ( v19 && v20 == v48 )
      {
        LOBYTE(v22) = v49;
        goto LABEL_15;
      }
    }
LABEL_37:
    MiFlushTbList(&v46);
    v4 = a2;
    v6 = 0;
    v8 = 9LL;
  }
  v31 = *v44 + 8LL * v6;
  *a1 = v7 + v6;
  v32 = 48 * v4 - 0x220000000000LL;
  if ( (*(_DWORD *)(v32 + 32) & 0xC00000) != 0 )
  {
    v33 = 4LL;
    if ( (*(_DWORD *)(v32 + 32) & 0xC00000) == 0x800000 )
      v33 = 28LL;
  }
  else
  {
    v33 = 12LL;
  }
  v34 = ((v4 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v33] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v31 >= 0xFFFFF68000000000uLL && v31 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( v31 >= 0xFFFFF6FB40000000uLL && v31 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v31 == 0xFFFFF6FB7DBEDF68uLL )
        v34 |= 0x8000000000000000uLL;
      else
        v34 &= ~0x8000000000000000uLL;
      if ( (unsigned int)MiUserPdeOrAbove(v31) )
        v34 |= 4uLL;
    }
    v39 = (__int64)(v31 << 25) >> 16;
    if ( v39 < 0xFFFF800000000000uLL )
    {
      v40 = v34 | 4;
      if ( v39 >= 0x7FFFFFFF0000LL )
        v40 = v34;
      v34 = v40;
    }
  }
  *(_QWORD *)v31 = (BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) & 0x100 ^ (v34 & 0xFAFFFFFFFFFFFEBDuLL | 0x42) | 0xA00000000000000LL;
  if ( a3 != -1 )
  {
    v35 = 48 * a3 - 0x220000000000LL;
    if ( (*(_DWORD *)(v35 + 32) & 0xC00000) != 0 )
    {
      v8 = 1LL;
      if ( (*(_DWORD *)(v35 + 32) & 0xC00000) == 0x800000 )
        v8 = 25LL;
    }
    v36 = (a3 & 0xFFFFFFFFFFLL) << 12;
    v37 = v36 | MmProtectToPteMask[v8] & 0xFFF0000000000E7FuLL | 0x21;
    if ( v31 >= 0xFFFFF68000000000uLL && v31 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v31 >= 0xFFFFF6FB40000000uLL && v31 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        v37 = v31 == 0xFFFFF6FB7DBEDF68uLL
            ? v36 | MmProtectToPteMask[v8] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
            : v36 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v8] & 0x7FF0000000000E7FLL | 0x21;
        if ( (unsigned int)MiUserPdeOrAbove(v31) )
          v37 |= 4uLL;
      }
      v41 = (__int64)(v31 << 25) >> 16;
      if ( v41 < 0xFFFF800000000000uLL )
      {
        v42 = v37 | 4;
        if ( v41 >= 0x7FFFFFFF0000LL )
          v42 = v37;
        v37 = v42;
      }
    }
    *(_QWORD *)(v31 + 8) = v37 & 0xFAFFFFFFFFFFFEFFuLL ^ (BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) & 0x100 | 0xA00000000000000LL;
  }
  return v31;
}
