/*
 * XREFs of Register_MapSecureMmio @ 0x140049F1C
 * Callers:
 *     Register_PrepareHardware @ 0x14007D3E0 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall Register_MapSecureMmio(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 8);
  v8 = 0LL;
  v3 = *(_QWORD *)(v1 + 112);
  v4 = *(_QWORD *)(a1 + 128);
  v9 = 0LL;
  v10 = 0LL;
  v11 = v4;
  v13 = *(_QWORD *)(a1 + 24);
  v12 = 8LL;
  v6 = SecureChannel_SendRequestSynchronously(v3, (GUID *)&v9, 48, (__int64)&v8, 8);
  if ( v6 >= 0 )
  {
    v6 = v8;
    if ( (int)v8 >= 0 )
    {
      *(_DWORD *)(a1 + 80) = HIDWORD(v8);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v5,
        6,
        74,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        v8);
    }
  }
  return (unsigned int)v6;
}
