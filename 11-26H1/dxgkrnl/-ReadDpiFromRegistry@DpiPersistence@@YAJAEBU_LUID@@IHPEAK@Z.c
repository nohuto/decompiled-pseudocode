/*
 * XREFs of ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x140338300
 * Callers:
 *     DxgkGetDpiOverrideForSource @ 0x140337580 (DxgkGetDpiOverrideForSource.c)
 *     DxgkUpdateGdiInfo @ 0x1403809B0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x14006CA04 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x140337BCC (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x1403388F4 (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x140338918 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::ReadDpiFromRegistry(
        DpiPersistence *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  struct _UNICODE_STRING *v5; // rsi
  __int64 v7; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _UNICODE_STRING v17; // xmm0
  const WCHAR *v18; // rdx
  NTSTATUS v19; // eax
  void *v20; // rax
  const wchar_t *v22; // r9
  void *v23; // rax
  void *v24; // rdx
  int v25; // eax
  const struct _UNICODE_STRING *v26; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int16 *v35; // [rsp+20h] [rbp-E0h]
  void *v36; // [rsp+50h] [rbp-B0h] BYREF
  void *v37; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING v40; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING v41; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-40h] BYREF
  int v43; // [rsp+C8h] [rbp-38h]
  const WCHAR *v44; // [rsp+D0h] [rbp-30h]
  struct _UNICODE_STRING *v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+E0h] [rbp-20h]
  int *v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  __int128 v52; // [rsp+110h] [rbp+10h]
  __int128 v53; // [rsp+120h] [rbp+20h]
  int v54; // [rsp+180h] [rbp+80h] BYREF
  void *KeyHandle; // [rsp+188h] [rbp+88h] BYREF

  v54 = 0;
  *(_DWORD *)&a4->Length = 0;
  KeyHandle = 0LL;
  v41 = 0LL;
  v36 = 0LL;
  v5 = 0LL;
  v37 = 0LL;
  v40 = 0LL;
  DestinationString = 0LL;
  LODWORD(v7) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, (unsigned int)&v41, a4);
  if ( (int)v7 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global, v9, v10, v11);
    v5 = (struct _UNICODE_STRING *)SessionData;
    if ( !SessionData )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v15, v16);
      LODWORD(v7) = -1073741811;
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      WdLogGlobalForLineNumber = 828;
      v32 = PsGetCurrentProcessSessionId(v29, v28, v30, v31);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v32,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_12;
    }
    if ( *((_QWORD *)SessionData + 2343) )
    {
      WdLogNewEntry5_WdTrace(v14, v13);
      v17 = v5[1171];
      WdLogGlobalForLineNumber = 860;
      v18 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      v40 = v17;
    }
    else
    {
      if ( DXGSESSIONDATA::GetUserRegistryPath(SessionData, 0)->Length )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 851;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDxgSessionData->GetUserRegistryPath()->Length == 0",
          851LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      WdLogNewEntry5_WdTrace(v34, v33);
      WdLogGlobalForLineNumber = 852;
      RtlInitUnicodeString(&v40, L"\\Registry\\Machine\\System");
      v18 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&DestinationString, v18);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &v40;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v19 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    v7 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry1(2LL);
      v22 = L"Unable to open HKey root handle (Status = 0x%I64x)";
      WdLogGlobalForLineNumber = 877;
LABEL_15:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v22, v7, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_10;
    }
    v20 = KeyHandle;
    if ( !KeyHandle )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 880;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HKeyRootHandle", 880LL, 0LL, 0LL, 0LL, 0LL);
      v20 = KeyHandle;
    }
    ObjectAttributes.RootDirectory = v20;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(v7) = ZwOpenKey(&v36, 0xF003Fu, &ObjectAttributes);
    if ( (int)v7 < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 892;
      goto LABEL_10;
    }
    v23 = v36;
    if ( !v36 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 896;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PerMonSettingsKeyHandle", 896LL, 0LL, 0LL, 0LL, 0LL);
      v23 = v36;
    }
    ObjectAttributes.RootDirectory = v23;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &v41;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(v7) = ZwOpenKey(&v37, 0xF003Fu, &ObjectAttributes);
    if ( (int)v7 >= 0 )
    {
      v24 = v37;
      if ( !v37 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 912;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorIdKeyHandle", 912LL, 0LL, 0LL, 0LL, 0LL);
        v24 = v37;
      }
      v42 = 0LL;
      v43 = 288;
      v44 = L"DpiValue";
      v45 = a4;
      v47 = &v54;
      v46 = 67108868;
      v48 = 4;
      v49 = 0LL;
      v50 = 0;
      v51 = 0LL;
      v52 = 0LL;
      v53 = 0LL;
      v25 = RtlQueryRegistryValuesEx(0x40000000LL, v24, &v42, 0LL, 0LL);
      v7 = v25;
      if ( v25 >= 0 )
        goto LABEL_10;
      WdLogSingleEntry1(2LL);
      v22 = L"Unable to read registry values. (Status = 0x%I64x, SubKeyHandle2 = 0x%I64x, QueryTable = 0x%I64x)";
      WdLogGlobalForLineNumber = 934;
      goto LABEL_15;
    }
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 909;
  }
LABEL_10:
  if ( (_DWORD)v7 == -1073741772 )
  {
    LODWORD(v7) = 0;
    *(_DWORD *)&a4->Length = v54;
  }
LABEL_12:
  if ( a3 && (int)v7 >= 0 && v5 && v5[1171].Buffer )
  {
    RtlInitUnicodeString(&v40, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&DestinationString, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v35) = *(_DWORD *)&a4->Length;
    DpiPersistence::WriteDwordToParticularRegValue(&v40, &DestinationString, &v41, v26, v35);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v41.Buffer);
  CloseRegistrySubkey(KeyHandle);
  CloseRegistrySubkey(v36);
  CloseRegistrySubkey(v37);
  return (unsigned int)v7;
}
