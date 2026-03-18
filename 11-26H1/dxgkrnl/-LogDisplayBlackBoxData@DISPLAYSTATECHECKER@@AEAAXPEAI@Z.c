/*
 * XREFs of ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1401CB6EC
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CB5C8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1400761DC (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetDisplayBlackboxRecorder@DisplayDiagnostics@@QEAAPEAVDisplayBlackboxRecorder@@XZ @ 0x140077CA8 (-GetDisplayBlackboxRecorder@DisplayDiagnostics@@QEAAPEAVDisplayBlackboxRecorder@@XZ.c)
 *     ?GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x1401CB004 (-GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?Reserve@DXGBLACKBOX@@QEAAPEAEI@Z @ 0x1401D51CC (-Reserve@DXGBLACKBOX@@QEAAPEAEI@Z.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayBlackBoxData(DISPLAYSTATECHECKER *this, unsigned int *a2)
{
  struct DXGGLOBAL *Global; // rax
  struct DisplayBlackboxRecorder *DisplayBlackboxRecorder; // rdi
  __int64 v6; // rax
  unsigned int TotalNumOfVidpnSourcesAcrossAdapters; // r12d
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rbp
  unsigned int v10; // r14d
  unsigned int v11; // esi
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // r8
  unsigned int i; // edx
  char *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD InputBuffer[4]; // [rsp+50h] [rbp-38h] BYREF

  *a2 = 0;
  Global = DXGGLOBAL::GetGlobal();
  DisplayBlackboxRecorder = DisplayDiagnostics::GetDisplayBlackboxRecorder((struct DXGGLOBAL *)((char *)Global + 305024));
  v6 = *((_QWORD *)DisplayBlackboxRecorder + 7);
  if ( v6 )
    *(_DWORD *)(v6 + 4) = 8;
  TotalNumOfVidpnSourcesAcrossAdapters = DISPLAYSTATECHECKER::GetTotalNumOfVidpnSourcesAcrossAdapters(this);
  v8 = DXGBLACKBOX::Reserve(DisplayBlackboxRecorder, 32 * TotalNumOfVidpnSourcesAcrossAdapters + 20);
  v9 = v8;
  if ( v8 )
  {
    v10 = 0;
    v11 = 0;
    *(_OWORD *)v8 = *(_OWORD *)this;
    for ( *((_DWORD *)v8 + 4) = *((_DWORD *)this + 4); v11 < *((_DWORD *)this + 3522); ++v11 )
    {
      DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v11);
      if ( DisplayAdapterDiagData )
      {
        for ( i = 0; i < *((_DWORD *)DisplayAdapterDiagData + 240); ++i )
        {
          if ( i < 4 )
          {
            v14 = (char *)DisplayAdapterDiagData + 224 * i + 64;
            if ( v14 )
            {
              if ( v10 >= TotalNumOfVidpnSourcesAcrossAdapters )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 321;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"GlobalSourceIndex should never exceed the TotalNumOfVidpnSource",
                  321LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                break;
              }
              v15 = 32LL * v10++;
              *(_OWORD *)&v9[v15 + 20] = *((_OWORD *)v14 + 1);
              *(_OWORD *)&v9[v15 + 36] = *((_OWORD *)v14 + 2);
            }
          }
        }
      }
    }
    v16 = *((_QWORD *)DisplayBlackboxRecorder + 7);
    if ( *(_DWORD *)(v16 + 4) != 8 )
    {
      InputBuffer[2] = 0LL;
      InputBuffer[3] = 12LL;
      InputBuffer[0] = v16;
      InputBuffer[1] = *(unsigned int *)(v16 + 4);
      ZwPowerInformation(TraceApplicationPowerMessage|0x40, InputBuffer, 0x20u, 0LL, 0);
    }
    *a2 = **((unsigned __int16 **)DisplayBlackboxRecorder + 7);
  }
}
