/*
 * XREFs of PpmEventMediaBufferingNotify @ 0x140397CF8
 * Callers:
 *     PpmMediaBufferingWorker @ 0x140396C50 (PpmMediaBufferingWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventMediaBufferingNotify(char a1)
{
  BOOL v2; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MEDIA_BUFFERING_NOTIFY) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      v2 = a1 != 0;
      UserData.Ptr = (ULONGLONG)&v2;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_MEDIA_BUFFERING_NOTIFY, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
