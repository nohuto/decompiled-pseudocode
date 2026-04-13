/*
 * XREFs of ?Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x180039620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::Release(
        __int64 a1,
        volatile int *a2)
{
  return ContentManagement::PhoneShellNamespaceHelper::Release(a1 - 8, a2);
}
