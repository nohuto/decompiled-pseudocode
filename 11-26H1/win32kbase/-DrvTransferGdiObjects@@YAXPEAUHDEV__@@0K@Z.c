/*
 * XREFs of ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1401F5468
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     HmgSafeNextObjt @ 0x140032210 (HmgSafeNextObjt.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9E10 (-vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140168140 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1401F3274 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 */

void __fastcall DrvTransferGdiObjects(struct SURFACE **a1, HDEV a2)
{
  __int64 v4; // rcx
  struct _ERESOURCE **v5; // r14
  __int64 v6; // rcx
  __int64 *v7; // rcx
  unsigned int v8; // edi
  __int64 i; // rcx
  unsigned int v10; // eax
  __int64 j; // rcx
  unsigned int v12; // edi
  __int64 v13; // rdx
  int v14; // r8d
  HSEMAPHORE v15[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+60h] [rbp+30h] BYREF
  struct SURFACE **v17; // [rsp+68h] [rbp+38h] BYREF
  HDEV v18; // [rsp+78h] [rbp+48h] BYREF

  WdLogSingleEntry3(4LL, a1);
  WdLogGlobalForLineNumber = 23015;
  v17 = a1;
  v18 = a2;
  v5 = *(struct _ERESOURCE ***)(W32GetSessionState(v4) + 88);
  SEMOBJ<20>::SEMOBJ<20>(v15, v5);
  v6 = 0LL;
  v16 = 0LL;
  while ( 1 )
  {
    v8 = HmgSafeNextObjt(v6, 1, &v16);
    if ( !v8 )
      break;
    v7 = v16;
    if ( (HDEV)v16[6] == a2 )
    {
      v16[6] = (__int64)a1;
      *((_DWORD *)v7 + 9) &= ~0x2000u;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v17, v5);
      PDEVOBJ::vUnreferencePdev(&v18, (struct Gre::Base::SESSION_GLOBALS *)v5);
    }
    v6 = v8;
  }
  v16 = 0LL;
  for ( i = 0LL; ; i = v10 )
  {
    v10 = HmgSafeNextObjt(i, 5, &v16);
    if ( !v10 )
      break;
    if ( (HDEV)v16[6] == a2 )
      v16[6] = (__int64)a1;
  }
  v16 = 0LL;
  for ( j = 0LL; ; j = v12 )
  {
    v12 = HmgSafeNextObjt(j, 28, &v16);
    if ( !v12 )
      break;
    if ( (HDEV)v16[5] == a2 )
    {
      v16[5] = (__int64)a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v17, v5);
      PDEVOBJ::vUnreferencePdev(&v18, (struct Gre::Base::SESSION_GLOBALS *)v5);
    }
  }
  vTransferWndObjs(a1[318], a2, (HDEV)a1);
  SEMOBJ<20>::vUnlock(v15, v13, v14);
}
