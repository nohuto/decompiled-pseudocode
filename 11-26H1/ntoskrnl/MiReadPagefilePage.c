/*
 * XREFs of MiReadPagefilePage @ 0x1406E9750
 * Callers:
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MiSetPageTablePfnBuddy @ 0x1402A4030 (MiSetPageTablePfnBuddy.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiValidatePagefilePageHash @ 0x14038ED2C (MiValidatePagefilePageHash.c)
 *     SmPageRead @ 0x140390C8C (SmPageRead.c)
 *     MiInitializeInPageSupport @ 0x140398FF0 (MiInitializeInPageSupport.c)
 *     MiIsRetryIoStatus @ 0x140467310 (MiIsRetryIoStatus.c)
 *     MiStoreFaultComplete @ 0x14048E5F8 (MiStoreFaultComplete.c)
 *     MiReadFromMemoryPagefile @ 0x1404FC998 (MiReadFromMemoryPagefile.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiFlushAllFilesystemPages @ 0x1405343FC (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiReadPagefilePage(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r12
  CSHORT v6; // r13
  ULONG v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // edx
  unsigned __int64 v11; // rcx
  __int16 v12; // bx
  unsigned __int64 v13; // r15
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // r15
  __int64 v16; // r14
  int v17; // eax
  char v18; // bl
  int v19; // edx
  unsigned __int8 CurrentIrql; // bl
  NTSTATUS v21; // edi
  __int64 result; // rax
  struct _LIST_ENTRY BugCheckParameter2[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter4[11]; // [rsp+A0h] [rbp-60h] BYREF
  int v28; // [rsp+F8h] [rbp-8h]
  unsigned int v29; // [rsp+FCh] [rbp-4h]
  __int64 v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  struct _MDL MemoryDescriptorList; // [rsp+150h] [rbp+50h] BYREF
  __int64 v33; // [rsp+180h] [rbp+80h]
  int v35; // [rsp+258h] [rbp+158h] BYREF
  int v36; // [rsp+260h] [rbp+160h] BYREF
  void *v37; // [rsp+268h] [rbp+168h]

  v3 = a1;
  memset_0(BugCheckParameter2, 0, 0x1C0uLL);
  v4 = 48 * v3 - 0x220000000000LL;
  v5 = a2 << 25 >> 16;
  v37 = (void *)(v5 & 0xFFFFFFFFFFFFF000uLL);
  v6 = 8 * (((unsigned __int16)((v5 & 0xFFF) + 0x1FFF) >> 12) + 6);
  v7 = v5 & 0xFFF;
  while ( 1 )
  {
    v8 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
    MiInitializeInPageSupport(BugCheckParameter2, 0, 0LL);
    v9 = *(_QWORD *)(v4 + 16);
    if ( (v9 & 8) != 0 )
    {
      v10 = 1024;
      if ( (unsigned __int16)v9 >> 12 != *(_DWORD *)(v8 + 1300) )
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
    v11 = *(_QWORD *)(v4 + 16);
    v12 = v10 | v29 & 0xFBFF;
    v31 = -1LL;
    v29 = v10 | v29 & 0xFFBFFBFF | 0x400000;
    v13 = v11 >> 12;
    if ( (v11 & 8) != 0 )
    {
      if ( qword_140E2D8C0 && (v11 & 0x10) == 0 )
        v11 &= qword_140E2D8C8;
      v14 = HIDWORD(v11);
    }
    else
    {
      v14 = 0LL;
    }
    if ( (v12 & 0x400) == 0 )
      v14 <<= 12;
    BugCheckParameter4[0] = v14;
    MiSetPageTablePfnBuddy(v4, 0x10000000000uLL, 0);
    v15 = v13 & 0xF;
    MemoryDescriptorList.StartVa = v37;
    MemoryDescriptorList.MdlFlags = 16386;
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.Size = v6;
    MemoryDescriptorList.ByteOffset = v7;
    MemoryDescriptorList.ByteCount = 4096;
    v28 = 4096;
    v33 = v3;
    v16 = *(_QWORD *)(v8 + 8 * v15 + 22304);
    v30 = v16;
    if ( _bittest16((const signed __int16 *)(v16 + 172), 0xBu) )
    {
      MiReadFromMemoryPagefile(v16, (__int64)BugCheckParameter2);
    }
    else
    {
      if ( (v12 & 0x400) != 0 )
      {
        LODWORD(v25) = 0;
        v26 = 0LL;
        v17 = SmPageRead(
                *(_QWORD *)(*(_QWORD *)(v16 + 224) + 256LL),
                (int *)BugCheckParameter4,
                (int)&MemoryDescriptorList,
                (int)&Event,
                (__int64)&v25);
      }
      else
      {
        v17 = IoPageReadEx(
                *(PFILE_OBJECT *)(v16 + 24),
                (__int64)&MemoryDescriptorList,
                BugCheckParameter4,
                (__int64)&Event,
                (__int64)&v25,
                0,
                0LL);
      }
      if ( v17 < 0 )
      {
        LODWORD(v25) = v17;
        v26 = 0LL;
        KeSetEvent(&Event, 0, 0);
      }
    }
    KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
    v18 = 0;
    v35 = 0;
    if ( (v29 & 0x400) != 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v35);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v19) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v19);
      }
      v36 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v36);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      v18 = v35;
    }
    v21 = v25;
    if ( (int)v25 >= 0 && *(_QWORD *)(v16 + 184) )
    {
      v29 |= 0x800000u;
      v21 = MiValidatePagefilePageHash((__int64)BugCheckParameter2);
    }
    if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
    result = MiSetPageTablePfnBuddy(v4, 0LL, 0);
    if ( v21 >= 0 )
      break;
    if ( !MiIsRetryIoStatus(v21, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1);
      KeBugCheckEx(0x77u, v21, v21, v15, LODWORD(BugCheckParameter4[0]));
    }
    if ( (v18 & 1) != 0 )
    {
      v3 = a1;
      if ( (v18 & 2) == 0 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    v3 = a1;
  }
  if ( v26 != 4096 )
  {
    MiFlushAllFilesystemPages(1);
    KeBugCheckEx(0x77u, 2uLL, v21, v15, LODWORD(BugCheckParameter4[0]));
  }
  return result;
}
