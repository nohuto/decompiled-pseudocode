/*
 * XREFs of ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x14021B380
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ValidateExternalLogFont @ 0x1400C02C0 (ValidateExternalLogFont.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1401D580C (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1401D5D34 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x14021B520 (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 *     DwmAsyncNotifyAnimationChange @ 0x140224764 (DwmAsyncNotifyAnimationChange.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1402916D0 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402917BC (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 */

__int64 __fastcall xxxSetSPIMetrics(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        struct tagMINIMIZEDMETRICS *a3,
        int a4,
        int *a5)
{
  unsigned int v8; // edi
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 UserSessionState; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx

  *a5 = 0;
  switch ( (_DWORD)a2 )
  {
    case ',':
      v14 = xxxSPISetMinMetrics(a1, a3, a4);
      goto LABEL_25;
    case '"':
      if ( !ValidateExternalLogFont((__int64)a3, a2) )
        goto LABEL_23;
      v14 = SPISetIconTitleFont(a1, (struct tagLOGFONTW *)a3, a4);
      goto LABEL_25;
    case '*':
      if ( !ValidateExternalLogFont((__int64)a3 + 24, a2)
        || !ValidateExternalLogFont((__int64)a3 + 124, v15)
        || !ValidateExternalLogFont((__int64)a3 + 224, v16)
        || !ValidateExternalLogFont((__int64)a3 + 316, v17)
        || !ValidateExternalLogFont((__int64)a3 + 408, v18) )
      {
        goto LABEL_23;
      }
      v14 = xxxSPISetNCMetrics(a1, a3, a4);
      goto LABEL_25;
    case '.':
      if ( !ValidateExternalLogFont((__int64)a3 + 16, a2) )
        goto LABEL_23;
      v14 = SPISetIconMetrics(a1, a3, a4);
LABEL_25:
      v12 = v14;
LABEL_26:
      *a5 = v12;
      return 1LL;
  }
  if ( (_DWORD)a2 != 73 )
  {
LABEL_23:
    UserSetLastError(87);
    return 0LL;
  }
  v8 = *((_DWORD *)a3 + 1);
  v9 = (void *)ReferenceDwmApiPort(a1, a2);
  DwmAsyncNotifyAnimationChange(v9);
  if ( !a4 )
  {
    v12 = 0;
    goto LABEL_10;
  }
  v12 = SetWindowMetricInt(a1, 149LL, v8);
  if ( v12 )
  {
LABEL_10:
    UserSessionState = W32GetUserSessionState(v11, v10);
    if ( v8 )
      *(_DWORD *)(UserSessionState + 66800) |= 0x10000u;
    else
      *(_DWORD *)(UserSessionState + 66800) &= ~0x10000u;
    goto LABEL_26;
  }
  return 1LL;
}
