/*
 * XREFs of LogDiagSDCAccessDenied @ 0x1401D00F0
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1400E2600 (DrvDxgkWriteDiagEntry.c)
 *     ?RtlStringCchCopyUnicodeStringEx@@YAJPEAG_KPEBU_UNICODE_STRING@@PEAPEAGPEA_KK@Z @ 0x1401CC828 (-RtlStringCchCopyUnicodeStringEx@@YAJPEAG_KPEBU_UNICODE_STRING@@PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall LogDiagSDCAccessDenied(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rdx
  unsigned __int16 **v5; // r9
  __int64 v6; // rdx
  unsigned __int16 **v7; // r9
  _OWORD v9[7]; // [rsp+30h] [rbp-88h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0] = 0x700000002BuLL;
  memset(&v9[1], 0, 28);
  RtlStringCchCopyUnicodeStringEx((char *)&v9[3], v4, a1, v5);
  RtlStringCchCopyUnicodeStringEx((char *)&v9[5], v6, a2, v7);
  return DrvDxgkWriteDiagEntry((__int64)v9);
}
