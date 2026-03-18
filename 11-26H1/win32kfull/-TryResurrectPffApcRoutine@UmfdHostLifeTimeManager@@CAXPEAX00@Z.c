/*
 * XREFs of ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x14034DAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400C56B0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1401871BC (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x140214E4C (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x140261E10 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x140326CD8 (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(void *a1, _BYTE *a2, struct PFF *a3)
{
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF
  HSEMAPHORE v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 )
  {
    v5 = *(_QWORD **)(W32GetSessionState((_DWORD)a1, a2) + 96);
    SEMOBJ<17>::SEMOBJ<17>(&v10, (__int64)(v5 + 608));
    v5[3023] = KeGetCurrentThread();
    if ( a3
      || v5[2549] && (v9[0] = v5[2549], (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)v9)) != 0LL)
      || v5[2548] && (v9[0] = v5[2548], (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)v9)) != 0LL) )
    {
      if ( a2[24] )
      {
        if ( UmfdHostLifeTimeManager::EnsureUmfdHost(v7, v6, v8) )
        {
          if ( UmfdHostLifeTimeManager::TryResurrectHff((__int64)a2, a3) )
          {
            v11 = *((_QWORD *)a3 + 12);
            if ( (unsigned int)PDEVOBJ::QueryFontFile((PDEVOBJ *)&v11, (__int64)a2, 2u, 0, 0LL) == *((_DWORD *)a3 + 54) )
            {
              if ( UmfdHostLifeTimeManager::TryResurrectUmfdAllocations((__int64)a2, a3) )
                a2[24] = 0;
            }
          }
        }
      }
    }
    v5[3023] = 0LL;
    SEMOBJ<17>::vUnlock(&v10);
  }
}
