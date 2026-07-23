/*
 * XREFs of ExpAllocatePoolTrackTableSnapshot @ 0x140530FF8
 * Callers:
 *     ExpCapturePoolTrackTables @ 0x140529B0C (ExpCapturePoolTrackTables.c)
 *     ExpCapturePoolTrackTablesPrecise @ 0x140777D38 (ExpCapturePoolTrackTablesPrecise.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall ExpAllocatePoolTrackTableSnapshot(__int64 a1, unsigned __int64 a2, unsigned __int64 **a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rax
  unsigned __int64 *Pool3; // rax

  v4 = 0;
  v6 = 80 * a2;
  if ( is_mul_ok(0x50uLL, a2)
    && v6 + 8 >= v6
    && (Pool3 = (unsigned __int64 *)ExAllocatePool3(a1, v6 + 8, 1868983881LL, 0LL, 0)) != 0LL )
  {
    *Pool3 = a2;
    *a3 = Pool3;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
