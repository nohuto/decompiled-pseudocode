/*
 * XREFs of ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x18002F3EC
 * Callers:
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800CEBD8 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ?Reset@Mesh2D@@QEAAXXZ @ 0x18002F438 (-Reset@Mesh2D@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
Mesh2D *__fastcall Mesh2D::Mesh2D(Mesh2D *this, const struct tagRECT *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rdx

  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this, 0LL, 0);
  DynArrayImpl<0>::DynArrayImpl<0>(v3 + 32, v4, v5);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 64, v6, v7);
  *((_QWORD *)this + 13) &= v8;
  Mesh2D::Reset(this);
  return this;
}
