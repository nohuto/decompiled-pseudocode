/*
 * XREFs of ?OnDeviceClosed@RimBackedDeviceBase@@UEAAXXZ @ 0x1402EF210
 * Callers:
 *     ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EBEDC (-OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RimBackedDeviceBase::OnDeviceClosed(PVOID *this)
{
  if ( *((_BYTE *)this + 12) )
  {
    ObfDereferenceObject(this[3]);
    this[3] = 0LL;
    *((_BYTE *)this + 12) = 0;
  }
}
