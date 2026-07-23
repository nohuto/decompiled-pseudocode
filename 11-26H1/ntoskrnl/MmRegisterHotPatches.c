/*
 * XREFs of MmRegisterHotPatches @ 0x140D01F24
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VslDetermineHotPatchType @ 0x140794C80 (VslDetermineHotPatchType.c)
 *     MiAllocateHotPatchRecord @ 0x140873D80 (MiAllocateHotPatchRecord.c)
 *     MiAllocateSecureImageActivePatch @ 0x140873E2C (MiAllocateSecureImageActivePatch.c)
 *     MiCompareHotPatchNodes @ 0x140875A8C (MiCompareHotPatchNodes.c)
 *     MiInsertHotPatchRecord @ 0x140876C5C (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140876F28 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MiLogHotPatchOperationStatus @ 0x140878288 (MiLogHotPatchOperationStatus.c)
 *     MiFindHotPatchRecord @ 0x140AC2084 (MiFindHotPatchRecord.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiHandleDriverNonPagedSections @ 0x140ACAFE8 (MiHandleDriverNonPagedSections.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmRegisterHotPatches(__int64 a1)
{
  ULONG_PTR BugCheckParameter4; // rbx
  int v3; // r13d
  ULONG_PTR v4; // r12
  __int64 *i; // rdi
  int v6; // edx
  int v7; // ecx
  __int64 HotPatchRecord; // rax
  struct _KLOCK_ENTRIES *v9; // r9
  void *v10; // r14
  __int64 v11; // r10
  UNICODE_STRING *SecureImageActivePatch; // rax
  __int64 v13; // r10
  __int64 v14; // r10
  int v15; // r8d
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  unsigned int v18; // esi
  unsigned int v19; // r14d
  int v20; // eax
  _QWORD **v21; // rcx
  ULONG_PTR v22; // rax
  _QWORD *j; // rcx
  int v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // r8d
  __int64 v27; // r10
  PVOID *v28; // rbx
  ULONG_PTR v29; // rcx
  const signed __int16 *k; // rbx
  __int64 result; // rax
  _BYTE v32[24]; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-60h]
  unsigned int v34; // [rsp+5Ch] [rbp-5Ch]
  int v35; // [rsp+C0h] [rbp+8h] BYREF
  int v36; // [rsp+C8h] [rbp+10h] BYREF
  int v37; // [rsp+D0h] [rbp+18h] BYREF
  struct _KTHREAD *Lock; // [rsp+D8h] [rbp+20h]

  v37 = 0;
  BugCheckParameter4 = 0LL;
  v3 = 0;
  Lock = MmAcquireLoadLock();
  v4 = 1LL;
  for ( i = *(__int64 **)(*(_QWORD *)(a1 + 240) + 3784LL);
        i != (__int64 *)(*(_QWORD *)(a1 + 240) + 3784LL);
        i = (__int64 *)*i )
  {
    v6 = *((_DWORD *)i + 10);
    v7 = v3 + 1;
    if ( (v6 & 6) != 4 )
      v7 = v3;
    v3 = v7;
    if ( (v6 & 1) != 0 )
    {
      HotPatchRecord = MiAllocateHotPatchRecord(
                         *((_DWORD *)i + 8),
                         *((_DWORD *)i + 9),
                         *((_DWORD *)i + 17),
                         (const void **)i + 2,
                         *((_DWORD *)i + 11));
      v10 = (void *)HotPatchRecord;
      if ( !HotPatchRecord )
        goto LABEL_24;
      if ( (unsigned int)MiInsertHotPatchRecord((unsigned __int64 *)&xmmword_140E366C0, HotPatchRecord, 0LL, v9) == 255 )
        ExFreePoolWithTag(v10, 0);
      v11 = 0x400000000020LL;
      if ( stru_140E366D8.FirstArgument
        && *(_DWORD *)stru_140E366D8.FirstArgument
        && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
      {
        MiLogHotPatchOperationStatus(v11, *((_DWORD *)i + 8), *((_DWORD *)i + 9), (UNICODE_STRING *)i + 1, 0, 4);
        v11 = 0x400000000020LL;
      }
      if ( (i[5] & 2) != 0 )
      {
        SecureImageActivePatch = MiAllocateSecureImageActivePatch((PCUNICODE_STRING)i + 1);
        if ( !SecureImageActivePatch )
        {
LABEL_24:
          v15 = -1073741670;
LABEL_25:
          KeBugCheckEx(0x1Au, 0x515C5uLL, v15, v4, BugCheckParameter4);
        }
        LODWORD(SecureImageActivePatch[1].Buffer) = *((_DWORD *)i + 8);
        HIDWORD(SecureImageActivePatch[1].Buffer) = *((_DWORD *)i + 9);
        *(_DWORD *)&SecureImageActivePatch[2].Length = *((_DWORD *)i + 18);
        *(_DWORD *)(&SecureImageActivePatch[2].MaximumLength + 1) = *((_DWORD *)i + 19);
        LODWORD(SecureImageActivePatch[2].Buffer) = *((_DWORD *)i + 17);
        MiInsertSecureImageActivePatch(SecureImageActivePatch);
        if ( stru_140E366D8.FirstArgument
          && *(_DWORD *)stru_140E366D8.FirstArgument
          && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
        {
          MiLogHotPatchOperationStatus(v13, *((_DWORD *)i + 8), *((_DWORD *)i + 9), (UNICODE_STRING *)i + 1, 0, 5);
        }
      }
      else if ( stru_140E366D8.FirstArgument
             && *(_DWORD *)stru_140E366D8.FirstArgument
             && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, v11) )
      {
        MiLogHotPatchOperationStatus(v14, *((_DWORD *)i + 8), *((_DWORD *)i + 9), (UNICODE_STRING *)i + 1, 0, 6);
      }
    }
  }
  v4 = 2LL;
  memset_0(v32, 0, 0x40uLL);
  v16 = (_QWORD *)xmmword_140E366C0;
  BugCheckParameter4 = 0LL;
  while ( v16 )
  {
    BugCheckParameter4 = (ULONG_PTR)v16;
    v16 = (_QWORD *)*v16;
  }
  while ( BugCheckParameter4 )
  {
    v17 = (_QWORD *)qword_140E366D0;
    v18 = *(_DWORD *)(BugCheckParameter4 + 24);
    v19 = *(_DWORD *)(BugCheckParameter4 + 28);
    v33 = v18;
    v34 = v19;
    if ( !qword_140E366D0 )
      goto LABEL_72;
    do
    {
      v20 = MiCompareHotPatchNodes((__int64)v32, (__int64)v17);
      if ( v20 >= 0 )
      {
        if ( v20 <= 0 )
          break;
        v17 = (_QWORD *)v17[1];
      }
      else
      {
        v17 = (_QWORD *)*v17;
      }
    }
    while ( v17 );
    if ( !v17 )
    {
LABEL_72:
      v15 = VslDetermineHotPatchType(v18, v19, &v37);
      if ( v15 < 0 )
        goto LABEL_25;
      if ( (v37 & 3) != 0 )
      {
        v36 = 0;
        v35 = 0;
        v15 = MiLoadHotPatch((const UNICODE_STRING *)(BugCheckParameter4 + 40), 2, &v36, &v35);
        if ( v15 < 0 )
          goto LABEL_25;
      }
    }
    v21 = *(_QWORD ***)(BugCheckParameter4 + 8);
    v22 = BugCheckParameter4;
    if ( v21 )
    {
      BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 8);
      for ( j = *v21; j; j = (_QWORD *)*j )
        BugCheckParameter4 = (ULONG_PTR)j;
    }
    else
    {
      while ( 1 )
      {
        BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !BugCheckParameter4 || *(_QWORD *)BugCheckParameter4 == v22 )
          break;
        v22 = BugCheckParameter4;
      }
    }
  }
  v4 = 3LL;
  BugCheckParameter4 = *(_QWORD *)(a1 + 240) + 3784LL;
  if ( (stru_140E366D8.QuantumTarget & 0x100000000LL) == 0 )
    goto LABEL_50;
  while ( 1 )
  {
    BugCheckParameter4 = *(_QWORD *)BugCheckParameter4;
LABEL_50:
    if ( BugCheckParameter4 == *(_QWORD *)(a1 + 240) + 3784LL )
      break;
    if ( (*(_DWORD *)(BugCheckParameter4 + 40) & 3) == 0 )
    {
      v24 = MiFindHotPatchRecord(
              (__int64 *)&xmmword_140E366C0,
              0,
              *(_DWORD *)(BugCheckParameter4 + 32),
              (struct _KLOCK_ENTRIES *)*(unsigned int *)(BugCheckParameter4 + 36),
              0,
              0LL,
              0LL);
      v36 = *(_DWORD *)(BugCheckParameter4 + 32);
      v25 = (((v24 >> 31) & 0xFFFFFFFD) + 4) | 8;
      v35 = *(_DWORD *)(BugCheckParameter4 + 36);
      v15 = MiLoadHotPatch((const UNICODE_STRING *)(BugCheckParameter4 + 16), v25, &v36, &v35);
      if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073740748 )
        goto LABEL_25;
      if ( (v25 & 1) != 0
        && stru_140E366D8.FirstArgument
        && *(_DWORD *)stru_140E366D8.FirstArgument
        && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
      {
        MiLogHotPatchOperationStatus(
          v27,
          *(_DWORD *)(BugCheckParameter4 + 32),
          *(_DWORD *)(BugCheckParameter4 + 36),
          (UNICODE_STRING *)(BugCheckParameter4 + 16),
          v26,
          4);
      }
    }
  }
  if ( v3 )
  {
    v28 = (PVOID *)PsLoadedModuleList;
    while ( v28 != &PsLoadedModuleList )
    {
      v29 = (ULONG_PTR)v28;
      v28 = (PVOID *)*v28;
      if ( _bittest16((const signed __int16 *)(v29 + 110), 9u) )
        MiUnloadSystemImage(v29);
    }
  }
  for ( k = (const signed __int16 *)PsLoadedModuleList;
        k != (const signed __int16 *)&PsLoadedModuleList;
        k = *(const signed __int16 **)k )
  {
    if ( _bittest16(k + 55, 9u) )
      MiHandleDriverNonPagedSections((__int64)k, 2);
  }
  MmReleaseLoadLock(Lock);
  result = 0LL;
  LOBYTE(stru_140E366D8.SListFaultAddress) = 1;
  return result;
}
