/*
 * XREFs of ?Release@?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ @ 0x18008AF90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@QEAA@XZ @ 0x18008AFDC (--1-$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 4);
  if ( !v2 && a1 )
  {
    CAutoMemPtr<ZBAND_NOTIFICATION_DATA>::~CAutoMemPtr<ZBAND_NOTIFICATION_DATA>(a1 + 2);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x18);
  }
  return v2;
}
