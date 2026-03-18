/*
 * XREFs of ldevLoadDriver @ 0x14000D360
 * Callers:
 *     DrvInitConsole @ 0x14000A7F4 (DrvInitConsole.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x14000D210 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     MakeSystemRelativePath @ 0x14000BF40 (MakeSystemRelativePath.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x14000C93C (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     Feature_CddInSystemSpace__private_IsEnabledPreCheck @ 0x14000CA2C (Feature_CddInSystemSpace__private_IsEnabledPreCheck.c)
 *     ldevLoadImage @ 0x14000CAA0 (ldevLoadImage.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z @ 0x14000D0CC (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z.c)
 *     ldevUnloadImage @ 0x14000D750 (ldevUnloadImage.c)
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x14000D8B0 (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028120 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck @ 0x14002AA00 (Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _wcsicmp @ 0x1401C77A8 (_wcsicmp.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

struct _LDEV *__fastcall ldevLoadDriver(PCWSTR Source, int a2, int a3)
{
  struct _LDEV *v4; // rbx
  int v5; // r12d
  __int64 v7; // rcx
  unsigned int v8; // r13d
  int v9; // r15d
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  int v12; // r12d
  const WCHAR *v13; // r15
  struct _LDEV *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  unsigned int (__fastcall *v17)(__int64, _QWORD, struct tagDRVENABLEDATA *); // rax
  unsigned int (__fastcall *v18)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _LDEV *result; // rax
  int v20; // eax
  __int64 v21; // rdx
  PVOID Buffer[2]; // [rsp+30h] [rbp-30h] BYREF
  struct tagDRVENABLEDATA v23; // [rsp+40h] [rbp-20h] BYREF
  PVOID v24; // [rsp+50h] [rbp-10h]
  BOOL v25; // [rsp+58h] [rbp-8h]
  int v26; // [rsp+5Ch] [rbp-4h]
  int v27; // [rsp+A0h] [rbp+40h] BYREF
  int v28; // [rsp+A8h] [rbp+48h]

  v28 = a2;
  v4 = 0LL;
  v27 = 0;
  v5 = a2;
  WdLogSingleEntry1(4LL, Source);
  WdLogGlobalForLineNumber = 1666;
  if ( !Source || !*Source )
    return 0LL;
  v8 = 0;
  *(_OWORD *)Buffer = 0LL;
  v9 = 0;
  v10 = *(_QWORD **)(W32GetSessionState(v7) + 88);
  if ( v5 == 1 )
  {
    if ( wcsicmp(Source, L"WORKERDD") && wcsicmp(Source, L"TSDDD") )
    {
      if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed() && (unsigned int)(a3 - 2) <= 1 )
      {
        v20 = 3;
        v8 = v5;
        if ( !*((_DWORD *)v10 + 285) )
          v20 = a3;
        a3 = v20;
        if ( !(unsigned int)MakeSystemRelativePath(Source, (PUNICODE_STRING)Buffer, v5) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 1719;
          return 0LL;
        }
      }
    }
    else
    {
      v9 = 1;
    }
  }
  GreAcquireSemaphore<19,>(v10);
  if ( v9 )
  {
    v4 = ldevBindDisplayStub(v11);
    v15 = 1;
  }
  else
  {
    v23.pdrvfn = (DRVFN *)__PAIR64__(a3, v5);
    v12 = 1;
    *(_QWORD *)&v23.iDriverVersion = Source;
    v13 = L"CDD";
    if ( !wcsicmp(Source, L"CDD") )
    {
      Feature_CddInSystemSpace__private_IsEnabledPreCheck();
      v12 = 0;
    }
    Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck();
    if ( wcsicmp(Source, L"CDD") && wcsicmp(Source, L"RDPUDD") )
    {
      WdLogSingleEntry0(2LL);
      v21 = *v10;
      WdLogGlobalForLineNumber = 1742;
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v21);
      goto LABEL_23;
    }
    if ( !v8 )
      v13 = Source;
    v14 = ldevLoadImage(v13, 0, &v27, v12, v8, (const wchar_t **)&v23);
    v5 = v28;
    v4 = v14;
    v15 = v27;
  }
  if ( !v4 )
    goto LABEL_30;
  if ( v15 )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 1778;
LABEL_30:
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *v10);
    goto LABEL_23;
  }
  v24 = Buffer[1];
  *(_QWORD *)&v23.iDriverVersion = 0LL;
  v25 = a3 == 3;
  v26 = 0;
  v16 = *((_QWORD *)v4 + 2);
  v23.pdrvfn = 0LL;
  v17 = *(unsigned int (__fastcall **)(__int64, _QWORD, struct tagDRVENABLEDATA *))(v16 + 32);
  if ( v17
    && v17(196865LL, 16 * (v8 + 1), &v23)
    && v23.iDriverVersion - 0x20000 <= 0x10101
    && (unsigned int)ldevFillTable(v4, &v23) )
  {
    *((_DWORD *)v4 + 8) = v5;
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *v10);
    v18 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v4 + 113) + 616LL);
    if ( v18 )
    {
      if ( !v18(v10[370], v10[369], v10[368], v10[371]) )
      {
        ldevUnloadImage(v4);
        v4 = 0LL;
        WdLogSingleEntry0(5LL);
        WdLogGlobalForLineNumber = 1850;
        goto LABEL_23;
      }
      *((_DWORD *)v4 + 17) = 1;
    }
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 1860;
  }
  else
  {
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *v10);
    ldevUnloadImage(v4);
    v4 = 0LL;
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 1875;
  }
LABEL_23:
  if ( v8 )
  {
    if ( Buffer[1] )
      GreDeleteFastMutex(Buffer[1]);
    Buffer[1] = 0LL;
    LODWORD(Buffer[0]) = 0;
  }
  WdLogSingleEntry1(5LL, v4);
  result = v4;
  WdLogGlobalForLineNumber = 1891;
  return result;
}
