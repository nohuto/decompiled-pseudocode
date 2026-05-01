/*
 * XREFs of ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x180089BF8
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x180025220 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x180089A08 (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 *     ??1?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@QEAA@XZ @ 0x18008AFDC (--1-$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ZBAND_NOTIFICATION_DATA *__fastcall ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(
        ZBAND_NOTIFICATION_DATA *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
  operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
