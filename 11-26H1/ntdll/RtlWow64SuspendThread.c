/*
 * XREFs of RtlWow64SuspendThread @ 0x180138860
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWow64OpenThreadProcess @ 0x1800F94C8 (RtlpWow64OpenThreadProcess.c)
 *     RtlpWow64IsNinjaSuspendRequiredForThread @ 0x180138A44 (RtlpWow64IsNinjaSuspendRequiredForThread.c)
 *     RtlpWow64NinjaSuspendThread @ 0x180138AD8 (RtlpWow64NinjaSuspendThread.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtSuspendThread @ 0x180162930 (NtSuspendThread.c)
 */

__int64 __fastcall RtlWow64SuspendThread(__int64 a1, __int64 a2, __int64 a3)
{
  int IsNinjaSuspendRequiredForThread; // ebx
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF
  int v9; // [rsp+70h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+38h] BYREF

  Handle = 0LL;
  v9 = 0;
  v8 = 0LL;
  IsNinjaSuspendRequiredForThread = RtlpWow64OpenThreadProcess(a1, a2, a3, &Handle, &v8);
  if ( IsNinjaSuspendRequiredForThread >= 0 )
  {
    IsNinjaSuspendRequiredForThread = RtlpWow64IsNinjaSuspendRequiredForThread(Handle, &v8, &v9);
    if ( IsNinjaSuspendRequiredForThread >= 0 )
    {
      if ( v9 )
        v6 = RtlpWow64NinjaSuspendThread(Handle, a1, &v8, a2);
      else
        v6 = NtSuspendThread(a1, a2);
      IsNinjaSuspendRequiredForThread = v6;
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)IsNinjaSuspendRequiredForThread;
}
