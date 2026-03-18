/*
 * XREFs of Bulk_EP_Enable @ 0x140034BC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall Bulk_EP_Enable(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  int v4; // eax
  unsigned __int16 v5; // ax
  __int64 v6; // r10
  unsigned int v7; // edx
  unsigned int v8; // r8d
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+38h] [rbp-20h]
  unsigned int v13; // [rsp+40h] [rbp-18h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) == 3 )
  {
    v3 = *(_QWORD *)(a1 + 56);
    if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(a1, a2)
      && !*(_WORD *)(v3 + 100)
      && *(_BYTE *)(v3 + 39)
      && ((v4 = *(_DWORD *)(v3 + 128), v4 == 5) || v4 == 1) )
    {
      v5 = *(_WORD *)(v3 + 105);
    }
    else
    {
      v5 = *(_WORD *)(v3 + 100) & 0x7FF;
    }
    v6 = *(_QWORD *)(a1 + 56);
    v7 = *(_DWORD *)(a1 + 4) % (v5 * ((unsigned int)*(unsigned __int8 *)(v6 + 113) + 1));
    if ( v7 )
    {
      v8 = *(_DWORD *)(a1 + 4) - v7;
      *(_DWORD *)(a1 + 4) = v8;
      *(_DWORD *)(a1 + 8) = (v8 + 4095) >> 12;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = v8;
        v12 = *(_DWORD *)(a1 + 64);
        v11 = *(_DWORD *)(v6 + 152);
        v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
          4u,
          0xEu,
          0xBu,
          (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
          v10,
          v11,
          v12,
          v13);
      }
    }
  }
  return 0LL;
}
