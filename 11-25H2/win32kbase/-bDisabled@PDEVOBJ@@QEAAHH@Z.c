/*
 * XREFs of ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1400725DC
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140073820 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     DrvDisableMDEV @ 0x140074C10 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1400879E0 (DrvEnableMDEV.c)
 *     bDynamicModeChange @ 0x1401793D8 (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x14017A4B0 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     HmgSafeNextObjt @ 0x1400726E0 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1400729C0 (-SETFLAG@@YAXHAECKK@Z.c)
 */

__int64 __fastcall PDEVOBJ::bDisabled(PDEVOBJ *this, int a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 i; // rcx
  unsigned int v7; // r9d
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v15; // [rsp+40h] [rbp+18h] BYREF

  SETFLAG(a2, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x400u);
  v4 = *(_QWORD *)this;
  if ( a2 || _bittest((const signed __int32 *)(v4 + 40), 0x11u) )
  {
    *(_QWORD *)(v4 + 32) = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v4 + 24);
    if ( v12 )
    {
      if ( _bittest((const signed __int32 *)(v12 + 40), 0x11u) )
      {
        if ( !*(_QWORD *)(v4 + 32) )
        {
          v13 = *(_QWORD *)(**(_QWORD **)(v12 + 1784) + 48LL);
          if ( v4 != v13 )
            *(_QWORD *)(v4 + 32) = v13;
        }
      }
    }
  }
  SEMOBJ<20>::SEMOBJ<20>(&v15);
  v14 = 0LL;
  for ( i = 0LL; ; i = v7 )
  {
    LOBYTE(v5) = 1;
    v7 = HmgSafeNextObjt(i, v5, &v14);
    if ( !v7 )
      break;
    v5 = v14;
    if ( !*(_DWORD *)(v14 + 32) && *(_QWORD *)(v14 + 48) == *(_QWORD *)this )
    {
      v8 = *(_DWORD *)(v14 + 36);
      if ( a2 )
        v9 = v8 | 0x1000;
      else
        v9 = v8 & 0xFFFFEFFF;
      *(_DWORD *)(v14 + 36) = v9;
    }
  }
  v10 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 0x400;
  SEMOBJ<20>::vUnlock(&v15);
  return v10;
}
