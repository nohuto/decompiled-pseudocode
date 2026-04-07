/*
 * XREFs of ?SetInsetFromParentBottom@CVisual@@QEAAXH@Z @ 0x180011CA0
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180011D38 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA?AVDirtyFlags@@XZ @ 0x180016454 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA-AVDirtyFla.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetInsetFromParentBottom(CVisual *this, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rax
  __int64 v4; // r9
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_DWORD *)this + 21) != (_DWORD)a2 )
  {
    *((_DWORD *)this + 21) = a2;
    v3 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(
                           &v5,
                           a2,
                           a3,
                           this);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, *v3);
  }
}
