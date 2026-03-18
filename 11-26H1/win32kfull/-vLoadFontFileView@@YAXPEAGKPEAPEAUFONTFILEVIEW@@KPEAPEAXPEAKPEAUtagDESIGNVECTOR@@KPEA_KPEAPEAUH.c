/*
 * XREFs of ?vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUHDEV__@@PEAUFNTCHECKSUM@@HPEAH@Z @ 0x140327830
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14021C4D0 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1403273E8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400C56B0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1401C62E4 (--0-$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAUHDEV__@@1HPEAH3PEAPEAUFONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x14031B248 (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAUHDEV__@@1HPEAH3PEAPEAUFONTFILEVIEW@@KPEAUtagDESIGNVECT.c)
 *     UmfdLoadFontFileView @ 0x140326DD0 (UmfdLoadFontFileView.c)
 */

void __fastcall vLoadFontFileView(
        unsigned __int16 *a1,
        __int64 a2,
        struct FONTFILEVIEW **a3,
        unsigned int a4,
        void **a5,
        unsigned int *a6,
        struct tagDESIGNVECTOR *a7,
        unsigned int a8,
        unsigned __int64 *a9,
        HDEV *a10,
        struct FNTCHECKSUM *a11,
        int a12,
        int *a13)
{
  unsigned int v15; // ebx
  __int64 v17; // rdx
  int v18; // ecx
  __int64 SessionState; // rax
  int v20; // eax
  __int64 v21; // rdx
  bool v22; // zf
  HSEMAPHORE v23; // rbx
  struct _GRETHREAD *v24; // rax
  int v25; // [rsp+38h] [rbp-70h]
  HSEMAPHORE v26; // [rsp+70h] [rbp-38h] BYREF
  HDEV v27[2]; // [rsp+78h] [rbp-30h] BYREF
  int v28[2]; // [rsp+88h] [rbp-20h] BYREF

  v15 = a2;
  UmfdHostLifeTimeManager::EnsureUmfdHost((__int64)a1, a2, (__int64)a3);
  SessionState = W32GetSessionState(v18, v17);
  SEMOBJ<25>::SEMOBJ<25>(&v26, *(_QWORD *)(SessionState + 96) + 4864LL);
  *(_QWORD *)v28 = 0LL;
  *((_DWORD *)a11 + 1) = 0;
  *(_DWORD *)a11 = 0;
  *a9 = 0LL;
  *(_OWORD *)v27 = 0LL;
  v20 = LookUpFNTCacheTable(
          v15,
          a1,
          (unsigned int *)a11,
          (unsigned int *)a11 + 1,
          v27,
          (unsigned int *)&v27[1],
          a12,
          v28,
          (int *)&v27[1] + 1,
          a3,
          a4,
          a7,
          a8);
  v22 = *a9 == 0;
  v28[1] = v20;
  if ( v22 )
    UmfdLoadFontFileView(
      (__int64)a1,
      v21,
      a3,
      a4,
      (char)a5,
      (char)a6,
      (char)a7,
      v25,
      (__int64 *)a9,
      a10,
      (ULONG *)a11,
      a13,
      (__int64)v27);
  v23 = v26;
  if ( v26 )
  {
    EtwTraceGreLockReleaseSemaphore(L"FntCache", v26);
    v24 = GreGetCurrentThreadCrossSessionCheck();
    if ( v24 )
    {
      v22 = (*(_QWORD *)v24 & 0xFFFFFFFFFDFFFFFFuLL) == 0;
      *(_QWORD *)v24 &= ~0x2000000uLL;
      if ( v22 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v23);
  }
}
