/*
 * XREFs of MiStoreLogFullPagefile @ 0x14070F76C
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void MiStoreLogFullPagefile()
{
  ULONG v0; // edx
  __int64 v1; // r8
  int v2; // [rsp+20h] [rbp-58h]
  int v3; // [rsp+28h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-38h] BYREF

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 2LL) )
    tlgWriteEx_EtwWriteEx(v1, (unsigned __int8 *)&byte_14005B251, v1, v0 - 1, v2, v3, v0, &v4);
}
