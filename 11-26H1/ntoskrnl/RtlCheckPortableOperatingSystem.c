/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x1404D0170
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10F30 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckRegistryKey @ 0x140A10F50 (RtlCheckRegistryKey.c)
 */

__int64 __fastcall RtlCheckPortableOperatingSystem(bool *a1)
{
  unsigned int v1; // ebx
  int RegistryValues; // eax
  _BYTE v5[8]; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+38h] [rbp-70h]
  const WCHAR *v7; // [rsp+40h] [rbp-68h]
  int *v8; // [rsp+48h] [rbp-60h]
  int v9; // [rsp+50h] [rbp-58h]
  int v10; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v10 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_6;
  memset_0(v5, 0, 0x70uLL);
  v6 = 292;
  v7 = L"PortableOperatingSystem";
  v9 = 0x4000000;
  v8 = &v10;
  RegistryValues = RtlQueryRegistryValuesEx(2LL, 0LL, v5, 0LL, 0LL);
  v1 = RegistryValues;
  if ( RegistryValues != -1073741772 )
  {
    if ( RegistryValues < 0 )
      return v1;
LABEL_6:
    *a1 = v10 != 0;
    return v1;
  }
  return (unsigned int)-1073741275;
}
