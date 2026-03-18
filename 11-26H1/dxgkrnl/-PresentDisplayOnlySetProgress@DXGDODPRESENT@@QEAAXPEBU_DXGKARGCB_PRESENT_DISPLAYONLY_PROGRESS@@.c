/*
 * XREFs of ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x14009B424
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14003E610 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x140074FF0 (DxgPresentDisplayOnlyProgressCB.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDODPRESENT::PresentDisplayOnlySetProgress(
        DXGDODPRESENT *this,
        const struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS *a2)
{
  __int64 VidPnSourceId; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi

  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId < *(_DWORD *)this )
  {
    v3 = *((_QWORD *)this + 1);
    if ( v3 )
    {
      v4 = 3040 * VidPnSourceId;
      if ( *(_DWORD *)(3040 * VidPnSourceId + v3 + 824) )
      {
        if ( a2->ProgressId == DXGK_PRESENT_DISPLAYONLY_PROGRESS_ID_FAILED )
          _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v4 + v3) + 140LL), 0x40000000u);
        if ( KeGetCurrentIrql() > 2u )
          KeInsertQueueDpc((PRKDPC)(v4 + v3 + 760), 0LL, 0LL);
        else
          KeSetEvent((PRKEVENT)(v4 + v3 + 736), 0, 0);
      }
    }
  }
}
