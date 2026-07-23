/*
 * XREFs of NtLoadEnclaveData @ 0x140AF16E0
 * Callers:
 *     DifNtLoadEnclaveDataWrapper @ 0x14067E030 (DifNtLoadEnclaveDataWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     MiDereferenceEnclaveModule @ 0x14087C944 (MiDereferenceEnclaveModule.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14087C968 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14087CD6C (MiLoadSectionIntoVsmEnclave.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkMapViewOfSection @ 0x1409947C4 (DbgkMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtLoadEnclaveData(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        ULONG Protect,
        PVOID PageInformation,
        ULONG PageInformationLength,
        PSIZE_T NumberOfBytesWritten,
        PULONG EnclaveError)
{
  int v9; // ebx
  _BYTE *PoolMm; // rdi
  __int64 v11; // rsi
  __int64 v12; // r13
  char PreviousMode; // r15
  int ULongFromUser; // eax
  __int64 ULong64FromUser; // rax
  _KPROCESS *Process; // rax
  ULONG_PTR v17; // rax
  __int64 v18; // r8
  int v19; // ebx
  __int64 v20; // rbx
  int CurrentProcessorColor; // eax
  void *v23; // rbx
  int v24; // eax
  __int64 Tag; // [rsp+20h] [rbp-148h]
  void *Src; // [rsp+58h] [rbp-110h] BYREF
  int v27; // [rsp+60h] [rbp-108h]
  int v28; // [rsp+64h] [rbp-104h]
  __int64 v29; // [rsp+68h] [rbp-100h] BYREF
  PVOID Object; // [rsp+70h] [rbp-F8h] BYREF
  int v31[2]; // [rsp+78h] [rbp-F0h]
  int v32[2]; // [rsp+80h] [rbp-E8h]
  __int64 v33; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+98h] [rbp-D0h]
  ULONG_PTR BugCheckParameter1; // [rsp+A0h] [rbp-C8h]
  PVOID Base; // [rsp+A8h] [rbp-C0h]
  PULONG v38; // [rsp+B0h] [rbp-B8h]
  HANDLE v39; // [rsp+C0h] [rbp-A8h]
  PSIZE_T v40; // [rsp+C8h] [rbp-A0h]
  _OWORD v41[3]; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v42[32]; // [rsp+100h] [rbp-68h] BYREF

  v35 = BufferSize;
  Base = Buffer;
  *(_QWORD *)v31 = BaseAddress;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  v39 = ProcessHandle;
  Src = PageInformation;
  v9 = PageInformationLength;
  v28 = PageInformationLength;
  v40 = NumberOfBytesWritten;
  v38 = EnclaveError;
  memset(v41, 0, sizeof(v41));
  v33 = 0LL;
  LODWORD(v29) = 0;
  PoolMm = 0LL;
  v11 = 0LL;
  v27 = 0;
  Object = 0LL;
  v12 = 0LL;
  v34 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( EnclaveError )
    {
      ULongFromUser = RtlReadULongFromUser(EnclaveError);
      RtlWriteULongToUser(EnclaveError, ULongFromUser);
    }
    if ( NumberOfBytesWritten )
    {
      ULong64FromUser = RtlReadULong64FromUser(NumberOfBytesWritten);
      RtlWriteULong64ToUser(NumberOfBytesWritten, ULong64FromUser);
    }
  }
  if ( PageInformationLength )
  {
    if ( PageInformationLength > 0xFFFF )
    {
      LODWORD(Src) = -1073741820;
      goto LABEL_19;
    }
    if ( (unsigned int)v28 > 0x20 )
    {
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = (_BYTE *)ExAllocatePoolMm(64LL, PageInformationLength, 1230007877, CurrentProcessorColor | 0x80000000);
      *(_QWORD *)v32 = PoolMm;
      if ( !PoolMm )
      {
        LODWORD(Src) = -1073741670;
        goto LABEL_19;
      }
    }
    else
    {
      PoolMm = v42;
      *(_QWORD *)v32 = v42;
    }
    if ( PreviousMode )
      RtlCopyFromUser(PoolMm, Src, PageInformationLength);
    else
      RtlCopyVolatileMemory(PoolMm, Src, PageInformationLength);
    v9 = v28;
  }
  if ( (v31[0] & 0xFFF) != 0 )
  {
    LODWORD(Src) = -1073741584;
  }
  else if ( (v35 & 0xFFF) != 0 )
  {
    LODWORD(Src) = -1073741582;
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    *(_QWORD *)v32 = Process;
    if ( BugCheckParameter1 == -1LL )
    {
      Object = Process;
    }
    else
    {
      LODWORD(Src) = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       8,
                       (__int64)PsProcessType,
                       PreviousMode,
                       0x6D566D4Du,
                       &Object,
                       0LL,
                       0LL);
      if ( (int)Src < 0 )
        goto LABEL_19;
    }
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v41);
    v27 = 1;
    v17 = MiObtainReferencedVadEx(*(unsigned __int64 *)v31, 0LL, (int *)&Src);
    v11 = v17;
    if ( !v17 || (MiReadVadFlags(v17) & 0x880000) != 0x880000 )
    {
      LODWORD(Src) = -1073741800;
LABEL_14:
      v19 = v27;
      goto LABEL_20;
    }
    if ( (*(_DWORD *)(v11 + 72) & 1) == 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v11 + 80) + 76LL) )
      {
        v24 = MiLoadDataIntoVsmEnclave(
                *(ULONG_PTR *)v32,
                v11,
                PreviousMode,
                *(unsigned __int64 *)v31,
                v9,
                (int *)PoolMm,
                (unsigned __int64)Base,
                v35,
                Protect,
                &v33);
      }
      else
      {
        v23 = (void *)PsReferencePrimaryTokenWithTag(
                        *(__int64 *)v32,
                        0x746C6644u,
                        v18,
                        (struct _KLOCK_ENTRIES *)BufferSize);
        v28 = MiLoadSectionIntoVsmEnclave(
                (volatile signed __int32 *)v11,
                PreviousMode,
                (int)v23,
                *(unsigned __int64 *)v31,
                v28,
                PoolMm,
                &v34);
        v11 = 0LL;
        ObfDereferenceObject(v23);
        v12 = v34;
        v24 = v28;
      }
      LODWORD(Src) = v24;
      goto LABEL_14;
    }
    if ( v9 )
    {
      LODWORD(Src) = -1073741820;
      goto LABEL_14;
    }
    v20 = v35;
    if ( !v35 )
    {
      LODWORD(Src) = -1073741582;
      goto LABEL_14;
    }
    KiUnstackDetachProcess((__int64)v41, 0);
    LODWORD(Src) = MiCopyPagesIntoEnclave((ULONG_PTR)Object, (__int64)Base, v20, Protect, (__int64)&v33, (__int64)&v29);
  }
LABEL_19:
  v19 = 0;
LABEL_20:
  if ( v11 )
    MiUnlockAndDereferenceVad((volatile signed __int32 *)v11);
  if ( v19 )
    KiUnstackDetachProcess((__int64)v41, 0);
  if ( Object && BugCheckParameter1 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( PoolMm && PoolMm != v42 )
    ExFreePoolWithTag(PoolMm, 0);
  if ( v12 )
  {
    DbgkMapViewOfSection(
      (_KPROCESS *)Object,
      0LL,
      *(void **)(v12 + 16),
      BufferSize,
      Tag,
      *(_DWORD *)(v12 + 36),
      *(_DWORD *)(v12 + 40));
    MiDereferenceEnclaveModule((volatile signed __int32 *)v12);
  }
  if ( NumberOfBytesWritten )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(NumberOfBytesWritten, v33);
    else
      *NumberOfBytesWritten = v33;
  }
  if ( EnclaveError )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(EnclaveError, v29);
    else
      *EnclaveError = v29;
  }
  return (int)Src;
}
