/*
 * XREFs of _DrvSetDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1401C9CA0
 * Callers:
 *     <none>
 * Callees:
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1401C9A2C (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 */

AUTO_TGO *__fastcall DrvSetDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_(AUTO_TGO *a1, char a2)
{
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(a1);
  if ( (a2 & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 242;
  }
  return a1;
}
