/*
 * XREFs of TppTerminateProcess @ 0x18011F6C8
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x18011F1F4 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180159520 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppTerminateProcess(unsigned int **a1)
{
  return ZwTerminateProcess(-1LL, **a1);
}
