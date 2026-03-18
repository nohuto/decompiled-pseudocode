/*
 * XREFs of ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140032100
 * Callers:
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     DrvDisableMDEV @ 0x1400C6E50 (DrvDisableMDEV.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 *     ?DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z @ 0x14013B3D4 (-DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1401F4F1C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x140030748 (-SETFLAG@@YAXHAECKK@Z.c)
 *     HmgSafeNextObjt @ 0x140032210 (HmgSafeNextObjt.c)
 */

__int64 __fastcall PDEVOBJ::bDisabled(PDEVOBJ *this, int a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // r8d
  unsigned int v9; // r9d
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v17; // [rsp+40h] [rbp+18h] BYREF

  SETFLAG(a2, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 1024);
  v4 = *(_QWORD *)this;
  if ( a2 || _bittest((const signed __int32 *)(v4 + 40), 0x11u) )
  {
    *(_QWORD *)(v4 + 32) = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(v4 + 24);
    if ( v14 )
    {
      if ( _bittest((const signed __int32 *)(v14 + 40), 0x11u) )
      {
        if ( !*(_QWORD *)(v4 + 32) )
        {
          v15 = *(_QWORD *)(**(_QWORD **)(v14 + 1784) + 48LL);
          if ( v4 != v15 )
            *(_QWORD *)(v4 + 32) = v15;
        }
      }
    }
  }
  SEMOBJ<20>::SEMOBJ<20>(&v17);
  v6 = 0LL;
  v16 = 0LL;
  while ( 1 )
  {
    LOBYTE(v5) = 1;
    v9 = HmgSafeNextObjt(v6, v5, &v16);
    if ( !v9 )
      break;
    v5 = v16;
    if ( !*(_DWORD *)(v16 + 32) && *(_QWORD *)(v16 + 48) == *(_QWORD *)this )
    {
      v10 = *(_DWORD *)(v16 + 36);
      if ( a2 )
        v11 = v10 | 0x1000;
      else
        v11 = v10 & 0xFFFFEFFF;
      *(_DWORD *)(v16 + 36) = v11;
    }
    v6 = v9;
  }
  v12 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 0x400;
  SEMOBJ<20>::vUnlock(&v17, v7, v8);
  return v12;
}
