/*
 * XREFs of ExpWnfGetNameStoreRegistryRoot @ 0x1409C907C
 * Callers:
 *     ExpWnfDeletePermanentName @ 0x1409C36F4 (ExpWnfDeletePermanentName.c)
 *     ExpWnfLookupPermanentName @ 0x1409C8E98 (ExpWnfLookupPermanentName.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1409CB178 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfRegisterPermanentName @ 0x1409CBBBC (ExpWnfRegisterPermanentName.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x140B69B74 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 */

NTSTATUS __fastcall ExpWnfGetNameStoreRegistryRoot(int a1, volatile signed __int64 *a2)
{
  __int64 v3; // rdi
  volatile signed __int64 *p_Blink; // rbx
  NTSTATUS result; // eax
  __int64 *v6; // rax
  ACCESS_MASK v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edi
  BOOL CreateOptions; // [rsp+28h] [rbp-48h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  Disposition = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v3 = 6LL * a1;
  if ( a1 )
  {
    if ( a1 == 1 )
      p_Blink = (volatile signed __int64 *)&PsGetCurrentServerSiloGlobals()[55].Blink;
    else
      p_Blink = (volatile signed __int64 *)&PsGetCurrentServerSiloGlobals()[56];
  }
  else
  {
    p_Blink = (volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.IoSelfBoostsEntry;
  }
  if ( *p_Blink )
  {
    *a2 = *p_Blink;
    return 0;
  }
  v6 = &ExpWnfNameStoreDescriptors[3];
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  if ( !HIDWORD(WheapPfaLock.KernelStack) )
    v6 = &ExpWnfNameStoreDescriptors[1];
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6[v3];
  CreateOptions = HIDWORD(ExpWnfNameStoreDescriptors[v3 + 5]) != 0;
  v7 = LODWORD(ExpWnfNameStoreDescriptors[v3 + 5]) != 0 ? 131097 : 983103;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, v7, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  if ( result >= 0 )
  {
    if ( Disposition == 1 )
    {
      LOBYTE(v8) = HIDWORD(WheapPfaLock.KernelStack) != 0;
      v9 = ExpInitializeStateSeparationPhase2(
             v8,
             &ExpWnfNameStoreDescriptors[v3 + 1],
             &ExpWnfNameStoreDescriptors[v3 + 3]);
      v10 = v9;
      if ( v9 != -1073741637 && v9 < 0 )
      {
        ZwClose(KeyHandle);
        return v10;
      }
    }
    if ( _InterlockedCompareExchange64(p_Blink, (signed __int64)KeyHandle, 0LL) )
      ZwClose(KeyHandle);
    *a2 = *p_Blink;
    return 0;
  }
  return result;
}
