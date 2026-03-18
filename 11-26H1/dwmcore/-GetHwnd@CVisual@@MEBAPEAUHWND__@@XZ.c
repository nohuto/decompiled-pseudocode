/*
 * XREFs of ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x18018D190
 * Callers:
 *     <none>
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x1800C88D0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

HWND __fastcall CVisual::GetHwnd(CVisual *this)
{
  HWND result; // rax
  int *v2; // rcx

  result = 0LL;
  if ( (*((_BYTE *)this + 100) & 0x40) != 0 )
  {
    v2 = (int *)*((_QWORD *)this + 27);
    if ( v2[1] < 0 )
      return *(HWND *)((char *)CSparseStorage::AllocatedStorage::FindSlot((CSparseStorage::AllocatedStorage *)v2, 1) + 4);
  }
  return result;
}
