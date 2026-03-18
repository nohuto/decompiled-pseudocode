/*
 * XREFs of ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1400DA9A0
 * Callers:
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1400C67F4 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     vMatchAPal @ 0x1401C5BD0 (vMatchAPal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::ulTime(XEPALOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v2 == v1 )
    return *(unsigned int *)(v1 + 32);
  else
    return *(unsigned int *)(v2 + 32);
}
