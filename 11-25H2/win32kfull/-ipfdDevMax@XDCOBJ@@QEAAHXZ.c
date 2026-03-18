/*
 * XREFs of ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x14033EB70
 * Callers:
 *     ?GrepDescribePixelFormat@@YAHAEAVXDCOBJ@@HIPEAUtagPIXELFORMATDESCRIPTOR@@@Z @ 0x14033EA54 (-GrepDescribePixelFormat@@YAHAEAVXDCOBJ@@HIPEAUtagPIXELFORMATDESCRIPTOR@@@Z.c)
 *     NtGdiSetPixelFormat @ 0x14033EC60 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x14033EB98 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMax(XDCOBJ *this)
{
  if ( *(__int16 *)(*(_QWORD *)this + 2088LL) < 0 )
    return XDCOBJ::ipfdDevMaxGet(this);
  else
    return (unsigned int)*(__int16 *)(*(_QWORD *)this + 2088LL);
}
