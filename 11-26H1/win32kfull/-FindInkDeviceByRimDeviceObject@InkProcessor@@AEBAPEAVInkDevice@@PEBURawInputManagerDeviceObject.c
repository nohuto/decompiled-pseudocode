/*
 * XREFs of ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1402FB964
 * Callers:
 *     ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402FB99C (-OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402FBA58 (-OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402FBB14 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

struct InkDevice *__fastcall InkProcessor::FindInkDeviceByRimDeviceObject(
        InkProcessor *this,
        const struct RawInputManagerDeviceObject *a2)
{
  InkProcessor *i; // r9

  for ( i = (InkProcessor *)*((_QWORD *)this + 2); i != (InkProcessor *)((char *)this + 16); i = *(InkProcessor **)i )
  {
    if ( (const struct RawInputManagerDeviceObject *)(*((_QWORD *)i - 9) & -(__int64)(*((_QWORD *)i - 9) != 0LL)) == a2 )
      return (InkProcessor *)((char *)i - 88);
  }
  return 0LL;
}
