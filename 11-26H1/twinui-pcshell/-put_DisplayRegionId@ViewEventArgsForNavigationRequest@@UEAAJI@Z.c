/*
 * XREFs of ?put_DisplayRegionId@ViewEventArgsForNavigationRequest@@UEAAJI@Z @ 0x180420C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForNavigationRequest::put_DisplayRegionId(
        ViewEventArgsForNavigationRequest *this,
        int a2)
{
  *((_DWORD *)this + 6) = a2;
  return 0LL;
}
