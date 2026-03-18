/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14001DF14
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x14001DB54 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     NtGdiCreateEllipticRgn @ 0x140110300 (NtGdiCreateEllipticRgn.c)
 *     NtGdiCreateRoundRectRgn @ 0x140110F30 (NtGdiCreateRoundRectRgn.c)
 *     NtGdiPathToRegion @ 0x1401128A0 (NtGdiPathToRegion.c)
 * Callees:
 *     <none>
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(RGNOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  void *v3; // rbx
  struct HOBJ__ *inserted; // rax
  volatile signed __int16 *v5; // rcx
  struct HOBJ__ *v6; // rdi
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int16 *v9; // [rsp+40h] [rbp-18h]
  char v10; // [rsp+48h] [rbp-10h]

  v2 = Gre::Base::Globals(this);
  memset(v8, 0, sizeof(v8));
  PushThreadGuardedObject(
    v8,
    v8,
    UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  v3 = *(void **)this;
  v9 = 0LL;
  v10 = 0;
  inserted = HmgInsertObjectInternal(v2, v3, 1u, 4u);
  v5 = v9;
  v6 = inserted;
  if ( inserted )
    v5 = (volatile signed __int16 *)v3;
  v9 = v5;
  if ( v5 && !v10 )
    _InterlockedDecrement16(v5 + 6);
  PopThreadGuardedObject(v8);
  return v6;
}
