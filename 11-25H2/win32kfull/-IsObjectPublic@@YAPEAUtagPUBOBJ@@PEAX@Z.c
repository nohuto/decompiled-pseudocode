/*
 * XREFs of ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1402B1594
 * Callers:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1402B12AC (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B1AD8 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B2374 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B25C0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

void **__fastcall IsObjectPublic(void *a1, __int64 a2)
{
  void **result; // rax

  for ( result = *(void ***)(W32GetUserSessionState(a1, a2) + 19792); result && result[1] != a1; result = (void **)*result )
    ;
  return result;
}
