/*
 * XREFs of LogDiagCDS @ 0x14014FA84
 * Callers:
 *     DrvChangeDisplaySettings @ 0x140175A14 (DrvChangeDisplaySettings.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z @ 0x14014FC54 (-FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x14014FF40 (DrvDxgkLogCodePointPacket.c)
 *     DrvDxgkWriteDiagEntry @ 0x14014FFD0 (DrvDxgkWriteDiagEntry.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall LogDiagCDS(
        __int64 a1,
        struct _devicemodeW *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        __int16 a10,
        struct _devicemodeW *a11)
{
  int v13; // ebp
  char *v15; // rax
  char *v16; // rbx
  __int64 v17; // r14
  int v18; // ebp
  unsigned int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // edx

  v13 = a4;
  v15 = (char *)PALLOCMEM(160LL, 1936876615LL, a3, a4);
  v16 = v15;
  if ( v15 )
  {
    memset(v15, 0, 0xA0uLL);
    *(_DWORD *)v16 = 5;
    *((_DWORD *)v16 + 1) = 160;
    *((_QWORD *)v16 + 8) = a6;
    *((_DWORD *)v16 + 14) = a7;
    *((_DWORD *)v16 + 13) = a8;
    *((_DWORD *)v16 + 15) = a9;
    v17 = -a1;
    v18 = -v13;
    v19 = ((8 * (a5 & 8)) | (8 * (a5 & 4)) & 0xBF | (8 * (a5 & 3)) & 0x9F | (v18 == 0 ? 4 : 0) | (v17 != 0 ? 2 : 0) | (a11 != 0LL ? 0x1000 : 0) | *((_DWORD *)v16 + 12) & 0xFFFFEF80 | (a2 != 0LL)) ^ ((unsigned __int16)((8 * (a5 & 8)) | (8 * (a5 & 4)) & 0xBF | (8 * (a5 & 3)) & 0x9F | (v18 == 0 ? 4 : 0) | (v17 != 0 ? 2 : 0) | (a11 != 0LL ? 0x1000 : 0) | *((_WORD *)v16 + 24) & 0xEF80 | (a2 != 0LL)) ^ (unsigned __int16)(a10 << 13)) & 0xE000;
    *((_DWORD *)v16 + 12) = v19;
    if ( a3 )
    {
      v23 = v19 | 0x800;
      *((_DWORD *)v16 + 12) = v23;
      *((_DWORD *)v16 + 12) = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a3 + 248) << 7)) & 0x780;
    }
    FillSimpleDevModeField(a2, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v16 + 72));
    FillSimpleDevModeField(a11, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v16 + 116));
    DrvDxgkWriteDiagEntry(v16);
    GreDeleteFastMutex(v16, v20, v21, v22);
  }
  else
  {
    WdLogSingleEntry1(6LL, 160LL);
    WdLogGlobalForLineNumber = 25504;
    DrvDxgkLogCodePointPacket(5LL, a7, a8);
  }
}
