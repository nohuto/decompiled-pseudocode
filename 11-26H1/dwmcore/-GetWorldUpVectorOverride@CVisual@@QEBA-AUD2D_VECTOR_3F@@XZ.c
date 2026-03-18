/*
 * XREFs of ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801975CC
 * Callers:
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801973A0 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x1800C88D0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

struct D2D_VECTOR_3F *__fastcall CVisual::GetWorldUpVectorOverride(
        CSparseStorage::AllocatedStorage **this,
        struct D2D_VECTOR_3F *__return_ptr retstr)
{
  struct D2D_VECTOR_3F *v2; // r9
  struct CSparseStorage::DataInfo *Slot; // rax

  v2 = retstr;
  if ( (*((_DWORD *)this[27] + 1) & 0x20000) != 0 )
  {
    *(_QWORD *)&retstr->x = 0LL;
    retstr->z = 0.0;
    Slot = CSparseStorage::AllocatedStorage::FindSlot(this[27], 15);
    *(_QWORD *)&v2->x = *(_QWORD *)((char *)Slot + 4);
    v2->z = *((FLOAT *)Slot + 3);
  }
  else
  {
    *(_QWORD *)&retstr->x = 0LL;
    retstr->z = 0.0;
  }
  return v2;
}
