/*
 * XREFs of MiInjectThreadForHotPatch @ 0x140876A14
 * Callers:
 *     MiHotPatchProcess @ 0x1408765A8 (MiHotPatchProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x1407298E0 (ZwCreateThreadEx.c)
 *     MiLogHotPatchOperationStatus @ 0x140878288 (MiLogHotPatchOperationStatus.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetThreadExitStatus @ 0x140A2AFF0 (PsGetThreadExitStatus.c)
 */

__int64 __fastcall MiInjectThreadForHotPatch(PVOID Argument, int a2, int a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *v7; // rdi
  struct _EX_RUNDOWN_REF *p_Blink; // r14
  BOOLEAN v9; // al
  int v10; // esi
  NTSTATUS v11; // eax
  int v12; // eax
  int v13; // r8d
  int v14; // r10d
  HANDLE ThreadHandle; // [rsp+60h] [rbp-68h] BYREF
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-58h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+20h] BYREF

  v3 = 0;
  Timeout.QuadPart = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ThreadHandle = 0LL;
  v7 = 0LL;
  Object = 0LL;
  p_Blink = (struct _EX_RUNDOWN_REF *)&KeGetCurrentThread()->ApcState.Process[1].ProfileListHead.Blink;
  v9 = ExAcquireRundownProtection_0(p_Blink);
  v10 = v9;
  if ( !v9 )
  {
    v3 = -1073741558;
    goto LABEL_17;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwCreateThreadEx(
          &ThreadHandle,
          0x1FFFFFu,
          &ObjectAttributes,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          (PUSER_THREAD_START_ROUTINE)stru_140FC11F0.SystemAffinityTokenListHead.Next,
          Argument,
          0,
          0LL,
          0LL,
          0LL,
          0LL);
  if ( v11 >= 0 )
  {
    v12 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x70486D4Du, (__int64)&Object, 0LL, 0LL);
    if ( v12 >= 0 )
    {
      ExReleaseRundownProtection_0(p_Blink);
      v7 = (struct _KTHREAD *)Object;
      v10 = 0;
      if ( !*((_BYTE *)Object + 644) && (*((_DWORD *)Object + 30) & 0x4000) == 0 )
      {
        Timeout.QuadPart = -100000000LL;
        if ( KeWaitForSingleObject(Object, WrKernel, 0, 0, &Timeout) != 258 && PsGetThreadExitStatus(v7) >= 0 )
          goto LABEL_17;
      }
    }
    else
    {
      v7 = (struct _KTHREAD *)Object;
      v3 = v12;
    }
  }
  else
  {
    v3 = v11;
  }
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
  {
    MiLogHotPatchOperationStatus(v14, a2, a3, (_DWORD)Argument, v13, 3);
  }
  if ( v10 )
    ExReleaseRundownProtection_0(p_Blink);
LABEL_17:
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x70486D4Du);
  return v3;
}
