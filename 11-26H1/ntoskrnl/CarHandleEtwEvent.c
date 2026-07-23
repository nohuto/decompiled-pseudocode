/*
 * XREFs of CarHandleEtwEvent @ 0x14064CC58
 * Callers:
 *     CarReportDifPluginRuleViolation @ 0x14064DF10 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     CarEtwWriteBugCheckEvent @ 0x14064C808 (CarEtwWriteBugCheckEvent.c)
 *     CarAddUniqueViolation @ 0x14064FC9C (CarAddUniqueViolation.c)
 *     DifiDbgPrint @ 0x1406503D0 (DifiDbgPrint.c)
 */

__int64 __fastcall CarHandleEtwEvent(__int64 a1, int a2, void *a3, char a4, int a5, __int64 a6, __int64 a7)
{
  void *Src; // r14
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // r12
  unsigned int v14; // ebx
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  LODWORD(v15) = 0;
  Src = a3;
  if ( !a1 )
  {
    DifiDbgPrint("Violation stack passed is NULL\n");
    return 3221225485LL;
  }
  v12 = a7;
  v13 = a6;
  LOBYTE(a3) = a4;
  result = CarAddUniqueViolation(a5, a2, (int)a3, a1, Src, a6, *(_DWORD *)(a7 + 72), (__int64)&v15);
  v14 = result;
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(v12 + 84) & 1) != 0 )
    {
      if ( (_DWORD)v15 != 1 )
        return 128;
    }
    else if ( (_DWORD)v15 != 100 && (_DWORD)v15 != 10 && (unsigned int)(v15 - 1) > 1 && (_DWORD)v15 != 1000 )
    {
      return 128;
    }
    CarEtwWriteBugCheckEvent(v13, (const WCHAR *)(a1 + 4), a2, (const CHAR *)Src, a4, *(_DWORD *)(a1 + 1124));
    return v14;
  }
  return result;
}
