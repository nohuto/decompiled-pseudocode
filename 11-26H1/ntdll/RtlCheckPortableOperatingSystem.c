/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x1801010E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180059B20 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x18005A6B8 (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCheckPortableOperatingSystem(bool *a1)
{
  unsigned int v1; // ebx
  int RegistryValues; // eax
  _BYTE v5[8]; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+38h] [rbp-11h]
  const wchar_t *v7; // [rsp+40h] [rbp-9h]
  int *v8; // [rsp+48h] [rbp-1h]
  int v9; // [rsp+50h] [rbp+7h]
  int v10; // [rsp+B8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+77h] BYREF

  v1 = 0;
  v10 = 0;
  Handle = 0LL;
  if ( (int)RtlpGetRegistryHandle(2, L"MiniNT", 0, (const wchar_t **)&Handle) >= 0 )
  {
    NtClose(Handle);
LABEL_6:
    *a1 = v10 != 0;
    return v1;
  }
  memset_thunk_772440563353939046(v5, 0, 0x70uLL);
  v7 = L"PortableOperatingSystem";
  v6 = 292;
  v8 = &v10;
  v9 = 0x4000000;
  RegistryValues = RtlpQueryRegistryValues(2LL, 0LL, (__int64)v5, 0LL, 0LL, 1);
  v1 = RegistryValues;
  if ( RegistryValues != -1073741772 )
  {
    if ( RegistryValues < 0 )
      return v1;
    goto LABEL_6;
  }
  return (unsigned int)-1073741275;
}
