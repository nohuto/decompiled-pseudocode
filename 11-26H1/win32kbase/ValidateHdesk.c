/*
 * XREFs of ValidateHdesk @ 0x1401CEB10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 */

__int64 __fastcall ValidateHdesk(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, PVOID *a4)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  PVOID v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a3, (POBJECT_TYPE)ExDesktopObjectType, a2, &v9, 0LL);
  v6 = (__int64)v9;
  v7 = v5;
  *a4 = v9;
  if ( v5 < 0 )
  {
    SetLastNtError(v5);
  }
  else if ( *(_DWORD *)*a4 != (unsigned int)W32GetCurrentWin32kSessionId(v6) || (*((_DWORD *)*a4 + 12) & 0xE) != 0 )
  {
    v7 = -1073741816;
    SetLastNtError(-1073741816);
    ObfDereferenceObject(*a4);
  }
  return v7;
}
