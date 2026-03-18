/*
 * XREFs of ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18002DC58
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x180079040 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800797C4 (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18014EB54 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?SignalFinishedFlush@CChannelContext@@QEAAXXZ @ 0x180185C98 (-SignalFinishedFlush@CChannelContext@@QEAAXXZ.c)
 *     ?OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ @ 0x180197770 (-OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x1801C6BE0 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannelContext::PostMessageToChannel(CChannelContext *this, const struct MIL_MESSAGE *a2)
{
  int v2; // ebp
  HANDLE ProcessHeap; // rax
  char *v6; // rax
  char *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  HANDLE v10; // rax

  v2 = *(_DWORD *)a2;
  ProcessHeap = GetProcessHeap();
  v6 = (char *)HeapAlloc(ProcessHeap, 0, 0x44uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x44uLL);
    *(_DWORD *)v7 = 10;
    *((_DWORD *)v7 + 1) = 68;
    *((_DWORD *)v7 + 10) = v2;
    *(_OWORD *)(v7 + 40) = *(_OWORD *)a2;
    *((_QWORD *)v7 + 7) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v7 + 16) = *((_DWORD *)a2 + 6);
    *((_DWORD *)v7 + 4) = *((_DWORD *)this + 6);
    v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7), v7);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB0u, 0LL);
    v10 = GetProcessHeap();
    HeapFree(v10, 0, v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Du, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA8u, 0LL);
  }
  return v9;
}
