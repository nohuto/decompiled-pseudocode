/*
 * XREFs of bAddAllFlEntry @ 0x1401475F8
 * Callers:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x140146E08 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     GreEnableEUDC @ 0x140147400 (GreEnableEUDC.c)
 * Callees:
 *     ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x1400B0B9C (--1UmfdClientSideFileViewMapper@@QEAA@XZ.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1400B6530 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1400B778C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140106E8C (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x140106FA8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1401213E0 (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140121404 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x140122504 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1401BADE4 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401C2AA4 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1401EB5EC (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     vLinkEudcPFEs @ 0x140201DCC (vLinkEudcPFEs.c)
 *     bReadUserSystemEUDCRegistry @ 0x140206EE4 (bReadUserSystemEUDCRegistry.c)
 *     GetUserEUDCRegistryPath @ 0x1402071F8 (GetUserEUDCRegistryPath.c)
 *     AddAllFlEntryWorker @ 0x140214EDC (AddAllFlEntryWorker.c)
 *     bNotIsKeySymbolicLink @ 0x14022BEA0 (bNotIsKeySymbolicLink.c)
 *     ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140260F84 (-WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?ApplyFontInfEquivalentChangesOnServicingUpdate@@YAXXZ @ 0x14030CC78 (-ApplyFontInfEquivalentChangesOnServicingUpdate@@YAXXZ.c)
 *     Feature_GDI_GB18030_2022A__private_IsEnabledDeviceUsageNoInline @ 0x14030E620 (Feature_GDI_GB18030_2022A__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall bAddAllFlEntry(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  WCHAR *v5; // rdi
  unsigned __int16 *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 SessionState; // rax
  __int64 v13; // r8
  int v14; // r14d
  bool v15; // r14
  PFTOBJ *v16; // rcx
  int CurrentServiceSessionId; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-39h] BYREF
  HANDLE v19; // [rsp+48h] [rbp-31h] BYREF
  struct PFE *v20[2]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v22[2]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v23[2]; // [rsp+80h] [rbp+7h] BYREF
  int v24; // [rsp+90h] [rbp+17h]
  unsigned int v25; // [rsp+E8h] [rbp+6Fh] BYREF
  wchar_t *Src; // [rsp+F0h] [rbp+77h] BYREF
  PCWSTR Path; // [rsp+F8h] [rbp+7Fh] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x208u);
  v5 = (WCHAR *)Path;
  if ( !Path )
    goto LABEL_9;
  v6 = Src;
  if ( !Src )
    goto LABEL_9;
  *Src = 0;
  *v5 = 0;
  v7 = *(_QWORD *)(W32GetSessionState(v3, v2, v4) + 96) + 4872LL;
  GreAcquirePushLockExclusive2<16,1>(v7);
  WaitForConcurrentEUDCOperationCompletion((struct Gre::Font::GLOBALS *)v7);
  if ( a1 && !*(_QWORD *)(v7 + 8656) && !*(_QWORD *)(v7 + 8664) && (unsigned int)bReadUserSystemEUDCRegistry(v5) )
  {
    *(_OWORD *)v20 = 0LL;
    if ( !(unsigned int)bAppendSysDirectory(v6, v5) )
    {
      GreReleasePushLockExclusive2<16,1>(v7);
LABEL_9:
      AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Src);
      AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Path);
      return 0LL;
    }
    v22[0] = *(_QWORD *)(v7 + 15544);
    SessionState = W32GetSessionState(v9, v8, v10);
    SEMOBJ<17>::SEMOBJ<17>((HSEMAPHORE *)&Handle, *(_QWORD *)(SessionState + 96) + 4872LL);
    v13 = -1LL;
    do
      ++v13;
    while ( v6[v13] );
    if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v22, v6, (int)v13 + 1, 1, 0LL, 0, 0LL, 1) )
    {
      v14 = 0;
    }
    else
    {
      v21[0] = v20;
      v21[1] = 0LL;
      v25 = 0;
      v19 = 0LL;
      v14 = PUBLIC_PFTOBJ::bLoadAFont(
              (PUBLIC_PFTOBJ *)v22,
              v6,
              &v25,
              8u,
              (struct PFF **)&v19,
              (struct _EUDCLOAD *)v21,
              0);
    }
    SEMOBJ<17>::vUnlock((HSEMAPHORE *)&Handle);
    if ( v14 )
    {
      if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v7 + 9200), v20[0], 1LL) )
        goto LABEL_38;
      v15 = 0;
      v21[0] = *(_QWORD *)v20[0];
      UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        (UmfdClientSideFileViewMapper *)v23,
        (struct PFFOBJ *)v21);
      if ( v24 == *(_DWORD *)(v23[0] + 36LL) )
        v15 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v7 + 9200), v20[0], 1LL) != 0;
      UmfdClientSideFileViewMapper::~UmfdClientSideFileViewMapper((UmfdClientSideFileViewMapper *)v23);
      if ( v15 )
      {
LABEL_38:
        *(_OWORD *)(v7 + 8656) = *(_OWORD *)v20;
        wcscpy_s((wchar_t *)(v7 + 8672), 0x105uLL, v6);
        ++*(_DWORD *)(v7 + 9232);
        goto LABEL_22;
      }
      PFTOBJ::bUnloadEUDCFont(v16, v6);
    }
    *(_OWORD *)(v7 + 8656) = 0LL;
    *(_WORD *)(v7 + 8672) = 0;
  }
LABEL_22:
  if ( (*(_DWORD *)(v7 + 8648) & 1) != 0 )
  {
    if ( (unsigned int)Feature_GDI_GB18030_2022A__private_IsEnabledDeviceUsageNoInline() )
    {
      CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
      if ( (unsigned int)W32GetCurrentWin32kSessionId() == CurrentServiceSessionId )
        ApplyFontInfEquivalentChangesOnServicingUpdate();
    }
    AddAllFlEntryWorker(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
  }
  if ( (*(_DWORD *)(v7 + 8648) & 4) != 0 )
  {
    Handle = 0LL;
    v19 = 0LL;
    v25 = 0;
    if ( (int)GetUserEUDCRegistryPath(v5) >= 0 && (unsigned int)bNotIsKeySymbolicLink(v5, &Handle, &v19) && v25 )
      AddAllFlEntryWorker(v5);
    if ( Handle )
      ZwClose(Handle);
    if ( v19 )
      ZwClose(v19);
    vLinkEudcPFEs(0LL);
  }
  GreReleasePushLockExclusive2<16,1>(v7);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Src);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Path);
  return 1LL;
}
