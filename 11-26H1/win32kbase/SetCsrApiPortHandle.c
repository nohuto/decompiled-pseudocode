/*
 * XREFs of SetCsrApiPortHandle @ 0x140194290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetCsrApiPortHandle(HANDLE Handle, int a2, int a3)
{
  NTSTATUS v4; // edi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 UserSessionState; // rbx
  __int64 v9; // rax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v4 = -1073741823;
  if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)Handle, a2, a3) + 71272)
    || (UserSessionState = W32GetUserSessionState(v6, v5, v7),
        Object = 0LL,
        v4 = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, 1, &Object, 0LL),
        *(_QWORD *)(UserSessionState + 71272) = Object,
        v4 < 0) )
  {
    *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 71272) = 0LL;
  }
  v9 = W32GetUserSessionState(v6, v5, v7);
  KeSetEvent(*(PRKEVENT *)(v9 + 68384), 1, 0);
  return (unsigned int)v4;
}
