/*
 * XREFs of NtGdiGetRegionData @ 0x1400102B0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRegionData @ 0x1400103C0 (GreGetRegionData.c)
 *     AllocFreeTmpBuffer @ 0x1400110D0 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1400113B0 (FreeTmpBuffer.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x14003DBE0 (-GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetRegionData(HRGN a1, unsigned int a2, void *a3)
{
  unsigned __int64 v4; // rsi
  unsigned int v6; // edi
  _BYTE *v7; // rbx
  unsigned int RegionData; // eax
  unsigned __int64 v9; // r9
  _BYTE v11[464]; // [rsp+40h] [rbp-208h] BYREF

  v4 = a2;
  v6 = 1;
  v7 = 0LL;
  if ( a3 )
  {
    if ( a2 > 0x1D0 )
    {
      if ( a2 <= 0x2710000 )
        v7 = (_BYTE *)AllocFreeTmpBuffer(a2);
    }
    else
    {
      v7 = v11;
    }
    if ( !v7 )
    {
      EngSetLastError(0x57u);
      v6 = 0;
    }
  }
  if ( v6 )
  {
    RegionData = GreGetRegionData(a1);
    v6 = RegionData;
    if ( a3 )
    {
      if ( RegionData )
      {
        v9 = RegionData;
        if ( (unsigned int)v4 < RegionData )
          v9 = (unsigned int)v4;
        GreProbeAndWriteToUntrustedVa(a3, v4, v7, v9, 1uLL);
      }
    }
  }
  if ( v7 && v7 != v11 )
    FreeTmpBuffer(v7);
  return v6;
}
