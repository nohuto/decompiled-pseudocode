/*
 * XREFs of ??1?$CAutoHandle@PEAUHMENU__@@@@QEAA@XZ @ 0x1804C1128
 * Callers:
 *     _SwitchItemThumbnailElement::ShowContextMenu_::_1_::dtor$0 @ 0x1806C982A (_SwitchItemThumbnailElement--ShowContextMenu_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CAutoHandle<HMENU__ *>::~CAutoHandle<HMENU__ *>()
{
  return CTSmartObj<HMENU__ *,CAutoHandle_Policy<HMENU__ *>>::Release();
}
