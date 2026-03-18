/*
 * XREFs of _RegRtlQueryInfoKey @ 0x14091A3B0
 * Callers:
 *     _RegRtlCopyTreeInternal @ 0x14089D400 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140919C00 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlDeletePathInternal @ 0x140A2D934 (_RegRtlDeletePathInternal.c)
 *     _RegRtlDeleteTreeInternal @ 0x140A2DB2C (_RegRtlDeleteTreeInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x1407236B0 (ZwQueryKey.c)
 */

__int64 __fastcall RegRtlQueryInfoKey(void *a1, _DWORD *a2, unsigned int *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  NTSTATUS v9; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  __int128 KeyInformation; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-20h]

  v14 = 0LL;
  ResultLength = 0;
  KeyInformation = 0LL;
  v13 = 0LL;
  v9 = ZwQueryKey(a1, KeyCachedInformation, &KeyInformation, 0x28u, &ResultLength);
  if ( v9 >= 0 )
  {
    if ( a2 )
      *a2 = HIDWORD(KeyInformation);
    if ( a3 )
      *a3 = (unsigned int)v13 >> 1;
    if ( a4 )
      *a4 = DWORD1(v13);
    if ( a5 )
      *a5 = DWORD2(v13) >> 1;
    if ( a6 )
      *a6 = HIDWORD(v13);
  }
  return (unsigned int)v9;
}
