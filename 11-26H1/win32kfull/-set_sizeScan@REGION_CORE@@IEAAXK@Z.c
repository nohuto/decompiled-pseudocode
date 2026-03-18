/*
 * XREFs of ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1400AB1FC
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400AA854 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400ABFD0 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400AB1D8 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall REGION_CORE::set_sizeScan(REGION_CORE *this, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rcx
  const struct BaseRustGlobals *BaseRustGlobals; // rax
  const struct BaseRustExports *v6; // rbx

  v2 = a2;
  if ( IsBaseRustExportsEnabled<1>() )
  {
    BaseRustGlobals = GetBaseRustGlobals();
    v6 = *(const struct BaseRustExports **)BaseRustGlobals;
    (*(void (__fastcall **)(REGION_CORE *, _QWORD))(*(_QWORD *)BaseRustGlobals + 192LL))(this, (unsigned int)v2);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v6, this);
  }
  else
  {
    v4 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 2) = v2;
    if ( v4 < v2 )
    {
      *((_QWORD *)this + 2) = v4;
      RgnCaptureLiveMemoryDumpOnInvalidSizedScan();
    }
  }
}
