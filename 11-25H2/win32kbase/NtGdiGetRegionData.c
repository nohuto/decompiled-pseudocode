/*
 * XREFs of NtGdiGetRegionData @ 0x1400207A0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRegionData @ 0x140013A10 (GreGetRegionData.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     FreeTmpBuffer @ 0x14001FD40 (FreeTmpBuffer.c)
 *     AllocFreeTmpBuffer @ 0x140098060 (AllocFreeTmpBuffer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall NtGdiGetRegionData(HRGN a1, unsigned int a2, volatile void *a3)
{
  unsigned int v6; // esi
  _BYTE *v7; // rdi
  unsigned int RegionData; // eax
  _BYTE v10[448]; // [rsp+30h] [rbp-1F8h] BYREF

  v6 = 1;
  v7 = 0LL;
  if ( a3 )
  {
    if ( a2 > 0x1C0 )
    {
      if ( a2 <= 0x2710000 )
        v7 = (_BYTE *)AllocFreeTmpBuffer(a2);
    }
    else
    {
      v7 = v10;
    }
    if ( !v7 )
    {
      EngSetLastError(0x57u);
      v6 = 0;
    }
  }
  if ( v6 )
  {
    RegionData = GreGetRegionData(a1, a2, (__int64)v7);
    v6 = RegionData;
    if ( a3 )
    {
      if ( RegionData )
      {
        ProbeForWrite(a3, RegionData, 4u);
        memmove((void *)a3, v7, v6);
      }
    }
  }
  if ( v7 && v7 != v10 )
    FreeTmpBuffer((__int64)v7);
  return v6;
}
