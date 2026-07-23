/*
 * XREFs of PnprEndMirroring @ 0x140BF7670
 * Callers:
 *     <none>
 * Callees:
 *     PnprQuiesce @ 0x1405DE678 (PnprQuiesce.c)
 *     PnprSwap @ 0x1405DE720 (PnprSwap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnprWakeProcessors @ 0x140BF8DAC (PnprWakeProcessors.c)
 */

__int64 __fastcall PnprEndMirroring(__int64 a1, __int64 a2)
{
  int v2; // ebx

  v2 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      v2 = PnprSwap(a1, a2);
      if ( v2 >= 0 )
      {
        PnprWakeProcessors();
        return 1073742484;
      }
      else
      {
        guard_dispatch_icall_no_overrides(3LL, *(_QWORD *)(PnprContext + 33176));
        PnprWakeProcessors();
      }
    }
  }
  else
  {
    *(_BYTE *)(PnprContext + 208) = 1;
    return (unsigned int)PnprQuiesce();
  }
  return (unsigned int)v2;
}
