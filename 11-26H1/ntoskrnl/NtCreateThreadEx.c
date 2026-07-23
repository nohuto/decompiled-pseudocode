/*
 * XREFs of NtCreateThreadEx @ 0x140A79100
 * Callers:
 *     DifNtCreateThreadExWrapper @ 0x140677860 (DifNtCreateThreadExWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D9D30 (RtlGetExtendedContextLength2.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateUserContext @ 0x140A79090 (PspCreateUserContext.c)
 *     PspBuildCreateProcessContext @ 0x140A79424 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x140A79FBC (PspDeleteCreateProcessContext.c)
 *     PspCreateThread @ 0x140A7A214 (PspCreateThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateThreadEx(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        ULONG CreateFlags,
        SIZE_T ZeroBits,
        SIZE_T StackSize,
        SIZE_T MaximumStackSize,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  __int64 v13; // r12
  PVOID v14; // r15
  void *v15; // rdi
  NTSTATUS result; // eax
  NTSTATUS Thread; // ebx
  PVOID v18; // rsi
  unsigned int v19; // r15d
  ULONG v20; // r13d
  __int64 Pool2; // rax
  __int64 v22; // rbx
  PUSER_THREAD_START_ROUTINE v23; // r13
  __int64 ULong64FromUser; // rax
  PVOID Object; // [rsp+70h] [rbp-2A8h] BYREF
  PCONTEXT_EX ContextLength; // [rsp+78h] [rbp-2A0h] BYREF
  ACCESS_MASK v27; // [rsp+80h] [rbp-298h]
  PUSER_THREAD_START_ROUTINE v28; // [rsp+88h] [rbp-290h]
  PVOID v29; // [rsp+90h] [rbp-288h]
  HANDLE v30; // [rsp+98h] [rbp-280h]
  POBJECT_ATTRIBUTES v31; // [rsp+A0h] [rbp-278h]
  _BYTE v32[24]; // [rsp+B0h] [rbp-268h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-250h]

  v30 = ProcessHandle;
  v31 = ObjectAttributes;
  v27 = DesiredAccess;
  v28 = StartRoutine;
  v29 = Argument;
  Object = 0LL;
  LODWORD(ContextLength) = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( (CreateFlags & 0xFFFFFF80) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(ThreadHandle);
    RtlWriteULong64ToUser(ThreadHandle, ULong64FromUser);
  }
  memset_0(v32, 0, 0x218uLL);
  if ( !AttributeList || (result = PspBuildCreateProcessContext(AttributeList), result >= 0) )
  {
    Thread = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    if ( Thread >= 0 )
    {
      v18 = Object;
      if ( (*((_BYTE *)Object + 368) & 1) != 0 )
      {
        v23 = v28;
      }
      else
      {
        v19 = (*((_DWORD *)Object + 469) & 0x4000) != 0 ? 0x800 : 0;
        v20 = (*((_DWORD *)Object + 469) & 0x4000) != 0 ? 1048651 : 1048587;
        RtlGetExtendedContextLength2(v20, (PULONG)&ContextLength, v19);
        Pool2 = ExAllocatePool2(0x40uLL);
        v15 = (void *)Pool2;
        if ( !Pool2 )
        {
          Thread = -1073741670;
          goto LABEL_11;
        }
        v13 = Pool2 + 72;
        Object = (PVOID)(Pool2 + 112);
        *(_BYTE *)(Pool2 + 72) = 0;
        *(_QWORD *)(Pool2 + 88) = StackSize;
        *(_QWORD *)(Pool2 + 96) = MaximumStackSize;
        *(_QWORD *)(Pool2 + 80) = ZeroBits;
        v22 = stru_140FC11F0.TracingPrivate[0];
        RtlInitializeExtendedContext2((PCONTEXT)(Pool2 + 112), v20, &ContextLength, v19);
        v23 = v28;
        v14 = Object;
        PspCreateUserContext((__int64)Object, 1, v22, (__int64)v28, (__int64)v29);
      }
      ObfDereferenceObjectWithTag(v18, 0x72437350u);
      Thread = PspCreateThread(ThreadHandle, v27, v31, v30, 0LL, v32, v33, v14, v15, CreateFlags, v23, v29, v13);
    }
LABEL_11:
    PspDeleteCreateProcessContext(v32);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    return Thread;
  }
  return result;
}
