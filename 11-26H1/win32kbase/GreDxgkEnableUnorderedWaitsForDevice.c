/*
 * XREFs of GreDxgkEnableUnorderedWaitsForDevice @ 0x140157430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDxgkEnableUnorderedWaitsForDevice(__int64 a1, __int64 a2)
{
  char v2; // bl
  unsigned int v3; // edi
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // rdx

  v2 = a2;
  v3 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  LOBYTE(v5) = v2;
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(DxgkWin32kInterface + 424))(v3, v5);
}
