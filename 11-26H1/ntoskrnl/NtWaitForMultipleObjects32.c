/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x140A2C450
 * Callers:
 *     DifNtWaitForMultipleObjects32Wrapper @ 0x140694EF0 (DifNtWaitForMultipleObjects32Wrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ObWaitForMultipleObjects @ 0x140A2C6D0 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __cdecl NtWaitForMultipleObjects32(
        ULONG Count,
        LONG Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  __int64 v8; // rsi
  PLARGE_INTEGER v9; // rdi
  KPROCESSOR_MODE PreviousMode; // r14
  _QWORD *v11; // rax
  __int64 v12; // r9
  _QWORD v14[3]; // [rsp+48h] [rbp-350h] BYREF
  _BYTE v15[256]; // [rsp+60h] [rbp-338h] BYREF
  _BYTE v16[512]; // [rsp+160h] [rbp-238h] BYREF

  v8 = Count;
  v9 = Timeout;
  memset_0(v16, 0, sizeof(v16));
  v14[0] = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( Timeout )
    {
      v14[0] = RtlReadULong64FromUser(Timeout);
      v9 = (PLARGE_INTEGER)v14;
      v14[1] = v14;
    }
    RtlCopyFromUser(v15, Handles, 4 * v8);
    Handles = (LONG *)v15;
    v14[2] = v15;
  }
  if ( (_DWORD)v8 )
  {
    v11 = v16;
    v12 = v8;
    do
    {
      *v11++ = *Handles++;
      --v12;
    }
    while ( v12 );
  }
  return ObWaitForMultipleObjects(v8, PreviousMode, Alertable, (__int64)v9);
}
