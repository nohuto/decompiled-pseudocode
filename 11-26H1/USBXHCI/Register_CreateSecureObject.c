/*
 * XREFs of Register_CreateSecureObject @ 0x14007C968
 * Callers:
 *     Register_Create @ 0x14007C7CC (Register_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall Register_CreateSecureObject(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rsi
  __int16 v4; // r14
  __int64 v5; // rcx
  bool v6; // si
  bool v7; // r14
  int v8; // edi
  int v9; // edx
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  GUID v13[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+70h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 8);
  LODWORD(v12) = 0;
  v11 = 0LL;
  v2 = v1[93];
  v4 = v2;
  v5 = v1[14];
  v15 = 0LL;
  v14 = 0LL;
  LODWORD(v14) = 7;
  memset(v13, 0, sizeof(v13));
  v6 = (v2 & 0x4000) == 0;
  *((_QWORD *)&v14 + 1) = v1[127];
  BYTE1(v15) = v6;
  v7 = (v4 & 0x2000) == 0LL;
  BYTE2(v15) = v7;
  LOBYTE(v15) = v1[92] & 1;
  v8 = SecureChannel_SendRequestSynchronously(v5, v13, 56, (__int64)&v11, 16);
  if ( v8 >= 0 )
  {
    v9 = v11;
    if ( (int)v11 >= 0 )
    {
      *(_QWORD *)(a1 + 128) = v12;
      *(_BYTE *)(a1 + 136) = v6;
      *(_BYTE *)(a1 + 137) = v7;
    }
    else
    {
      v8 = v11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v9,
          6,
          73,
          (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
          v11);
      }
    }
  }
  return (unsigned int)v8;
}
