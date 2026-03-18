/*
 * XREFs of NtLoadEnclaveData @ 0x140AEE740
 * Callers:
 *     DifNtLoadEnclaveDataWrapper @ 0x14067A450 (DifNtLoadEnclaveDataWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     MiDereferenceEnclaveModule @ 0x140876560 (MiDereferenceEnclaveModule.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140876584 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140876988 (MiLoadSectionIntoVsmEnclave.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkMapViewOfSection @ 0x1409C37E4 (DbgkMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x140AEEB74 (MiCopyPagesIntoEnclave.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtLoadEnclaveData(
        ULONG_PTR a1,
        __int64 a2,
        void *a3,
        struct _KLOCK_ENTRIES *a4,
        int a5,
        void *a6,
        size_t Size,
        __int64 *a8,
        unsigned int *a9)
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
  unsigned int *v38; // [rsp+B0h] [rbp-B8h]
  ULONG_PTR v39; // [rsp+C0h] [rbp-A8h]
  __int64 *v40; // [rsp+C8h] [rbp-A0h]
  _OWORD v41[3]; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v42[32]; // [rsp+100h] [rbp-68h] BYREF

  v35 = (__int64)a4;
  Base = a3;
  *(_QWORD *)v31 = a2;
  BugCheckParameter1 = a1;
  v39 = a1;
  Src = a6;
  v9 = Size;
  v28 = Size;
  v40 = a8;
  v38 = a9;
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
    if ( a9 )
    {
      ULongFromUser = RtlReadULongFromUser(a9);
      RtlWriteULongToUser(a9, ULongFromUser);
    }
    if ( a8 )
    {
      ULong64FromUser = RtlReadULong64FromUser(a8);
      RtlWriteULong64ToUser(a8, ULong64FromUser);
    }
  }
  if ( (_DWORD)Size )
  {
    if ( (unsigned int)Size > 0xFFFF )
    {
      LODWORD(Src) = -1073741820;
      goto LABEL_19;
    }
    if ( (unsigned int)v28 > 0x20 )
    {
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = (_BYTE *)ExAllocatePoolMm(64LL, (unsigned int)Size, 1230007877, CurrentProcessorColor | 0x80000000);
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
      RtlCopyFromUser(PoolMm, Src, (unsigned int)Size);
    else
      RtlCopyVolatileMemory(PoolMm, Src, (unsigned int)Size);
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
                       8LL,
                       PsProcessType,
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
                a5,
                &v33);
      }
      else
      {
        v23 = (void *)PsReferencePrimaryTokenWithTag(*(__int64 *)v32, 0x746C6644u, v18, a4);
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
    LODWORD(Src) = MiCopyPagesIntoEnclave((ULONG_PTR)Object, (__int64)Base, v20, a5, (__int64)&v33, (__int64)&v29);
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
      *(_QWORD *)(v12 + 16),
      (__int64)a4,
      Tag,
      *(_DWORD *)(v12 + 36),
      *(_DWORD *)(v12 + 40));
    MiDereferenceEnclaveModule((volatile signed __int32 *)v12);
  }
  if ( a8 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(a8, v33);
    else
      *a8 = v33;
  }
  if ( a9 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a9, v29);
    else
      *a9 = v29;
  }
  return (unsigned int)Src;
}
