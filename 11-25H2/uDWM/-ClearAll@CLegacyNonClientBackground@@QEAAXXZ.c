/*
 * XREFs of ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ @ 0x18002207C
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18000C5C4 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180020A4C (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CLegacyNonClientBackground::ClearAll(CLegacyNonClientBackground *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  CLegacyNonClientBackground::DirtyForRebuild(this);
}
