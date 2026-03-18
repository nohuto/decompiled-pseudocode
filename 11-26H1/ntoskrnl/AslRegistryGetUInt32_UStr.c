/*
 * XREFs of AslRegistryGetUInt32_UStr @ 0x14088859C
 * Callers:
 *     SdbResolveDatabaseEx @ 0x140886554 (SdbResolveDatabaseEx.c)
 *     AslRegistryGetUInt32 @ 0x140B30A48 (AslRegistryGetUInt32.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetUInt32_UStr(_DWORD *a1, void *a2, UNICODE_STRING *a3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  ULONG v7; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+38h] [rbp-30h] BYREF
  int v9; // [rsp+48h] [rbp-20h]

  v9 = 0;
  v7 = 0;
  *a1 = 0;
  v8 = 0LL;
  v4 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, &v8, 0x14u, &v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_QWORD *)((char *)&v8 + 4) == 0x400000004LL )
    {
      v5 = 0;
      *a1 = HIDWORD(v8);
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetUInt32_UStr", 1098, (unsigned int)"Invalid value type");
      return (unsigned int)-1073741788;
    }
  }
  else if ( v4 != -1073741772 )
  {
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetUInt32_UStr", 1091, (unsigned int)"Failed to query key value [%x]");
  }
  return v5;
}
