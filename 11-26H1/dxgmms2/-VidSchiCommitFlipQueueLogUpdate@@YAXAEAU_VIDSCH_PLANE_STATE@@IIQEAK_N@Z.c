/*
 * XREFs of ?VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z @ 0x14001D600
 * Callers:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001C404 (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z @ 0x14003E75C (-VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiCommitFlipQueueLogUpdate(
        LARGE_INTEGER *a1,
        unsigned int a2,
        DWORD a3,
        unsigned int *const a4,
        bool a5)
{
  __int64 HighPart; // rdi
  __int64 v6; // rbp
  __int64 LowPart; // rsi
  signed int v10; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v12; // ecx
  LARGE_INTEGER v13; // rdx
  LARGE_INTEGER v14; // r8

  HighPart = (unsigned int)a1[27].HighPart;
  v6 = a2;
  if ( a3 + 1 > (unsigned int)HighPart )
    goto LABEL_12;
  LowPart = a1[28].LowPart;
  if ( (_DWORD)LowPart == a3 )
    goto LABEL_5;
  v10 = (unsigned int)HighPart >> 1;
  if ( (int)(LowPart - a3) > 0 )
  {
    if ( (int)(LowPart - a3) >= v10 )
    {
LABEL_5:
      a1[28].LowPart = a3;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v12 = a1[27].HighPart;
      a1[29] = PerformanceCounter;
      BYTE4(a1[28].QuadPart) = a5;
      v13 = *(LARGE_INTEGER *)(a1[37].QuadPart + 16LL * ((v12 + a1[28].LowPart - 1) % v12));
      if ( !v13.QuadPart )
        return;
      v14 = a1[31];
      if ( v13.QuadPart >= (unsigned __int64)v14.QuadPart )
      {
        a1[31] = v13;
        a4[v6] = ((int)HighPart + (int)LowPart - 1) % (unsigned int)HighPart;
        return;
      }
LABEL_13:
      g_DxgMmsBugcheckExportIndex = 1;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
        0LL,
        281LL,
        49152LL,
        v6,
        (LARGE_INTEGER)v13.QuadPart,
        (LARGE_INTEGER)v14.QuadPart);
      WdLogGlobalForLineNumber = 916;
      JUMPOUT(0x14001D7B4LL);
    }
  }
  else if ( (int)(a3 - LowPart) < v10 )
  {
    goto LABEL_5;
  }
  if ( !a5 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 53248LL, a2, a3, LowPart);
    WdLogGlobalForLineNumber = 916;
LABEL_12:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 53248LL, v6, a3, HighPart);
    WdLogGlobalForLineNumber = 916;
    goto LABEL_13;
  }
}
