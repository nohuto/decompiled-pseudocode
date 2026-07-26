/*
 * XREFs of ?resize@?$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z @ 0x140001C40
 * Callers:
 *     ndisEtwCaptureMiniportFilterList @ 0x1400988D4 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x140098BD0 (ndisEtwCaptureMiniportProtocolList.c)
 * Callees:
 *     ?reserve@?$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z @ 0x1400019C0 (-reserve@-$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

char __fastcall Rtl::KArray<EtwProtocolBind,1>::resize(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  unsigned __int64 v5; // rcx

  result = Rtl::KArray<EtwProtocolBind,1>::reserve((unsigned int *)a1, a2);
  if ( result )
  {
    v5 = *(unsigned int *)(a1 + 4);
    if ( a2 > v5 )
      memset((void *)(*(_QWORD *)(a1 + 8) + 44 * v5), 0, 44 * (a2 - v5));
    *(_DWORD *)(a1 + 4) = a2;
    return 1;
  }
  return result;
}
