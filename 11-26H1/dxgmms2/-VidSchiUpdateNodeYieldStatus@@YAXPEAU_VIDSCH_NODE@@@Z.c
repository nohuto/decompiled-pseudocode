/*
 * XREFs of ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140030808
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContext @ 0x1400230C0 (VidSchiSelectContext.c)
 * Callees:
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x140030924 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     VidSchiStartNodeYield @ 0x140030A00 (VidSchiStartNodeYield.c)
 *     McTemplateK0pqxxxx_EtwWriteTransfer @ 0x140030B84 (McTemplateK0pqxxxx_EtwWriteTransfer.c)
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140031C3C (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiUpdateNodeYieldStatus(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rbp
  char v3; // cl
  int v4; // esi
  LARGE_INTEGER v5; // rdx
  LARGE_INTEGER v6; // rdi
  LARGE_INTEGER v7; // r8
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  union _LARGE_INTEGER v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v3 = *(_DWORD *)(v1 + 224) + 1;
  v12.QuadPart = 0LL;
  v4 = ~((1 << v3) - 1);
  v6 = KeQueryPerformanceCounter(&v12);
  v8 = *((_QWORD *)a1 + 265);
  if ( (v4 & *((_DWORD *)a1 + 473)) != 0 )
  {
    if ( v8 )
    {
      v10 = v6.QuadPart - v8;
      v11 = *((_QWORD *)a1 + 266);
      if ( v10 >= v11 )
      {
        VidSchiStopNodeYield(a1);
      }
      else
      {
        *((_QWORD *)a1 + 265) = 0LL;
        *((_QWORD *)a1 + 266) = v11 - v10;
      }
    }
    if ( *((_BYTE *)a1 + 2144) && (byte_14008A201 & 1) != 0 )
      McTemplateK0pqxxxx_EtwWriteTransfer(
        *((_DWORD *)a1 + 473) & v4,
        v5.LowPart,
        v7.LowPart,
        *(_QWORD *)(v1 + 16),
        0,
        *((_WORD *)a1 + 2),
        *((_BYTE *)a1 + 1892) & v4,
        0,
        0);
  }
  else if ( !v8 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiMonitorRefreshPeriodFromNode)(
           a1,
           (LARGE_INTEGER)v5.QuadPart,
           (LARGE_INTEGER)v7.QuadPart);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
      a1,
      (LARGE_INTEGER)v6.QuadPart,
      (union _LARGE_INTEGER)v12.QuadPart,
      v9);
  }
}
