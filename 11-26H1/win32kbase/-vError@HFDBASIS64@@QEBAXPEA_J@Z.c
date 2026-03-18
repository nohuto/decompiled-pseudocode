/*
 * XREFs of ?vError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x140198C40
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1401822B0 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vError(HFDBASIS64 *this, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 3);
  v3 = *((_QWORD *)this + 2);
  v4 = -v3;
  v5 = -v2;
  v6 = -v3;
  if ( v3 >= 0 )
    v6 = v3;
  if ( v2 >= 0 )
    v5 = v2;
  if ( v6 <= v5 )
  {
    v4 = v2;
    if ( v2 < 0 )
      v4 = -v2;
  }
  else if ( v3 >= 0 )
  {
    v4 = v3;
  }
  *a2 = v4;
}
