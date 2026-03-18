/*
 * XREFs of SetCsrApiPortHandle @ 0x140156FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetCsrApiPortHandle(HANDLE Handle, __int64 a2)
{
  NTSTATUS v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v3 = -1073741823;
  if ( *(_QWORD *)(W32GetUserSessionState(Handle, a2) + 71288)
    || (UserSessionState = W32GetUserSessionState(v5, v4),
        Object = 0LL,
        v7 = UserSessionState,
        v3 = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, 1, &Object, 0LL),
        *(_QWORD *)(v7 + 71288) = Object,
        v3 < 0) )
  {
    *(_QWORD *)(W32GetUserSessionState(v5, v4) + 71288) = 0LL;
  }
  v8 = W32GetUserSessionState(v5, v4);
  KeSetEvent(*(PRKEVENT *)(v8 + 68392), 1, 0);
  return (unsigned int)v3;
}
