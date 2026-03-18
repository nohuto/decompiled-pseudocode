/*
 * XREFs of ?VerifyRemoteVidPnSourceIdsAreValid@@YAHXZ @ 0x140155768
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifyRemoteVidPnSourceIdsAreValid(__int64 a1)
{
  unsigned int v1; // ebx
  char v2; // si
  int v3; // edi
  __int64 i; // rdx
  unsigned int v5; // ecx

  v1 = 0;
  v2 = 0;
  v3 = 0;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1096LL); i; i = *(_QWORD *)(i + 128) )
  {
    if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 )
    {
      v5 = *(_DWORD *)(i + 248);
      ++v2;
      if ( v5 > 0x10 || ((1 << v5) & v3) != 0 )
        return 0LL;
      v3 |= 1 << v5;
    }
  }
  LOBYTE(v1) = v3 == (1 << v2) - 1;
  return v1;
}
