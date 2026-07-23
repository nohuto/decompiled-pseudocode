/*
 * XREFs of MiFreeVirtualMemory @ 0x140A05050
 * Callers:
 *     MmCommitDecommitSecuredMemory @ 0x140871154 (MmCommitDecommitSecuredMemory.c)
 *     MmFreeVirtualMemory @ 0x140A04CB0 (MmFreeVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteEmptyPageTables @ 0x140317278 (MiDeleteEmptyPageTables.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiFreeVadRange @ 0x1403C67C8 (MiFreeVadRange.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiGetVadPageSize @ 0x1404479B0 (MiGetVadPageSize.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiCheckSecuredVad @ 0x140A033E8 (MiCheckSecuredVad.c)
 *     MiDecommitEnclavePages @ 0x140A05608 (MiDecommitEnclavePages.c)
 *     MiDecommitRegion @ 0x140A0567C (MiDecommitRegion.c)
 *     PerfInfoLogVirtualFree @ 0x140A06DC0 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MiFreeVirtualMemory(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int16 a6,
        int a7,
        char a8,
        char a9,
        PVOID P,
        __int64 a11)
{
  unsigned __int64 *v12; // r13
  __int64 v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r12
  int v16; // edx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbp
  unsigned int VadFlags; // eax
  int v20; // edx
  __int64 v21; // rcx
  unsigned __int64 *v22; // r9
  __int64 v23; // r10
  unsigned int v24; // ebx
  int v25; // r15d
  int v26; // r8d
  int v27; // r11d
  int v28; // r8d
  unsigned __int64 *v29; // r15
  unsigned __int64 *v30; // r12
  __int64 v31; // rbp
  int v32; // ebx
  int v33; // eax
  int v34; // r13d
  int v36; // eax
  char v37; // al
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  __int64 VadPageSize; // rax
  int v42; // [rsp+44h] [rbp-64h]
  int v43; // [rsp+48h] [rbp-60h]
  int v45; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 *v46; // [rsp+C0h] [rbp+18h]
  unsigned __int64 *v47; // [rsp+C8h] [rbp+20h]

  v47 = a4;
  v46 = a3;
  v12 = a3;
  v13 = a1;
  v14 = *a3 >> 12;
  v15 = *a4 >> 12;
  v16 = a6 & 0x8000;
  LOBYTE(v45) = 0;
  v42 = v16;
  while ( 1 )
  {
    v17 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
    v18 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
    if ( a5
      || (v15 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32),
          *a4 = (v18 << 12) | 0xFFF,
          !v16) )
    {
      if ( v14 < v17 )
        goto LABEL_42;
    }
    else
    {
      if ( v14 != v17 )
      {
        v34 = -1073741665;
        goto LABEL_39;
      }
      *v12 = v17 << 12;
    }
    if ( v14 > v18 || v15 < v17 || v15 > v18 )
    {
LABEL_42:
      v34 = -1073741798;
      goto LABEL_39;
    }
    VadFlags = MiReadVadFlags(a2);
    v24 = VadFlags;
    v25 = VadFlags & 0x80000;
    if ( (v26 & 0x10000) != 0 )
    {
      if ( v25 || (VadFlags & 0x1C) != 0 || v14 == v17 && v15 == v18 )
      {
LABEL_43:
        v34 = -1073741797;
        goto LABEL_38;
      }
    }
    else if ( !v25 || (VadFlags & 0x1C) == 4 )
    {
      goto LABEL_43;
    }
    v27 = a7;
    v28 = a7 & 0x4000000;
    v43 = a7 & 0x4000000;
    if ( (a7 & 0x4000000) != 0 )
    {
      if ( !MiLocateLockedVadEvent(v21, 0x80u)
        && (*(unsigned int *)(a2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) != 0x7FFFFFFFDLL
        || v15 == v18
        && (*(unsigned int *)(a2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) == 0x7FFFFFFFDLL
        && v14 == v17 )
      {
LABEL_52:
        v34 = -1073741800;
        goto LABEL_38;
      }
      v20 = v42;
    }
    if ( (v27 & 0x40000000) != 0 && (v24 & 0x1080000) != 0x1080000 )
      goto LABEL_52;
    if ( (v24 & 2) != 0 && (v27 & 0x40000000) == 0 )
    {
      if ( v20 )
      {
        if ( (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
          goto LABEL_31;
        v37 = a9;
        v38 = v17 << 12;
        v39 = (*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32))
            - (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32));
        v40 = a11;
      }
      else
      {
        v38 = *v12;
        v37 = a9;
        v39 = v15 - v14;
        v40 = a11;
      }
      v34 = MiCheckSecuredVad(a2, v38, (v39 + 1) << 12, 0x55u, v37, v40);
      if ( v34 < 0 )
        goto LABEL_38;
      v20 = v42;
      v28 = v43;
      v22 = v47;
      v23 = a5;
      v12 = v46;
      v27 = a7;
    }
    if ( !v20 )
      break;
LABEL_31:
    v13 = a1;
    if ( (a8 & 1) != 0 && (*(_DWORD *)(a1 + 1532) & 0x100) != 0 && (v14 != v17 || v15 != v18) )
    {
      v34 = -1073741558;
      goto LABEL_39;
    }
    v33 = MiFreeVadRange(a2, (int)&v45, v14, v15, a1, v28 != 0, (char *)P);
    v34 = v33;
    if ( v33 >= 0 )
      return 0LL;
    if ( v33 != -1073741267 )
      goto LABEL_39;
    v16 = v42;
    a4 = v47;
    v12 = v46;
  }
  if ( (v24 & 0x880000) != 0x880000 )
    goto LABEL_15;
  if ( !v23 )
    goto LABEL_74;
  v31 = *v22 - *v12 + 1;
  v36 = MiDecommitEnclavePages(a1, a2, *v12, *(_DWORD *)v22 - *(_DWORD *)v12 + 1, v27);
  v34 = v36;
  if ( v36 != -1073741802 )
  {
    if ( v36 < 0 )
      goto LABEL_38;
    MiUnlockAndDereferenceVad((volatile signed __int32 *)a2);
    v30 = v46;
LABEL_26:
    if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
      PerfInfoLogVirtualFree(*v30, v31, a1);
    return 0LL;
  }
LABEL_15:
  if ( (v24 & 0x1C) == 0xC )
    goto LABEL_74;
  if ( !v25 )
    goto LABEL_19;
  if ( (v24 & 0x200000) != 0 )
  {
    if ( a5 )
    {
      VadPageSize = MiGetVadPageSize(v24);
      v29 = v47;
      v30 = v46;
      if ( (((VadPageSize << 12) - 1) & (*v46 | (*v47 + 1))) != 0 )
        goto LABEL_74;
    }
    else
    {
LABEL_19:
      v29 = v47;
      v30 = v46;
    }
    if ( (*(unsigned int *)(a2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) == 0x7FFFFFFFDLL )
      goto LABEL_74;
    if ( !a5 )
    {
      if ( v14 != v17 )
      {
        v34 = -1073741665;
        goto LABEL_38;
      }
      *v29 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF;
    }
    v31 = *v29 - *v30 + 1;
    v32 = MiDecommitRegion(a2, *v30, *v29);
    MiUnlockAndDereferenceVad((volatile signed __int32 *)a2);
    if ( v32 )
      MiDeleteEmptyPageTables(*v30, *v29, 0);
    goto LABEL_26;
  }
  if ( (v24 & 0x60000) < 0x40000 )
    goto LABEL_19;
LABEL_74:
  v34 = -1073741664;
LABEL_38:
  v13 = a1;
LABEL_39:
  MiUnlockAndDereferenceVad((volatile signed __int32 *)a2);
  if ( (_BYTE)v45 )
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)KeGetCurrentThread(), v13);
  return (unsigned int)v34;
}
