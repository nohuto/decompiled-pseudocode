/*
 * XREFs of ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1400829E0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x140070324 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x140082A0C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall SURFREFVIEW::bUnMapImmediate(SURFACE **this)
{
  __int64 result; // rax
  SURFACE *v3; // rcx

  result = 0LL;
  v3 = *this;
  if ( v3 )
    result = SURFACE::bUnMapImmediate(v3);
  *this = 0LL;
  return result;
}
