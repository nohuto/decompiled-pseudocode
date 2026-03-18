/*
 * XREFs of VidSchReportHwContext @ 0x140124060
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqqttt_EtwWriteTransfer @ 0x14004640C (McTemplateK0pqqqttt_EtwWriteTransfer.c)
 *     McTemplateK0pdd_EtwWriteTransfer @ 0x1400474E0 (McTemplateK0pdd_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchReportHwContext(__int64 a1)
{
  __int64 v2; // r9
  unsigned __int8 *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+28h] [rbp-30h]

  if ( (byte_14008A201 & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( !v2 || (*(_DWORD *)(a1 + 56) & 0x40) != 0 )
      v2 = a1;
    v3 = *(unsigned __int8 **)(*(_QWORD *)(a1 + 8) + 40LL);
    McTemplateK0pqqqttt_EtwWriteTransfer(
      v3[7077],
      *(unsigned int *)(a1 + 108),
      v3[7079],
      v2,
      *(_DWORD *)(a1 + 144),
      *(_DWORD *)(a1 + 104),
      *(_DWORD *)(a1 + 108),
      v3[7076],
      v3[7079],
      v3[7077]);
    if ( (byte_14008A201 & 1) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      if ( !v6 || (*(_DWORD *)(a1 + 56) & 0x40) != 0 )
        v6 = a1;
      LODWORD(v9) = *(_DWORD *)(a1 + 72);
      LODWORD(v8) = v9;
      McTemplateK0pdd_EtwWriteTransfer((unsigned int)v9, v4, v5, v6, v8, v9);
    }
  }
  return 0LL;
}
