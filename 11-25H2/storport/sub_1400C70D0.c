/*
 * XREFs of sub_1400C70D0 @ 0x1400C70D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400EB5E0 @ 0x1400EB5E0 (sub_1400EB5E0.c)
 *     sub_1400F23BC @ 0x1400F23BC (sub_1400F23BC.c)
 */

void __fastcall sub_1400C70D0(_QWORD *SystemArgument2, __int64 a2, __int64 a3)
{
  if ( a2 )
  {
    if ( a3 )
      *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(a3 + 14);
    sub_1400EB5E0();
    if ( (int)sub_1400F23BC(SystemArgument2) < 0 )
      SystemArgument2[17] |= 0x40000000uLL;
    _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  }
}
