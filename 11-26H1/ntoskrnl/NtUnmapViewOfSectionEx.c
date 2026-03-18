/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x1409C38B0
 * Callers:
 *     DifNtUnmapViewOfSectionExWrapper @ 0x1406906F0 (DifNtUnmapViewOfSectionExWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     MiDereferenceControlAreaFile @ 0x1402649C0 (MiDereferenceControlAreaFile.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     MiReferenceControlAreaFile @ 0x140448EB0 (MiReferenceControlAreaFile.c)
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiReadVadFlags2 @ 0x14047A070 (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409C40F0 (MiUnmapViewOfSectionPrepare.c)
 *     DbgkUnMapViewOfSection @ 0x1409C4448 (DbgkUnMapViewOfSection.c)
 *     PfCheckDeprioritizeFile @ 0x1409C4504 (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x140AD6354 (MiLogMapFileEvent.c)
 */

__int64 __fastcall NtUnmapViewOfSectionEx(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, int a3)
{
  char v3; // di
  int v4; // r15d
  int v6; // ebx
  char PreviousMode; // si
  __int64 result; // rax
  PRKPROCESS v9; // r14
  int v10; // edi
  int v11; // r12d
  int v12; // ebx
  ULONG_PTR v13; // rsi
  int v14; // edi
  ULONG_PTR v15; // rcx
  __int64 v16; // rbx
  ULONG_PTR v17; // rax
  __int64 v18; // r15
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *v20; // r10
  ULONG_PTR v21; // [rsp+40h] [rbp-39h] BYREF
  PRKPROCESS PROCESS; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-29h] BYREF
  __int64 v24; // [rsp+58h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-19h] BYREF

  PROCESS = 0LL;
  v3 = a3;
  v4 = a2;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225713LL;
  v6 = (a3 & 2) << 25;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 && !MmIsUserAddress(a2) )
    return 3221225497LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             8LL,
             PsProcessType,
             PreviousMode,
             0x77566D4Du,
             &PROCESS,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v9 = PROCESS;
    memset(&ApcState, 0, sizeof(ApcState));
    v10 = v3 & 1;
    v11 = 0;
    BugCheckParameter2 = 0LL;
    v24 = 0LL;
    v21 = 0LL;
    if ( PROCESS != KeGetCurrentThread()->ApcState.Process )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v11 = 1;
    }
    v12 = MiUnmapViewOfSectionPrepare(
            (_DWORD)v9,
            v4,
            v6,
            (unsigned int)&BugCheckParameter2,
            (__int64)&v21,
            (__int64)&v24);
    if ( v12 >= 0 )
    {
      v13 = BugCheckParameter2;
      v14 = v10 | 0x40000000;
      if ( (MiReadVadFlags(BugCheckParameter2) & 0x1C) != 4 )
      {
        if ( (MiReadVadFlags2(v15) & 2) != 0 )
        {
          v16 = **(_QWORD **)(v13 + 80);
          v17 = MiReferenceControlAreaFile(v16);
          v18 = *(_QWORD *)(v17 + 24);
          MiDereferenceControlAreaFile(v16, v17);
          CurrentThread = KeGetCurrentThread();
          v20 = CurrentThread->ApcState.Process;
          if ( (v20[1].DirectoryTableBase & 0x400000000000LL) != 0 )
          {
            if ( (unsigned int)PfCheckDeprioritizeFile(
                                 CurrentThread->ApcState.Process,
                                 HIDWORD(v20[1].CpuPartitionList.Blink),
                                 v18,
                                 (*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32))
                               - (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32))
                               + 1) )
              v14 |= 0x80000000;
          }
        }
        if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 && *(_QWORD *)(v13 + 80) )
          MiLogMapFileEvent(v13, 1062LL);
        v15 = v13;
      }
      MiDeleteVad(v15, v21, v14);
      v12 = 0;
    }
    if ( v11 )
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    if ( v12 >= 0 )
    {
      if ( v24 )
        DbgkUnMapViewOfSection(v9, v24);
    }
    ObfDereferenceObjectWithTag(v9, 0x77566D4Du);
    return (unsigned int)v12;
  }
  return result;
}
