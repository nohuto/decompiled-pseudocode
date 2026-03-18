/*
 * XREFs of ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x18017840C
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x180177DE4 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x1800C88D0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

float __fastcall CVisual::GetNotifiedWorldRenderingScale(CVisual *this)
{
  CSparseStorage::AllocatedStorage *v1; // rcx

  v1 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this + 27);
  if ( (*((_DWORD *)v1 + 1) & 0x1000000) != 0 )
    return *((float *)CSparseStorage::AllocatedStorage::FindSlot(v1, 8) + 1);
  else
    return 0.0;
}
