/*
 * XREFs of ?DrvUpdateMDevForWDDMDevices@@YAXPEAU_MDEV@@@Z @ 0x140165690
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?DrvUpdatePDevForWDDMDevice@@YAXAEAVPDEVOBJ@@@Z @ 0x1401657D8 (-DrvUpdatePDevForWDDMDevice@@YAXAEAVPDEVOBJ@@@Z.c)
 */

void __fastcall DrvUpdateMDevForWDDMDevices(struct _MDEV *a1)
{
  unsigned int i; // ebx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; i < *((_DWORD *)a1 + 5); ++i )
  {
    v3 = *((_QWORD *)a1 + 7 * i + 5);
    DrvUpdatePDevForWDDMDevice((struct PDEVOBJ *)&v3);
  }
}
