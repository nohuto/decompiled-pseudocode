/*
 * XREFs of GreEudcLoadLinkW @ 0x14030D518
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x14030E6F0 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x1400B0B9C (--1UmfdClientSideFileViewMapper@@QEAA@XZ.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1400B6530 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     bAddFlEntry @ 0x1400B7140 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1400B778C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x140106FA8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     bUnloadEudcFont @ 0x140107588 (bUnloadEudcFont.c)
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1401213E0 (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140121404 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x140122504 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ??$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1401228E4 (--$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1401474F4 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1401BADE4 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401C2AA4 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1401EB5EC (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1401F355C (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     vLinkEudcPFEs @ 0x140201DCC (vLinkEudcPFEs.c)
 *     ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140260F84 (-WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0?$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14026BD40 (--0-$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     bWriteUserSystemEUDCRegistry @ 0x14030DB0C (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcLoadLinkW(
        wchar_t *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v11; // rsi
  wchar_t *v12; // rbx
  unsigned int appended; // edi
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // r8
  __int64 v19; // rdx
  struct PFE *v20; // rdx
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  wchar_t *Src; // [rsp+48h] [rbp-39h] BYREF
  struct PFF *v25; // [rsp+50h] [rbp-31h] BYREF
  HSEMAPHORE v26; // [rsp+58h] [rbp-29h] BYREF
  struct W32_PUSH_LOCK *v27; // [rsp+60h] [rbp-21h] BYREF
  struct PFE *v28[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v29[2]; // [rsp+78h] [rbp-9h] BYREF
  int v30; // [rsp+88h] [rbp+7h]
  _QWORD v31[3]; // [rsp+90h] [rbp+Fh] BYREF
  unsigned int v32; // [rsp+F0h] [rbp+6Fh] BYREF

  v32 = a4;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus((__int64)a1, a2, (__int64)a3) )
    return 0LL;
  v11 = *(_QWORD *)(W32GetSessionState(v9, v8) + 96) + 4872LL;
  PushLockExclusiveObj<0,1>::PushLockExclusiveObj<0,1>(&v27, v11);
  GreAcquirePushLockExclusive2<16,1>(v11);
  WaitForConcurrentEUDCOperationCompletion((struct Gre::Font::GLOBALS *)v11);
  if ( a1 )
  {
    v21 = a6;
    Src = 0LL;
    if ( a6 > 1 )
      v21 = 1;
    appended = bAddFlEntry(a1, (__int64)a3, v21, a5, (__int64 *)&Src);
    if ( appended && Src )
      vLinkEudcPFEs((__int64)Src, v22);
  }
  else
  {
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x20Au);
    v12 = Src;
    *(_OWORD *)v28 = 0LL;
    appended = Src != 0LL;
    if ( Src )
    {
      appended = bAppendSysDirectory(Src, a3);
      if ( appended )
      {
        v16 = *(_QWORD *)(W32GetSessionState(v15, v14) + 96) + 4872LL;
        SEMOBJ<17>::SEMOBJ<17>(&v26, v16);
        v17 = -1LL;
        v31[0] = *(_QWORD *)(v16 + 15544);
        v18 = -1LL;
        do
          ++v18;
        while ( v12[v18] );
        if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v31, v12, (int)v18 + 1, 1, 0LL, 0, 0LL, 1) )
        {
          appended = 0;
        }
        else
        {
          v29[0] = v28;
          v29[1] = 0LL;
          v32 = 0;
          v25 = 0LL;
          appended = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)v31, v12, &v32, 8u, &v25, (struct _EUDCLOAD *)v29, 0);
        }
        SEMOBJ<17>::vUnlock(&v26);
        if ( appended )
        {
          if ( *(_QWORD *)(v11 + 8656) || *(_QWORD *)(v11 + 8664) )
          {
            vUnlinkAllEudcRFONTsAndPFEs(0, v19);
            bUnloadEudcFont((struct PFE **)(v11 + 8656));
          }
          *(_OWORD *)(v11 + 8656) = *(_OWORD *)v28;
          wcscpy_s((wchar_t *)(v11 + 8672), 0x105uLL, v12);
          v20 = v28[0];
          ++*(_DWORD *)(v11 + 9232);
          if ( !(unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v11 + 9200), v20, 1LL) )
          {
            v31[0] = *(_QWORD *)v28[0];
            UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
              (UmfdClientSideFileViewMapper *)v29,
              (struct PFFOBJ *)v31);
            if ( v30 == *(_DWORD *)(v29[0] + 36LL) )
              bComputeQuickLookup((struct _QUICKLOOKUP *)(v11 + 9200), v28[0], 1LL);
            UmfdClientSideFileViewMapper::~UmfdClientSideFileViewMapper((UmfdClientSideFileViewMapper *)v29);
          }
          do
            ++v17;
          while ( *(_WORD *)(v11 + 8672 + 2 * v17) );
          bWriteUserSystemEUDCRegistry((PVOID)(v11 + 8672));
        }
      }
    }
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Src);
  }
  GreReleasePushLockExclusive2<16,1>(v11);
  GrepReleasePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v23, v27);
  return appended;
}
