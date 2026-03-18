/*
 * XREFs of TtmiTerminalsRundown @ 0x140760660
 * Callers:
 *     TtmiSessionsRundown @ 0x14075A59C (TtmiSessionsRundown.c)
 * Callees:
 *     TtmiLogTerminalRundown @ 0x14075F63C (TtmiLogTerminalRundown.c)
 */

void __fastcall TtmiTerminalsRundown(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  v1 = (_QWORD *)(a1 + 40);
  v2 = *(_QWORD **)(a1 + 40);
  if ( v2 != (_QWORD *)(a1 + 40) )
  {
    do
    {
      TtmiLogTerminalRundown();
      v2 = (_QWORD *)*v2;
    }
    while ( v2 != v1 );
  }
}
