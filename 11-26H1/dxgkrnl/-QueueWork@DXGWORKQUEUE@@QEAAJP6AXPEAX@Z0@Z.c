/*
 * XREFs of ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x140054458
 * Callers:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1400664A4 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1403738A0 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGWORKQUEUE::QueueWork(PLIST_ENTRY ListHead, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *Pool2; // rax

  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, 32LL, 1265072196LL);
  if ( !Pool2 )
    return 3221225495LL;
  Pool2->Flink = 0LL;
  Pool2->Blink = 0LL;
  Pool2[1].Flink = a2;
  Pool2[1].Blink = a3;
  ExInterlockedInsertTailList(ListHead, Pool2, (PKSPIN_LOCK)&ListHead[1]);
  return 0LL;
}
