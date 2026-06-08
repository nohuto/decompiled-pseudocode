/*
 * XREFs of PepNotifyQueryCapabilities @ 0x14003D744
 * Callers:
 *     QueryPepCapabilites @ 0x14003DA60 (QueryPepCapabilites.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyQueryCapabilities(__int64 a1, _DWORD *a2, _BYTE *a3, _DWORD *a4, _BYTE *a5, _BYTE *a6)
{
  bool v9; // zf
  char v11; // cl
  int v12; // edi
  int v14; // [rsp+28h] [rbp-60h]
  __int128 v15; // [rsp+30h] [rbp-58h] BYREF

  v15 = 0LL;
  v9 = *(_DWORD *)(a1 + 80) == 0;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  if ( !v9 )
    v11 = 1;
  BYTE12(v15) = v11;
  v12 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 1LL, &v15);
  if ( v12 >= 0 )
  {
    *a2 = DWORD1(v15);
    *a4 = v15;
    *a5 = BYTE8(v15);
    *a6 = BYTE9(v15);
    *a3 = BYTE10(v15);
    if ( (*(_QWORD *)(a1 + 280) & 0x200000200LL) == 0 )
      *a2 = 0;
    if ( !_bittest64((const signed __int64 *)(a1 + 280), 0x24u) )
    {
      *a4 = 0;
      *a5 = 0;
      *a3 = 0;
    }
    if ( (*(_DWORD *)(a1 + 280) & 0x400LL) == 0 )
      *a6 = 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = v12;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x14u,
      (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
      v14);
  }
  return (unsigned int)v12;
}
