/*
 * XREFs of PortMapBuildBusEntry @ 0x14012FB44
 * Callers:
 *     RaidAdapterCreateDevmapEntry @ 0x14005B814 (RaidAdapterCreateDevmapEntry.c)
 * Callees:
 *     PortRegistryCreateKeyEx @ 0x140046078 (PortRegistryCreateKeyEx.c)
 */

__int64 __fastcall PortMapBuildBusEntry(void *a1, int a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  HANDLE v7; // rbx
  __int64 v8; // [rsp+20h] [rbp-28h]
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  Handle = 0LL;
  result = PortRegistryCreateKeyEx(a1, 1u, &Handle, L"Scsi Bus %d", a2);
  if ( (int)result >= 0 )
  {
    LODWORD(v8) = a3;
    v7 = Handle;
    PortRegistryCreateKeyEx(Handle, 1u, 0LL, L"Initiator Id %d", v8);
    if ( a4 )
      *a4 = v7;
    else
      ZwClose(v7);
    return 0LL;
  }
  return result;
}
