/*
 * XREFs of sub_1401284F0 @ 0x1401284F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14006B3A4 @ 0x14006B3A4 (sub_14006B3A4.c)
 *     sub_1400771C8 @ 0x1400771C8 (sub_1400771C8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1401284F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  GUID v7; // [rsp+40h] [rbp-28h] BYREF

  v4 = sub_14006B3A4(a1);
  if ( *(_BYTE *)(v3 + 65) )
    *(_BYTE *)(*(_QWORD *)(v3 + 184) + 3LL) |= 1u;
  if ( byte_140168DAA )
  {
    v7 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_1401694F6 & 0x40) != 0 )
      sub_1400771C8(
        (__int64)(v4 + 258),
        v5,
        &v7,
        *((const wchar_t **)v4 + 127),
        v4[14],
        (__int64)(v4 + 258),
        *(_DWORD *)(a2 + 48),
        L"PowerDown");
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v4 + 19));
  return 0LL;
}
