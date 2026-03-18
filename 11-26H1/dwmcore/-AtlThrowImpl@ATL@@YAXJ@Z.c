/*
 * XREFs of ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18029285C
 * Callers:
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x1801C513C (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802B97B0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::AtlThrowImpl(int a1)
{
  int pExceptionObject; // [rsp+30h] [rbp+8h] BYREF

  pExceptionObject = a1;
  throw (ATL::CAtlException *)&pExceptionObject;
}
