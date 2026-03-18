/*
 * XREFs of NtQueryWnfStateData @ 0x140949A90
 * Callers:
 *     DifNtQueryWnfStateDataWrapper @ 0x140686BB0 (DifNtQueryWnfStateDataWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140932040 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409490DC (ExpWnfCheckCrossScopeAccess.c)
 *     ExpCaptureWnfStateName @ 0x140949F88 (ExpCaptureWnfStateName.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14094A070 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfReadStateData @ 0x14094A158 (ExpWnfReadStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x14094B390 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x14094B9A0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfLookupPermanentName @ 0x14094D528 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x14094FCA8 (ExpWnfCreateNameInstance.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryWnfStateData(
        void *a1,
        void *a2,
        struct _KPROCESS *a3,
        unsigned int *a4,
        volatile void *a5,
        unsigned int *a6)
{
  unsigned int *v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  __int64 v10; // r14
  int NameInstance; // esi
  __int64 v12; // r8
  unsigned int ULongFromUser; // ebx
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rbx
  NTSTATUS v17; // r12d
  struct _KTHREAD *v18; // r8
  PEPROCESS Process; // rcx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // r14d
  int v23; // r14d
  void *v25; // rcx
  ULONG v26; // edx
  struct _EX_RUNDOWN_REF *v27; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-D0h]
  PVOID P; // [rsp+50h] [rbp-C8h] BYREF
  PEPROCESS v30; // [rsp+58h] [rbp-C0h]
  unsigned int *v31; // [rsp+60h] [rbp-B8h]
  int v32[2]; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-A8h]
  unsigned int v34; // [rsp+78h] [rbp-A0h]
  __int128 *v35; // [rsp+88h] [rbp-90h]
  void *Buf1; // [rsp+90h] [rbp-88h] BYREF
  volatile void *Address; // [rsp+98h] [rbp-80h]
  __int128 Object; // [rsp+A0h] [rbp-78h] BYREF
  int v39; // [rsp+B0h] [rbp-68h]
  __int128 *v40; // [rsp+B8h] [rbp-60h]
  __int128 v41; // [rsp+C0h] [rbp-58h] BYREF

  v6 = a4;
  v31 = a4;
  v30 = a3;
  Address = a5;
  v33 = 0LL;
  v41 = 0LL;
  v34 = 0;
  Buf1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v32 = 0LL;
  v27 = 0LL;
  LODWORD(v10) = 0;
  v35 = 0LL;
  Object = 0LL;
  NameInstance = ExpCaptureWnfStateName(a1);
  if ( NameInstance >= 0 )
  {
    if ( a2 )
    {
      if ( PreviousMode )
        RtlCopyFromUser(&v41, a2, 0x10uLL);
      else
        RtlCopyVolatileMemory(&v41, a2, 0x10uLL);
      v35 = &v41;
      v40 = &v41;
      v6 = v31;
    }
    if ( PreviousMode )
    {
      ULongFromUser = RtlReadULongFromUser(a6);
      v28 = ULongFromUser;
    }
    else
    {
      ULongFromUser = *a6;
      v28 = *a6;
    }
    v34 = ULongFromUser;
    if ( PreviousMode )
    {
      v14 = RtlReadULongFromUser(v6);
      RtlWriteULongToUser(v6, v14);
      v15 = RtlReadULongFromUser(a6);
      RtlWriteULongToUser(a6, v15);
      ProbeForWrite(Address, ULongFromUser, 1u);
    }
    v16 = v33;
    v33 = (v33 >> 4) & 3;
    v39 = v33;
    v10 = (v16 >> 6) & 0xF;
    LOBYTE(v12) = PreviousMode;
    NameInstance = ExpWnfCaptureScopeInstanceId(v10, v30, v12, &Buf1, &Object);
    if ( NameInstance >= 0 )
    {
      if ( PreviousMode )
      {
        v17 = 0;
        if ( v30 )
        {
          NameInstance = ExpWnfCheckCrossScopeAccess(v16);
          if ( NameInstance < 0 )
            goto LABEL_32;
        }
      }
      else
      {
        v17 = 1;
      }
      if ( PreviousMode )
      {
        v18 = KeGetCurrentThread();
        Process = v18->ApcState.Process;
      }
      else
      {
        LODWORD(v18) = 0;
        Process = PsInitialSystemProcess;
      }
      v30 = Process;
      NameInstance = ExpWnfResolveScopeInstance((int)v32, (int)Process, (int)v18, (v16 >> 6) & 0xF, Buf1);
      if ( NameInstance >= 0 )
      {
        v20 = ExpWnfLookupNameInstance(*(_QWORD *)v32, v16, &v27);
        NameInstance = v20;
        if ( v20 != -1073741772 || (_DWORD)v33 == 3 )
        {
          if ( v20 < 0 )
            goto LABEL_32;
          NameInstance = ExpWnfValidatePubSubPreconditions(1u, (__int64)&v27[7], 0, v35, v17);
          if ( NameInstance < 0 )
            goto LABEL_32;
        }
        else
        {
          NameInstance = ExpWnfLookupPermanentName(v16, &P);
          if ( NameInstance < 0 )
            goto LABEL_32;
          NameInstance = ExpWnfValidatePubSubPreconditions(1u, (__int64)P, 0, v35, v17);
          if ( NameInstance < 0 )
            goto LABEL_32;
          if ( (_DWORD)v10 == 5 || (v16 & 0x400) != 0 )
          {
            NameInstance = ExpWnfCreateNameInstance(v32[0], v16, (_DWORD)P, (_DWORD)v30, (__int64)&v27);
            ExFreePoolWithTag(P, 0x20666E57u);
            P = 0LL;
            if ( NameInstance < 0 )
              goto LABEL_32;
          }
        }
        if ( v27 )
        {
          LOBYTE(v21) = PreviousMode;
          NameInstance = ExpWnfReadStateData(v27, v21, v31, Address, v28, a6);
        }
        else
        {
          if ( PreviousMode )
            RtlWriteULongToUser(v31, 0);
          else
            *v31 = 0;
          if ( PreviousMode )
            RtlWriteULongToUser(a6, 0);
          else
            *a6 = 0;
          NameInstance = 0;
        }
      }
    }
  }
LABEL_32:
  if ( v27 )
    ExReleaseRundownProtection_0(v27 + 1);
  if ( *(_QWORD *)v32 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v32 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  v22 = v10 - 1;
  if ( !v22 )
  {
    v25 = (void *)Object;
    if ( !(_QWORD)Object )
      return (unsigned int)NameInstance;
    v26 = 2035381072;
    goto LABEL_44;
  }
  v23 = v22 - 1;
  if ( v23 )
  {
    if ( v23 == 1 )
    {
      v25 = (void *)Object;
      if ( (_QWORD)Object )
      {
        v26 = 543583831;
LABEL_44:
        ObfDereferenceObjectWithTag(v25, v26);
      }
    }
  }
  else if ( (_QWORD)Object && PreviousMode == 1 )
  {
    ExFreePoolWithTag((PVOID)Object, 0);
  }
  return (unsigned int)NameInstance;
}
