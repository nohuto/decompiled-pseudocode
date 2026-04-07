/*
 * XREFs of ??0VisualCollection@@QEAA@XZ @ 0x180021360
 * Callers:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

VisualCollection *__fastcall VisualCollection::VisualCollection(VisualCollection *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  return this;
}
