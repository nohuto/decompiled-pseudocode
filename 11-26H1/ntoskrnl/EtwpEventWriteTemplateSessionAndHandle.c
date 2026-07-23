/*
 * XREFs of EtwpEventWriteTemplateSessionAndHandle @ 0x14082BB28
 * Callers:
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS EtwpEventWriteTemplateSessionAndHandle(__int64 a1, __int64 a2, unsigned __int16 *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  va_list v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  va_list va; // [rsp+98h] [rbp+28h] BYREF

  va_start(va, a3);
  UserData.Ptr = *((_QWORD *)a3 + 1);
  UserData.Size = *a3;
  v5 = &EtwpNull;
  va_copy(v7, va);
  UserData.Reserved = 0;
  v6 = 2LL;
  v8 = 8LL;
  return EtwWrite(
           (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
           &ETW_EVENT_INVALID_MEMORY_PARTITION,
           0LL,
           3u,
           &UserData);
}
