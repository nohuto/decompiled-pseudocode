/*
 * XREFs of GetCursorSizeFromDpi @ 0x140080CA0
 * Callers:
 *     InitLoadResources @ 0x140080CE4 (InitLoadResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCursorSizeFromDpi(unsigned int a1)
{
  if ( a1 < 0x90 )
    return 32LL;
  if ( a1 < 0xC0 )
    return 48LL;
  if ( a1 < 0x120 )
    return 64LL;
  return a1 < 0x180 ? 96 : 128;
}
