/*
 * XREFs of NvmeAdapterIdleState @ 0x14004A490
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerPowerSetFState @ 0x14004E084 (NvmeControllerPowerSetFState.c)
 */

__int64 __fastcall NvmeAdapterIdleState(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v7; // rcx
  _DWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]

  v5 = *(_QWORD *)(a1[20] + 8LL);
  *(_DWORD *)(v5 + 68) = a3;
  if ( (*(_DWORD *)(a1[50] + 184LL) & 0x40000000) != 0 )
  {
    v7 = a1[144];
    v8[0] = 1;
    v8[1] = 24;
    v9 = 0LL;
    v10 = a2;
    v11 = a3;
    NvmeControllerPowerSetFState(v7, v8);
  }
  return PoFxCompleteIdleState(**(_QWORD **)(a1[20] + 8LL), a2, a3, v5);
}
