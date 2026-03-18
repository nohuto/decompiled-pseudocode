/*
 * XREFs of ?AddResourceState@CEndpointResourceStateManager@@AEAAXPEAVCFlipResourceState@@PEAU_LIST_ENTRY@@@Z @ 0x140044DE0
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14001C914 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1400449B8 (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x140044CF8 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEndpointResourceStateManager::AddResourceState(
        CEndpointResourceStateManager *this,
        struct CFlipResourceState *a2,
        struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v3 = (struct _LIST_ENTRY *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  Blink = a3->Blink;
  if ( Blink->Flink != a3 )
    __fastfail(3u);
  v3->Flink = a3;
  *(_QWORD *)((((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)) + 8) = Blink;
  Blink->Flink = v3;
  a3->Blink = v3;
}
