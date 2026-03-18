/*
 * XREFs of ?bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z @ 0x1401FED24
 * Callers:
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1401FECF0 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 * Callees:
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400AB1D8 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

char __fastcall RGNCOREOBJ::bContain(RGNCOREOBJ *this, struct _RECTL *a2)
{
  bool v4; // al
  _DWORD *v5; // rbx
  char v6; // si
  const struct BaseRustGlobals *BaseRustGlobals; // rax

  v4 = IsBaseRustExportsEnabled<1>();
  v5 = *(_DWORD **)this;
  v6 = 0;
  if ( v4 )
  {
    BaseRustGlobals = GetBaseRustGlobals();
    return (*(unsigned int (__fastcall **)(_DWORD *, struct _RECTL *))(*(_QWORD *)BaseRustGlobals + 8LL))(v5, a2) != 0;
  }
  else
  {
    if ( v5[7] <= a2->left && v5[9] >= a2->right && v5[8] <= a2->top )
      return v5[10] >= a2->bottom;
    return v6;
  }
}
