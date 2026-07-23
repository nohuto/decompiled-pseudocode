/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x1408C4CC8
 * Callers:
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14046BB10 (CmpFindSecurityCellCacheIndex.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1404B1A48 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1404BDE08 (CmpKeySecurityIncrementReferenceCount.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1404C21A4 (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpRemoveSecurityCellList @ 0x1404C21E4 (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1404D6D18 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmAddLogForAction @ 0x1408B3454 (CmAddLogForAction.c)
 *     CmGetKCBCacheSecurity @ 0x1408C5C50 (CmGetKCBCacheSecurity.c)
 *     CmpTraceSecurityChanging @ 0x1408C61DC (CmpTraceSecurityChanging.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D74A0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     CmpAddSecurityCellToCache @ 0x1409C96E0 (CmpAddSecurityCellToCache.c)
 *     CmpFindMatchingDescriptorCell @ 0x140A87208 (CmpFindMatchingDescriptorCell.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpSetSecurityDescriptorInfo(
        ULONG_PTR a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  ULONG_PTR v10; // rdi
  __int64 v11; // r14
  unsigned int v12; // edx
  bool v13; // zf
  __int64 CellPaged; // rax
  __int64 v15; // r12
  unsigned int v16; // r13d
  __int64 CellFlat; // rax
  unsigned int *v18; // r15
  struct _PRIVILEGE_SET *Pool; // rax
  struct _PRIVILEGE_SET *v20; // rsi
  int v21; // edx
  int Cell; // esi
  __int64 v23; // rbx
  ULONG_PTR v24; // r12
  ULONG_PTR v25; // r13
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  bool v31; // al
  ULONG_PTR v32; // r12
  _QWORD *v33; // r13
  __int64 v34; // rax
  ULONG_PTR BugCheckParameter4; // r12
  __int64 v36; // rax
  _DWORD *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // eax
  bool v41; // r12
  __int64 v42; // rdx
  _DWORD *v43; // rax
  __int64 v44; // rcx
  _DWORD *v45; // rax
  bool v46; // bl
  __int64 v47; // [rsp+48h] [rbp-81h]
  unsigned int v48[2]; // [rsp+50h] [rbp-79h] BYREF
  PVOID P; // [rsp+58h] [rbp-71h] BYREF
  __int64 v50; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v51[2]; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v52[2]; // [rsp+70h] [rbp-59h] BYREF
  ULONG_PTR v53; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v54; // [rsp+80h] [rbp-49h]
  __int64 v55; // [rsp+88h] [rbp-41h]
  __int64 v56; // [rsp+90h] [rbp-39h] BYREF
  size_t Size; // [rsp+98h] [rbp-31h]
  _DWORD *v58; // [rsp+A0h] [rbp-29h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+A8h] [rbp-21h]
  __int128 v60; // [rsp+B0h] [rbp-19h]
  ULONG_PTR BugCheckParameter3; // [rsp+118h] [rbp+4Fh] BYREF
  _DWORD *v62; // [rsp+120h] [rbp+57h]
  __int64 v63; // [rsp+128h] [rbp+5Fh] BYREF
  __int64 v64; // [rsp+130h] [rbp+67h]

  v64 = a4;
  v63 = a3;
  v62 = a2;
  BugCheckParameter3 = a1;
  P = 0LL;
  v48[0] = -1;
  v60 = 0LL;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = 0LL;
  v12 = *(_DWORD *)(a1 + 40);
  v50 = 0xFFFFFFFFLL;
  v51[0] = -1;
  v13 = (*(_BYTE *)(v10 + 140) & 1) == 0;
  v52[0] = -1;
  v54 = 0;
  LODWORD(v64) = 0;
  v48[1] = 0;
  v51[1] = 0;
  v52[1] = 0;
  v58 = 0LL;
  v47 = 0LL;
  v56 = 0LL;
  Privileges = 0LL;
  v53 = v12;
  if ( v13 )
    CellPaged = HvpGetCellPaged(v10);
  else
    CellPaged = HvpGetCellFlat(v10, v12, v52);
  v55 = CellPaged;
  if ( !CellPaged )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v10);
  v15 = a7;
  v16 = *(_DWORD *)CmGetKCBCacheSecurity(a1, a7);
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v10, v16, v48);
  else
    CellFlat = HvpGetCellPaged(v10);
  v18 = (unsigned int *)CellFlat;
  if ( !CellFlat || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL), Privileges = Pool, (v20 = Pool) == 0LL) )
  {
    Cell = -1073741670;
    goto LABEL_19;
  }
  memmove(Pool, v18 + 5, v18[4]);
  v21 = *v62;
  P = v20;
  Cell = RtlpSetSecurityObject(0, v21, v63, (unsigned int)&P, 0, a5, a6, a9);
  if ( Cell < 0 )
  {
    P = 0LL;
    goto LABEL_19;
  }
  Cell = CmpTraceSecurityChanging(a1, (_DWORD)Privileges, *v62, v63, (__int64)P);
  if ( Cell >= 0 )
  {
    LODWORD(Size) = RtlLengthSecurityDescriptorStrict();
    if ( v15 )
      LODWORD(v63) = 1;
    else
      LODWORD(v63) = (unsigned int)v53 >> 31;
    v23 = MEMORY[0xFFFFF78000000014];
    if ( v15 )
    {
      Cell = HvpMarkCellDirty(v10, v16);
      if ( Cell < 0 )
        goto LABEL_19;
      v29 = a8;
      *(_DWORD *)(a8 + 68) = 9;
      *(_DWORD *)(v29 + 96) = -1;
      *(_QWORD *)(v29 + 88) = 0LL;
      *(_BYTE *)(v29 + 100) = 0;
    }
    else
    {
      Cell = HvpMarkCellDirty(v10, (unsigned int)v53);
      if ( Cell < 0 )
        goto LABEL_19;
      Cell = HvpMarkCellDirty(v10, v16);
      if ( Cell < 0 )
        goto LABEL_19;
    }
    if ( (unsigned __int8)CmpFindMatchingDescriptorCell(v10, P, (unsigned int)v63, (char *)&v53 + 4, &v58) )
    {
      v24 = HIDWORD(v53);
      if ( HIDWORD(v53) == v16 )
      {
        if ( a7 )
        {
          LODWORD(v26) = 0;
          Cell = CmpKeySecurityIncrementReferenceCount((__int64)v18, v10, HIDWORD(v53), 0);
          v27 = 0LL;
          if ( Cell >= 0 )
          {
            v42 = a8;
            v43 = v58;
            *(_DWORD *)(a8 + 96) = v24;
            *(_QWORD *)(v42 + 88) = v43;
          }
          goto LABEL_21;
        }
        v25 = BugCheckParameter3;
        *(_QWORD *)(v55 + 4) = v23;
        *(_QWORD *)(v25 + 168) = v23;
        goto LABEL_19;
      }
      Cell = HvpMarkCellDirty(v10, HIDWORD(v53));
      if ( Cell >= 0 )
      {
        if ( a7 )
        {
          v37 = v58;
          v38 = a8;
          *(_DWORD *)(a8 + 96) = *v58;
          *(_QWORD *)(v38 + 88) = v37;
LABEL_44:
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            v30 = HvpGetCellFlat(v10, v24, (unsigned int *)&v50);
          else
            v30 = HvpGetCellPaged(v10);
          v11 = v30;
          if ( v30 )
          {
            Cell = CmpKeySecurityIncrementReferenceCount(v30, v10, v16, 0);
            if ( Cell >= 0 )
            {
              if ( !a7 )
              {
                v31 = CmpKeySecurityDecrementReferenceCount((__int64)v18, v10, v16);
                v13 = (*(_BYTE *)(v10 + 140) & 1) == 0;
                LOBYTE(v63) = v31;
                if ( v13 )
                  HvpReleaseCellPaged(v10, v48);
                else
                  HvpReleaseCellFlat(v10, v48);
                v18 = 0LL;
                if ( (_BYTE)v63 )
                {
                  CmpRemoveSecurityCellList(v10, v16);
                  HvFreeCell(v10, v16);
                }
                *(_DWORD *)(v55 + 44) = v24;
              }
              LODWORD(v32) = v16;
              v47 = 0LL;
              if ( !a7 )
              {
LABEL_55:
                v33 = (_QWORD *)BugCheckParameter3;
                v34 = v55;
                LODWORD(BugCheckParameter3) = 0;
                *(_QWORD *)(v55 + 4) = v23;
                ++v33[38];
                v33[21] = v23;
                BugCheckParameter4 = *(unsigned int *)(v34 + 44);
                if ( (_DWORD)BugCheckParameter4 == -1 )
                {
                  v36 = 0LL;
                }
                else
                {
                  v63 = v33[4];
                  if ( !CmpFindSecurityCellCacheIndex(v63, BugCheckParameter4, &BugCheckParameter3) )
                  {
                    v33[11] = 0LL;
                    KeBugCheckEx(0x51u, 4uLL, 1uLL, (ULONG_PTR)v33, BugCheckParameter4);
                  }
                  v36 = *(_QWORD *)(*(_QWORD *)(v63 + 1896) + 16LL * (unsigned int)BugCheckParameter3 + 8);
                }
                v33[11] = v36;
LABEL_59:
                LODWORD(v26) = 0;
LABEL_60:
                v27 = v47;
                goto LABEL_21;
              }
              v44 = a8;
              goto LABEL_107;
            }
          }
          else
          {
            if ( !a7 )
              KeBugCheckEx(0x51u, 4uLL, 5uLL, v10, v24);
            Cell = -1073741670;
          }
          v26 = (unsigned int)v64;
          goto LABEL_20;
        }
        Cell = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v18, v10, v16);
        if ( Cell >= 0 )
          goto LABEL_44;
      }
      goto LABEL_19;
    }
    RtlLengthSecurityDescriptorStrict();
    Cell = HvAllocateCell(v10, (__int64)&v56, (__int64)&v50);
    if ( Cell >= 0 )
    {
      v32 = v54;
      LODWORD(v64) = v54;
      if ( a7 )
      {
        v11 = v56;
        *(_DWORD *)(v56 + 8) = v54;
        *(_DWORD *)(v11 + 4) = v32;
LABEL_74:
        v40 = Size;
        *(_WORD *)v11 = 27507;
        *(_DWORD *)(v11 + 12) = 1;
        *(_DWORD *)(v11 + 16) = v40;
        memmove((void *)(v11 + 20), P, v40);
        Cell = CmpAddSecurityCellToCache(v10);
        if ( Cell < 0 )
        {
          LODWORD(v26) = v32;
          v27 = v47;
          if ( !a7 )
          {
            v18[1] = *(_DWORD *)(v11 + 4);
            *(_DWORD *)(v47 + 8) = *(_DWORD *)(v11 + 8);
          }
          goto LABEL_21;
        }
        if ( !a7 )
        {
          *(_DWORD *)(v55 + 44) = v32;
          v41 = CmpKeySecurityDecrementReferenceCount((__int64)v18, v10, v16);
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v10, v48);
          else
            HvpReleaseCellPaged(v10, v48);
          v18 = 0LL;
          if ( v41 )
          {
            CmpRemoveSecurityCellList(v10, v16);
            HvFreeCell(v10, v16);
          }
          goto LABEL_55;
        }
        LODWORD(v63) = 0;
        if ( !CmpFindSecurityCellCacheIndex(v10, v32, &v63) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, v32);
        v44 = a8;
        v45 = *(_DWORD **)(*(_QWORD *)(v10 + 1896) + 16LL * (unsigned int)v63 + 8);
        *(_QWORD *)(a8 + 88) = v45;
        *(_DWORD *)(v44 + 96) = *v45;
LABEL_107:
        LODWORD(v26) = 0;
        Cell = CmAddLogForAction(v44, 1u);
        if ( Cell >= 0 )
          goto LABEL_60;
        v46 = CmpKeySecurityDecrementReferenceCount(v11, v10, v16);
        if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v10, &v50);
        else
          HvpReleaseCellPaged(v10, &v50);
        v11 = 0LL;
        if ( !v46 )
        {
          LODWORD(v26) = 0;
          goto LABEL_60;
        }
        CmpRemoveSecurityCellList(v10, (unsigned int)v32);
        HvFreeCell(v10, (unsigned int)v32);
        goto LABEL_59;
      }
      Cell = HvpMarkCellDirty(v10, v18[1]);
      if ( Cell >= 0 )
      {
        Cell = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v18, v10, v16);
        if ( Cell >= 0 )
        {
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            v39 = HvpGetCellFlat(v10, v18[1], v51);
          else
            v39 = HvpGetCellPaged(v10);
          v11 = v56;
          v47 = v39;
          if ( !v39 )
          {
            Cell = -1073741670;
            LODWORD(v26) = v32;
            goto LABEL_60;
          }
          *(_DWORD *)(v56 + 4) = v18[1];
          *(_DWORD *)(v11 + 8) = v16;
          v18[1] = v32;
          *(_DWORD *)(v39 + 8) = v32;
          goto LABEL_74;
        }
      }
    }
    v11 = v56;
    LODWORD(v26) = v64;
    goto LABEL_60;
  }
LABEL_19:
  v26 = 0LL;
LABEL_20:
  v27 = v26;
LABEL_21:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( (_DWORD)v26 )
    HvFreeCell(v10, (unsigned int)v26);
  if ( v27 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, v51);
    else
      HvpReleaseCellPaged(v10, v51);
  }
  if ( v11 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, &v50);
    else
      HvpReleaseCellPaged(v10, &v50);
  }
  if ( v18 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, v48);
    else
      HvpReleaseCellPaged(v10, v48);
  }
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v10, v52);
  else
    HvpReleaseCellPaged(v10, v52);
  return (unsigned int)Cell;
}
