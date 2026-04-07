/*
 * XREFs of ??1VisualCollection@@QEAA@XZ @ 0x18001BD30
 * Callers:
 *     ??1CContainerVisual@@MEAA@XZ @ 0x18001BAC0 (--1CContainerVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall VisualCollection::~VisualCollection(VisualCollection *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 != *((void **)this + 2) )
  {
    DefaultHeap::Free(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
