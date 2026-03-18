/*
 * XREFs of DbgkUserReportWorkRoutine @ 0x14078AC30
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     IoThreadToProcess @ 0x1404703A0 (IoThreadToProcess.c)
 *     PsMultiResumeThread @ 0x1404FE168 (PsMultiResumeThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x140723590 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x1407236F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1407237B0 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x140723E30 (ZwResumeThread.c)
 *     ZwCreateThreadEx @ 0x140724D10 (ZwCreateThreadEx.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall DbgkUserReportWorkRoutine(char *P)
{
  __int64 v2; // rdi
  struct _KPROCESS *v3; // rax
  int Thread; // edx
  char *v5; // rcx
  PVOID BaseAddress; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE ThreadHandle; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v11; // [rsp+90h] [rbp-78h]
  __int128 v12; // [rsp+A0h] [rbp-68h]
  __int128 v13; // [rsp+B0h] [rbp-58h]
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-48h] BYREF

  RegionSize[2] = (ULONG_PTR)P;
  Handle = 0LL;
  ThreadHandle = 0LL;
  BaseAddress = 0LL;
  RegionSize[0] = 168LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)&v13 = 0LL;
  DWORD2(v13) = 0;
  v2 = *(_QWORD *)P;
  RegionSize[1] = v2;
  v3 = IoThreadToProcess((PETHREAD)v2);
  KeStackAttachProcess(v3, &ApcState);
  Thread = ObOpenObjectByPointer((PVOID)v2, 0, 0LL, 0x72u, (POBJECT_TYPE)PsThreadType, 1, &Handle);
  if ( Thread >= 0 )
  {
    Thread = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x3000u, 4u);
    if ( Thread >= 0 )
    {
      *((_QWORD *)BaseAddress + 1) = *((_QWORD *)P + 1);
      *(_QWORD *)BaseAddress = Handle;
      if ( P[16] )
      {
        v5 = (char *)BaseAddress + 16;
        *((_OWORD *)BaseAddress + 1) = *(_OWORD *)(P + 24);
        *((_OWORD *)v5 + 1) = *(_OWORD *)(P + 40);
        *((_OWORD *)v5 + 2) = *(_OWORD *)(P + 56);
        *((_OWORD *)v5 + 3) = *(_OWORD *)(P + 72);
        *((_OWORD *)v5 + 4) = *(_OWORD *)(P + 88);
        *((_OWORD *)v5 + 5) = *(_OWORD *)(P + 104);
        *((_OWORD *)v5 + 6) = *(_OWORD *)(P + 120);
        *((_OWORD *)v5 + 7) = *(_OWORD *)(P + 136);
        *((_OWORD *)v5 + 8) = *(_OWORD *)(P + 152);
        *((_QWORD *)v5 + 18) = *((_QWORD *)P + 21);
      }
      LODWORD(v11) = 48;
      *((_QWORD *)&v11 + 1) = 0LL;
      DWORD2(v12) = 512;
      *(_QWORD *)&v12 = 0LL;
      v13 = 0LL;
      Thread = ZwCreateThreadEx((__int64)&ThreadHandle, 0x1FFFFFLL);
    }
    else
    {
      BaseAddress = 0LL;
    }
  }
  if ( Thread < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1440), 0xFFDFFFFF);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    PsMultiResumeThread(v2, 0LL, 1LL);
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, 0x8000u);
  }
  else
  {
    ZwSetInformationThread(ThreadHandle, ThreadDynamicCodePolicyInfo|ThreadAffinityMask, &qword_14002C8C8, 4u);
    ZwResumeThread((__int64)ThreadHandle, 0LL);
    ZwClose(ThreadHandle);
    ThreadHandle = 0LL;
  }
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  ExFreePoolWithTag(P, 0x4B474244u);
  return ObfDereferenceObject((PVOID)v2);
}
