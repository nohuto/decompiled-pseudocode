/*
 * XREFs of ?SetSite@JointDivider@@UEAAJPEAUIUnknown@@@Z @ 0x180052C90
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall JointDivider::SetSite(HWND *this, struct IUnknown *a2)
{
  if ( !a2 && this[2] )
  {
    DestroyWindow(this[6]);
    this[6] = 0LL;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(this + 2, a2);
  return 0LL;
}
