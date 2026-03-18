/*
 * XREFs of SupportedVideoSignal @ 0x14027B764
 * Callers:
 *     ?_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403942CC (-_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 * Callees:
 *     <none>
 */

char __fastcall SupportedVideoSignal(_DWORD *a1, unsigned int *a2, int a3)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // r10d
  int v17; // r9d
  unsigned int v18; // r8d

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1086;
  }
  if ( a2[9] != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1088;
  }
  v6 = a2[10];
  if ( a3 == 2 )
  {
    if ( a1[3] != v6 )
      return 0;
    if ( a1[4] != a2[11] )
      return 0;
    v7 = (unsigned int)a1[6];
    v8 = (unsigned int)a1[5];
    if ( v8 * (unsigned __int64)a2[2] < v7 * (unsigned __int64)a2[1] )
      return 0;
    if ( v8 * (unsigned __int64)a2[4] > v7 * (unsigned __int64)a2[3] )
      return 0;
    v9 = (unsigned int)a1[8];
    v10 = (unsigned int)a1[7];
    if ( v10 * (unsigned __int64)a2[6] < v9 * (unsigned __int64)a2[5]
      || v10 * (unsigned __int64)a2[8] > v9 * (unsigned __int64)a2[7] )
    {
      return 0;
    }
  }
  else
  {
    if ( a1[3] > v6 )
      return 0;
    v12 = a1 + 4;
    if ( a1[3] == v6 && *v12 > a2[11] )
      return 0;
    v13 = *(_QWORD *)(a1 + 5);
    v14 = 107;
    v15 = *v12;
    if ( v15 <= 0x258 )
      v14 = 105;
    v16 = a1[5] / a1[6];
    if ( (int)(v16 - a2[1] / a2[2]) < 0 )
      return 0;
    v17 = v16 - 61;
    if ( (int)(v16 - a2[3] / a2[4]) > 0 && v17 > 0 )
      return 0;
    v18 = (unsigned int)v13 * v15 * v14 / 0x64 / HIDWORD(v13);
    if ( (int)(v18 - a2[5] / a2[6]) < 0 && v16 - 60 < 0 )
      return 0;
    if ( (int)(v18 - a2[7] / a2[8]) > 0 && v17 > 0 )
      return 0;
  }
  return 1;
}
