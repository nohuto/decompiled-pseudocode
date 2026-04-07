/*
 * XREFs of ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x1800447C8
 * Callers:
 *     ?ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z @ 0x180006EC0 (-ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180017890 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 * Callees:
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x18004485C (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CWindowData::PropertiesAllowAutoParenting(CWindowData *this)
{
  char v1; // si
  CWindowData *v4; // rcx
  bool v5; // bl

  v1 = 1;
  if ( (*((_BYTE *)this + 672) & 1) == 0 )
    return 0;
  v4 = (CWindowData *)*((_QWORD *)this + 75);
  if ( !v4 )
    return 0;
  if ( (*((_DWORD *)this + 29) & 0xC00000) == 0xC00000 )
    return 0;
  if ( !*((_QWORD *)this + 4) )
    return 0;
  if ( *((_DWORD *)v4 + 12) > *((_DWORD *)this + 12) )
    return 0;
  if ( *((_DWORD *)v4 + 14) < *((_DWORD *)this + 14) )
    return 0;
  if ( *((_DWORD *)v4 + 13) > *((_DWORD *)this + 13) )
    return 0;
  if ( *((_DWORD *)v4 + 15) < *((_DWORD *)this + 15) )
    return 0;
  v5 = CWindowData::WillEndAnimationCloaked(v4);
  if ( CWindowData::WillEndAnimationCloaked(this) != v5 )
    return 0;
  return v1;
}
