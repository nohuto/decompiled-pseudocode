/*
 * XREFs of MiLoadDataIntoVsmEnclave @ 0x14087C968
 * Callers:
 *     NtLoadEnclaveData @ 0x140AF16E0 (NtLoadEnclaveData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MmSizeOfMdl @ 0x140481EB0 (MmSizeOfMdl.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     PsLoadVsmEnclaveData @ 0x140619BC8 (PsLoadVsmEnclaveData.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     MiCommitExistingVad @ 0x1409982E0 (MiCommitExistingVad.c)
 *     MiDecommitRegion @ 0x140A0567C (MiDecommitRegion.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadDataIntoVsmEnclave(
        ULONG_PTR a1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        int a5,
        int *a6,
        unsigned __int64 Base,
        __int64 a8,
        int a9,
        _QWORD *a10)
{
  __int64 v12; // rbx
  __int64 result; // rax
  int v14; // r15d
  unsigned int ProtectionMask; // eax
  __int64 v16; // r9
  int VsmEnclaveData; // esi
  int v18; // ebx
  SIZE_T v19; // rax
  __int64 PoolMm; // rax
  __int64 v21; // r15
  __int64 v22; // r14
  char v23; // al
  __int16 v24; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-E0h]
  int v26[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v27; // [rsp+70h] [rbp-C8h] BYREF
  int *v28; // [rsp+80h] [rbp-B8h]
  _QWORD *v29; // [rsp+88h] [rbp-B0h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-A8h]
  __int64 v31; // [rsp+98h] [rbp-A0h]
  __int64 v32; // [rsp+A8h] [rbp-90h]
  unsigned __int64 v33; // [rsp+B0h] [rbp-88h]
  __int64 v34; // [rsp+B8h] [rbp-80h]
  _BYTE v35[48]; // [rsp+C0h] [rbp-78h] BYREF

  v25 = a2;
  BugCheckParameter1 = a1;
  v28 = a6;
  *(_QWORD *)&v27 = a6;
  v32 = a2;
  v33 = a4;
  v29 = a10;
  v24 = 0;
  v26[0] = 0;
  memset(v35, 0, sizeof(v35));
  v12 = 0LL;
  *a10 = 0LL;
  if ( a8 != 4096 )
    return 3221225714LL;
  if ( a5 != 4 )
    return 3221225476LL;
  if ( *a6 != 1 && *a6 != 2 )
  {
    if ( *a6 == 3 )
      goto LABEL_11;
    if ( *a6 != 4 )
    {
      if ( *a6 != 5 )
        return 3221225485LL;
LABEL_11:
      if ( Base )
        return 3221225713LL;
      goto LABEL_15;
    }
  }
  if ( !Base )
    return 3221225477LL;
LABEL_15:
  v14 = a9;
  ProtectionMask = MiMakeProtectionMask(a9 & 0x5FFFFFFF);
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0
    && ((__int64)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink & 0x100) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    return 3221227012LL;
  }
  v34 = v16 + 4095;
  if ( MiComputePageCommitment(a4, v16 + 4095, a2, 0LL, 0LL) )
    return 3221225505LL;
  result = MiCommitExistingVad(a2, a4, 4096, a9, 0LL, 0, 0, 0LL, (__int64)v26, (__int64)&v24);
  VsmEnclaveData = result;
  if ( (int)result >= 0 )
  {
    if ( Base )
    {
      v18 = MmGetCurrentProcessorColor() | 0x80000000;
      v19 = MmSizeOfMdl((PVOID)Base, 0x1000uLL);
      PoolMm = ExAllocatePoolMm(64LL, v19, 1818520909, v18);
      v21 = PoolMm;
      v12 = PoolMm;
      v31 = PoolMm;
      if ( !PoolMm )
      {
        VsmEnclaveData = -1073741670;
        v22 = v25;
        goto LABEL_37;
      }
      *(_QWORD *)PoolMm = 0LL;
      *(_WORD *)(PoolMm + 8) = 8 * (((unsigned __int16)((Base & 0xFFF) + 0x1FFF) >> 12) + 6);
      *(_WORD *)(PoolMm + 10) = 0;
      *(_QWORD *)(PoolMm + 32) = Base & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(PoolMm + 44) = Base & 0xFFF;
      *(_DWORD *)(PoolMm + 40) = 4096;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v35);
      v23 = a3;
      if ( a3 == 1 )
      {
        ProbeForRead((volatile void *)Base, 0x1000uLL, 1u);
        v22 = v25;
        v23 = 1;
      }
      else
      {
        v22 = v25;
      }
      if ( VsmEnclaveData >= 0 )
      {
        v27 = v23 & 1;
        VsmEnclaveData = MiProbeAndLockPages(v21, &v27);
      }
      KiUnstackDetachProcess((__int64)v35, 0);
      if ( VsmEnclaveData < 0 )
        goto LABEL_37;
      v14 = a9;
    }
    else
    {
      v22 = v25;
    }
    VsmEnclaveData = PsLoadVsmEnclaveData(*(_QWORD **)(v22 + 80), a4, *v28, v14, v12);
    if ( VsmEnclaveData >= 0 )
    {
      *v29 = 4096LL;
LABEL_38:
      if ( v12 )
      {
        if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
          MmUnlockPages((PMDL)v12);
        ExFreePoolWithTag((PVOID)v12, 0);
      }
      return (unsigned int)VsmEnclaveData;
    }
LABEL_37:
    MiDecommitRegion(v22, a4, v34);
    goto LABEL_38;
  }
  return result;
}
