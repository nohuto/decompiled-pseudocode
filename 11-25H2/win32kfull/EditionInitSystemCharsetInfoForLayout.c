/*
 * XREFs of EditionInitSystemCharsetInfoForLayout @ 0x140207F40
 * Callers:
 *     <none>
 * Callees:
 *     xxxClientGetCharsetInfo @ 0x140208038 (xxxClientGetCharsetInfo.c)
 */

__int64 __fastcall EditionInitSystemCharsetInfoForLayout(__int64 a1, char *a2)
{
  char v2; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  DWORD DefaultLocaleId; // [rsp+40h] [rbp+8h] BYREF
  ULONG Value; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  Value = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66088) )
  {
    DefaultLocaleId = 0;
    if ( ZwQueryDefaultLocale(0, &DefaultLocaleId) >= 0 && (unsigned int)xxxClientGetCharsetInfo(DefaultLocaleId, a2) )
    {
      v7 = *((_DWORD *)a2 + 6);
      *(_DWORD *)(W32GetUserSessionState(v6, v5) + 66088) = v7;
      v2 = *a2;
    }
    else
    {
      *(_DWORD *)(W32GetUserSessionState(v6, v5) + 66088) = 0xFFFF;
    }
    *(_BYTE *)(W32GetUserSessionState(v9, v8) + 14059) = v2;
  }
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 8));
  RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value);
  return xxxClientGetCharsetInfo(Value, a2);
}
