/*
 * XREFs of _DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_ @ 0x1401F4830
 * Callers:
 *     <none>
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x14002D790 (--1AUTO_TGO@@MEAA@XZ.c)
 */

AUTO_TGO *__fastcall DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_(AUTO_TGO *a1, char a2)
{
  AUTO_TGO::~AUTO_TGO(a1);
  if ( (a2 & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 242;
  }
  return a1;
}
