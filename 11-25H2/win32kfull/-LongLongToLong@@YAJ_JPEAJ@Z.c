/*
 * XREFs of ?LongLongToLong@@YAJ_JPEAJ@Z @ 0x14016CC64
 * Callers:
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140177478 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LongLongToLong(__int64 a1, int *a2)
{
  __int64 result; // rax

  if ( (unsigned __int64)(a1 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    result = 0LL;
  }
  else
  {
    result = 2147942934LL;
    LODWORD(a1) = -1;
  }
  *a2 = a1;
  return result;
}
