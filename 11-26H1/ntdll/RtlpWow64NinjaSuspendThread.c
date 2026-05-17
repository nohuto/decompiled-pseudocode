/*
 * XREFs of RtlpWow64NinjaSuspendThread @ 0x180138AD8
 * Callers:
 *     RtlWow64SuspendThread @ 0x180138860 (RtlWow64SuspendThread.c)
 *     RtlpWow64ChangeThreadStateSuspend @ 0x180138908 (RtlpWow64ChangeThreadStateSuspend.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180076230 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwQueryObject @ 0x18015F140 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpWow64NinjaSuspendThread(__int64 a1, __int64 a2, void **a3, _DWORD *a4)
{
  HANDLE v8; // rdi
  int Object; // ebx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-89h]
  __int64 v14; // [rsp+60h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-51h] BYREF
  _OWORD v16[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v17; // [rsp+90h] [rbp-29h]
  int v18; // [rsp+98h] [rbp-21h]
  _OWORD v19[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+17h]

  v17 = 0LL;
  v18 = 0;
  v20 = 0LL;
  v14 = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  memset(v16, 0, sizeof(v16));
  memset(v19, 0, sizeof(v19));
  Object = ZwQueryObject(a2, 0LL, v19, 56LL, 0LL);
  if ( Object >= 0 )
  {
    if ( (BYTE4(v19[0]) & 2) != 0 )
    {
      Object = ZwDuplicateObject(-1LL, a2, a1, &v14, 1050634, 0, 0);
      if ( Object >= 0 )
      {
        v10 = v14 | 1;
        if ( *a3 == NtCurrentTeb()->ClientId.UniqueProcess )
          v10 = v14;
        v11 = RtlpCreateUserThreadEx(
                a1,
                0LL,
                102,
                0,
                0LL,
                0LL,
                v13,
                (__int64)RtlpWow64SuspendThreadWorker,
                v10,
                &Handle,
                0LL);
        v8 = Handle;
        Object = v11;
        if ( v11 >= 0 )
        {
          NtWaitForSingleObject(Handle, 0, 0LL);
          ZwQueryInformationThread(v8, 0LL, v16, 48LL, 0LL);
          Object = v16[0];
          if ( SLODWORD(v16[0]) >= 0 )
          {
            if ( a4 )
              *a4 = v16[0];
          }
        }
      }
    }
    else
    {
      Object = -1073741790;
    }
  }
  if ( v14 )
    ZwDuplicateObject(a1, v14, 0LL, 0LL, 0, 0, 3);
  if ( v8 )
    NtClose(v8);
  return (unsigned int)Object;
}
