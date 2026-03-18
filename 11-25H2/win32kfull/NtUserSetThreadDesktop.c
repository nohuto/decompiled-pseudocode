/*
 * XREFs of NtUserSetThreadDesktop @ 0x140114020
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     xxxSetThreadDesktop @ 0x14011499C (xxxSetThreadDesktop.c)
 */

_BOOL8 __fastcall NtUserSetThreadDesktop(__int64 a1)
{
  __int64 v2; // rdx
  NTSTATUS v3; // edi
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  BOOL v6; // ebx
  __int64 v8; // rbx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = 0LL;
  EnterCrit(0LL, 0LL);
  LOBYTE(v2) = 1;
  v3 = ValidateHdesk(a1, v2, 0LL, &Object);
  if ( v3 < 0 )
  {
    if ( a1 || (v8 = *(_QWORD *)(W32GetUserGdiSessionState() + 40), PsGetCurrentProcess() != v8) )
    {
      v6 = 0;
      goto LABEL_4;
    }
    v3 = xxxSetThreadDesktop(0LL, 0LL);
    v5 = v3;
  }
  else
  {
    v3 = xxxSetThreadDesktop(a1, Object);
    ObfDereferenceObject(Object);
    v5 = v3;
  }
  v6 = v5 >= 0;
  if ( v3 < 0 )
LABEL_4:
    SetLastNtError(v3);
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
