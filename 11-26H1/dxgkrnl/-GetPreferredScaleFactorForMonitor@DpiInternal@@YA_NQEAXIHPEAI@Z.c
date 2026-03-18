/*
 * XREFs of ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x140400BC0
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x140381104 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     ?MonitorGetPreferredScaleFactor@@YAJPEAXIPEAI@Z @ 0x140400CA0 (-MonitorGetPreferredScaleFactor@@YAJPEAXIPEAI@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x140400D58 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

char __fastcall DpiInternal::GetPreferredScaleFactorForMonitor(
        DpiInternal *this,
        void *const a2,
        int a3,
        unsigned int *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int PreferredScaleFactor; // eax
  int v11; // ebx
  unsigned int v12; // eax
  char result; // al
  _QWORD *v14; // rax
  unsigned __int8 v15[4]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v16[5]; // [rsp+24h] [rbp-14h] BYREF

  v5 = (unsigned int)a2;
  v16[0] = 0;
  v15[0] = 0;
  IsTargetEmergencySimulatedMonitor(this, (unsigned int)a2, v15);
  if ( v15[0] )
  {
    v12 = dword_140168A44;
    if ( dword_140168A44 )
      goto LABEL_5;
    v11 = -1073741823;
  }
  else
  {
    PreferredScaleFactor = MonitorGetPreferredScaleFactor(this, v5, v16);
    v11 = PreferredScaleFactor;
    if ( a3 )
    {
      if ( PreferredScaleFactor >= 0 )
      {
        v12 = v16[0];
        dword_140168A44 = v16[0];
LABEL_5:
        *a4 = v12;
        return 1;
      }
      dword_140168A44 = 0;
    }
    else if ( PreferredScaleFactor >= 0 )
    {
      v12 = v16[0];
      goto LABEL_5;
    }
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v14[3] = this;
  v14[4] = v5;
  v14[5] = v11;
  result = 0;
  WdLogGlobalForLineNumber = 1332;
  *a4 = 0;
  return result;
}
