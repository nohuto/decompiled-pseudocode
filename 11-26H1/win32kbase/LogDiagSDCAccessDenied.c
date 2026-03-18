/*
 * XREFs of LogDiagSDCAccessDenied @ 0x1401B6E90
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ?RtlStringCchCopyUnicodeStringEx@@YAJPEAG_KPEBU_UNICODE_STRING@@PEAPEAGPEA_KK@Z @ 0x1401913FC (-RtlStringCchCopyUnicodeStringEx@@YAJPEAG_KPEBU_UNICODE_STRING@@PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall LogDiagSDCAccessDenied(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rdx
  unsigned __int16 **v5; // r9
  __int64 v6; // rdx
  unsigned __int16 **v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DxgkWin32kInterface; // rax
  _OWORD v12[7]; // [rsp+30h] [rbp-88h] BYREF

  memset(v12, 0, sizeof(v12));
  v12[0] = 0x700000002BuLL;
  memset(&v12[1], 0, 28);
  RtlStringCchCopyUnicodeStringEx((char *)&v12[3], v4, a1, v5);
  RtlStringCchCopyUnicodeStringEx((char *)&v12[5], v6, a2, v7);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v9, v8);
  return (*(__int64 (__fastcall **)(_OWORD *))(DxgkWin32kInterface + 304))(v12);
}
