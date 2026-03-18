/*
 * XREFs of ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x14014E374
 * Callers:
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     ApplyPathsModality @ 0x1401F498C (ApplyPathsModality.c)
 * Callees:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 */

__int64 __fastcall DrvChangeDisplayFallback(
        void *a1,
        char a2,
        char a3,
        struct _MDEV *a4,
        struct _MDEV **a5,
        enum _DXGK_DIAG_SDC_STAGE *a6,
        bool *a7,
        int *a8)
{
  __int64 v12; // rdi
  int v13; // eax
  int v14; // ebx
  __int64 result; // rax
  int v16; // ecx

  v12 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_DWORD *)(v12 + 1216) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14889;
  }
  if ( a3 )
    *(_DWORD *)(v12 + 1216) = 1;
  if ( *(_DWORD *)(v12 + 1220) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14904;
  }
  *(_DWORD *)(v12 + 1220) = 1;
  v13 = DrvChangeDisplaySettingsInternal(0LL, 0LL, 0LL, a1, a4, a5, 0, (8 * (a2 & 1)) | 0x86u, 0LL);
  *(_DWORD *)(v12 + 1220) = 0;
  v14 = v13;
  switch ( v13 )
  {
    case 0:
      goto LABEL_8;
    case 2:
      if ( a2 || *a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14936;
      }
LABEL_8:
      result = 0LL;
      *a7 = v14 == 2;
      v16 = 31;
      goto LABEL_9;
    case 3:
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 14945;
      break;
  }
  result = 3221225473LL;
  v16 = 54;
LABEL_9:
  *(_DWORD *)a6 = v16;
  *(_DWORD *)(v12 + 1216) = 0;
  if ( a8 )
    *a8 = v14;
  return result;
}
