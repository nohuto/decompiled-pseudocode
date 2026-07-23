/*
 * XREFs of EtwpEventWriteTemplateSessionDesiredAccess @ 0x14082BBB8
 * Callers:
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateSessionDesiredAccess(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        char a5)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]

  UserData.Ptr = *((_QWORD *)a3 + 1);
  UserData.Size = *a3;
  v7 = &EtwpNull;
  v11 = &a5;
  v9 = a4;
  UserData.Reserved = 0;
  v8 = 2LL;
  v10 = 16LL;
  v12 = 4LL;
  return EtwWrite(
           (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
           &ETW_EVENT_START_TRACE_ACCESS_DENIED,
           0LL,
           4u,
           &UserData);
}
