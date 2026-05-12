/*
 * XREFs of sub_1400D7690 @ 0x1400D7690
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400CD79C @ 0x1400CD79C (sub_1400CD79C.c)
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 */

void __fastcall sub_1400D7690(PVOID IoObject, volatile signed __int32 *Context, PIO_WORKITEM IoWorkItem)
{
  if ( (int)sub_1400CD79C(Context) >= 0 )
  {
    _InterlockedCompareExchange(Context + 244, 2, 1);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*((_QWORD *)Context + 16) + 32LL), BusRelations);
  }
  else
  {
    _InterlockedCompareExchange(Context + 244, 5, 1);
    sub_1400F24C8(Context, 2147483657LL, 4LL);
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 69));
}
