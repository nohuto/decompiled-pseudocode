/*
 * XREFs of IopFetchConfigurationInformation @ 0x140CC30C0
 * Callers:
 *     IopCreateArcNamesCd @ 0x140CC26E4 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140CC2C1C (IopCreateArcNamesDisk.c)
 * Callees:
 *     IoGetDeviceInterfaces @ 0x140A30A80 (IoGetDeviceInterfaces.c)
 */

__int64 __fastcall IopFetchConfigurationInformation(
        PZZWSTR *SymbolicLinkList,
        GUID *InterfaceClassGuid,
        unsigned int a3,
        unsigned int *a4)
{
  PZZWSTR v4; // rdi
  unsigned int v8; // ebx
  PZZWSTR v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  WCHAR *v13; // rcx

  v4 = *SymbolicLinkList;
  v8 = 0;
  if ( IoGetDeviceInterfaces(InterfaceClassGuid, 0LL, 0, SymbolicLinkList) >= 0 )
  {
    v10 = *SymbolicLinkList;
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    while ( (_DWORD)v11 )
    {
      ++v8;
      v12 = -1LL;
      do
        ++v12;
      while ( v10[v12] );
      v13 = &v10[v12];
      v11 = -1LL;
      v10 = v13 + 1;
      do
        ++v11;
      while ( v10[v11] );
    }
    *a4 = v8;
    return v8 < a3 ? 0xC0000001 : 0;
  }
  else
  {
    if ( v4 )
      *v4 = 0;
    return 3221225473LL;
  }
}
