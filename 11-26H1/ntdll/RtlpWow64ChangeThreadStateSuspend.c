/*
 * XREFs of RtlpWow64ChangeThreadStateSuspend @ 0x180138908
 * Callers:
 *     RtlWow64ChangeThreadState @ 0x180138610 (RtlWow64ChangeThreadState.c)
 * Callees:
 *     RtlpWow64OpenThreadProcess @ 0x1800F94C8 (RtlpWow64OpenThreadProcess.c)
 *     RtlpWow64IsNinjaSuspendRequiredForThread @ 0x180138A44 (RtlpWow64IsNinjaSuspendRequiredForThread.c)
 *     RtlpWow64NinjaSuspendThread @ 0x180138AD8 (RtlpWow64NinjaSuspendThread.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwResumeThread @ 0x18015F980 (ZwResumeThread.c)
 *     NtChangeThreadState @ 0x180160250 (NtChangeThreadState.c)
 */

__int64 __fastcall RtlpWow64ChangeThreadStateSuspend(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int IsNinjaSuspendRequiredForThread; // edi
  int v10; // ebx
  int v12; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  __int128 v14; // [rsp+40h] [rbp-10h] BYREF

  Handle = 0LL;
  v12 = 0;
  v14 = 0LL;
  IsNinjaSuspendRequiredForThread = RtlpWow64OpenThreadProcess(a2, a2, a3, &Handle, &v14);
  if ( IsNinjaSuspendRequiredForThread >= 0 )
  {
    IsNinjaSuspendRequiredForThread = RtlpWow64IsNinjaSuspendRequiredForThread(Handle, &v14, &v12);
    if ( IsNinjaSuspendRequiredForThread >= 0 )
    {
      if ( v12 )
      {
        if ( a4 )
        {
          IsNinjaSuspendRequiredForThread = -1073741820;
        }
        else if ( a3 || a5 )
        {
          IsNinjaSuspendRequiredForThread = -1073741811;
        }
        else
        {
          IsNinjaSuspendRequiredForThread = RtlpWow64NinjaSuspendThread(Handle, a2, &v14, 0LL);
          if ( IsNinjaSuspendRequiredForThread >= 0 )
          {
            v10 = NtChangeThreadState(a1, a2, 0LL, 0LL, 0, 0);
            ZwResumeThread(a2, 0LL);
            IsNinjaSuspendRequiredForThread = 0;
            if ( v10 < 0 )
              IsNinjaSuspendRequiredForThread = v10;
          }
        }
      }
      else
      {
        IsNinjaSuspendRequiredForThread = NtChangeThreadState(a1, a2, 0LL, a3, a4, a5);
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)IsNinjaSuspendRequiredForThread;
}
