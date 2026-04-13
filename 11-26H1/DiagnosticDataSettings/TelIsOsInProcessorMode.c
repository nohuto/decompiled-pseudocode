/*
 * XREFs of TelIsOsInProcessorMode @ 0x180004620
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180001460 (__security_check_cookie.c)
 *     memset_0 @ 0x18000203A (memset_0.c)
 *     ?CloseHeapPointer@@YAXPEAX@Z @ 0x180002B0C (-CloseHeapPointer@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800033E0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?TelpGetTelemetryClientRegPath@@YAPEAGXZ @ 0x1800035C0 (-TelpGetTelemetryClientRegPath@@YAPEAGXZ.c)
 *     TelpIsDeviceAzureADJoined @ 0x18000373C (TelpIsDeviceAzureADJoined.c)
 *     TelIsProcessorModeAllowed @ 0x180004840 (TelIsProcessorModeAllowed.c)
 */

__int64 __fastcall TelIsOsInProcessorMode(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int IsDeviceAzureADJoined; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int16 *TelemetryClientRegPath; // rbx
  __int64 v8; // r8
  WCHAR *v9; // rcx
  __int64 v10; // rdx
  WCHAR v11; // ax
  WCHAR *v12; // rax
  signed int v13; // edi
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  LSTATUS ValueW; // eax
  _BYTE v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  __int64 pvData; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR SubKey[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  if ( !a1 )
  {
    IsDeviceAzureADJoined = -2147024809;
    v5 = 1642LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v5, a3, (const char *)IsDeviceAzureADJoined);
    return IsDeviceAzureADJoined;
  }
  if ( !(unsigned int)TelIsProcessorModeAllowed() )
  {
    IsDeviceAzureADJoined = 0;
    goto LABEL_8;
  }
  v19[0] = 0;
  IsDeviceAzureADJoined = TelpIsDeviceAzureADJoined(v19);
  if ( (IsDeviceAzureADJoined & 0x80000000) != 0 )
  {
    v5 = 1655LL;
    goto LABEL_30;
  }
  if ( v19[0] )
  {
    *a1 = 1;
    pvData = 1LL;
    memset_0(SubKey, 0, 0x208uLL);
    TelemetryClientRegPath = TelpGetTelemetryClientRegPath(v6);
    if ( !TelemetryClientRegPath )
    {
      IsDeviceAzureADJoined = -2147467259;
      v5 = 1674LL;
      goto LABEL_30;
    }
    v8 = (char *)TelemetryClientRegPath - (char *)SubKey;
    v9 = SubKey;
    v10 = 260LL;
    do
    {
      if ( v10 == -2147483386 )
        break;
      v11 = *(WCHAR *)((char *)v9 + v8);
      if ( !v11 )
        break;
      *v9++ = v11;
      --v10;
    }
    while ( v10 );
    v12 = v9 - 1;
    if ( v10 )
      v12 = v9;
    *v12 = 0;
    v13 = v10 == 0 ? 0x8007007A : 0;
    if ( v10 )
    {
      v16 = StringCchCatW(SubKey, v10, (char *)L"\\RegionalSettings");
      v13 = v16;
      if ( v16 >= 0 )
      {
        pcbData = 8;
        ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, SubKey, L"IsProcessorMode", 0x10040u, 0LL, &pvData, &pcbData);
        v13 = ValueW;
        if ( ValueW > 0 )
          v13 = (unsigned __int16)ValueW | 0x80070000;
        if ( v13 >= 0 && pvData == 1 )
        {
          *a1 = 1;
          goto LABEL_21;
        }
        *a1 = 0;
        if ( v13 >= 0 )
          goto LABEL_21;
        v14 = (unsigned int)v13;
        v15 = 1687LL;
      }
      else
      {
        v14 = (unsigned int)v16;
        v15 = 1678LL;
      }
    }
    else
    {
      v14 = (unsigned int)v13;
      v15 = 1677LL;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v15, v8, (const char *)v14);
LABEL_21:
    CloseHeapPointer(TelemetryClientRegPath);
    return (unsigned int)v13;
  }
LABEL_8:
  *a1 = 0;
  return IsDeviceAzureADJoined;
}
