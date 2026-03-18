/*
 * XREFs of ZwAlertResumeThread @ 0x1407241D0
 * Callers:
 *     DifZwAlertResumeThreadWrapper @ 0x1406992B0 (DifZwAlertResumeThreadWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlertResumeThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
