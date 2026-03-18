/*
 * XREFs of ValidateHwinsta @ 0x14015E900
 * Callers:
 *     NtUserCloseWindowStation @ 0x14015E860 (NtUserCloseWindowStation.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 */

__int64 __fastcall ValidateHwinsta(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, PVOID *a4)
{
  int v5; // eax
  __int64 v6; // rcx
  int *v7; // rbx
  unsigned int v8; // edi
  int v9; // ebx
  int *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a3, ExWindowStationObjectType, a2, (PVOID *)&v11, 0LL);
  v7 = v11;
  v8 = v5;
  *a4 = v11;
  if ( v5 < 0 )
  {
    SetLastNtError(v5);
    return v8;
  }
  v9 = *v7;
  if ( v9 == (unsigned int)W32GetCurrentWin32kSessionId(v6) )
    return v8;
  SetLastNtError(-1073741816);
  ObfDereferenceObject(*a4);
  return 3221225480LL;
}
