/*
 * XREFs of TR_ValidateSecureTransferType @ 0x140029BF0
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x14003B040 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDi @ 0x140029D24 (WPP_RECORDER_SF_DDi.c)
 *     Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage @ 0x14003DAC4 (Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage.c)
 */

__int64 __fastcall TR_ValidateSecureTransferType(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 result; // rax
  char v4; // bl
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // edx
  char v11; // [rsp+38h] [rbp-10h]

  v2 = *(unsigned __int16 *)(a2 + 2);
  result = 0LL;
  v4 = a2;
  if ( v2 != 56 )
  {
    v6 = v2 - 8;
    switch ( v6 )
    {
      case '1':
      case '2':
        if ( *(_BYTE *)(a1 + 288) )
        {
          v8 = *(_QWORD *)(a1 + 48);
          if ( !*(_BYTE *)(v8 + 680) )
          {
            Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage(v8, a2);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
              LOBYTE(v10) = 2;
              WPP_RECORDER_SF_DDi(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                v10,
                v9,
                31,
                (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
                *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                v4);
            }
            result = 3221225506LL;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v11 = a2;
            v7 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
            LOBYTE(v7) = 2;
            WPP_RECORDER_SF_DDi(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v7,
              v6,
              30,
              (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
              v11);
          }
          result = 3221225485LL;
        }
        break;
      default:
        return result;
    }
  }
  return result;
}
