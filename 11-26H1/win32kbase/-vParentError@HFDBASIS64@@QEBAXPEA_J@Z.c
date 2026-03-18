/*
 * XREFs of ?vParentError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x140182808
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1401822B0 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vParentError(HFDBASIS64 *this, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v3 = 4LL * *((_QWORD *)this + 3);
  v4 = -4LL * *((_QWORD *)this + 3);
  if ( v4 < 0 )
    v4 = 4LL * *((_QWORD *)this + 3);
  v5 = 8LL * *((_QWORD *)this + 2);
  v6 = 4LL * *((_QWORD *)this + 3) - v5;
  v7 = v5 - v3;
  v8 = v3 - v5;
  if ( v7 >= 0 )
    v8 = v7;
  if ( v4 <= v8 )
  {
    v4 = v7;
    if ( v7 < 0 )
      v4 = v6;
  }
  *a2 = v4;
}
