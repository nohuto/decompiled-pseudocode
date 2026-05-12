/*
 * XREFs of NvmeSetSystemPowerState @ 0x14012B108
 * Callers:
 *     NvmeAdapterSetSystemPowerCompletion @ 0x140126A40 (NvmeAdapterSetSystemPowerCompletion.c)
 *     NvmeNamespaceSetSystemPowerIrp @ 0x14012A0E0 (NvmeNamespaceSetSystemPowerIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeSetSystemPowerState(_DWORD *a1, int a2, int a3)
{
  int v3; // r9d
  unsigned int v4; // eax
  __int64 result; // rax

  v3 = 1;
  if ( a2 == 1 || *a1 >= a2 )
    v3 = 0;
  v4 = a1[3] & 0xFFFFFFFE;
  *a1 = a2;
  result = v3 | v4;
  a1[2] = a3;
  a1[3] = result;
  return result;
}
