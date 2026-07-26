/*
 * XREFs of ?GetDeviceObject@DriverService@@QEBAPEAU_DEVICE_OBJECT@@XZ @ 0x1401489E4
 * Callers:
 *     ndisKLoaderIrpCreateHandler @ 0x1400DF28C (ndisKLoaderIrpCreateHandler.c)
 * Callees:
 *     <none>
 */

struct _DEVICE_OBJECT *__fastcall DriverService::GetDeviceObject(DriverService *this)
{
  return (struct _DEVICE_OBJECT *)*((_QWORD *)this + 4);
}
