/*
 * XREFs of _scope_exit__lambda_341f87df47f96b7a26159caf2415beed____::_2_::scope_exit::_scope_exit @ 0x14000F3F0
 * Callers:
 *     ?ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z @ 0x1400149A4 (-ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall scope_exit__lambda_341f87df47f96b7a26159caf2415beed____::_2_::scope_exit::_scope_exit(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    while ( 1 )
    {
      v2 = **(_QWORD ***)a1;
      if ( v2 == *(_QWORD **)a1 )
        break;
      v3 = *v2;
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      ExFreePool(v2);
    }
  }
}
