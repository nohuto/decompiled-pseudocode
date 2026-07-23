/*
 * XREFs of MiCopyVirtualMemory @ 0x140A2B990
 * Callers:
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     MmCopyVirtualMemory @ 0x140A2B2B0 (MmCopyVirtualMemory.c)
 *     MiReadWriteVirtualMemory @ 0x140A2B320 (MiReadWriteVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCopyVmLockVad @ 0x140A2BC40 (MiCopyVmLockVad.c)
 *     MiCopyVmReadBytes @ 0x140A2BED0 (MiCopyVmReadBytes.c)
 *     MiCopyVmWriteBytes @ 0x140A2C1D0 (MiCopyVmWriteBytes.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyVirtualMemory(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 *a7,
        char a8)
{
  __int64 v12; // rbx
  int v13; // ecx
  int v14; // edi
  int Bytes; // edi
  unsigned int v16; // ecx
  _QWORD v18[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h]
  __int64 v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h]
  char v26; // [rsp+78h] [rbp-88h]
  PVOID v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+8Ch] [rbp-74h]
  _BYTE v29[48]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-40h]
  PMDL MemoryDescriptorList; // [rsp+D0h] [rbp-30h]
  char v32; // [rsp+D8h] [rbp-28h] BYREF

  memset_0(v18, 0, 0x360uLL);
  v12 = a5;
  if ( !a5 )
    return 0LL;
  *a7 = 0LL;
  v28 = 1;
  if ( (a8 & 1) != 0 )
    v28 = 17;
  v13 = 16 * (a8 & 1) + 1;
  if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
  {
    v13 |= 4u;
    v28 = v13;
  }
  if ( (*(_BYTE *)(a3 + 368) & 1) != 0 )
    v28 = v13 | 8;
  v26 = a6;
  MemoryDescriptorList = (PMDL)&v32;
  v18[0] = a1;
  v18[1] = a3;
  v18[2] = a2;
  v18[3] = a4;
  v19 = a2;
  v20 = a4;
  v21 = a5;
  v23 = a5;
  while ( v12 )
  {
    v22 = v12;
    v14 = MiCopyVmLockVad(v18);
    if ( v14 < 0 )
      goto LABEL_31;
    Bytes = MiCopyVmReadBytes(v18);
    if ( v27 )
    {
      MiUnlockAndDereferenceVadShared((ULONG_PTR)v27);
      v27 = 0LL;
    }
    KiUnstackDetachProcess((__int64)v29, 0);
    v16 = v28 & 0xFFFFFF7F;
    v28 &= ~0x80u;
    if ( Bytes < 0 )
    {
      if ( (v16 & 2) == 0 )
        goto LABEL_30;
      v28 = v16 & 0xFFFFFFFE;
    }
    else
    {
      v28 = v16 | 0x40;
      v14 = MiCopyVmLockVad(v18);
      if ( v14 < 0 )
      {
        if ( (v28 & 2) != 0 )
          MmUnlockPages(MemoryDescriptorList);
        goto LABEL_31;
      }
      v14 = MiCopyVmWriteBytes(v18);
      if ( (v28 & 2) != 0 )
        MmUnlockPages(MemoryDescriptorList);
      if ( v14 < 0 )
      {
        if ( v14 == -1073741819 )
        {
          v12 -= v24;
LABEL_30:
          v14 = -2147483635;
        }
LABEL_31:
        if ( v27 )
          MiUnlockAndDereferenceVadShared((ULONG_PTR)v27);
        if ( (v28 & 0x80u) != 0 )
          KiUnstackDetachProcess((__int64)v29, 0);
        if ( v30 )
          ExFreePoolWithTag(P, 0);
        *a7 = v21 - v12;
        return (unsigned int)v14;
      }
      if ( v27 )
      {
        MiUnlockAndDereferenceVadShared((ULONG_PTR)v27);
        v27 = 0LL;
      }
      KiUnstackDetachProcess((__int64)v29, 0);
      v23 -= v22;
      v12 -= v22;
      v19 += v22;
      v28 &= 0xFFFFFF3F;
      v20 += v22;
    }
  }
  if ( v30 )
    ExFreePoolWithTag(P, 0);
  *a7 = v21;
  return 0LL;
}
