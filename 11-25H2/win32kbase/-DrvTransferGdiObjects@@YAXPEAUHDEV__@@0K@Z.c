/*
 * XREFs of ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x140070EB0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     HmgSafeNextObjt @ 0x1400726E0 (HmgSafeNextObjt.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401340E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1401D2378 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 */

void __fastcall DrvTransferGdiObjects(struct SURFACE **a1, HDEV a2)
{
  __int64 v4; // rdx
  __int64 i; // rcx
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 j; // rcx
  unsigned int v9; // eax
  __int64 k; // rcx
  unsigned int v11; // esi
  HSEMAPHORE v12[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  struct SURFACE **v14; // [rsp+58h] [rbp+28h] BYREF
  HDEV v15; // [rsp+68h] [rbp+38h] BYREF

  WdLogSingleEntry3(4LL, a1, a2, 15LL);
  WdLogGlobalForLineNumber = 24172;
  v14 = a1;
  v15 = a2;
  SEMOBJ<20>::SEMOBJ<20>(v12);
  v13 = 0LL;
  for ( i = 0LL; ; i = v6 )
  {
    LOBYTE(v4) = 1;
    v6 = HmgSafeNextObjt(i, v4, &v13);
    if ( !v6 )
      break;
    v7 = v13;
    if ( *(HDEV *)(v13 + 48) == a2 )
    {
      *(_QWORD *)(v13 + 48) = a1;
      *(_DWORD *)(v7 + 36) &= ~0x2000u;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v14);
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v15);
    }
  }
  v13 = 0LL;
  for ( j = 0LL; ; j = v9 )
  {
    LOBYTE(v4) = 5;
    v9 = HmgSafeNextObjt(j, v4, &v13);
    if ( !v9 )
      break;
    if ( *(HDEV *)(v13 + 48) == a2 )
      *(_QWORD *)(v13 + 48) = a1;
  }
  v13 = 0LL;
  for ( k = 0LL; ; k = v11 )
  {
    LOBYTE(v4) = 28;
    v11 = HmgSafeNextObjt(k, v4, &v13);
    if ( !v11 )
      break;
    if ( *(HDEV *)(v13 + 40) == a2 )
    {
      *(_QWORD *)(v13 + 40) = a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v14);
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v15);
    }
  }
  vTransferWndObjs(a1[318], a2, (HDEV)a1);
  SEMOBJ<20>::vUnlock(v12);
}
