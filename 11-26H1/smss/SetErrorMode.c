/*
 * XREFs of SetErrorMode @ 0x14001D490
 * Callers:
 *     GetLongPathNameW @ 0x14001C804 (GetLongPathNameW.c)
 * Callees:
 *     BaseSetLastNTError @ 0x14001E6D0 (BaseSetLastNTError.c)
 */

__int64 __fastcall SetErrorMode(int a1)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  char v4; // r10
  int v5; // r8d
  unsigned int v6; // edi
  int v8; // [rsp+40h] [rbp+8h] BYREF
  int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  v2 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &v8, 4u, 0LL);
  if ( v2 >= 0 )
  {
    if ( (v8 & 1) != 0 )
      v3 = v8 & 0xFFFFFFFE;
    else
      v3 = v8 | 1;
  }
  else
  {
    BaseSetLastNTError((unsigned int)v2);
    v3 = 0;
  }
  v4 = a1;
  v5 = a1 | 1;
  v6 = a1 & 0xFFFFFFFE;
  if ( (v4 & 1) == 0 )
    v6 = v5;
  ProcessInformation = v3 & 4 | v6;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &ProcessInformation, 4u);
  return v3;
}
