/*
 * XREFs of ?SetWaitForWinstaRundown@@YAXXZ @ 0x140212C30
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
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
  KernelEvent = (void *)CreateKernelEvent(1LL, 0LL);
  UserGdiSessionState = W32GetUserGdiSessionState(v1);
  if ( ObOpenObjectByPointer(*(PVOID *)(UserGdiSessionState + 40), 0, 0LL, 2u, 0LL, 0, &ProcessHandle) < 0
    || (memset(&ObjectAttributes.RootDirectory, 0, 20),
        ObjectAttributes.Length = 48,
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
      goto LABEL_8;
  }
  else
  {
    if ( !KernelEvent )
    {
      UserSleep(100LL);
      goto LABEL_8;
    }
    KeWaitForSingleObject(KernelEvent, WrUserRequest, 0, 0, 0LL);
  }
  Win32FreePool(KernelEvent);
LABEL_8:
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
}
