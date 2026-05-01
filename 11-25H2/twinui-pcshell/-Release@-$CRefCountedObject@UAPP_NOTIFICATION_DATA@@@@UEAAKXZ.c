/*
 * XREFs of ?Release@?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ @ 0x180089BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APP_NOTIFICATION_DATA@@QEAA@XZ @ 0x180089C28 (--1APP_NOTIFICATION_DATA@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<APP_NOTIFICATION_DATA>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 10);
  if ( !v2 && a1 )
  {
    APP_NOTIFICATION_DATA::~APP_NOTIFICATION_DATA((APP_NOTIFICATION_DATA *)(a1 + 2));
    operator delete((void *)a1, (const struct std::nothrow_t *)0x30);
  }
  return v2;
}
