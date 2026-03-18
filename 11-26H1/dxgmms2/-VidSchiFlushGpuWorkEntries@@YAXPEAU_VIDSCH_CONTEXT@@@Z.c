/*
 * XREFs of ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x140026504
 * Callers:
 *     VidSchiSwitchContext @ 0x14001FD00 (VidSchiSwitchContext.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1400252A0 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiDecrementContextReference @ 0x140026270 (VidSchiDecrementContextReference.c)
 * Callees:
 *     McTemplateK0pqIR1_EtwWriteTransfer @ 0x140026C50 (McTemplateK0pqIR1_EtwWriteTransfer.c)
 */

void __fastcall VidSchiFlushGpuWorkEntries(struct _VIDSCH_CONTEXT *a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // r9

  v4 = *((_QWORD *)a1 + 125);
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 248);
    if ( v5 )
    {
      if ( (byte_14008A202 & 8) != 0 )
      {
        v6 = *((_QWORD *)a1 + 7);
        if ( !v6 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
          LODWORD(v6) = (_DWORD)a1;
        McTemplateK0pqIR1_EtwWriteTransfer(v4, v5, a3, v6, v5, v4);
      }
      *((_DWORD *)a1 + 248) = 0;
    }
  }
}
