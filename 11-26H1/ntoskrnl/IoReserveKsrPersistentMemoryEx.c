/*
 * XREFs of IoReserveKsrPersistentMemoryEx @ 0x14079F6D0
 * Callers:
 *     IoReserveKsrPersistentMemory @ 0x14079F690 (IoReserveKsrPersistentMemory.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x140347520 (MmFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x14034A280 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PipGetDeviceObjectLocation @ 0x14079FCD4 (PipGetDeviceObjectLocation.c)
 *     PipGetDriverKsrGuid @ 0x14079FF30 (PipGetDriverKsrGuid.c)
 *     PipGetPersistentMemory @ 0x1407A00BC (PipGetPersistentMemory.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoReserveKsrPersistentMemoryEx(
        size_t a1,
        ULONG_PTR a2,
        unsigned __int16 *a3,
        _WORD *a4,
        int a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rcx
  unsigned __int16 *v13; // r14
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  void *v17; // r13
  _QWORD *v18; // r14
  struct _MDL *v19; // r12
  _DWORD *v20; // r15
  int DriverKsrGuid; // edi
  unsigned int v22; // ecx
  unsigned int v23; // eax
  int v24; // r13d
  int PersistentMemory; // eax
  struct _MDL *PagesForMdl; // rax
  PVOID v27; // rcx
  void *v28; // rsi
  PVOID v30; // rax
  __int64 Pool2; // rax
  __int64 v32; // rax
  void *v33; // rdx
  size_t v34; // r8
  __int64 v35; // rax
  int v36; // eax
  unsigned int v37; // [rsp+50h] [rbp-71h] BYREF
  void *v38; // [rsp+58h] [rbp-69h]
  PVOID P; // [rsp+60h] [rbp-61h]
  unsigned int v40; // [rsp+68h] [rbp-59h]
  int v41; // [rsp+6Ch] [rbp-55h]
  void *Src; // [rsp+70h] [rbp-51h]
  size_t Size; // [rsp+78h] [rbp-49h]
  unsigned __int16 *v44; // [rsp+80h] [rbp-41h]
  _WORD *v45; // [rsp+88h] [rbp-39h]
  _QWORD v46[2]; // [rsp+90h] [rbp-31h] BYREF
  _QWORD *v47; // [rsp+A0h] [rbp-21h]
  __int128 v48; // [rsp+A8h] [rbp-19h] BYREF

  v47 = a8;
  v46[0] = 0LL;
  v46[1] = 0LL;
  v48 = 0LL;
  v37 = 0;
  v45 = a4;
  v44 = a3;
  Size = a1;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( a2 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v9 || (*(_DWORD *)(v9 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v10 = *(_QWORD *)(a2 + 8);
      if ( v10 )
      {
        IoAddTriageDumpDataBlock(v10, (PVOID)(unsigned int)*(__int16 *)(v10 + 2));
        v11 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v11 )
        {
          IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v12 )
      {
        v13 = (unsigned __int16 *)(v12 + 40);
        IoAddTriageDumpDataBlock(v12, (PVOID)0x388);
        if ( *v13 )
        {
          IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v13 + 1), (PVOID)*v13);
        }
        v14 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
        if ( *v14 )
        {
          IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
        }
        v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
        if ( v15 )
        {
          if ( *(_WORD *)(v15 + 56) )
          {
            IoAddTriageDumpDataBlock(v15 + 56, (PVOID)2);
            v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 64), (PVOID)*(unsigned __int16 *)(v16 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
  }
  v17 = 0LL;
  v18 = 0LL;
  Src = 0LL;
  v40 = 0;
  v19 = 0LL;
  P = 0LL;
  v20 = 0LL;
  v38 = 0LL;
  v41 = 0;
  if ( !PnpKsrEnabled )
    return (unsigned int)-1073741637;
  if ( a7 )
    return (unsigned int)-1073741582;
  DriverKsrGuid = PipGetDriverKsrGuid(a1, &v48);
  if ( DriverKsrGuid < 0 )
    return (unsigned int)DriverKsrGuid;
  if ( a2 )
  {
    if ( v44 )
    {
      Src = (void *)*((_QWORD *)v44 + 1);
      if ( !Src )
        return (unsigned int)-1073741811;
      v22 = *v44;
      if ( !(_WORD)v22 )
        return (unsigned int)-1073741811;
      v23 = v22 >> 1;
    }
    else
    {
      DriverKsrGuid = PipGetDeviceObjectLocation(a2);
      if ( DriverKsrGuid < 0 )
      {
        v27 = v38;
        goto LABEL_36;
      }
      P = v38;
      Src = v38;
      v23 = v41;
    }
    v40 = v23;
  }
  v24 = 1;
  PersistentMemory = PipGetPersistentMemory(Size, a2, v44, v45, 0LL);
  DriverKsrGuid = 0;
  if ( PersistentMemory != -1073741772 )
    DriverKsrGuid = PersistentMemory;
  if ( DriverKsrGuid < 0 )
    goto LABEL_34;
  Size = (a6 + 4103) & 0xFFFFFFFFFFFFF000uLL;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, Size, MmCached, 0x14u);
  v19 = PagesForMdl;
  if ( PagesForMdl )
  {
    v30 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
    v38 = v30;
    if ( !v30 )
    {
      DriverKsrGuid = -1073741670;
      v17 = 0LL;
      goto LABEL_35;
    }
    memset_0(v30, 0, Size);
    v41 = 2 * v40 + 24;
    Pool2 = ExAllocatePool2(0x40uLL);
    v20 = (_DWORD *)Pool2;
    if ( !Pool2 )
    {
LABEL_61:
      v17 = v38;
      goto LABEL_35;
    }
    *(_WORD *)Pool2 = 2;
    *(_QWORD *)(Pool2 + 8) = a6;
    *(_DWORD *)(Pool2 + 20) = a5;
    if ( v45 )
      *(_WORD *)(Pool2 + 16) = *v45;
    v32 = ExAllocatePool2(0x40uLL);
    v18 = (_QWORD *)v32;
    if ( !v32 )
    {
      DriverKsrGuid = -1073741670;
      goto LABEL_61;
    }
    *(_OWORD *)(v32 + 16) = v48;
    if ( a2 )
    {
      v33 = Src;
      v34 = 2 * v40;
      v20[1] = 2 * v40;
      memmove(v20 + 6, v33, v34);
      v24 = 2;
    }
    *(_DWORD *)v18 = v24;
    KsrMdlToMemoryRuns(v19, 0LL, 0LL, &v37);
    v35 = ExAllocatePool2(0x40uLL);
    v28 = (void *)v35;
    if ( v35 )
    {
      DriverKsrGuid = KsrMdlToMemoryRuns(v19, v35, v37, &v37);
      if ( DriverKsrGuid >= 0 )
      {
        v36 = KsrPersistMemoryWithMetadata(&v48, v28, v37, v20, v41, v46, 0LL, 0LL, 1);
        v27 = P;
        DriverKsrGuid = v36;
        if ( v36 >= 0 )
        {
          v17 = 0LL;
          v18[5] = v38;
          v18[6] = v20;
          v20 = 0LL;
          v18[1] = v19;
          v19 = 0LL;
          v18[4] = v46[0];
          *v47 = v18;
          v18 = 0LL;
          goto LABEL_37;
        }
        goto LABEL_67;
      }
    }
    else
    {
      DriverKsrGuid = -1073741670;
    }
    v27 = P;
LABEL_67:
    v17 = v38;
    goto LABEL_37;
  }
  DriverKsrGuid = -1073741670;
LABEL_34:
  v17 = 0LL;
LABEL_35:
  v27 = P;
LABEL_36:
  v28 = 0LL;
LABEL_37:
  if ( v27 )
    ExFreePoolWithTag(v27, 0x61706E50u);
  if ( v28 )
    ExFreePoolWithTag(v28, 0x61706E50u);
  if ( v19 )
  {
    if ( v17 )
      MmUnmapLockedPages(v17, v19);
    MmFreePagesFromMdl(v19);
    ExFreePoolWithTag(v19, 0x61706E50u);
  }
  if ( v20 )
    ExFreePoolWithTag(v20, 0x61706E50u);
  if ( v18 )
    ExFreePoolWithTag(v18, 0x61706E50u);
  return (unsigned int)DriverKsrGuid;
}
