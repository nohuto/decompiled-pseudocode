/*
 * XREFs of GreDxgkSessionConnected @ 0x1401A5C78
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDxgkSessionConnected(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 DxgkWin32kInterface; // rax
  __int64 v4; // rcx

  v2 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  LOBYTE(v4) = v2;
  return (*(__int64 (__fastcall **)(__int64))(DxgkWin32kInterface + 360))(v4);
}
