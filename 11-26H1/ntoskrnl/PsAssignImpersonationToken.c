/*
 * XREFs of PsAssignImpersonationToken @ 0x140928740
 * Callers:
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 */

NTSTATUS __stdcall PsAssignImpersonationToken(PETHREAD Thread, HANDLE Token)
{
  struct _KTHREAD *CurrentThread; // r9
  NTSTATUS v4; // ebx
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // r9
  PVOID v7; // rsi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( !Token )
  {
    PsImpersonateClient(Thread, 0LL, 0, 0, SecurityImpersonation);
    return 0;
  }
  PreviousMode = CurrentThread->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Token, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v7 = Object;
    if ( *((_DWORD *)Object + 48) != 2 )
    {
      ObfDereferenceObject(Object);
      return -1073741656;
    }
    v4 = PsImpersonateClient(Thread, Object, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Object + 49));
    ObfDereferenceObject(v7);
    return v4;
  }
  return result;
}
