/*
 * XREFs of MiMakePageAvoidRead @ 0x140282330
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiAssignDefaultChannel @ 0x140283900 (MiAssignDefaultChannel.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x1402925F8 (MiLockAndInsertPageInFreeList.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPfnZeroingNeeded @ 0x14033CB30 (MiPfnZeroingNeeded.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiMapCacheExceptionFilter @ 0x140870DDC (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MiMakePageAvoidRead(
        ULONG_PTR a1,
        void *a2,
        __int64 a3,
        size_t a4,
        char a5,
        unsigned __int64 *a6,
        _DWORD *a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rdi
  unsigned int v10; // r9d
  char v11; // al
  __int64 v12; // r10
  __int64 v13; // r11
  char v14; // r9
  int v15; // r9d
  __int64 v16; // rbx
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 Page; // rax
  __int64 v21; // rdi
  ULONG_PTR v22; // r12
  volatile signed __int64 *v23; // r15
  signed __int64 v24; // rcx
  signed __int64 v25; // rdx
  signed __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // eax
  unsigned __int64 *v30; // r14
  __int64 v31; // rcx
  size_t v32; // r8
  __int64 v33; // rdx
  char *v34; // rax
  ULONG_PTR v35; // r14
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // rax
  __int64 v41; // rax
  int v42; // r8d
  int v43; // r8d
  int v44; // [rsp+34h] [rbp-104h]
  BOOL v45; // [rsp+34h] [rbp-104h]
  int v46; // [rsp+38h] [rbp-100h]
  int v47; // [rsp+3Ch] [rbp-FCh] BYREF
  size_t v48; // [rsp+40h] [rbp-F8h]
  size_t Size; // [rsp+48h] [rbp-F0h]
  __int64 v50; // [rsp+50h] [rbp-E8h]
  __int64 SubsectionFromPte; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v52; // [rsp+68h] [rbp-D0h]
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-C8h]
  _DWORD *v54; // [rsp+78h] [rbp-C0h]
  unsigned __int64 *v55; // [rsp+80h] [rbp-B8h]
  unsigned __int64 *v56; // [rsp+88h] [rbp-B0h]
  __int64 v57; // [rsp+90h] [rbp-A8h]
  void *Src; // [rsp+98h] [rbp-A0h]
  ULONG_PTR v59; // [rsp+A0h] [rbp-98h]
  __int64 v60; // [rsp+A8h] [rbp-90h]
  __int64 v61; // [rsp+B0h] [rbp-88h]
  __int64 v62; // [rsp+B8h] [rbp-80h]
  ULONG_PTR v63; // [rsp+C0h] [rbp-78h]
  __int128 v64; // [rsp+C8h] [rbp-70h] BYREF
  __int128 v65; // [rsp+D8h] [rbp-60h]
  _QWORD v66[2]; // [rsp+E8h] [rbp-50h] BYREF

  Size = a4;
  LODWORD(v48) = a3;
  Src = a2;
  BugCheckParameter4 = a1;
  v63 = a1;
  v56 = a6;
  v54 = a7;
  v64 = 0LL;
  v65 = 0LL;
  *a7 = 0;
  v7 = *a6;
  SubsectionFromPte = MiGetSubsectionFromPte(*a6, a2, a3);
  v61 = SubsectionFromPte;
  v8 = *(_QWORD *)SubsectionFromPte;
  v60 = v8;
  v9 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v8 + 60) & 0x3FF));
  if ( ((*(_DWORD *)(v8 + 56) >> 20) & 0x7F) != 0 )
    v10 = ((*(_DWORD *)(v8 + 56) >> 20) & 0x7F) - 1;
  else
    v10 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 34644);
  v11 = MiAssignDefaultChannel(v10);
  v15 = (v11 & 1 | (2 * (v14 & 0x3F | 0x180))) << 8;
  v16 = (v7 >> 5) & 0x1F;
  v47 = v16;
  v17 = 1;
  if ( (_DWORD)v16 )
  {
    if ( (_DWORD)v16 != 31 )
    {
      if ( (unsigned int)v16 >> 3 == 3 && (v16 & 7) != 0 )
      {
        v17 = 2;
      }
      else if ( (unsigned int)v16 >> 3 == 1 )
      {
        v17 = 0;
      }
    }
  }
  else
  {
    v17 = 3;
  }
  v18 = v15 | (v17 << 18) | (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 34640), 1u);
  v19 = 16LL;
  if ( v13 == 4096 )
    v19 = 0LL;
  Page = MiGetPage(v9, v18, v19);
  v52 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v9, 0LL);
    return 1LL;
  }
  v21 = 48 * Page;
  v62 = 48 * Page;
  v22 = 48 * Page - 0x220000000000LL;
  v59 = v22;
  v44 = 0;
  v46 = 0;
  if ( Size != 4096 )
  {
    if ( (unsigned int)MiPfnZeroingNeeded(v21 - 0x220000000000LL, v17, 0LL) )
      v43 = 1;
    v44 = v43;
  }
  if ( ((*(_DWORD *)(v21 - 0x21FFFFFFFFE0LL) >> 22) & 3) != v17 )
    MiChangePageAttribute(v21 - 0x220000000000LL, v17, 8LL);
  v23 = (volatile signed __int64 *)(v21 - 0x21FFFFFFFFE8LL);
  v66[0] = v21 - 0x21FFFFFFFFE8LL;
  v24 = *(_QWORD *)(v21 - 0x21FFFFFFFFE8LL);
  v25 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(v21 - 0x21FFFFFFFFE8LL),
          v24 & 0xC7FFFFFFFFFFFFFFuLL,
          v24);
  if ( v24 != v25 )
  {
    do
    {
      v26 = v25;
      v25 = _InterlockedCompareExchange64(v23, v25 & 0xC7FFFFFFFFFFFFFFuLL, v25);
    }
    while ( v26 != v25 );
  }
  v27 = MiReservePtes(&stru_140E366D8.WaitBlockList, 1LL);
  v55 = (unsigned __int64 *)v27;
  if ( v27 )
  {
    v28 = 4;
    if ( v52 <= qword_140E2D920 && (*(_QWORD *)(v21 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
    {
      v29 = (*(_DWORD *)(v21 - 0x21FFFFFFFFE0LL) >> 22) & 3;
      if ( !v29 || v29 == 3 )
      {
        v28 = 12;
      }
      else if ( v29 == 2 )
      {
        v28 = 28;
      }
    }
    v30 = v55;
    *v55 = MiMakeValidPte(v27, v52, v28 | 0xA0000000);
    v31 = (__int64)((_QWORD)v30 << 25) >> 16;
    v32 = (unsigned int)v48;
    v33 = (unsigned int)v48;
    v57 = (unsigned int)v48;
    v34 = (char *)((unsigned int)v48 + v31);
    v48 = (size_t)v34;
    if ( v44 )
    {
      if ( (_DWORD)v32 )
      {
        memset_0((void *)v31, 0, v32);
        v34 = (char *)v48;
        v33 = v57;
      }
      if ( 4096 - Size != v33 )
      {
        memset_0(&v34[Size], 0, 4096 - Size - v33);
        v34 = (char *)v48;
      }
    }
    v50 = 0LL;
    *(_DWORD *)((char *)&v50 + 1) = (unsigned __int64)Src < 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Src >= 0x7FFFFFFF0000LL )
      RtlCopyVolatileMemory(v34, Src, Size);
    else
      RtlCopyFromUser(v34, Src, Size);
    MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, v30, 1u);
  }
  else
  {
    if ( (a5 & 1) == 0 )
    {
      MiReleaseFreshPage(v21 - 0x220000000000LL);
      return 2LL;
    }
    if ( v44 )
      MiZeroPhysicalPage(0LL, v52, 0LL, v17);
    v46 = 1;
  }
  v45 = (BYTE4(PerfGlobalGroupMask) & 1) != 0;
  v35 = BugCheckParameter4;
  v36 = MiLockProtoPoolPage(BugCheckParameter4);
  v66[0] = v36;
  if ( !v36 )
  {
LABEL_47:
    MiLockAndInsertPageInFreeList(v22);
    return 1LL;
  }
  v37 = *(_QWORD *)BugCheckParameter4;
  if ( (*(_QWORD *)BugCheckParameter4 & 1) != 0
    || (v37 & 0x800) != 0 && (v37 & 0x400) == 0
    || (_DWORD)v16 != ((v37 >> 5) & 0x1F) )
  {
    MiUnlockProtoPoolPage(v36, 0LL);
    goto LABEL_47;
  }
  v47 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v47);
    while ( *(__int64 *)v23 < 0 );
  }
  MiInitializePfn(v22, v35);
  if ( (a5 & 2) != 0 )
  {
    if ( (v42 = *(_DWORD *)(v21 - 0x21FFFFFFFFE0LL), (*(_QWORD *)(v21 - 0x21FFFFFFFFD8LL) & 0x20000000000000LL) != 0)
      || (*(_DWORD *)(v21 - 0x21FFFFFFFFE0LL) & 0x8000000) != 0
      && (v22 < 0xFFFFDE0000000000uLL
       || v22 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
       || (unsigned int)MiIsDecayPfn(v21 / 48)
       || (v42 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v22) == 9)
      || (v42 & 0x7000000u) > 0x2000000 )
    {
      if ( (*(_QWORD *)(v21 - 0x21FFFFFFFFD8LL) & 0x20000000000000LL) == 0 )
        *(_DWORD *)(v21 - 0x21FFFFFFFFE0LL) = *(_DWORD *)(v21 - 0x21FFFFFFFFE0LL) & 0xF8FFFFFF | 0x2000000;
    }
  }
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 || !*(_QWORD *)(v8 + 64) )
    SubsectionFromPte = 0LL;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
  ++*(_QWORD *)(v8 + 32);
  if ( SubsectionFromPte )
    ++*(_DWORD *)(SubsectionFromPte + 104);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
  v38 = v52;
  v39 = MiMakeValidPte(0LL, v52, (unsigned int)v16 | 0x80000000) & 0xFFFFFFFFFFFFFEFFuLL;
  *(_QWORD *)BugCheckParameter4 = v39;
  *v56 = v39;
  if ( v45 )
    MiIdentifyPfn(v38, 0LL, &v64);
  if ( (*(_BYTE *)(v21 - 0x21FFFFFFFFDELL) & 7) != 6 )
    MiBadShareCount(v22);
  v41 = *(_QWORD *)(v21 - 0x21FFFFFFFFE8LL);
  *(_QWORD *)(v21 - 0x21FFFFFFFFE8LL) = ((v41 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v41 ^ ((v41 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
  if ( (v41 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v22);
  _InterlockedAnd64(v23, 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v66[0], 0LL);
  *v54 = 0;
  if ( v45 )
  {
    *((_QWORD *)&v65 + 1) |= 4uLL;
    v66[0] = &v64;
    v66[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v66, 1, 536870913, 642, 290462468);
  }
  return v46 != 0 ? 2 : 0;
}
