/*
 * XREFs of SdbShouldBlockPackageLaunch @ 0x180058564
 * Callers:
 *     ?HampSystemAppCompatIsPackageBlocked@@YAKPEBGK@Z @ 0x180058464 (-HampSystemAppCompatIsPackageBlocked@@YAKPEBGK@Z.c)
 * Callees:
 *     CompatCacheLookupPackage @ 0x180058EBC (CompatCacheLookupPackage.c)
 *     RtlStringCchCopyW @ 0x18006297C (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800759C4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x180075D28 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     StringCchCatW @ 0x18008D19C (StringCchCatW.c)
 *     StringCchCopyW @ 0x18008D214 (StringCchCopyW.c)
 *     SdbReleaseDatabase @ 0x18008DDFC (SdbReleaseDatabase.c)
 *     SdbInitDatabase @ 0x18008FBB0 (SdbInitDatabase.c)
 *     SdbTagRefToTagID @ 0x1800903B4 (SdbTagRefToTagID.c)
 *     SdbpApphelpExeInfo @ 0x1800907CC (SdbpApphelpExeInfo.c)
 *     SdbpEscapeQuoteInMsg @ 0x180090C28 (SdbpEscapeQuoteInMsg.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbShouldBlockPackageLaunch(const wchar_t *a1, __int64 a2, _DWORD *a3, int a4)
{
  HMODULE v4; // r13
  unsigned int v7; // r12d
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  HRESULT ValueW; // eax
  unsigned int *v12; // r14
  const char *v14; // r9
  __int64 v15; // r8
  HMODULE Library; // rax
  const char *v17; // r9
  __int64 v18; // r8
  FARPROC ProcAddress; // rax
  size_t v20; // rdx
  wchar_t *v21; // rcx
  const wchar_t *v22; // r8
  LSTATUS v23; // eax
  __int64 v24; // rcx
  __int64 inited; // rax
  __int64 v26; // rcx
  int v27; // esi
  int v28; // esi
  const wchar_t *v29; // r8
  __int64 v30; // r11
  LSTATUS v31; // eax
  LSTATUS v32; // eax
  LSTATUS v33; // eax
  LSTATUS v34; // eax
  LSTATUS v35; // eax
  PHKEY phkResult; // [rsp+20h] [rbp-E0h]
  HKEY hkey; // [rsp+50h] [rbp-B0h] BYREF
  DWORD cbData; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  unsigned int v40; // [rsp+68h] [rbp-98h] BYREF
  DWORD pcbData; // [rsp+6Ch] [rbp-94h] BYREF
  DWORD v42; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+74h] [rbp-8Ch]
  _DWORD *v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  int v47; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  STRSAFE_LPCWSTR pszSrc; // [rsp+A0h] [rbp-60h]
  _BYTE v50[56]; // [rsp+B0h] [rbp-50h] BYREF
  int v51; // [rsp+E8h] [rbp-18h]
  __int64 v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  int v54; // [rsp+120h] [rbp+20h]
  int v55; // [rsp+124h] [rbp+24h]
  BYTE v56[100]; // [rsp+140h] [rbp+40h] BYREF
  BYTE v57[100]; // [rsp+1A4h] [rbp+A4h] BYREF
  BYTE Data[4]; // [rsp+208h] [rbp+108h] BYREF
  BYTE pvData[4]; // [rsp+20Ch] [rbp+10Ch] BYREF
  BYTE v60[4]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v61[524]; // [rsp+214h] [rbp+114h] BYREF
  wchar_t pszDest[400]; // [rsp+420h] [rbp+320h] BYREF

  v4 = 0LL;
  v44 = a3;
  pszSrc = a1;
  P = 0LL;
  v47 = 0;
  v46 = 0LL;
  v40 = 0;
  v7 = 0;
  v43 = a4;
  v8 = 0LL;
  memset_0(v50, 0, 0x88uLL);
  memset_0(v56, 0, 0x2D4uLL);
  hkey = 0LL;
  memset_0(pszDest, 0, sizeof(pszDest));
  cbData = 4;
  pcbData = 100;
  v42 = 100;
  v9 = 0LL;
  v10 = 0LL;
  v45 = 0LL;
  *v44 = 0;
  v39 = (unsigned int)Feature_PackagedAppLaunchBlock__private_featureState;
  if ( (Feature_PackagedAppLaunchBlock__private_featureState & 0x10) == 0 )
  {
    LODWORD(v39) = Feature_PackagedAppLaunchBlock__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_PackagedAppLaunchBlock__private_descriptor, v39, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v39,
      3LL,
      &Feature_PackagedAppLaunchBlock__private_descriptor);
  }
  ValueW = CompatCacheLookupPackage(&P, &v47, a1, a2);
  v12 = (unsigned int *)P;
  if ( ValueW < 0 )
  {
    v14 = "CompatCacheLookupPackage failed [%x]";
    v15 = 451LL;
  }
  else
  {
    if ( !P || !*((_DWORD *)P + 41) )
      goto LABEL_6;
    if ( _InterlockedCompareExchange(&dword_1800E1758, 0, 1) )
    {
      Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
      v4 = Library;
      if ( !Library )
      {
        v17 = "Load ntdll failed";
        v18 = 468LL;
LABEL_32:
        AslLogCallPrintf(1LL, "SdbShouldBlockPackageLaunch", v18, v17);
        goto LABEL_23;
      }
      ProcAddress = GetProcAddress(Library, "RtlGetPersistedStateLocation");
      if ( !ProcAddress )
      {
        v17 = "Get RtlGetPersistedStateLocation failed";
        v18 = 475LL;
        goto LABEL_32;
      }
      if ( ((int (__fastcall *)(const wchar_t *, _QWORD, _QWORD, _QWORD, wchar_t *, int, _QWORD))ProcAddress)(
             L"AppCompatFlags",
             0LL,
             0LL,
             0LL,
             &::pszDest,
             240,
             0LL) < 0 )
      {
        ValueW = StringCchCopyW(v21, v20, v22);
        if ( ValueW < 0 )
        {
          v14 = "StringCchCopyW failed [%x]";
          v15 = 490LL;
          goto LABEL_22;
        }
      }
      StringCchCatW(&::pszDest, 0x78uLL, L"\\PackagedApps\\");
    }
    StringCchCatW(pszDest, 0x190uLL, &::pszDest);
    ValueW = StringCchCatW(pszDest, 0x190uLL, pszSrc);
    if ( ValueW >= 0 )
    {
      v23 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, pszDest, 0, 0xF003Fu, &hkey);
      v24 = 0LL;
      if ( v23 )
      {
        if ( !hkey )
        {
          ValueW = RegCreateKeyExW(HKEY_LOCAL_MACHINE, pszDest, 0, 0LL, 0, 0xF003Fu, 0LL, &hkey, 0LL);
          if ( ValueW )
          {
            v14 = "RegCreateKeyEx failed %d";
            v15 = 593LL;
            goto LABEL_22;
          }
        }
        inited = SdbInitDatabase(v24);
        v8 = inited;
        if ( !inited )
        {
          v17 = "SdbInitDatabase failed";
          v18 = 604LL;
          goto LABEL_32;
        }
        if ( !(unsigned int)SdbTagRefToTagID(inited, v12[41], &v46, &v40)
          || !v46
          || !(unsigned int)SdbpApphelpExeInfo(v26, v46, v40, v50) )
        {
          goto LABEL_23;
        }
        v27 = v51;
        *v44 = v51 == 2;
        v46 = SdbpEscapeQuoteInMsg(v52);
        v45 = SdbpEscapeQuoteInMsg(v53);
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 == 1 )
            *(_DWORD *)Data = 2;
        }
        else
        {
          *(_DWORD *)Data = 1;
        }
        v9 = v46;
        v29 = &word_1800BBB1C;
        if ( v46 )
          v29 = (const wchar_t *)v46;
        if ( (int)RtlStringCchCopyW(v56, 50LL, v29) < 0 )
        {
          v17 = "AppName is too long";
          v18 = 646LL;
          goto LABEL_32;
        }
        if ( v45 )
          v30 = v45;
        if ( (int)RtlStringCchCopyW(v57, 50LL, v30) < 0 )
        {
          v17 = "VendorName is too long";
          v18 = 654LL;
          goto LABEL_32;
        }
        *(_DWORD *)pvData = v54;
        *(_DWORD *)v60 = v55;
        v31 = RegSetValueExW(hkey, L"dwBlock", 0, 4u, Data, cbData);
        if ( v31 )
          AslLogCallPrintf(1LL, "SdbShouldBlockPackageLaunch", 668LL, "RegSetValueEx failed %d", v31);
        v32 = RegSetValueExW(hkey, L"dwFwLinkNumber", 0, 4u, pvData, cbData);
        if ( v32 )
          AslLogCallPrintf(1LL, "SdbShouldBlockPackageLaunch", 678LL, "RegSetValueEx failed %d", v32);
        v33 = RegSetValueExW(hkey, L"dwKbNumber", 0, 4u, v60, cbData);
        if ( v33 )
          AslLogCallPrintf(1LL, "SdbShouldBlockPackageLaunch", 688LL, "RegSetValueEx failed %d", v33);
        v34 = RegSetValueExW(hkey, L"AppName", 0, 1u, v56, pcbData);
        if ( v34 )
          AslLogCallPrintf(1LL, "SdbShouldBlockPackageLaunch", 698LL, "RegSetValueEx failed %d", v34);
        v35 = RegSetValueExW(hkey, L"VendorName", 0, 1u, v57, v42);
        if ( v35 )
          AslLogCallPrintf(1LL, "SdbShouldBlockPackageLaunch", 708LL, "RegSetValueEx failed %d", v35);
        if ( v43 )
        {
LABEL_83:
          if ( *(_DWORD *)Data )
          {
            if ( (int)RtlStringCchCopyW(v61, 256LL, pszSrc) < 0 )
            {
              v17 = "PackageFullName is too long";
              v18 = 717LL;
              goto LABEL_32;
            }
            ValueW = RtlPublishWnfStateData(WNF_CMPT_BLOCKED_APP, 0LL, v56, 724LL, 0LL);
            if ( ValueW < 0 )
            {
              v14 = "RtlPublishWnfStateData failed, 0x%x";
              v15 = 730LL;
              goto LABEL_22;
            }
          }
        }
      }
      else
      {
        ValueW = RegGetValueW(hkey, 0LL, L"dwBlock", 0x18u, 0LL, Data, &cbData);
        if ( ValueW )
        {
          v15 = 519LL;
LABEL_21:
          v14 = "RegGetValue failed %d";
          goto LABEL_22;
        }
        if ( !*(_DWORD *)Data )
        {
LABEL_6:
          v7 = 1;
          goto LABEL_7;
        }
        if ( *(_DWORD *)Data == 2 )
          *v44 = 1;
        if ( v43 )
        {
          ValueW = RegGetValueW(hkey, 0LL, L"dwFwLinkNumber", 0x18u, 0LL, pvData, &cbData);
          if ( ValueW )
          {
            v15 = 541LL;
            goto LABEL_21;
          }
          ValueW = RegGetValueW(hkey, 0LL, L"dwKbNumber", 0x18u, 0LL, v60, &cbData);
          if ( ValueW )
          {
            v15 = 553LL;
            goto LABEL_21;
          }
          ValueW = RegGetValueW(hkey, 0LL, L"AppName", 2u, 0LL, v56, &pcbData);
          if ( ValueW )
          {
            v15 = 565LL;
            goto LABEL_21;
          }
          ValueW = RegGetValueW(hkey, 0LL, L"VendorName", 2u, 0LL, v57, &v42);
          if ( ValueW )
          {
            v15 = 577LL;
            goto LABEL_21;
          }
          goto LABEL_83;
        }
      }
      v7 = 1;
      goto LABEL_24;
    }
    v14 = "StringCchCatW failed [%x]";
    v15 = 501LL;
  }
LABEL_22:
  LODWORD(phkResult) = ValueW;
  AslLogCallPrintf(1LL, "SdbShouldBlockPackageLaunch", v15, v14, phkResult);
LABEL_23:
  *v44 = 0;
LABEL_24:
  if ( v8 )
    SdbReleaseDatabase(v8);
  v10 = v45;
LABEL_7:
  if ( hkey )
  {
    RegCloseKey(hkey);
    hkey = 0LL;
  }
  if ( v4 )
    FreeLibrary(v4);
  if ( v9 )
    AslFree(NtCurrentPeb()->ProcessHeap, v9);
  if ( v10 )
    AslFree(NtCurrentPeb()->ProcessHeap, v10);
  if ( v12 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  return v7;
}
