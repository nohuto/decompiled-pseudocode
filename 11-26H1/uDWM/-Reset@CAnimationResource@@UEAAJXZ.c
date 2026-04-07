/*
 * XREFs of ?Reset@CAnimationResource@@UEAAJXZ @ 0x180077FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180008110 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimationResource::Reset(CAnimationResource *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_WORD *)this + 32) = 0;
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 24, 0x20u);
  return 0LL;
}
