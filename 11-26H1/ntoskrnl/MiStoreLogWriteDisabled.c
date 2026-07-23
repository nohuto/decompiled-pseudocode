/*
 * XREFs of MiStoreLogWriteDisabled @ 0x14070F9E4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void MiStoreLogWriteDisabled()
{
  int v0; // edx
  __int64 v1; // r8
  int v2; // r9d
  __int64 v3; // r10
  int v4; // [rsp+20h] [rbp-88h]
  int v5; // [rsp+28h] [rbp-80h]
  int v6; // [rsp+40h] [rbp-68h] BYREF
  int v7; // [rsp+44h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-58h] BYREF
  int *v9; // [rsp+70h] [rbp-38h]
  int *v10; // [rsp+80h] [rbp-28h]
  __int64 v11; // [rsp+88h] [rbp-20h]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 2LL) )
  {
    v6 = v2;
    v9 = &v6;
    v11 = (unsigned int)(v0 + 2);
    v10 = &v7;
    v7 = v1;
    tlgWriteEx_EtwWriteEx(v3, (unsigned __int8 *)&byte_14005B273, v1, v0 - 1, v4, v5, v0 + 2, &v8);
  }
}
