/*
 * XREFs of ZwQueryBootOptions @ 0x140725D70
 * Callers:
 *     DifZwQueryBootOptionsWrapper @ 0x1406AFCA0 (DifZwQueryBootOptionsWrapper.c)
 *     SiGetEspFromFirmware @ 0x1408950EC (SiGetEspFromFirmware.c)
 *     BiQueryBootOptions @ 0x1409D1A80 (BiQueryBootOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
