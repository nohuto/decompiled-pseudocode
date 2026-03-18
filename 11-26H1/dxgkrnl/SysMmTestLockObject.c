/*
 * XREFs of SysMmTestLockObject @ 0x14009D6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z @ 0x140040D64 (-SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z.c)
 */

__int64 __fastcall SysMmTestLockObject(struct SYSMM_ADAPTER_OBJECT *a1)
{
  return SysMmLockObject(a1);
}
