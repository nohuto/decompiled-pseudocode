/*
 * XREFs of MiStoreLogWriteCompleteFailure @ 0x14070F954
 * Callers:
 *     MiStoreModifiedWriteComplete @ 0x14020BAAC (MiStoreModifiedWriteComplete.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void MiStoreLogWriteCompleteFailure()
{
  int v0; // edx
  __int64 v1; // r8
  int v2; // r9d
  int v3; // [rsp+20h] [rbp-68h]
  int v4; // [rsp+28h] [rbp-60h]
  int v5; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+48h] [rbp-40h] BYREF
  int *v7; // [rsp+68h] [rbp-20h]
  __int64 v8; // [rsp+70h] [rbp-18h]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 2LL) )
  {
    v5 = v2;
    v7 = &v5;
    v8 = 4LL;
    tlgWriteEx_EtwWriteEx(v1, (unsigned __int8 *)&word_14005B0DE, v1, v0 - 1, v3, v4, 3u, &v6);
  }
}
