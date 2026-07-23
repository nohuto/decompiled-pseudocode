/*
 * XREFs of NtQueryWnfStateData @ 0x1409C5400
 * Callers:
 *     DifNtQueryWnfStateDataWrapper @ 0x14068A790 (DifNtQueryWnfStateDataWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x14090DC10 (ExpWnfValidatePubSubPreconditions.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409C4A4C (ExpWnfCheckCrossScopeAccess.c)
 *     ExpCaptureWnfStateName @ 0x1409C58F8 (ExpCaptureWnfStateName.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409C59E0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfReadStateData @ 0x1409C5AC8 (ExpWnfReadStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1409C7310 (ExpWnfLookupNameInstance.c)
 *     ExpWnfLookupPermanentName @ 0x1409C8E98 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x1409CB5E8 (ExpWnfCreateNameInstance.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  unsigned int *v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  __int64 v10; // r14
  NTSTATUS NameInstance; // esi
  __int64 v12; // r8
  ULONG ULongFromUser; // ebx
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
  ULONG v28; // [rsp+48h] [rbp-D0h]
  PVOID P; // [rsp+50h] [rbp-C8h] BYREF
  void *v30; // [rsp+58h] [rbp-C0h]
  PWNF_CHANGE_STAMP v31; // [rsp+60h] [rbp-B8h]
  int v32[2]; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-A8h]
  ULONG v34; // [rsp+78h] [rbp-A0h]
  __int128 *v35; // [rsp+88h] [rbp-90h]
  void *Buf1; // [rsp+90h] [rbp-88h] BYREF
  volatile void *Address; // [rsp+98h] [rbp-80h]
  __int128 Object; // [rsp+A0h] [rbp-78h] BYREF
  int v39; // [rsp+B0h] [rbp-68h]
  __int128 *v40; // [rsp+B8h] [rbp-60h]
  __int128 v41; // [rsp+C0h] [rbp-58h] BYREF

  v6 = ChangeStamp;
  v31 = ChangeStamp;
  v30 = (void *)ExplicitScope;
  Address = Buffer;
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
  NameInstance = ExpCaptureWnfStateName((void *)StateName);
  if ( NameInstance >= 0 )
  {
    if ( TypeId )
    {
      if ( PreviousMode )
        RtlCopyFromUser(&v41, (void *)TypeId, 0x10uLL);
      else
        RtlCopyVolatileMemory(&v41, TypeId, 0x10uLL);
      v35 = &v41;
      v40 = &v41;
      v6 = v31;
    }
    if ( PreviousMode )
    {
      ULongFromUser = RtlReadULongFromUser(BufferSize);
      v28 = ULongFromUser;
    }
    else
    {
      ULongFromUser = *BufferSize;
      v28 = *BufferSize;
    }
    v34 = ULongFromUser;
    if ( PreviousMode )
    {
      v14 = RtlReadULongFromUser(v6);
      RtlWriteULongToUser(v6, v14);
      v15 = RtlReadULongFromUser(BufferSize);
      RtlWriteULongToUser(BufferSize, v15);
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
          NameInstance = ExpWnfReadStateData(v27, v21, v31, Address, v28, BufferSize);
        }
        else
        {
          if ( PreviousMode )
            RtlWriteULongToUser(v31, 0);
          else
            *v31 = 0;
          if ( PreviousMode )
            RtlWriteULongToUser(BufferSize, 0);
          else
            *BufferSize = 0;
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
      return NameInstance;
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
  return NameInstance;
}
