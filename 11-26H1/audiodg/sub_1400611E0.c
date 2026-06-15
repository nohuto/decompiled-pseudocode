/*
 * XREFs of sub_1400611E0 @ 0x1400611E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_1400611E0(__int64 a1, HANDLE *a2)
{
  BOOL result; // eax

  NtSetInformationThread(*a2, ThreadEnableAlignmentFaultFixup|0x20, 0LL, 0);
  result = CloseHandle(*a2);
  *a2 = 0LL;
  return result;
}
