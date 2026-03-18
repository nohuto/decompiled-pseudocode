/*
 * XREFs of ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1400787C0
 * Callers:
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401D52B0 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     DxgkSignalEventCB @ 0x140084D60 (DxgkSignalEventCB.c)
 */

__int64 __fastcall CallDxgkSignalEventCbAtDispatch(struct _DXGKARGCB_SIGNALEVENT *a1)
{
  KIRQL v2; // di

  v2 = KfRaiseIrql(2u);
  LODWORD(a1) = DxgkSignalEventCB(a1);
  KeLowerIrql(v2);
  return (unsigned int)a1;
}
