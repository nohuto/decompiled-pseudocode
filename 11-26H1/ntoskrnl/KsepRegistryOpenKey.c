/*
 * XREFs of KsepRegistryOpenKey @ 0x1409D7988
 * Callers:
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407BFCB8 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepMatchInitBiosInfo @ 0x140CD3750 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140D0E4EC (KsepEngineReadFlags.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     KsepStringDuplicate @ 0x1409D73AC (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x1409D7A8C (KsepStringConcatenate.c)
 */

__int64 __fastcall KsepRegistryOpenKey(_WORD *a1, __int64 a2, HANDLE *a3)
{
  int v6; // eax
  NTSTATUS v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  void *v12; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !a1 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v9) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v9) = 262564;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("EnginePath != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1A4u, 0LL);
  }
  if ( !a3 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                              1u)
         + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v10) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v10) = 262565;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("Handle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1A5u, 0LL);
  }
  if ( a2 )
    v6 = KsepStringConcatenate(&v11, a1, a2, 1LL);
  else
    v6 = KsepStringDuplicate((__int64)&v11, a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      *a3 = KeyHandle;
      _InterlockedIncrement((volatile signed __int32 *)&AlpcpMessageLogLock.WaitBlockList);
    }
  }
  if ( v12 )
    KsepPoolFreePaged(v12);
  return (unsigned int)v7;
}
