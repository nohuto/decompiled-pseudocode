/*
 * XREFs of ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800B9C60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??$emplace_back@ULivePreviewResource@@@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@QEAAAEAULivePreviewResource@@$$QEAU2@@Z @ 0x1800B8F68 (--$emplace_back@ULivePreviewResource@@@-$vector@ULivePreviewResource@@V-$allocator@ULivePreviewR.c)
 *     ??1LivePreviewResource@@QEAA@XZ @ 0x1800B920C (--1LivePreviewResource@@QEAA@XZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800B98EC (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CLivePreview::s_UpdateResourcesForMonitor(HMONITOR a1, HDC a2, const RECT *a3, CLivePreview *a4)
{
  int updated; // eax
  int v6; // ebx
  struct tagRECT v8; // [rsp+30h] [rbp-78h] BYREF
  __int64 v9; // [rsp+40h] [rbp-68h]
  __int64 v10; // [rsp+58h] [rbp-50h]
  __int128 v11; // [rsp+60h] [rbp-48h]
  struct tagRECT v12; // [rsp+80h] [rbp-28h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  CopyRect(&v12, a3);
  updated = CLivePreview::_UpdateResourcesForMonitor(a4, &v8);
  v6 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x4B3u, 0LL);
  else
    std::vector<LivePreviewResource>::emplace_back<LivePreviewResource>(
      (__int64)a4 + 272,
      (const struct LivePreviewResource *)&v8);
  LivePreviewResource::~LivePreviewResource((CContainerVisual ***)&v8);
  return v6 >= 0;
}
