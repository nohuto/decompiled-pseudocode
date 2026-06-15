/*
 * XREFs of sub_140036FD0 @ 0x140036FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140036FD0(__int64 a1, void *a2, HANDLE *a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  __int64 v8; // rcx
  HANDLE v9; // rcx
  signed int v10; // ebx
  signed int LastError; // eax
  HANDLE TargetHandle; // [rsp+78h] [rbp+20h] BYREF

  TargetHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( DuplicateHandle(v7, a2, CurrentProcess, &TargetHandle, 0x2000u, 0, 0) )
  {
    v8 = *(_QWORD *)(a1 + 280);
    if ( !v8 || (v10 = sub_1400B6010(v8), v10 >= 0) )
    {
      v9 = 0LL;
      *a3 = TargetHandle;
      v10 = 0;
      a3[1] = 0LL;
      TargetHandle = 0LL;
      goto LABEL_4;
    }
  }
  else
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
  }
  v9 = TargetHandle;
LABEL_4:
  if ( v9 )
    CloseHandle(v9);
  return (unsigned int)v10;
}
