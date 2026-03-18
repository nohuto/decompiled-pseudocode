/*
 * XREFs of DpiMiracastCbSendUserModeMessage @ 0x14024C490
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14006CDEC (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x14006DC28 (DpiMiracastAddRefMiracastDeviceContext.c)
 *     McTemplateK0xqqppq_EtwWriteTransfer @ 0x140089C3C (McTemplateK0xqqppq_EtwWriteTransfer.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x14024CEB8 (DpiMiracastSendAsyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastCbSendUserModeMessage(
        int *P,
        size_t Size,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v8; // edi
  int v9; // r15d
  int v11; // edx
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // r8
  size_t Sizea; // [rsp+20h] [rbp-58h]
  int Sizec; // [rsp+20h] [rbp-58h]
  size_t Sizeb; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  int v22; // [rsp+40h] [rbp-38h]
  __int64 v23; // [rsp+40h] [rbp-38h]

  v8 = a3;
  v9 = Size;
  if ( P && P[4] == 1953656900 && P[5] == 14 && *((_QWORD *)P + 54) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
    {
      v22 = 0;
      Sizec = Size;
      McTemplateK0xqqppq_EtwWriteTransfer(
        (__int64)P,
        &EventEnterDxgkCbSendUserModeMessage,
        a3,
        *((_QWORD *)P + 12),
        Sizec,
        a4,
        a6,
        a7,
        v22);
    }
    DpiMiracastAddRefMiracastDeviceContext((__int64)P, (unsigned int)DpiMiracastCbSendUserModeMessage);
    LODWORD(Sizea) = v9;
    v14 = DpiMiracastSendAsyncUserModeRequest(v12, v11, 2295820, v8, Sizea, a5, a4, a6, a7, 0LL, 0LL);
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 923;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
    {
      LODWORD(v23) = v14;
      LODWORD(v21) = a4;
      LODWORD(Sizeb) = v9;
      McTemplateK0xqqppq_EtwWriteTransfer(
        v13,
        &EventLeaveDxgkCbSendUserModeMessage,
        v15,
        *((_QWORD *)P + 12),
        Sizeb,
        v21,
        a6,
        a7,
        v23);
    }
    DpiMiracastReleaseMiracastDeviceContext(P, (unsigned int)DpiMiracastCbSendUserModeMessage);
  }
  else
  {
    v14 = -1073741585;
    WdLogSingleEntry2(2LL, P, -1073741585LL);
    WdLogGlobalForLineNumber = 886;
  }
  return (unsigned int)v14;
}
