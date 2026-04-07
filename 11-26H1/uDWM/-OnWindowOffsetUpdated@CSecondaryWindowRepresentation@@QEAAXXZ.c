/*
 * XREFs of ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x1800640B4
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180014300 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18008B908 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@02$00@@YA?AVDirtyFlags@@XZ @ 0x18001647C (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@02$00@@YA-AVDirtyFla.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXVDirtyFlags@@@Z @ 0x180029674 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXVDirtyFlags@@@Z.c)
 *     ?GetOffsetToOwner@CWindowData@@QEAA?AUtagPOINT@@XZ @ 0x180064160 (-GetOffsetToOwner@CWindowData@@QEAA-AUtagPOINT@@XZ.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnWindowOffsetUpdated(CSecondaryWindowRepresentation *this)
{
  __int64 i; // rdi
  const struct tagPOINT *v3; // rax
  __int64 v4; // r8
  unsigned int *v5; // rax
  __int64 v6; // rcx
  const struct tagPOINT *OffsetToOwner; // rax
  __int64 v8; // r8
  struct tagPOINT *v9; // r9
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 4) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 38); i = (unsigned int)(i + 1) )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * i);
      if ( *(_QWORD *)(v6 + 48) )
      {
        OffsetToOwner = (const struct tagPOINT *)CWindowData::GetOffsetToOwner(*(CWindowData **)(v6 + 32));
        CVisual::SetOffset(v9, OffsetToOwner, v8);
      }
    }
    if ( *((_QWORD *)this + 6) )
    {
      v3 = (const struct tagPOINT *)CWindowData::GetOffsetToOwner(*((CWindowData **)this + 4));
      CVisual::SetOffset(*((struct tagPOINT **)this + 6), v3, v4);
      if ( *(_DWORD *)(*((_QWORD *)this + 6) + 32LL) )
      {
        v5 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__02_00__YA_AVDirtyFlags__XZ(&v10);
        CSecondaryWindowRepresentation::SetDirtyFlags((__int64)this, *v5);
      }
    }
  }
}
