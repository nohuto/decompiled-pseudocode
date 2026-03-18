/*
 * XREFs of ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1403387C0
 * Callers:
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x140263948 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1401DEB80 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1402289A4 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x14030F01C (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1403388E8 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(void *a1, _BYTE *a2, struct PFF *a3)
{
  _QWORD *v5; // rsi
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  HSEMAPHORE v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 )
  {
    v5 = (_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 4872LL);
    SEMOBJ<17>::SEMOBJ<17>(&v8, (__int64)v5);
    v5[2416] = KeGetCurrentThread();
    if ( a3
      || v5[1943] && (v6 = v5[1943], (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)&v6, (__int64)a2)) != 0LL)
      || v5[1942] && (v7[0] = v5[1942], (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)v7, (__int64)a2)) != 0LL) )
    {
      if ( a2[24] )
      {
        if ( UmfdHostLifeTimeManager::EnsureUmfdHost() )
        {
          if ( UmfdHostLifeTimeManager::TryResurrectHff((__int64)a2, a3) )
          {
            v9 = *((_QWORD *)a3 + 12);
            if ( (unsigned int)PDEVOBJ::QueryFontFile((PDEVOBJ *)&v9, (__int64)a2, 2u, 0, 0LL) == *((_DWORD *)a3 + 54)
              && UmfdHostLifeTimeManager::TryResurrectUmfdAllocations((unsigned __int64)a2, a3) )
            {
              a2[24] = 0;
            }
          }
        }
      }
    }
    v5[2416] = 0LL;
    SEMOBJ<17>::vUnlock(&v8);
  }
}
