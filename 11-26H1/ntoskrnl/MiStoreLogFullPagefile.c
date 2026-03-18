/*
 * XREFs of MiStoreLogFullPagefile @ 0x14070AAB8
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140408D88 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404E33C4 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void MiStoreLogFullPagefile()
{
  ULONG v0; // edx
  __int64 v1; // r8
  int v2; // [rsp+20h] [rbp-58h]
  int v3; // [rsp+28h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-38h] BYREF

  if ( *(_DWORD *)stru_140E36558.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 2LL) )
    tlgWriteEx_EtwWriteEx(v1, (unsigned __int8 *)&dword_14005A4FC, v1, v0 - 1, v2, v3, v0, &v4);
}
