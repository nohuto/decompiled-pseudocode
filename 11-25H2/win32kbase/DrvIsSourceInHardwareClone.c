/*
 * XREFs of DrvIsSourceInHardwareClone @ 0x140157090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvIsSourceInHardwareClone(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 DxgkWin32kInterface; // rax

  if ( !*(_QWORD *)(DxDdGetDxgkWin32kInterface(a1) + 576) )
    return 3221225659LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v6);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(DxgkWin32kInterface + 576))(a1, a2, a3);
}
