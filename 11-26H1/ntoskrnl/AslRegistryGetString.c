/*
 * XREFs of AslRegistryGetString @ 0x14088E7F0
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x140887904 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     AslStringDuplicate @ 0x1409D8BA8 (AslStringDuplicate.c)
 */

__int64 __fastcall AslRegistryGetString(_QWORD *a1, void *a2, const WCHAR *a3)
{
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  const char *v10; // r9
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rcx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a3);
  v5 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v7 = v5;
  if ( v5 == -2147483643 || v5 == -1073741789 )
  {
    ResultLength += 2;
    v8 = (_DWORD *)AslAlloc(v6, ResultLength);
    v9 = v8;
    if ( !v8 )
    {
      v7 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", 1348, (unsigned int)"Out of memory");
      return (unsigned int)v7;
    }
    v7 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, v8, ResultLength, &ResultLength);
    if ( v7 < 0 )
    {
      v10 = "Failed to query key value [%x]";
      v11 = 1360;
LABEL_14:
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", v11, (_DWORD)v10);
      goto LABEL_15;
    }
    v12 = v9[1];
    if ( v12 == 1 || v12 == 2 )
    {
      *((_WORD *)v9 + ((unsigned __int64)(unsigned int)v9[2] >> 1) + 6) = 0;
      v7 = AslStringDuplicate(a1, v9 + 3);
      if ( v7 < 0 )
      {
        v10 = "Out of memory [%x]";
        v11 = 1378;
        goto LABEL_14;
      }
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", 1368, (unsigned int)"Invalid value type");
      v7 = -1073741788;
    }
LABEL_15:
    AslFree(v13, v9);
    return (unsigned int)v7;
  }
  if ( v5 != -1073741772 )
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", 1334, (unsigned int)"Failed to query key value [%x]");
  return (unsigned int)v7;
}
