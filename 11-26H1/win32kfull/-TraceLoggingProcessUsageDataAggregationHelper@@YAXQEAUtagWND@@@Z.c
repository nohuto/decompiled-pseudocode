/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1401A1A20
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1400102EC (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsShellProcess @ 0x1401A1AF8 (IsShellProcess.c)
 */

void __fastcall TraceLoggingProcessUsageDataAggregationHelper(struct tagWND *const a1)
{
  struct tagTHREADINFO *v2; // rax
  struct tagTHREADINFO *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = PtiCurrent((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = *((_QWORD *)v2 + 57);
    if ( v4 )
    {
      if ( !(unsigned int)IsShellProcess(v4) && *(_DWORD *)(v5 + 1008) )
      {
        if ( !*(_DWORD *)(v5 + 920) )
        {
          *(_DWORD *)(*((_QWORD *)v3 + 57) + 940LL) = (unsigned int)PsGetThreadProcessId(*(PETHREAD *)v3);
          *(_DWORD *)(*((_QWORD *)v3 + 57) + 972LL) &= ~1u;
          *(_DWORD *)(*((_QWORD *)v3 + 57) + 972LL) &= ~2u;
          *(_DWORD *)(*((_QWORD *)v3 + 57) + 972LL) &= ~4u;
          *(_DWORD *)(*((_QWORD *)v3 + 57) + 968LL) = 0;
          *(_DWORD *)(*((_QWORD *)v3 + 57) + 964LL) = 0;
        }
        TraceLoggingProcessMonitorInfoUpdateHelper(a1, 0);
        ++*(_DWORD *)(*((_QWORD *)v3 + 57) + 920LL);
      }
    }
  }
}
