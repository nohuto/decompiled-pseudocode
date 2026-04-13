/*
 * XREFs of _GetLocaleHandleById @ 0x18000DD58
 * Callers:
 *     _Tolower @ 0x180005D68 (_Tolower.c)
 *     _Toupper @ 0x18000E840 (_Toupper.c)
 *     _Strcoll @ 0x180020F70 (_Strcoll.c)
 *     _Getdateorder @ 0x180021068 (_Getdateorder.c)
 *     _Wcscoll @ 0x1800210CC (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800211D0 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x180021300 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
