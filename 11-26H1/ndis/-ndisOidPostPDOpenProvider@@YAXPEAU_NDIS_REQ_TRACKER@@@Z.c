/*
 * XREFs of ?ndisOidPostPDOpenProvider@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400A6EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     WPP_RECORDER_SF_qqqqd @ 0x1400A9304 (WPP_RECORDER_SF_qqqqd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1400A9430 (WPP_RECORDER_SF_qqqqq.c)
 */

void __fastcall ndisOidPostPDOpenProvider(struct _NDIS_REQ_TRACKER *a1, int a2, int a3, int a4)
{
  ULONG_PTR v5; // rbp
  __int64 v6; // r15
  ULONG_PTR *v7; // rdi

  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 40LL);
  v7 = (ULONG_PTR *)((char *)a1 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 26);
  if ( !*(_QWORD *)a1 && !*((_DWORD *)a1 + 10) && *(_UNKNOWN **)(v6 + 16) != &unk_1400F54D0 )
    ndisBugCheckEx(0x23uLL, 5uLL, *v7, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4);
}
