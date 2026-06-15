/*
 * XREFs of sub_140061A30 @ 0x140061A30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_140061A30(__int64 a1, void *a2, HANDLE *a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  signed int LastError; // eax
  unsigned int v9; // ebx
  HANDLE v10; // rcx
  __int64 v11; // rdx
  HANDLE v12; // rcx
  unsigned int v13; // r9d
  unsigned int v14; // edx
  NTSTATUS v15; // ebx
  HANDLE TargetHandle[36]; // [rsp+40h] [rbp-C0h] BYREF

  TargetHandle[0] = 0LL;
  memset(&TargetHandle[2], 0, 0x108uLL);
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( !DuplicateHandle(v7, a2, CurrentProcess, TargetHandle, 0x400u, 0, 0) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_4;
  }
  v11 = *(unsigned __int16 *)(a1 + 544);
  v12 = TargetHandle[0];
  TargetHandle[v11 + 3] = (HANDLE)(*(_QWORD *)(a1 + 552) | (unsigned __int64)TargetHandle[v11 + 3]);
  v13 = (unsigned int)TargetHandle[2];
  v14 = v11 + 1;
  if ( LODWORD(TargetHandle[2]) <= v14 )
    v13 = v14;
  LODWORD(TargetHandle[2]) = v13;
  v15 = NtSetInformationThread(v12, ThreadEnableAlignmentFaultFixup|0x20, &TargetHandle[3], 8 * v13);
  if ( v15 < 0 )
  {
    v9 = v15 | 0x10000000;
LABEL_4:
    v10 = TargetHandle[0];
    goto LABEL_10;
  }
  v10 = 0LL;
  *a3 = TargetHandle[0];
  v9 = 0;
  TargetHandle[0] = 0LL;
LABEL_10:
  if ( v10 )
    CloseHandle(v10);
  return v9;
}
