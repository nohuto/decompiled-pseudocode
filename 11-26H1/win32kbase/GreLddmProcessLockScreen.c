/*
 * XREFs of GreLddmProcessLockScreen @ 0x14018DCA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreLddmProcessLockScreen(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 DxgkWin32kInterface; // rax

  v2 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD))(DxgkWin32kInterface + 584))(v2);
}
