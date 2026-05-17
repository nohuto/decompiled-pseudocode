/*
 * XREFs of RtlpWow64OpenThreadProcess @ 0x1800F94C8
 * Callers:
 *     RtlWow64SuspendThread @ 0x180138860 (RtlWow64SuspendThread.c)
 *     RtlpWow64ChangeThreadStateSuspend @ 0x180138908 (RtlpWow64ChangeThreadStateSuspend.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x18015F400 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 */

__int64 __fastcall RtlpWow64OpenThreadProcess(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _OWORD *a5)
{
  __int64 result; // rax
  int v7; // ebx
  __int128 v8; // [rsp+48h] [rbp-11h] BYREF
  __int128 v9; // [rsp+58h] [rbp-1h] BYREF
  __int64 v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+70h] [rbp+17h]
  _DWORD v12[2]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  int v15; // [rsp+90h] [rbp+37h]
  int v16; // [rsp+94h] [rbp+3Bh]
  __int128 v17; // [rsp+98h] [rbp+3Fh]
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF

  v12[1] = 0;
  v16 = 0;
  v10 = 0LL;
  v8 = 0LL;
  v11 = 0;
  v9 = 0LL;
  Handle = 0LL;
  result = ZwDuplicateObject(-1LL, a1, -1LL, &Handle, 2048, 0, 0);
  if ( (int)result >= 0 )
  {
    v7 = ZwQueryInformationThread(Handle, 0LL, &v8, 48LL, 0LL);
    NtClose(Handle);
    if ( v7 >= 0 )
    {
      if ( a5 )
        *a5 = v9;
      if ( a4 )
      {
        if ( (void *)v9 == NtCurrentTeb()->ClientId.UniqueProcess )
        {
          *a4 = -1LL;
        }
        else
        {
          v12[0] = 48;
          v13 = 0LL;
          v15 = 0;
          v14 = 0LL;
          v17 = 0LL;
          return (unsigned int)NtOpenProcess(a4, 1106LL, v12, &v9);
        }
      }
    }
    return (unsigned int)v7;
  }
  return result;
}
