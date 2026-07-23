/*
 * XREFs of MiAddPhysicalMemory @ 0x14086B3FC
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x14086B848 (MiAddPhysicalMemoryChunks.c)
 *     MiCreateFileOnlyPfns @ 0x140873544 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiLockDynamicMemoryShared @ 0x1404C5110 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1404C9D60 (MiUnlockDynamicMemoryShared.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KeConfigureDynamicMemory @ 0x1405EE72C (KeConfigureDynamicMemory.c)
 *     MiLogAddPhysicalMemory @ 0x1406EE42C (MiLogAddPhysicalMemory.c)
 *     MiMemoryRangeAlreadyExists @ 0x1406EE5C0 (MiMemoryRangeAlreadyExists.c)
 *     MiReturnAddMemoryResources @ 0x1406EEE10 (MiReturnAddMemoryResources.c)
 *     MiIsExtentDangling @ 0x1406FF400 (MiIsExtentDangling.c)
 *     MiReapFileOnlyPfns @ 0x1406FF880 (MiReapFileOnlyPfns.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiAcquireAddMemoryLocks @ 0x14086B2F4 (MiAcquireAddMemoryLocks.c)
 *     MiAcquireAddMemoryResources @ 0x14086B334 (MiAcquireAddMemoryResources.c)
 *     MiCompleteMemoryAddition @ 0x14086BF6C (MiCompleteMemoryAddition.c)
 *     MiMapNewPfns @ 0x14086CA54 (MiMapNewPfns.c)
 *     MiReleaseAddMemoryLocks @ 0x14086D0EC (MiReleaseAddMemoryLocks.c)
 *     MiUnmapPfns @ 0x14086D48C (MiUnmapPfns.c)
 *     MiValidateAddPhysicalMemoryParameters @ 0x14086D580 (MiValidateAddPhysicalMemoryParameters.c)
 */

__int64 __fastcall MiAddPhysicalMemory(unsigned __int16 *a1, __int64 a2, _QWORD *a3, int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _BYTE *v15; // rcx
  __int64 v16; // rdx
  struct _KLOCK_ENTRIES *v17; // r9
  ULONG_PTR v18; // rax
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  int v21; // ebx
  int v22; // eax
  ULONG_PTR IsExtentDangling; // rax
  unsigned __int64 v24; // rcx
  ULONG_PTR v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _KLOCK_ENTRIES *v28; // r9
  int v29; // edi
  int v30; // eax
  unsigned int v31; // r8d
  int v32; // eax
  int v33[4]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v34[16]; // [rsp+40h] [rbp-F8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-E8h]
  ULONG_PTR v36; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v37; // [rsp+60h] [rbp-D8h]
  unsigned int v38; // [rsp+68h] [rbp-D0h]
  _DWORD *v39; // [rsp+78h] [rbp-C0h]
  __int64 v40; // [rsp+A8h] [rbp-90h]
  _BYTE v41[64]; // [rsp+B0h] [rbp-88h] BYREF

  memset_0(v34, 0, 0xB0uLL);
  result = MiValidateAddPhysicalMemoryParameters((_DWORD)a1, a2, (_DWORD)a3, a4, a5, (__int64)v34);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v13 = v41;
  v14 = 2LL;
  v40 = 0LL;
  v15 = v41;
  do
  {
    v13[1] = v15;
    *v13 = v15;
    v15 += 24;
    v13 += 3;
    --v14;
  }
  while ( v14 );
  MiReapFileOnlyPfns(0, 0LL, v10, v11);
  if ( (v38 & 2) == 0 )
  {
    MiAcquireAddMemoryLocks((__int64)v34, v16, v38, v17);
    if ( LOBYTE(stru_140E2D2D0.ThreadLock) )
    {
      IsExtentDangling = MiIsExtentDangling(BugCheckParameter2, v37, v38);
      if ( IsExtentDangling >= BugCheckParameter2 && IsExtentDangling < v36 )
        goto LABEL_18;
    }
    if ( (v38 & 0x40000) == 0 )
    {
      if ( qword_140E2D8A0 == qword_140E3D550 )
        goto LABEL_11;
      if ( v37 > qword_140E2D8A0 - qword_140E3D550 )
      {
        if ( (v38 & 0x100000) != 0 )
        {
          v21 = -1073741585;
          goto LABEL_45;
        }
        if ( (v38 & 0x1000) != 0 )
          v24 = -262144LL;
        else
          v24 = (-(__int64)((v38 & 0x800) != 0) & 0xFFFFFFFFFFFFFE01uLL) - 1;
        v25 = (qword_140E2D8A0 - qword_140E3D550) & v24;
        v37 = v25;
        if ( !v25 )
          goto LABEL_11;
        v36 = BugCheckParameter2 + v25;
      }
    }
    if ( (unsigned int)MiMemoryRangeAlreadyExists(BugCheckParameter2, v36) )
    {
LABEL_18:
      v21 = -1073741800;
      goto LABEL_45;
    }
    v33[0] = MiAcquireAddMemoryResources((__int64)v34);
    v21 = v33[0];
    if ( v33[0] < 0 )
      goto LABEL_46;
    v33[0] = MiMapNewPfns(v34);
    v21 = v33[0];
    if ( v33[0] < 0 )
      goto LABEL_46;
    if ( (v38 & 0x400) == 0 )
    {
      MiReleaseAddMemoryLocks(v34);
      v33[0] = KeConfigureDynamicMemory(BugCheckParameter2, v36 - 1, 0);
      v21 = v33[0];
      v29 = v33[0];
      if ( v33[0] >= 0 )
      {
        v30 = KeConfigureDynamicMemory(BugCheckParameter2, v36 - 1, 1u);
        v21 = v30;
        v33[0] = v30;
        if ( v30 < 0 )
          KeBugCheckEx(0x1Au, 0x515A1uLL, BugCheckParameter2, v36 - 1, v30);
        v29 = v30;
      }
      MiAcquireAddMemoryLocks((__int64)v34, v26, v27, v28);
      if ( v29 < 0 )
      {
        MiUnmapPfns(v34);
        goto LABEL_46;
      }
    }
    MiCompleteMemoryAddition(v34);
LABEL_44:
    *a3 = v37 << 12;
    v21 = 0;
    goto LABEL_45;
  }
  v18 = MiIsExtentDangling(BugCheckParameter2, v37, v38);
  if ( v18 >= BugCheckParameter2 && v18 < v36 )
    goto LABEL_18;
  if ( (*(_DWORD *)(**(_QWORD **)v39 + 56LL) & 0x20) == 0 || (MiFlags & 0x4000) == 0 )
  {
LABEL_16:
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread, v19, v20);
    if ( (unsigned int)MiMemoryRangeAlreadyExists(BugCheckParameter2, v36) )
    {
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      goto LABEL_18;
    }
    LOBYTE(stru_140E2D2D0.ThreadLock) = 1;
    MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    v33[0] = MiMapNewPfns(v34);
    v21 = v33[0];
    if ( v33[0] < 0 )
      goto LABEL_46;
    goto LABEL_44;
  }
  if ( (MiFlags & 0x10000) != 0 )
  {
    v22 = KeConfigureDynamicMemory(BugCheckParameter2, v36 - 1, 0);
    v33[0] = v22;
    v21 = v22;
    if ( v22 < 0 )
    {
      if ( v22 == -1073741637 )
        BYTE2(stru_140E2D2D0.ThreadLock) = 1;
      goto LABEL_46;
    }
    v39[9] |= 1u;
    goto LABEL_16;
  }
  BYTE2(stru_140E2D2D0.ThreadLock) = 1;
LABEL_11:
  v21 = -1073741637;
LABEL_45:
  v33[0] = v21;
LABEL_46:
  if ( v39 && (v39[9] & 1) != 0 )
  {
    v31 = 8;
    if ( v21 >= 0 )
      v31 = 1;
    if ( (MiFlags & 0x4000) != 0 )
    {
      v32 = KeConfigureDynamicMemory(BugCheckParameter2, v36 - 1, v31);
      if ( v32 < 0 )
        KeBugCheckEx(0x1Au, 0x515A1uLL, BugCheckParameter2, v36 - 1, v32);
    }
  }
  MiReturnAddMemoryResources((__int64)v34);
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 256LL) )
  {
    MiLogAddPhysicalMemory(v38, a1, a2, (__int64)a3, v38, (__int64)v33);
  }
  return (unsigned int)v21;
}
