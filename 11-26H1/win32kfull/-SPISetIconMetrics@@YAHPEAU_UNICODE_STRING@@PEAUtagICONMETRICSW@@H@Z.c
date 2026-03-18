/*
 * XREFs of ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1402ACC58
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x140249884 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetIconMetrics @ 0x1400CE144 (SetIconMetrics.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x140201470 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x140201670 (-SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z.c)
 *     ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1402ACB50 (-RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z.c)
 */

__int64 __fastcall SPISetIconMetrics(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2, int a3)
{
  struct tagWND *v4; // rsi
  unsigned int v5; // edi
  BOOL v8; // eax
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v4 = 0LL;
  v5 = 0;
  RescaleIconMetrics(a2);
  v8 = a3 == 0;
  if ( a3 )
  {
    v9 = SetWindowMetricInt(a1, 64LL, *((_DWORD *)a2 + 1));
    v10 = v9 & SetWindowMetricInt(a1, 65LL, *((_DWORD *)a2 + 2));
    v11 = v10 & SetWindowMetricInt(a1, 66LL, *((_DWORD *)a2 + 3));
    v5 = v11 & SetWindowMetricFont(a1, 0x9Au, (struct tagLOGFONTW *)((char *)a2 + 16));
    v8 = v5;
  }
  if ( v8 )
  {
    SetIconMetrics(a1, a2);
    if ( *((_QWORD *)PtiCurrent(v12) + 61) )
      v4 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v13) + 61) + 8LL) + 24LL);
    xxxInternalInvalidate(v4, (HRGN)1, 0x10485u);
  }
  return v5;
}
