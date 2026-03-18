/*
 * XREFs of ?InitializeDCEGlobals@@YAJXZ @ 0x1401606D8
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeDCEGlobals(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  _QWORD *v3; // rcx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = (_QWORD *)(UserSessionState + 19672);
  *(_DWORD *)(UserSessionState + 19648) = 1000;
  *(_QWORD *)(UserSessionState + 19680) = UserSessionState + 19672;
  *(_DWORD *)(UserSessionState + 19652) = 100;
  *(_QWORD *)(UserSessionState + 19640) = 10LL;
  result = 0LL;
  *v3 = v3;
  return result;
}
