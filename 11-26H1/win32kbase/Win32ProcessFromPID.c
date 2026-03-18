/*
 * XREFs of Win32ProcessFromPID @ 0x1401C38F8
 * Callers:
 *     _RegisterLogonProcess @ 0x1401D98D0 (_RegisterLogonProcess.c)
 * Callees:
 *     LockProcessByClientId @ 0x14015E6E8 (LockProcessByClientId.c)
 */

__int64 __fastcall Win32ProcessFromPID(void *a1)
{
  __int64 v1; // rbx
  __int64 ProcessWin32Process; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(a1, (PEPROCESS *)&Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    if ( ProcessWin32Process )
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v1 = ProcessWin32Process;
    ObfDereferenceObject(Object);
  }
  return v1;
}
