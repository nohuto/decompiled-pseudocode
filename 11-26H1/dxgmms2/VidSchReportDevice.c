/*
 * XREFs of VidSchReportDevice @ 0x14011D0A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1400379BC (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x140038370 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x140043428 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqtttt_EtwWriteTransfer @ 0x140046074 (McTemplateK0pqqtttt_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchReportDevice(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // rbx
  __int64 v5; // rcx
  int v6; // esi
  unsigned int v7; // edx
  __int64 v8; // r10
  char v9; // dl
  __int64 v10; // r8
  char v11; // r9
  __int64 v12; // r11
  __int64 v13; // rcx
  char v14; // r9
  unsigned __int8 *v15; // rax
  __int64 v16; // r9
  __int64 v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+28h] [rbp-80h]
  __int64 v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  __int64 v21; // [rsp+40h] [rbp-68h]
  __int64 v22; // [rsp+48h] [rbp-60h]

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( a1 == *(_QWORD *)(v2 + 264) )
      v3 = *(_QWORD *)(v2 + 272);
    else
      v3 = 0LL;
    if ( v3 )
    {
      if ( bTracingEnabled )
      {
        v6 = 1 << VidSchiSchedulerNodeToDriverEngine(v2, *(_DWORD *)(v3 + 88));
        v9 = VidSchiSchedulerNodeToDriverNode(v8, v7);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 8);
          if ( !v13 )
            v13 = v12;
        }
        else
        {
          v13 = 0LL;
        }
        v14 = (2 * (v11 & 1)) | 1;
        if ( (byte_14008A201 & 8) != 0 )
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            v13,
            (const EVENT_DESCRIPTOR *)" ",
            v10,
            v13,
            v9,
            v6,
            0,
            0,
            0,
            0,
            0,
            v14,
            v3);
      }
      if ( (byte_14008A201 & 1) != 0 )
      {
        v15 = *(unsigned __int8 **)(a1 + 40);
        v16 = *(_QWORD *)(v3 + 56);
        if ( !v16 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
          v16 = v3;
        LODWORD(v22) = v15[7077];
        LODWORD(v21) = v15[7079];
        LODWORD(v20) = v15[7078];
        LODWORD(v19) = v15[7076];
        LODWORD(v18) = *(_DWORD *)(v3 + 412);
        LODWORD(v17) = *(_DWORD *)(v3 + 408);
        McTemplateK0pqqtttt_EtwWriteTransfer(v15[7077], v15[7079], v15[7078], v16, v17, v18, v19, v20, v21, v22);
      }
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5970;
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225485LL;
  }
}
