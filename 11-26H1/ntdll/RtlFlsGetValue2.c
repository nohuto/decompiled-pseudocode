/*
 * XREFs of RtlFlsGetValue2 @ 0x1800BC010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFlsGetValue2(ULONG FlsIndex)
{
  _QWORD *FlsData; // rdx
  ULONG v2; // r8d
  PVOID result; // rax
  __int64 v4; // r10
  PVOID *v5; // rdx

  FlsData = NtCurrentTeb()->FlsData;
  if ( FlsIndex - 1 > 0xFEE || !FlsData )
    return 0LL;
  v2 = FlsIndex + 16;
  _BitScanReverse(&FlsIndex, FlsIndex + 16);
  result = 0LL;
  v4 = FlsData[FlsIndex - 2];
  if ( v4 )
  {
    v5 = (PVOID *)(v4 + 8 * ((v2 ^ (1 << FlsIndex)) + 1LL));
    if ( v5 )
      return *v5;
  }
  return result;
}
