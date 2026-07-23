/*
 * XREFs of NtWaitForMultipleObjects @ 0x140A2C5A0
 * Callers:
 *     DifNtWaitForMultipleObjectsWrapper @ 0x140695090 (DifNtWaitForMultipleObjectsWrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ObWaitForMultipleObjects @ 0x140A2C6D0 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __cdecl NtWaitForMultipleObjects(
        ULONG Count,
        HANDLE Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  __int64 v8; // rbx
  PLARGE_INTEGER v9; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  _QWORD v12[3]; // [rsp+48h] [rbp-250h] BYREF
  _BYTE v13[512]; // [rsp+60h] [rbp-238h] BYREF

  v8 = Count;
  v9 = Timeout;
  memset_0(v13, 0, sizeof(v13));
  v12[0] = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( Timeout )
    {
      v12[0] = RtlReadULong64FromUser(Timeout);
      v9 = (PLARGE_INTEGER)v12;
      v12[1] = v12;
    }
    RtlCopyFromUser(v13, Handles, 8 * v8);
  }
  else
  {
    memmove(v13, Handles, 8 * v8);
  }
  return ObWaitForMultipleObjects(v8, PreviousMode, Alertable, (__int64)v9);
}
