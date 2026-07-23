/*
 * XREFs of WdipSemLoadNextContextProvider @ 0x14082599C
 * Callers:
 *     WdipSemLoadNextScenario @ 0x140825F5C (WdipSemLoadNextScenario.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WdipSemOpenRegistryKey @ 0x140827820 (WdipSemOpenRegistryKey.c)
 *     WdipSemQueryValueFromRegistry @ 0x1408278B0 (WdipSemQueryValueFromRegistry.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 */

__int64 __fastcall WdipSemLoadNextContextProvider(HANDLE KeyHandle, ULONG Index, GUID *Guid)
{
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  char v9; // cl
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-95h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-91h]
  int v18; // [rsp+40h] [rbp-89h] BYREF
  int v19; // [rsp+44h] [rbp-85h] BYREF
  __int64 v20; // [rsp+48h] [rbp-81h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-79h] BYREF
  _BYTE KeyInformation[12]; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v23; // [rsp+6Ch] [rbp-5Dh]
  WCHAR SourceString[68]; // [rsp+70h] [rbp-59h] BYREF

  ResultLength = 0;
  Handle = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0LL;
  v16 = 0;
  DestinationString = 0LL;
  if ( !KeyHandle || !Guid )
    return (unsigned int)-1073741811;
  memset_0(KeyInformation, 0, 0x98uLL);
  v6 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
  if ( v6 >= 0 )
  {
    if ( v23 >= 0x80 )
    {
      v6 = -2147483643;
      goto LABEL_34;
    }
    SourceString[(unsigned __int64)v23 >> 1] = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    v6 = RtlGUIDFromString(&DestinationString, Guid);
    if ( v6 >= 0 )
    {
      v7 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&WDI_SEM_PROVIDER.Data1;
      if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&WDI_SEM_PROVIDER.Data1 )
        v7 = *(_QWORD *)Guid->Data4 - *(_QWORD *)WDI_SEM_PROVIDER.Data4;
      if ( !v7 )
      {
        v6 = -1073741823;
        goto LABEL_34;
      }
      v6 = WdipSemOpenRegistryKey(SourceString);
      if ( v6 >= 0 )
      {
        v8 = WdipSemQueryValueFromRegistry(Handle, &v18, (__int64)&ResultLength);
        v6 = v8;
        if ( v8 >= 0 )
        {
          v9 = v18;
          if ( !v18 )
            v9 = -1;
          BYTE2(Guid[1].Data1) = v9;
        }
        else
        {
          if ( v8 != -1073741772 )
            goto LABEL_34;
          BYTE2(Guid[1].Data1) = -1;
        }
        v10 = WdipSemQueryValueFromRegistry(Handle, &v20, (__int64)&ResultLength);
        v6 = v10;
        if ( v10 >= 0 )
        {
          v11 = v20;
          if ( !v20 )
            v11 = -1LL;
          *(_QWORD *)Guid[1].Data4 = v11;
        }
        else
        {
          if ( v10 != -1073741772 )
            goto LABEL_34;
          *(_QWORD *)Guid[1].Data4 = -1LL;
        }
        v12 = WdipSemQueryValueFromRegistry(Handle, &v16, (__int64)&ResultLength);
        v6 = v12;
        if ( v12 >= 0 )
        {
          Guid[2].Data1 = v16;
LABEL_30:
          v13 = WdipSemQueryValueFromRegistry(Handle, &v19, (__int64)&ResultLength);
          v6 = v13;
          if ( v13 >= 0 )
          {
            *(_DWORD *)&Guid[2].Data2 = v19;
          }
          else if ( v13 == -1073741772 )
          {
            v6 = 0;
            *(_DWORD *)&Guid[2].Data2 = 0;
          }
          goto LABEL_34;
        }
        if ( v12 == -1073741772 || v16 >= 3 )
        {
          Guid[2].Data1 = 0;
          goto LABEL_30;
        }
      }
    }
  }
LABEL_34:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
