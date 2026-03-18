/*
 * XREFs of ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1402CC8F4
 * Callers:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1402CC608 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CCE44 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD704 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD950 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

void **__fastcall IsObjectPublic(void *a1, __int64 a2)
{
  void **result; // rax

  for ( result = *(void ***)(W32GetUserSessionState(a1, a2) + 19824); result && result[1] != a1; result = (void **)*result )
    ;
  return result;
}
