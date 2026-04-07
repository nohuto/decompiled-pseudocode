/*
 * XREFs of ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800BA380
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800860F0 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewResource@@$0A@@@QEAAJPEFBULivePreviewResource@@I@Z @ 0x18008B168 (-AddMultipleAndSet@-$DynArray@ULivePreviewResource@@$0A@@@QEAAJPEFBULivePreviewResource@@I@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

_BOOL8 __fastcall CLivePreview::s_UpdateResourcesForMonitor(HMONITOR a1, HDC a2, const RECT *a3, CLivePreview *a4)
{
  int updated; // eax
  int v7; // ebx
  int v9; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v10[108]; // [rsp+34h] [rbp-A4h] BYREF
  struct tagRECT rcDst; // [rsp+A0h] [rbp-38h] BYREF

  v9 = 0;
  memset_0(v10, 0, 0x84uLL);
  CopyRect(&rcDst, a3);
  updated = CLivePreview::_UpdateResourcesForMonitor(a4, (struct LivePreviewResource *)&v9);
  v7 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x541u, 0LL);
  else
    DynArray<LivePreviewResource,0>::AddMultipleAndSet((__int64)a4 + 328, (__int64)&v9);
  return v7 >= 0;
}
