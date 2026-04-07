/*
 * XREFs of ??1VisualCollection@@QEAA@XZ @ 0x180014128
 * Callers:
 *     ??1CContainerVisual@@MEAA@XZ @ 0x1800140AC (--1CContainerVisual@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VisualCollection::~VisualCollection(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 1);
}
