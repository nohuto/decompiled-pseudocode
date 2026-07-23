/*
 * XREFs of MiQueryMemoryPhysicalContiguity @ 0x140B672B8
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MmSizeOfMdl @ 0x140481EB0 (MmSizeOfMdl.c)
 *     MiGetLargestPageIndex @ 0x1404C630C (MiGetLargestPageIndex.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407051A4 (MiQueryVaPhysicalContiguity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     MiVadSupportsPhysicalContiguityQuery @ 0x14087D814 (MiVadSupportsPhysicalContiguityQuery.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryMemoryPhysicalContiguity(ULONG_PTR a1, volatile void *a2, __int64 a3, char a4)
{
  __int64 v6; // r14
  ULONG_PTR v7; // rsi
  int v8; // ebx
  char v9; // bl
  unsigned int LargestPageIndex; // eax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r12d
  unsigned __int64 v14; // rdx
  __int64 *v15; // rax
  SIZE_T v16; // r13
  _BYTE *v17; // rbx
  int v18; // ebx
  SIZE_T v19; // rax
  __int64 PoolMm; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r15
  ULONG_PTR v23; // r8
  int VadFlags; // eax
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned __int8 VaPhysicalContiguity; // al
  ULONG_PTR v28; // r8
  int v31; // [rsp+3Ch] [rbp-11Ch]
  int v32; // [rsp+40h] [rbp-118h] BYREF
  ULONG_PTR v33; // [rsp+48h] [rbp-110h]
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-108h]
  __int64 v35; // [rsp+58h] [rbp-100h]
  int v36; // [rsp+60h] [rbp-F8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-F0h]
  __int128 v38; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v39; // [rsp+80h] [rbp-D8h]
  volatile void *Address; // [rsp+90h] [rbp-C8h]
  _QWORD v41[2]; // [rsp+A0h] [rbp-B8h] BYREF
  unsigned __int64 v42; // [rsp+B0h] [rbp-A8h]
  __int64 v43; // [rsp+B8h] [rbp-A0h]
  _OWORD v44[3]; // [rsp+C0h] [rbp-98h] BYREF
  _BYTE Src[32]; // [rsp+F0h] [rbp-68h] BYREF

  BugCheckParameter1 = a1;
  v32 = 0;
  v38 = 0LL;
  v39 = 0LL;
  Address = 0LL;
  memset(v44, 0, sizeof(v44));
  v6 = 0LL;
  v35 = 0LL;
  v7 = 0LL;
  v33 = 0LL;
  v31 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 != 40 )
  {
    v8 = -1073741820;
    goto LABEL_57;
  }
  if ( a4 )
    ProbeForWrite(a2, 0x28uLL, 8u);
  if ( a4 )
    RtlCopyFromUser(&v38, (void *)a2, 0x28uLL);
  else
    RtlCopyVolatileMemory(&v38, (const void *)a2, 0x28uLL);
  v9 = BYTE8(v39);
  if ( (DWORD2(v39) & 0xFFFFFFFE) != 0
    || !MmIsUserAddress(v38)
    || !(_QWORD)v39
    || (((_QWORD)v39 - 1LL) & (unsigned __int64)v39) != 0
    || (unsigned __int64)v39 <= 0x1000 )
  {
    goto LABEL_9;
  }
  LargestPageIndex = MiGetLargestPageIndex();
  v13 = LargestPageIndex;
  if ( LargestPageIndex < 3 )
  {
    v14 = v11 >> 12;
    v15 = &MiPageSizes[LargestPageIndex];
    do
    {
      if ( *v15 == v14 )
        break;
      ++v13;
      ++v15;
    }
    while ( v13 < 3 );
  }
  if ( v13 == 3 )
  {
LABEL_19:
    v8 = -1073741637;
    goto LABEL_57;
  }
  if ( (v12 & *((_QWORD *)&v38 + 1)) != 0 || ((unsigned __int64)v38 & ~v12) != (_QWORD)v38 )
    goto LABEL_9;
  v36 = 2 * (v9 & 1);
  v42 = *((_QWORD *)&v38 + 1) / (unsigned __int64)v39;
  v16 = 4 * (*((_QWORD *)&v38 + 1) / (unsigned __int64)v39);
  if ( v16 <= 0x20 )
  {
    v17 = Src;
    if ( a4 )
      ProbeForWrite(Address, 4 * (*((_QWORD *)&v38 + 1) / (unsigned __int64)v39), 4u);
    goto LABEL_33;
  }
  v41[1] = 0LL;
  if ( v16 > 0xFFFFF000 )
  {
LABEL_9:
    v8 = -1073741811;
    goto LABEL_57;
  }
  v18 = MmGetCurrentProcessorColor() | 0x80000000;
  v19 = MmSizeOfMdl((PVOID)Address, v16);
  PoolMm = ExAllocatePoolMm(64LL, v19, 860973389, v18);
  v6 = PoolMm;
  v35 = PoolMm;
  if ( !PoolMm )
    goto LABEL_27;
  v21 = (unsigned __int64)Address;
  *(_QWORD *)PoolMm = 0LL;
  *(_WORD *)(PoolMm + 8) = 8 * (((v16 + (v21 & 0xFFF) + 4095) >> 12) + 6);
  *(_WORD *)(PoolMm + 10) = 0;
  *(_QWORD *)(PoolMm + 32) = v21 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(PoolMm + 44) = v21 & 0xFFF;
  *(_DWORD *)(PoolMm + 40) = v16;
  v41[0] = a4 & 1 | 2LL;
  v8 = MiProbeAndLockPages(PoolMm, v41);
  v32 = v8;
  if ( v8 < 0 )
    goto LABEL_57;
  v17 = (*(_BYTE *)(v6 + 10) & 5) != 0
      ? *(_BYTE **)(v6 + 24)
      : MmMapLockedPagesSpecifyCache((PMDL)v6, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( !v17 )
  {
LABEL_27:
    v8 = -1073741670;
    goto LABEL_57;
  }
LABEL_33:
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v44);
    v31 = 1;
  }
  v43 = BugCheckParameter1 + 1024;
  v22 = (unsigned __int64)v38 >> 12;
  CurrentThread = (struct _KTHREAD *)((unsigned __int64)v39 >> 12);
  v23 = 0LL;
  while ( 1 )
  {
    BugCheckParameter1 = v23;
    if ( v23 >= v42 )
      break;
    if ( !v7 )
      goto LABEL_68;
    if ( v22 < (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
      || v22 > (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
    {
      MiUnlockAndDereferenceVadShared(v7);
      v7 = 0LL;
      v33 = 0LL;
    }
    if ( !v7 )
    {
LABEL_68:
      v7 = MiObtainReferencedVadEx(v22 << 12, 2LL, &v32);
      v33 = v7;
      if ( !v7 )
      {
        v8 = v32;
        goto LABEL_59;
      }
    }
    VadFlags = MiReadVadFlags(v7);
    v25 = *(unsigned int *)(v7 + 28);
    v26 = *(unsigned __int8 *)(v7 + 33);
    v41[0] = (char *)CurrentThread + v22;
    if ( (unsigned __int64)CurrentThread + v22 - 1 > (v25 | (unsigned __int64)(v26 << 32)) )
    {
      v8 = -1073741800;
      goto LABEL_57;
    }
    if ( !MiVadSupportsPhysicalContiguityQuery(VadFlags) )
      goto LABEL_19;
    *(_DWORD *)&v17[4 * BugCheckParameter1] = 0;
    VaPhysicalContiguity = MiQueryVaPhysicalContiguity(v43, v22 << 12, v13, v36);
    v28 = BugCheckParameter1;
    *(_DWORD *)&v17[4 * BugCheckParameter1] ^= (VaPhysicalContiguity ^ (unsigned __int8)*(_DWORD *)&v17[4 * BugCheckParameter1]) & 3;
    v23 = v28 + 1;
    v22 = v41[0];
  }
  if ( v7 )
  {
    MiUnlockAndDereferenceVadShared(v7);
    v7 = 0LL;
    v33 = 0LL;
  }
  if ( v31 )
  {
    KiUnstackDetachProcess((__int64)v44, 0);
    v31 = 0;
  }
  if ( v17 == Src )
  {
    if ( a4 )
      RtlCopyToUser((void *)Address, v17, v16);
    else
      RtlCopyVolatileMemory((void *)Address, v17, v16);
  }
  v8 = 0;
LABEL_57:
  if ( v7 )
    MiUnlockAndDereferenceVadShared(v7);
LABEL_59:
  if ( v31 )
    KiUnstackDetachProcess((__int64)v44, 0);
  if ( v6 )
  {
    if ( (*(_BYTE *)(v6 + 10) & 2) != 0 )
      MmUnlockPages((PMDL)v6);
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  return (unsigned int)v8;
}
