/*
 * XREFs of ?vRestartKillEudcRFONTs@@YAXPEAU_LIST_ENTRY@@@Z @ 0x140325130
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall vRestartKillEudcRFONTs(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *v4; // [rsp+20h] [rbp-18h] BYREF
  struct _LIST_ENTRY *v5; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    Flink = a1->Flink;
    if ( a1->Flink == a1 )
      break;
    if ( Flink->Blink != a1 || (v3 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    a1->Flink = v3;
    v3->Blink = a1;
    v5 = Flink - 42;
    v4 = Flink[-34].Flink;
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v5, 0LL, (struct PFFOBJ *)&v4, 0);
    v5 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  }
}
