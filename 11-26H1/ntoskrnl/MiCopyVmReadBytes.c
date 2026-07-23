/*
 * XREFs of MiCopyVmReadBytes @ 0x140A2BED0
 * Callers:
 *     MiCopyVirtualMemory @ 0x140A2B990 (MiCopyVirtualMemory.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiCloneTreeActive @ 0x140464760 (MiCloneTreeActive.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x140A2C2D8 (VslDebugReadWriteSecureProcess.c)
 *     MiDbgReadWriteEnclave @ 0x140B492C4 (MiDbgReadWriteEnclave.c)
 */

__int64 __fastcall MiCopyVmReadBytes(__int64 a1)
{
  unsigned int v2; // edx
  unsigned int v3; // r8d
  char v4; // dl
  unsigned __int64 v5; // r10
  ULONG_PTR v6; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  char SameThreadTransientFlags; // si
  int v9; // eax
  int v10; // ecx
  int v11; // r14d
  size_t v12; // r8
  void *v13; // rdx
  void *v14; // rcx
  PVOID v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  int v21; // eax
  _QWORD v22[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  char v24; // [rsp+78h] [rbp+10h]
  int v25; // [rsp+80h] [rbp+18h]
  struct _KTHREAD *v26; // [rsp+88h] [rbp+20h]

  v23 = 0LL;
  v2 = *(_DWORD *)(a1 + 108) & 0xFFFFFFFD;
  *(_DWORD *)(a1 + 108) = v2;
  v3 = v2;
  if ( (v2 & 4) == 0 && !*(_DWORD *)(a1 + 104) && !MiCloneTreeActive(*(_QWORD *)a1) && (v4 & 1) != 0 )
  {
    v3 |= 2u;
    *(_DWORD *)(a1 + 108) = v3;
  }
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 >= 0x200 && (v3 & 2) != 0 )
  {
    if ( v5 > 0xE000 )
    {
      *(_QWORD *)(a1 + 56) = 57344LL;
      v5 = 57344LL;
    }
    v17 = *(_QWORD *)(a1 + 32);
    v18 = *(_QWORD *)(a1 + 176);
    *(_QWORD *)v18 = 0LL;
    *(_WORD *)(v18 + 8) = 8 * (((v5 + (v17 & 0xFFF) + 4095) >> 12) + 6);
    *(_WORD *)(v18 + 10) = 0;
    *(_QWORD *)(v18 + 32) = v17 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v18 + 44) = v17 & 0xFFF;
    *(_DWORD *)(v18 + 40) = v5;
  }
  else
  {
    *(_DWORD *)(a1 + 108) = v3 & 0xFFFFFFFD;
    v6 = *(_QWORD *)(a1 + 160);
    if ( !v6 )
    {
      if ( v5 > 0x200 )
      {
        v6 = *(_QWORD *)(a1 + 64);
        if ( v6 > 0x10000 )
          v6 = 0x10000LL;
        do
        {
          CurrentProcessorColor = MmGetCurrentProcessorColor();
          PoolMm = ExAllocatePoolMm(256LL, v6, 2001890637, CurrentProcessorColor | 0x80000000);
          *(_QWORD *)(a1 + 80) = PoolMm;
          if ( PoolMm )
          {
            *(_QWORD *)(a1 + 160) = v6;
            goto LABEL_10;
          }
          v6 >>= 1;
        }
        while ( v6 > 0x200 );
        *(_QWORD *)(a1 + 80) = a1 + 352;
        v6 = 512LL;
      }
      else
      {
        *(_QWORD *)(a1 + 80) = a1 + 352;
        v6 = v5;
      }
    }
LABEL_10:
    if ( *(_QWORD *)(a1 + 56) > v6 )
      *(_QWORD *)(a1 + 56) = v6;
  }
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a1 + 80);
  CurrentThread = KeGetCurrentThread();
  v26 = CurrentThread;
  SameThreadTransientFlags = CurrentThread->SameThreadTransientFlags;
  v24 = SameThreadTransientFlags;
  CurrentThread->SameThreadTransientFlags = SameThreadTransientFlags | 4;
  v9 = *(_DWORD *)(a1 + 108);
  if ( (v9 & 2) == 0 )
  {
    if ( (v9 & 4) != 0 || (v10 = *(_DWORD *)(a1 + 104), v10 == 2) )
    {
      v21 = VslDebugReadWriteSecureProcess(
              *(_QWORD *)a1,
              *(_QWORD *)(a1 + 32),
              *(_QWORD *)(a1 + 80),
              *(_QWORD *)(a1 + 56),
              1,
              (__int64)&v23);
    }
    else
    {
      if ( v10 != 1 )
      {
        v11 = 0;
        LOBYTE(v23) = (v9 & 0x20) == 0;
        v25 = 2;
        v12 = *(_QWORD *)(a1 + 56);
        v13 = *(void **)(a1 + 32);
        v14 = *(void **)(a1 + 80);
        if ( (v9 & 0x20) != 0 )
          RtlCopyVolatileMemory(v14, v13, v12);
        else
          RtlCopyFromUser(v14, v13, v12);
        goto LABEL_19;
      }
      v21 = MiDbgReadWriteEnclave(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 56), 1, (__int64)&v23);
    }
    v11 = v21;
    goto LABEL_19;
  }
  v22[1] = 0LL;
  v22[0] = *(_BYTE *)(a1 + 88) & 1;
  v11 = MiProbeAndLockPages(*(_QWORD *)(a1 + 176), v22);
  if ( v11 >= 0 )
  {
    v16 = MmMapLockedPagesSpecifyCache(*(PMDL *)(a1 + 176), 0, MmCached, 0LL, 0, 0xC0000020);
    *(_QWORD *)(a1 + 168) = v16;
    if ( !v16 )
    {
      MmUnlockPages(*(PMDL *)(a1 + 176));
      v11 = -1073741670;
    }
  }
LABEL_19:
  if ( (SameThreadTransientFlags & 4) == 0 )
    CurrentThread->SameThreadTransientFlags &= ~4u;
  return (unsigned int)v11;
}
