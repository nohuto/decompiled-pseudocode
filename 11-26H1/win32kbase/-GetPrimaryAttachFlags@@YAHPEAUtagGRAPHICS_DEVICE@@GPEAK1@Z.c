/*
 * XREFs of ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1401583D8
 * Callers:
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1401580D0 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401F4E24 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall GetPrimaryAttachFlags(struct tagGRAPHICS_DEVICE *a1, __int16 a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v10; // rbx
  int v11; // eax
  __int64 result; // rax
  int v13; // eax
  const WCHAR *v14; // rax
  WCHAR *v15; // r15
  NTSTATUS v16; // ebx
  _DWORD v17[4]; // [rsp+30h] [rbp-A9h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-99h] BYREF
  __int64 v19; // [rsp+78h] [rbp-61h]
  int v20; // [rsp+80h] [rbp-59h]
  const wchar_t *v21; // [rsp+88h] [rbp-51h]
  unsigned int *v22; // [rsp+90h] [rbp-49h]
  int v23; // [rsp+98h] [rbp-41h]
  _DWORD *v24; // [rsp+A0h] [rbp-39h]
  int v25; // [rsp+A8h] [rbp-31h]
  __int64 v26; // [rsp+B0h] [rbp-29h]
  int v27; // [rsp+B8h] [rbp-21h]
  __int64 v28; // [rsp+C0h] [rbp-19h]
  __int128 v29; // [rsp+C8h] [rbp-11h]
  __int128 v30; // [rsp+D8h] [rbp-1h]

  v4 = 0;
  v17[0] = 0;
  WdLogSingleEntry1(5LL, a1);
  QueryTable.Name = L"Attach.PrimaryDevice";
  QueryTable.DefaultType = 67108868;
  QueryTable.Flags = 288;
  QueryTable.DefaultLength = 4;
  QueryTable.DefaultData = v17;
  v21 = L"Attach.ToDesktop";
  v20 = 288;
  v23 = 67108868;
  v25 = 4;
  *a4 = 0;
  v24 = v17;
  WdLogGlobalForLineNumber = 20317;
  *a3 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = a3;
  v19 = 0LL;
  v22 = a4;
  v26 = 0LL;
  v27 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                 (unsigned __int16 *)a1,
                                                 1,
                                                 0LL,
                                                 0LL,
                                                 0,
                                                 0LL);
  v10 = (WCHAR *)RegistryHandleFromDeviceMap;
  if ( RegistryHandleFromDeviceMap )
  {
    RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
    ZwClose(v10);
  }
  else
  {
    v14 = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL);
    v15 = (WCHAR *)v14;
    if ( v14 )
    {
      v16 = RtlQueryRegistryValues(0x40000000u, v14, &QueryTable, 0LL, 0LL);
      ZwClose(v15);
      if ( v16 < 0 )
      {
        WdLogSingleEntry0(5LL);
        *a4 = 0;
        *a3 = 0;
        WdLogGlobalForLineNumber = 20380;
      }
    }
    else
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 20386;
    }
  }
  v11 = *((_DWORD *)a1 + 40);
  if ( a2 )
  {
    v13 = v11 & 0x2000000;
    if ( a2 == -1 )
    {
      LOBYTE(v4) = v13 != 0;
    }
    else if ( !v13 )
    {
      *a4 = *((_DWORD *)a1 + 63);
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( (v11 & 0x6000000) != 0 )
LABEL_5:
    *a4 = v4;
LABEL_6:
  WdLogSingleEntry2(5LL, *a3, *a4);
  result = 1LL;
  WdLogGlobalForLineNumber = 20429;
  return result;
}
