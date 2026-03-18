/*
 * XREFs of GreDxgkSetProcessStatus @ 0x14011C7A0
 * Callers:
 *     ?UpdateProcessVisibility@tagPROCESSINFO@@QEAAXW4ProcessVisibilityUpdate@1@@Z @ 0x14011C710 (-UpdateProcessVisibility@tagPROCESSINFO@@QEAAXW4ProcessVisibilityUpdate@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDxgkSetProcessStatus(__int64 *a1, int a2, unsigned __int8 a3)
{
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]

  v5 = *a1;
  v6 = a2;
  v7 = a3;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(__int64 (__fastcall **)(__int64 *))(DxgkWin32kInterface + 544))(&v5);
}
