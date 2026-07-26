/*
 * XREFs of ??_E?$DriverCallbackBase@U_NDIS_M_DRIVER_BLOCK@@X@Details@AzTelemetry@@UEAAPEAXI@Z @ 0x14009EF90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14008EAB0 (--3@YAXPEAX@Z.c)
 */

void *__fastcall AzTelemetry::Details::DriverCallbackBase<_NDIS_M_DRIVER_BLOCK,void>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
