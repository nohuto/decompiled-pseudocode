/*
 * XREFs of ?GreProbeUntrustedVaRange@@YAXPEBX_K11@Z @ 0x140149F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreProbeUntrustedVaRange(volatile void *a1, unsigned __int64 a2, unsigned __int64 a3, ULONG a4)
{
  if ( a3 != 1 )
  {
    if ( !is_mul_ok(a2, a3) )
      RtlRaiseStatus(-1073741675);
    a2 *= a3;
  }
  ProbeForRead(a1, a2, a4);
}
