/*
 * XREFs of ApiSetEditionIsPointerInputRedirected @ 0x1401BC904
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAI@Z @ 0x14010DBCC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     EditionIsPointerInputRedirected @ 0x140165490 (EditionIsPointerInputRedirected.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsPointerInputRedirected(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx
  int (*v7)(void); // rax

  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5712LL);
  if ( v7 && v7() >= 0 )
    return (unsigned int)EditionIsPointerInputRedirected(a1, a2, a3);
  return v6;
}
