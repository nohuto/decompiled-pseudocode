/*
 * XREFs of ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1402FFDB4
 * Callers:
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14026D2C4 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x14026D434 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BA064 (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400D7660 (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x140150B6C (-prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x14016C588 (-prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall vFindAndReplaceRFONT(struct PDEVOBJ *this, struct _LIST_ENTRY **a2, struct _LIST_ENTRY **a3)
{
  __int64 SessionState; // rax
  PDEVOBJ *v7; // rcx
  struct _LIST_ENTRY *v8; // rax
  struct _LIST_ENTRY *v9; // r9
  PDEVOBJ *v10; // rcx
  struct _LIST_ENTRY *v11; // rax
  struct _LIST_ENTRY *v12; // r8
  HSEMAPHORE v13; // [rsp+48h] [rbp+20h] BYREF

  SessionState = W32GetSessionState((_DWORD)this, a2);
  SEMOBJ<18>::SEMOBJ<18>(&v13, *(_QWORD *)(SessionState + 96) + 4872LL);
  PDEVOBJ::prfntActive(this);
  while ( 1 )
  {
    v8 = PDEVOBJ::prfntActive(v7);
    if ( v9 == v8 )
      break;
    if ( v9[-36].Flink == *a2 )
      v9[-36].Flink = *a3;
    if ( v9[-36].Blink == *a2 )
      v9[-36].Blink = *a3;
    v7 = this;
  }
  PDEVOBJ::prfntInactive(this);
  while ( 1 )
  {
    v11 = PDEVOBJ::prfntInactive(v10);
    if ( v12 == v11 )
      break;
    if ( v12[-36].Flink == *a2 )
      v12[-36].Flink = *a3;
    if ( v12[-36].Blink == *a2 )
      v12[-36].Blink = *a3;
    v10 = this;
  }
  SEMOBJ<18>::vUnlock(&v13);
}
