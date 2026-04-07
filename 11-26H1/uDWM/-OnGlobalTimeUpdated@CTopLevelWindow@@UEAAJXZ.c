/*
 * XREFs of ?OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ @ 0x180015EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BE@$00@@YA?AVDirtyFlags@@XZ @ 0x180015F74 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BE@$00@@YA-AVDirtyFlags.c)
 *     ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x180073BBC (-OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::OnGlobalTimeUpdated(CTopLevelWindow *this)
{
  unsigned int *v2; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 184) & 0x40) != 0 )
    CWindowIconic::OnGlobalTimeUpdated(*(CWindowIconic **)(*((_QWORD *)this + 87) + 488LL));
  if ( *((_DWORD *)this + 47) )
  {
    v2 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0BE__00__YA_AVDirtyFlags__XZ(&v4);
    CVisual::SetDirtyFlags(this, *v2);
  }
  return 0LL;
}
