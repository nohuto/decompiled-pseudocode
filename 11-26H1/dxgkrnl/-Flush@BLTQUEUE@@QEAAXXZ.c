/*
 * XREFs of ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1403FA1C4
 * Callers:
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140198440 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x140283B8C (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1403A9ED8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1403FA184 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x140446154 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::Flush(BLTQUEUE *this)
{
  __int64 v2; // rsi
  __int64 v3; // rbx

  if ( *((_QWORD *)this + 89) )
  {
    v2 = *((unsigned int *)this + 244);
    if ( KeReadStateEvent((PRKEVENT)this + 24) )
      *((_DWORD *)this + 266) |= 1u;
    *((LARGE_INTEGER *)this + 5 * v2 + 123) = KeQueryPerformanceCounter(0LL);
    if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
      *((_DWORD *)this + 169) |= 0x20u;
      KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
    }
    else
    {
      *((_BYTE *)this + 661) = 1;
    }
    BLTQUEUE::IssueCommand(this);
    *((LARGE_INTEGER *)this + 5 * v2 + 126) = KeQueryPerformanceCounter(0LL);
    v3 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 5 * v2 + 127) = v3 * KeQueryTimeIncrement();
    *((_DWORD *)this + 244) = ((_BYTE)v2 - 1) & 1;
  }
}
