/*
 * XREFs of _GetLocaleHandleByColl @ 0x18000DD4C
 * Callers:
 *     _Towlower @ 0x180005BFC (_Towlower.c)
 *     _Tolower @ 0x180005D68 (_Tolower.c)
 *     _Towupper @ 0x180006278 (_Towupper.c)
 *     _Toupper @ 0x18000E840 (_Toupper.c)
 *     _Strcoll @ 0x180020F70 (_Strcoll.c)
 *     _Wcscoll @ 0x1800210CC (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800211D0 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x180021300 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
