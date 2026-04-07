/*
 * XREFs of ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x1800B97FC
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001A06C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800B98EC (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateResources(CLivePreview *dwData)
{
  struct LivePreviewResource *v1; // rbp
  unsigned int v2; // ebx
  struct LivePreviewResource *v3; // rdi
  signed int LastError; // eax
  int v6; // r9d
  int updated; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v1 = (struct LivePreviewResource *)*((_QWORD *)dwData + 35);
  v2 = 0;
  v3 = (struct LivePreviewResource *)*((_QWORD *)dwData + 34);
  if ( v3 != v1 )
  {
    while ( 1 )
    {
      updated = CLivePreview::_UpdateResourcesForMonitor(dwData, v3);
      v2 = updated;
      if ( updated < 0 )
        break;
      v3 = (struct LivePreviewResource *)((char *)v3 + 96);
      if ( v3 == v1 )
        return v2;
    }
    v6 = updated;
    v9 = 1223;
    goto LABEL_12;
  }
  SetLastError(0);
  if ( !EnumDisplayMonitors(0LL, 0LL, CLivePreview::s_UpdateResourcesForMonitor, (LPARAM)dwData) )
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    v9 = 1217;
    if ( (v2 & 0x80000000) == 0 )
      v2 = -2003304445;
    v6 = v2;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v9, 0LL);
  }
  return v2;
}
