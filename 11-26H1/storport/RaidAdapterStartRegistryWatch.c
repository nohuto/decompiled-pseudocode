/*
 * XREFs of RaidAdapterStartRegistryWatch @ 0x140069918
 * Callers:
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     PortBuildRegKeyName @ 0x1400380DC (PortBuildRegKeyName.c)
 *     StorpInitRegistryWatch @ 0x140077434 (StorpInitRegistryWatch.c)
 *     StorpWatchForRegistryChanges @ 0x140077E70 (StorpWatchForRegistryChanges.c)
 */

__int64 __fastcall RaidAdapterStartRegistryWatch(__int64 a1)
{
  const UNICODE_STRING *v2; // rcx
  int v3; // r8d
  NTSTATUS v4; // ebx
  _QWORD *Pool; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+20h] BYREF

  v2 = (const UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL);
  KeyHandle = 0LL;
  v3 = *(_DWORD *)(a1 + 56);
  memset(&ObjectAttributes, 0, 44);
  UnicodeString = 0LL;
  v4 = PortBuildRegKeyName(v2, &UnicodeString, v3, 1);
  if ( v4 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v4 >= 0 )
    {
      Pool = (_QWORD *)RaidAllocatePool(64LL, 192LL, 1465016658LL, 0LL);
      if ( Pool )
      {
        v6 = (_QWORD *)RaidAllocatePool(64LL, 192LL, 1465016658LL, 0LL);
        if ( v6 )
        {
          v7 = *(_QWORD *)(a1 + 616);
          Pool[1] = 0LL;
          *Pool = v7 + 16;
          v6[1] = RaidAdapterUpdateDynamicRegistrySettings;
          *v6 = Pool;
          StorpInitRegistryWatch(KeyHandle, v6);
          StorpWatchForRegistryChanges(v6);
          *(_QWORD *)(a1 + 6112) = v6;
          KeyHandle = 0LL;
        }
        else
        {
          v4 = -1073741670;
          ExFreePoolWithTag(Pool, 0x57526152u);
        }
      }
      else
      {
        v4 = -1073741670;
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
