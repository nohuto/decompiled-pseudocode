/*
 * XREFs of ?RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ @ 0x1804C72D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804C2C70 (-RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ??0BatchLayout@CSwitchItemGrid@@QEAA@PEAV1@@Z @ 0x1804C5A48 (--0BatchLayout@CSwitchItemGrid@@QEAA@PEAV1@@Z.c)
 *     ??1BatchLayout@CSwitchItemGrid@@QEAA@XZ @ 0x1804C5BCC (--1BatchLayout@CSwitchItemGrid@@QEAA@XZ.c)
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x1804C741C (-Reset@GridLayout@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSwitchItemGrid::RemoveAllDescendants(CSwitchItemGrid *this)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  CSwitchItemGrid::BatchLayout::BatchLayout((CSwitchItemGrid::BatchLayout *)&v2, this);
  GridLayout::Reset((CSwitchItemGrid *)((char *)this + 768));
  CMultitaskingViewElementBase::RemoveAllDescendants(this);
  CSwitchItemGrid::BatchLayout::~BatchLayout((CSwitchItemGrid::BatchLayout *)&v2);
}
