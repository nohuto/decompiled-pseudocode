/*
 * XREFs of HalpInvokeIsrForGsiv @ 0x1404A8BC0
 * Callers:
 *     <none>
 * Callees:
 *     KeDispatchSecondaryInterrupt @ 0x1404A8C20 (KeDispatchSecondaryInterrupt.c)
 */

char __fastcall HalpInvokeIsrForGsiv(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r10d

  if ( a3 )
    *a3 = 0;
  v3 = *(_DWORD *)(a2 + 16);
  if ( a1 < v3 || a1 >= v3 + *(_DWORD *)(a2 + 20) )
    return 0;
  else
    return KeDispatchSecondaryInterrupt(*(unsigned int *)(a2 + 16LL * (a1 - v3) + 168), 0LL);
}
