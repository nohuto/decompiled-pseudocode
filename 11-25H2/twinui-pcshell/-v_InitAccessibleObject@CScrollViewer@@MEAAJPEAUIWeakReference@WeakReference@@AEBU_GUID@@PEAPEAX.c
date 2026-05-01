/*
 * XREFs of ?v_InitAccessibleObject@CScrollViewer@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C7BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x1804BEA2C (-AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags.c)
 */

__int64 __fastcall CScrollViewer::v_InitAccessibleObject(
        CScrollViewer *this,
        struct IWeakReference *a2,
        const struct _GUID *a3,
        void **a4)
{
  return AccessibleElement_CreateInstance((__int64)a2, 140, 50026, a3, a4);
}
