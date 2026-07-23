/*
 * XREFs of IopDumpTraceForceDumpDisabled @ 0x140795F98
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140CC3490 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IopDumpIsTracingEnabled @ 0x14052F1A4 (IopDumpIsTracingEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char IopDumpTraceForceDumpDisabled()
{
  char result; // al
  char v1; // [rsp+30h] [rbp-19h] BYREF
  __int64 v2; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v5; // [rsp+70h] [rbp+27h]
  __int64 v6; // [rsp+78h] [rbp+2Fh]
  char *v7; // [rsp+80h] [rbp+37h]
  __int64 v8; // [rsp+88h] [rbp+3Fh]

  result = IopDumpIsTracingEnabled();
  if ( result )
  {
    UserData.Ptr = (ULONGLONG)&ForceDumpDisabled;
    *(_QWORD *)&UserData.Size = 4LL;
    result = EtwWrite(IopDumpEtwRegHandle, &DUMP_EVENT_FORCE_DUMP_DISABLED, 0LL, 1u, &UserData);
  }
  if ( (unsigned int)dword_140E06CD8 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E06CD8, 0x400000000000LL);
    if ( result )
    {
      v2 = 0x1000000LL;
      v5 = &v2;
      v1 = ForceDumpDisabled;
      v6 = 8LL;
      v7 = &v1;
      v8 = 1LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E06CD8,
               (unsigned __int8 *)byte_140047380,
               0LL,
               0LL,
               4u,
               &v4);
    }
  }
  return result;
}
