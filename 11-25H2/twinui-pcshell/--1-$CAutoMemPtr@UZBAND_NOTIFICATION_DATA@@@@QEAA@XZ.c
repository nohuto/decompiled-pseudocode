/*
 * XREFs of ??1?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@QEAA@XZ @ 0x18008AFDC
 * Callers:
 *     ?Release@?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ @ 0x18008AF90 (-Release@-$CRefCountedObject@V-$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ.c)
 * Callees:
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x180089BF8 (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 */

ZBAND_NOTIFICATION_DATA *__fastcall CAutoMemPtr<ZBAND_NOTIFICATION_DATA>::~CAutoMemPtr<ZBAND_NOTIFICATION_DATA>(
        ZBAND_NOTIFICATION_DATA **a1)
{
  ZBAND_NOTIFICATION_DATA *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(result);
  return result;
}
