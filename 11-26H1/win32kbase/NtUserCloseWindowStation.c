/*
 * XREFs of NtUserCloseWindowStation @ 0x14015E860
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ValidateHwinsta @ 0x14015E900 (ValidateHwinsta.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserCloseWindowStation(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 (__fastcall *v6)(__int64); // rax
  NTSTATUS v7; // edi
  ULONG v8; // eax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  Object = 0LL;
  LOBYTE(a2) = 1;
  if ( (int)ValidateHwinsta(a1, a2, 0LL, &Object) >= 0 )
  {
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 792LL);
    if ( v6 )
      v7 = v6(a1);
    else
      v7 = -1073741637;
    ObfDereferenceObject(Object);
    if ( v7 < 0 )
    {
      v8 = RtlNtStatusToDosError(v7);
      UserSetLastError(v8);
    }
    else
    {
      return 1LL;
    }
  }
  return v2;
}
