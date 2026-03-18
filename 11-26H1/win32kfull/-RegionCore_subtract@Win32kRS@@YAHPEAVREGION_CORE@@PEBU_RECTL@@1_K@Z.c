/*
 * XREFs of ?RegionCore_subtract@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_RECTL@@1_K@Z @ 0x1400A9784
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400AA854 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_subtract(
        Win32kRS *this,
        struct REGION_CORE *a2,
        const struct _RECTL *a3,
        const struct _RECTL *a4)
{
  __int64 v8; // rbp

  v8 = *(_QWORD *)GetBaseRustGlobals();
  LODWORD(a4) = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *, const struct _RECTL *, const struct _RECTL *))(v8 + 168))(
                  this,
                  a2,
                  a3,
                  a4);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)v8, this);
  return (unsigned int)a4;
}
