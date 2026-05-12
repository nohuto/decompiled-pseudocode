/*
 * XREFs of PortMapBuildAdapterEntry @ 0x140045F5C
 * Callers:
 *     RaidAdapterCreateDevmapEntry @ 0x14005B814 (RaidAdapterCreateDevmapEntry.c)
 * Callees:
 *     PortRegistrySetValueKey @ 0x140045870 (PortRegistrySetValueKey.c)
 *     PortRegistryCreateKeyEx @ 0x140046078 (PortRegistryCreateKeyEx.c)
 */

__int64 __fastcall PortMapBuildAdapterEntry(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        wchar_t **a6,
        HANDLE Handle,
        _QWORD *a8)
{
  __int64 result; // rax
  HANDLE v9; // rbx
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+60h] [rbp+18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v10 = 0;
  Handle = 0LL;
  result = PortRegistryCreateKeyEx(a1, 1LL, &Handle, L"Scsi Port %d", a2);
  if ( (int)result >= 0 )
  {
    v9 = Handle;
    if ( v11 )
      PortRegistrySetValueKey(Handle, L"Interrupt", 4u, (wchar_t *)&v11, 4u);
    v12 = 1;
    PortRegistrySetValueKey(v9, L"Dma64BitAddresses", 4u, (wchar_t *)&v12, 4u);
    if ( a6 )
      PortRegistrySetValueKey(v9, L"Driver", 1u, a6[1], *(unsigned __int16 *)a6 + 2);
    if ( a8 )
      *a8 = v9;
    else
      ZwClose(v9);
    return 0LL;
  }
  return result;
}
