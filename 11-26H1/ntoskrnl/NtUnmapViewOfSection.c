/*
 * XREFs of NtUnmapViewOfSection @ 0x1409C3E60
 * Callers:
 *     DifNtUnmapViewOfSectionWrapper @ 0x140690870 (DifNtUnmapViewOfSectionWrapper.c)
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

__int64 __fastcall NtUnmapViewOfSection(ULONG_PTR BugCheckParameter1, unsigned __int64 a2)
{
  int v2; // esi
  char PreviousMode; // bl
  __int64 result; // rax
  PRKPROCESS v6; // rdi
  int v7; // ebp
  int v8; // ebx
  ULONG_PTR v9; // rsi
  ULONG_PTR v10; // rcx
  int v11; // r14d
  int v12; // r8d
  __int64 v13; // rbx
  ULONG_PTR v14; // rax
  __int64 v15; // r15
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *v17; // r10
  ULONG_PTR v18; // [rsp+40h] [rbp-88h] BYREF
  PRKPROCESS PROCESS; // [rsp+48h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-78h] BYREF
  __int64 v21; // [rsp+58h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  v2 = a2;
  PROCESS = 0LL;
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
    v6 = PROCESS;
    memset(&ApcState, 0, sizeof(ApcState));
    v7 = 0;
    BugCheckParameter2 = 0LL;
    v21 = 0LL;
    v18 = 0LL;
    if ( PROCESS != KeGetCurrentThread()->ApcState.Process )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v7 = 1;
    }
    v8 = MiUnmapViewOfSectionPrepare((_DWORD)v6, v2, 0, (unsigned int)&BugCheckParameter2, (__int64)&v18, (__int64)&v21);
    if ( v8 >= 0 )
    {
      v9 = BugCheckParameter2;
      if ( (MiReadVadFlags(BugCheckParameter2) & 0x1C) == 4 )
      {
        v12 = 0x40000000;
      }
      else
      {
        v11 = 0x40000000;
        if ( (MiReadVadFlags2(v10) & 2) != 0 )
        {
          v13 = **(_QWORD **)(v9 + 80);
          v14 = MiReferenceControlAreaFile(v13);
          v15 = *(_QWORD *)(v14 + 24);
          MiDereferenceControlAreaFile(v13, v14);
          CurrentThread = KeGetCurrentThread();
          v17 = CurrentThread->ApcState.Process;
          if ( (v17[1].DirectoryTableBase & 0x400000000000LL) != 0 )
          {
            if ( (unsigned int)PfCheckDeprioritizeFile(
                                 CurrentThread->ApcState.Process,
                                 HIDWORD(v17[1].CpuPartitionList.Blink),
                                 v15,
                                 (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
                               - (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
                               + 1) )
              v11 = -1073741824;
          }
        }
        if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 && *(_QWORD *)(v9 + 80) )
          MiLogMapFileEvent(v9, 1062LL);
        v12 = v11;
        v10 = v9;
      }
      MiDeleteVad(v10, v18, v12);
      v8 = 0;
    }
    if ( v7 )
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    if ( v8 >= 0 )
    {
      if ( v21 )
        DbgkUnMapViewOfSection(v6, v21);
    }
    ObfDereferenceObjectWithTag(v6, 0x77566D4Du);
    return (unsigned int)v8;
  }
  return result;
}
