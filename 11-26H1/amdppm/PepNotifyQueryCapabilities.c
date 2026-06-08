/*
 * XREFs of PepNotifyQueryCapabilities @ 0x14003CB34
 * Callers:
 *     QueryPepCapabilites @ 0x14003CE50 (QueryPepCapabilites.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyQueryCapabilities(__int64 a1, _DWORD *a2, _BYTE *a3, _DWORD *a4, _BYTE *a5, _BYTE *a6)
{
  bool v9; // zf
  char v11; // cl
  int v12; // edx
  int v13; // edi
  int v15; // [rsp+28h] [rbp-60h]
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF

  v16 = 0LL;
  v9 = *(_DWORD *)(a1 + 80) == 0;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  if ( !v9 )
    v11 = 1;
  BYTE12(v16) = v11;
  v13 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 1LL, &v16);
  if ( v13 >= 0 )
  {
    *a2 = DWORD1(v16);
    *a4 = v16;
    *a5 = BYTE8(v16);
    *a6 = BYTE9(v16);
    *a3 = BYTE10(v16);
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
    v15 = v13;
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      2,
      20,
      (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
      v15);
  }
  return (unsigned int)v13;
}
