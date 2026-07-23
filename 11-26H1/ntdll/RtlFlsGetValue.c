/*
 * XREFs of RtlFlsGetValue @ 0x1800BF640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsGetValue(ULONG FlsIndex, PVOID *FlsData)
{
  _QWORD *v2; // r8
  ULONG v4; // edx
  __int64 v5; // r10
  PVOID *v6; // rax
  NTSTATUS result; // eax

  v2 = NtCurrentTeb()->FlsData;
  if ( FlsIndex - 1 > 0xFEE )
    return -1073741811;
  if ( !v2 )
    return -1073741664;
  v4 = FlsIndex + 16;
  _BitScanReverse(&FlsIndex, FlsIndex + 16);
  v5 = v2[FlsIndex - 2];
  if ( v5 && (v6 = (PVOID *)(v5 + 8 * ((v4 ^ (1 << FlsIndex)) + 1LL))) != 0LL )
  {
    *FlsData = *v6;
    return 0;
  }
  else
  {
    result = 0;
    *FlsData = 0LL;
  }
  return result;
}
