/*
 * XREFs of GreLddmProcessLockScreen @ 0x140152330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreLddmProcessLockScreen(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 DxgkWin32kInterface; // rax

  v1 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(DxgkWin32kInterface + 584))(v1);
}
