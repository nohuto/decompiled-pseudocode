/*
 * XREFs of VidSchReportContext @ 0x14011D600
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqqtttt_EtwWriteTransfer @ 0x140046074 (McTemplateK0pqqtttt_EtwWriteTransfer.c)
 *     McTemplateK0pdd_EtwWriteTransfer @ 0x1400474E0 (McTemplateK0pdd_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchReportContext(__int64 a1)
{
  __int64 v2; // r9
  int v3; // edi
  unsigned __int8 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]

  if ( a1 )
  {
    if ( (byte_14008A201 & 1) != 0 )
    {
      v2 = *(_QWORD *)(a1 + 56);
      v3 = *(_DWORD *)(a1 + 408);
      v4 = *(unsigned __int8 **)(*(_QWORD *)(a1 + 104) + 40LL);
      if ( !v2 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        v2 = a1;
      McTemplateK0pqqtttt_EtwWriteTransfer(
        *(unsigned int *)(a1 + 412),
        v4[7077],
        v4[7079],
        v2,
        v3,
        *(_DWORD *)(a1 + 412),
        v4[7076],
        v4[7078],
        v4[7079],
        v4[7077]);
      if ( (byte_14008A201 & 1) != 0 )
      {
        v9 = *(_QWORD *)(a1 + 56);
        if ( !v9 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
          v9 = a1;
        LODWORD(v11) = *(_DWORD *)(a1 + 416);
        LODWORD(v10) = v11;
        McTemplateK0pdd_EtwWriteTransfer((unsigned int)v11, v5, v6, v9, v10, v11);
      }
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6023;
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
    return 3221225485LL;
  }
}
