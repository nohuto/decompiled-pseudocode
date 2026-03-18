/*
 * XREFs of GreDxgkSessionConnected @ 0x140160B60
 * Callers:
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDxgkSessionConnected(__int64 a1)
{
  char v1; // bl
  __int64 DxgkWin32kInterface; // rax
  __int64 v3; // rcx

  v1 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  LOBYTE(v3) = v1;
  return (*(__int64 (__fastcall **)(__int64))(DxgkWin32kInterface + 360))(v3);
}
