/*
 * XREFs of ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180056524
 * Callers:
 *     ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x18006E260 (-HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000270C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18005681C (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppQueryTerminateReason(struct _HAM_APPLICATION *a1, enum _HAM_TERMINATE_REASON *a2)
{
  int v2; // edi
  __int64 v5; // rbx
  char *v6; // r12
  int v7; // ebx
  int Value; // eax
  bool v9; // sf
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-B8h] BYREF
  DWORD cbData[2]; // [rsp+50h] [rbp-B0h] BYREF
  BYTE Data[8]; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR ValueName[136]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)a1 + 154) & 0x10000) != 0 )
  {
    *(_DWORD *)a2 = 0;
    return 0;
  }
  v5 = *((_QWORD *)a1 + 11);
  v6 = (char *)a1 + 96;
  cbData[0] = 0;
  *(_DWORD *)Data = 0;
  hKey = 0LL;
  v15 = 130;
  PsmGetAumidFromKey((char *)a1 + 96, &v15, ValueName);
  v7 = HampUtilCreateVolatileUserRegKey((PSID)(v5 + 228), 1u, &hKey);
  if ( v7 >= 0 )
  {
    cbData[0] = 4;
    Value = RegQueryValueExW(hKey, ValueName, 0LL, 0LL, Data, cbData);
    v9 = Value < 0;
    if ( Value > 0 )
    {
      Value = (unsigned __int16)Value | 0xC0070000;
      v9 = Value < 0;
    }
    if ( v9 )
    {
      v7 = 0;
      if ( Value != -1073283070 )
        v7 = Value;
    }
    else if ( *(_DWORD *)Data <= 0x1AFFu && cbData[0] == 4 )
    {
      v2 = *(_DWORD *)Data;
      v7 = 0;
    }
    else
    {
      v7 = -1073739509;
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( v7 >= 0 )
  {
    *(_DWORD *)a2 = v2;
    return 0;
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 0x400000000008LL) )
  {
    v14 = *((_QWORD *)a1 + 11);
    hKey = (HKEY)0x1000000;
    *(_QWORD *)Data = v14 + 228;
    *(_QWORD *)cbData = v6;
    v15 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<8>>(
      v11,
      (__int64)&unk_1800D0951,
      v12,
      v13,
      (__int64)&v15,
      (const wchar_t **)cbData,
      (__int64 *)Data,
      (__int64)&hKey);
  }
  return (unsigned int)v7;
}
