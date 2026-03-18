/*
 * XREFs of ?SetWaitForWinstaRundown@@YAXXZ @ 0x140139DDC
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     <none>
 */

void SetWaitForWinstaRundown(void)
{
  void *KernelEvent; // rbx
  __int64 v1; // rcx
  __int64 UserGdiSessionState; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ProcessHandle; // [rsp+80h] [rbp+10h] BYREF
  void *ThreadHandle; // [rsp+88h] [rbp+18h] BYREF

  ProcessHandle = 0LL;
  ThreadHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KernelEvent = (void *)CreateKernelEvent(1LL);
  UserGdiSessionState = W32GetUserGdiSessionState(v1);
  if ( ObOpenObjectByPointer(*(PVOID *)(UserGdiSessionState + 40), 0, 0LL, 2u, 0LL, 0, &ProcessHandle) < 0
    || (ObjectAttributes.Length = 48,
        memset(&ObjectAttributes.RootDirectory, 0, 20),
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        PsCreateSystemThread(
          &ThreadHandle,
          0x1FFFFFu,
          &ObjectAttributes,
          ProcessHandle,
          0LL,
          WaitForWinstaRundown,
          KernelEvent) < 0) )
  {
    if ( !KernelEvent )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( KernelEvent )
  {
    KeWaitForSingleObject(KernelEvent, WrUserRequest, 0, 0, 0LL);
LABEL_6:
    Win32FreePool(KernelEvent);
    goto LABEL_7;
  }
  UserSleep(100LL);
LABEL_7:
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
}
