/*
 * XREFs of ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1400EC01C
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140137A28 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     DxgkEngIsDwmProcess @ 0x1400EC544 (DxgkEngIsDwmProcess.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

NTSTATUS __fastcall DrvCollectColorProfileForUser(char *Sid, int a2)
{
  _WORD *i; // rcx
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  int v7; // eax
  NTSTATUS v8; // esi
  int v9; // ecx
  char *v10; // rdi
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v15; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v16; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Source; // [rsp+80h] [rbp-80h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-70h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-38h]
  int v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  __int128 v24; // [rsp+E0h] [rbp-20h]
  __int128 v25; // [rsp+F0h] [rbp-10h]
  struct _RTL_QUERY_REGISTRY_TABLE v26; // [rsp+100h] [rbp+0h] BYREF
  __int64 v27; // [rsp+138h] [rbp+38h]
  int v28; // [rsp+140h] [rbp+40h]
  __int64 v29; // [rsp+148h] [rbp+48h]
  __int128 v30; // [rsp+150h] [rbp+50h]
  __int128 v31; // [rsp+160h] [rbp+60h]
  struct _RTL_QUERY_REGISTRY_TABLE v32; // [rsp+170h] [rbp+70h] BYREF
  __int64 v33; // [rsp+1A8h] [rbp+A8h]
  int v34; // [rsp+1B0h] [rbp+B0h]
  __int64 v35; // [rsp+1B8h] [rbp+B8h]
  __int128 v36; // [rsp+1C0h] [rbp+C0h]
  __int128 v37; // [rsp+1D0h] [rbp+D0h]
  int v38; // [rsp+210h] [rbp+110h] BYREF
  int v39; // [rsp+218h] [rbp+118h] BYREF

  if ( !(unsigned int)DxgkEngIsDwmProcess() && !gbOSTestSigningEnabled )
    return -1073741790;
  if ( *((_DWORD *)Sid + 23) + *((_DWORD *)Sid + 22) > (unsigned int)(a2 - 96) || *((_WORD *)Sid + 41) )
    return -1073741811;
  for ( i = Sid + 68; *i; ++i )
  {
    if ( (unsigned __int16)(*i - 48) > 9u )
      return -1073741811;
  }
  UnicodeString = 0LL;
  result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( result >= 0 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\USER\\");
    Source = 0LL;
    RtlInitUnicodeString(
      &Source,
      L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\ICM\\ProfileAssociations\\Display\\{4d36e96e-e325-11ce-bfc1-08002be10318}\\");
    *(&Destination.MaximumLength + 2) = 0;
    *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(DestinationString.Length
                                                             + Source.Length
                                                             + UnicodeString.Length
                                                             + 16);
    Destination.Length = 0;
    Destination.Buffer = (PWSTR)ExAllocatePool2(
                                  258LL,
                                  (unsigned __int16)(DestinationString.Length + Source.Length
                                                                              + UnicodeString.Length
                                                                              + 16),
                                  1936876615LL);
    if ( !Destination.Buffer )
    {
      RtlFreeUnicodeString(&UnicodeString);
      return -1073741801;
    }
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, (PCWSTR)Sid + 34);
    RtlFreeUnicodeString(&UnicodeString);
    QueryTable.Name = L"UsePerUserProfiles";
    v38 = 0;
    QueryTable.EntryContext = &v38;
    v39 = 0;
    QueryTable.DefaultData = &v39;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    v15 = 0LL;
    QueryTable.DefaultType = 67108868;
    v16 = 0LL;
    QueryTable.DefaultLength = 4;
    v21 = 0LL;
    v22 = 0;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v6 = RtlQueryRegistryValues(0, Destination.Buffer, &QueryTable, 0LL, 0LL);
    if ( v6 < 0 )
    {
      ExFreePoolWithTag(Destination.Buffer, 0);
      return v6;
    }
    v7 = v38;
    *((_DWORD *)Sid + 21) = v38;
    if ( !v7 )
    {
      ExFreePoolWithTag(Destination.Buffer, 0);
      if ( !*((_DWORD *)Sid + 22) )
        return *((_DWORD *)Sid + 23) != 0 ? 0xC000000D : 0;
      return -1073741811;
    }
    v26.Name = L"ICMProfile";
    v26.QueryRoutine = 0LL;
    v26.EntryContext = &v15;
    v26.Flags = 304;
    v26.DefaultType = 117440519;
    v26.DefaultData = 0LL;
    v26.DefaultLength = 0;
    v27 = 0LL;
    v28 = 0;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v6 = RtlQueryRegistryValues(0, Destination.Buffer, &v26, 0LL, 0LL);
    v32.QueryRoutine = 0LL;
    v32.Flags = 304;
    v32.DefaultType = 117440519;
    v32.Name = L"ICMProfileAC";
    v32.DefaultData = 0LL;
    v32.EntryContext = &v16;
    v32.DefaultLength = 0;
    v33 = 0LL;
    v34 = 0;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v8 = RtlQueryRegistryValues(0, Destination.Buffer, &v32, 0LL, 0LL);
    ExFreePoolWithTag(Destination.Buffer, 0);
    if ( v6 < 0 && v8 < 0 )
    {
      *((_DWORD *)Sid + 21) = 0;
      return v6;
    }
    v9 = *((_DWORD *)Sid + 22);
    v10 = Sid + 96;
    if ( v9 )
    {
      if ( v9 != (v15.Length >> 1) + 1 )
        goto LABEL_17;
      memmove(Sid + 96, v15.Buffer, v15.Length);
      v10 += 2 * *((unsigned int *)Sid + 22);
      *((_WORD *)v10 - 1) = 0;
    }
    else
    {
      if ( v15.Length )
        v13 = (v15.Length >> 1) + 1;
      else
        v13 = 0;
      *((_DWORD *)Sid + 22) = v13;
    }
    v11 = *((_DWORD *)Sid + 23);
    if ( !v11 )
    {
      if ( v16.Length )
        v12 = (v16.Length >> 1) + 1;
      else
        v12 = 0;
      *((_DWORD *)Sid + 23) = v12;
      goto LABEL_31;
    }
    if ( v11 == (v16.Length >> 1) + 1 )
    {
      memmove(v10, v16.Buffer, v16.Length);
      *(_WORD *)&v10[2 * *((unsigned int *)Sid + 23) - 2] = 0;
LABEL_31:
      if ( v15.Buffer )
        RtlFreeUnicodeString(&v15);
      if ( v16.Buffer )
        RtlFreeUnicodeString(&v16);
      return 0;
    }
LABEL_17:
    if ( v15.Buffer )
      RtlFreeUnicodeString(&v15);
    if ( v16.Buffer )
      RtlFreeUnicodeString(&v16);
    return -1073741811;
  }
  return result;
}
