/*
 * XREFs of ESM_CheckingIfStopEndpointCommandShouldBeDelayed @ 0x140033BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_CheckingIfStopEndpointCommandShouldBeDelayed(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 v2; // rax

  v1 = *(_DWORD **)(a1 + 960);
  v2 = *(_QWORD *)(*(_QWORD *)v1 + 736LL) & 0x4000LL;
  v1[41] = 0;
  return v2 != 0 ? 33 : 21;
}
