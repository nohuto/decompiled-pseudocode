/*
 * XREFs of ?Release@ActionHelper@ContentManagement@@WDA@EAAKXZ @ 0x180039640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ActionHelper::Release(__int64 a1, volatile int *a2)
{
  return ContentManagement::PhoneShellNamespaceHelper::Release(a1 - 48, a2);
}
