/*
 * XREFs of ?DxgkEngIsDwmProcessApiExt@@YAHXZ @ 0x1400EC500
 * Callers:
 *     <none>
 * Callees:
 *     DxgkEngIsDwmProcess @ 0x1400EC544 (DxgkEngIsDwmProcess.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngIsDwmProcessApiExt(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 416LL);
  if ( v3 && v3() >= 0 )
    return (unsigned int)DxgkEngIsDwmProcess();
  return v2;
}
