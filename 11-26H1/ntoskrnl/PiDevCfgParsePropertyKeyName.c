/*
 * XREFs of PiDevCfgParsePropertyKeyName @ 0x1405DDB94
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x140484B50 (RtlStringCchCopyNW.c)
 *     PnpStringToDwordValue @ 0x1404F4A2C (PnpStringToDwordValue.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 */

bool __fastcall PiDevCfgParsePropertyKeyName(unsigned __int16 *a1, GUID *a2, unsigned int *a3)
{
  bool v4; // cf
  NTSTATUS v7; // ebx
  __int64 v8; // rsi
  const wchar_t *v9; // rsi
  __int64 v10; // rbx
  wchar_t *v11; // rax
  __int64 v12; // rdi
  char v13; // al
  int v14; // ecx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-58h] BYREF
  wchar_t pszDest[12]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *a1 < 0x50u;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  if ( v4 )
    goto LABEL_2;
  GuidString.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
  GuidString.Length = 76;
  GuidString.MaximumLength = a1[1];
  v7 = RtlGUIDFromString(&GuidString, a2);
  if ( v7 < 0 )
    return v7 >= 0;
  v8 = *((_QWORD *)a1 + 1);
  if ( *(_WORD *)(v8 + 76) != 44 )
    goto LABEL_2;
  v9 = (const wchar_t *)(v8 + 78);
  v10 = (*a1 >> 1) - 39;
  if ( v9[v10] )
    goto LABEL_2;
  v11 = wcschr(v9, 0x2Cu);
  v12 = (__int64)v11;
  if ( v11 )
  {
    v10 = v11 - v9;
    v12 = (__int64)(v11 + 1);
  }
  v7 = RtlStringCchCopyNW(pszDest, 0xBuLL, v9, (unsigned int)v10);
  if ( v7 >= 0 )
  {
    if ( PnpStringToDwordValue((__int64)pszDest, &a2[1].Data1) )
    {
      if ( a3 )
      {
        *a3 = 1;
        if ( v12 )
        {
          v13 = PnpStringToDwordValue(v12, a3);
          v14 = v7;
          if ( !v13 )
            v14 = -1073741823;
          v7 = v14;
        }
      }
      return v7 >= 0;
    }
LABEL_2:
    v7 = -1073741823;
  }
  return v7 >= 0;
}
