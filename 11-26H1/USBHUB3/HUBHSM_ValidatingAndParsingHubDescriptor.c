/*
 * XREFs of HUBHSM_ValidatingAndParsingHubDescriptor @ 0x14000A210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x14003D030 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x14003D4CC (HUBDESC_Validate30HubDescriptor.c)
 */

__int64 __fastcall HUBHSM_ValidatingAndParsingHubDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int16 v6; // ax
  unsigned int v7; // edi
  __int16 v8; // dx
  __int16 v9; // ax
  _WORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+34h] [rbp-44h]
  __int128 v13; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall *v14)(); // [rsp+48h] [rbp-30h]
  __int64 (__fastcall *v15)(); // [rsp+50h] [rbp-28h]
  __int64 v16; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 960);
  v11[1] = 0;
  v13 = 0LL;
  v17 = 0LL;
  v3 = *(_DWORD *)(v2 + 256);
  v11[0] = *(_WORD *)(v2 + 2474);
  v12 = v3;
  v14 = HUBMISC_LogDescriptorValidationErrorForHub;
  v15 = HUBMISC_LogDescriptorValidationWarningForHub;
  v16 = v2;
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 && (unsigned __int8)HUBDESC_Validate30HubDescriptor(v2 + 1196, a2, v11, *(_QWORD *)(v2 + 2536)) )
      {
        v6 = *(unsigned __int8 *)(v2 + 1198);
        v7 = 2053;
        *(_WORD *)(v2 + 48) = v6;
        *(_WORD *)(v2 + 150) = v6;
        if ( (*(_BYTE *)(v2 + 1199) & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)(v2 + 40), 4u);
        v8 = *(_WORD *)(v2 + 1199) & 0x18;
        if ( ((v8 - 16) & 0xFFF7) == 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v2 + 40), 0x10u);
          return v7;
        }
        if ( v8 == 8 )
          goto LABEL_9;
        return v7;
      }
LABEL_16:
      v7 = 2045;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v2 + 2536), a2, 3, 33, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
      }
      return v7;
    }
  }
  if ( !(unsigned __int8)HUBDESC_Validate20HubDescriptor(v2 + 1196, a2, v11, *(_QWORD *)(v2 + 2536)) )
    goto LABEL_16;
  v9 = *(unsigned __int8 *)(v2 + 1198);
  v7 = 2053;
  *(_WORD *)(v2 + 48) = v9;
  *(_WORD *)(v2 + 144) = v9;
  if ( (*(_BYTE *)(v2 + 1199) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)(v2 + 40), 4u);
  if ( (*(_BYTE *)(v2 + 1199) & 8) != 0 )
LABEL_9:
    _InterlockedOr((volatile signed __int32 *)(v2 + 40), 8u);
  return v7;
}
