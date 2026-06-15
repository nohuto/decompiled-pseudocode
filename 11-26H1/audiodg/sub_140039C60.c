/*
 * XREFs of sub_140039C60 @ 0x140039C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140039C60(__int64 a1, void *a2, HANDLE *a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  signed int LastError; // eax
  signed int v9; // ebx
  HANDLE v10; // rcx
  __int64 v12; // rcx
  HANDLE TargetHandle; // [rsp+78h] [rbp+20h] BYREF

  TargetHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( !DuplicateHandle(v7, a2, CurrentProcess, &TargetHandle, 0x400u, 0, 0) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_4;
  }
  v12 = *(_QWORD *)(a1 + 280);
  if ( v12 )
  {
    v9 = sub_1400B6010(v12);
    if ( v9 < 0 )
    {
LABEL_4:
      v10 = TargetHandle;
      goto LABEL_5;
    }
  }
  v10 = 0LL;
  *a3 = TargetHandle;
  v9 = 0;
  a3[1] = 0LL;
  TargetHandle = 0LL;
LABEL_5:
  if ( v10 )
    CloseHandle(v10);
  return (unsigned int)v9;
}
