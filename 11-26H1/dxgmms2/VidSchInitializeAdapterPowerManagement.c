/*
 * XREFs of VidSchInitializeAdapterPowerManagement @ 0x1400C36D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchInitializeAdapterPowerManagement(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  *(_OWORD *)(a1 + 3304) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 3320) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 3336) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 3352) = *(_OWORD *)(a2 + 48);
  v2 = *(_OWORD *)(a2 + 64);
  *(_BYTE *)(a1 + 3400) = 0;
  *(_OWORD *)(a1 + 3368) = v2;
  result = *(unsigned int *)(a2 + 72);
  *(_QWORD *)(a1 + 3392) = 10000 * result;
  return result;
}
