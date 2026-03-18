/*
 * XREFs of CatError @ 0x14006E870
 * Callers:
 *     AMLIAddNamespaceOverride @ 0x14006D664 (AMLIAddNamespaceOverride.c)
 * Callees:
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     RtlStringCchCatA @ 0x140031110 (RtlStringCchCatA.c)
 *     RtlStringCchVPrintfA @ 0x14003B8E8 (RtlStringCchVPrintfA.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 */

ULONG CatError(const char *a1, ...)
{
  __int64 v1; // rax
  ULONG result; // eax
  va_list argList; // [rsp+58h] [rbp+10h] BYREF

  va_start(argList, a1);
  RtlStringCchCatA(pszDest, 0x100uLL, "\n");
  v1 = -1LL;
  do
    ++v1;
  while ( pszDest[v1] );
  RtlStringCchVPrintfA(&pszDest[v1], 256 - v1, a1, argList);
  ConPrintf(pszDest);
  result = ConPrintf("\n");
  if ( (gDebugger & 0x4000) != 0 )
    return AMLIDebugger();
  return result;
}
