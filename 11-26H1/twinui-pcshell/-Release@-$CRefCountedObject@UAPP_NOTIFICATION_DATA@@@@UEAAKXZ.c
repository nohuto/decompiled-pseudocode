/*
 * XREFs of ?Release@?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ @ 0x180065840
 * Callers:
 *     <none>
 * Callees:
 *     ??1APP_NOTIFICATION_DATA@@QEAA@XZ @ 0x1800649CC (--1APP_NOTIFICATION_DATA@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<APP_NOTIFICATION_DATA>::Release(
        volatile signed __int32 *a1,
        const struct std::nothrow_t *a2)
{
  unsigned __int32 v3; // edi

  v3 = _InterlockedDecrement(a1 + 10);
  if ( !v3 && a1 )
  {
    APP_NOTIFICATION_DATA::~APP_NOTIFICATION_DATA((APP_NOTIFICATION_DATA *)(a1 + 2), a2);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x30);
  }
  return v3;
}
