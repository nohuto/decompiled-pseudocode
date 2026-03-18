/*
 * XREFs of WriteAMDMsr @ 0x1406A7F40
 * Callers:
 *     KiDisableCacheErrataSource @ 0x1405BF748 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WriteAMDMsr(unsigned int a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)a2;
  __writemsr(a1, a2);
  return result;
}
