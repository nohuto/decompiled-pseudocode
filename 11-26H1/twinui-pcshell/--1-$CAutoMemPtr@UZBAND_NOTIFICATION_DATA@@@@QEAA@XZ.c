/*
 * XREFs of ??1?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@QEAA@XZ @ 0x1801C7B9C
 * Callers:
 *     ?Release@?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ @ 0x1801C7B50 (-Release@-$CRefCountedObject@V-$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ.c)
 * Callees:
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x18006499C (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
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
