/*
 * XREFs of KsepRegistryCreateKey @ 0x1407C1D58
 * Callers:
 *     KseSetDeviceFlags @ 0x1407BF720 (KseSetDeviceFlags.c)
 * Callees:
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     KsepStringDuplicate @ 0x1409D73AC (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x1409D7848 (KsepStringFree.c)
 */

__int64 __fastcall KsepRegistryCreateKey(__int64 a1, __int64 a2, HANDLE *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  NTSTATUS v9; // ebx
  _QWORD v11[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE v15; // [rsp+C8h] [rbp+6Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v11[0] = 0LL;
  v11[1] = 0LL;
  v12[0] = 0LL;
  v12[1] = 0LL;
  KeyHandle = 0LL;
  v15 = 0LL;
  if ( !a1 )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v6) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v6) = 262645;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("EnginePath != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1F5u, 0LL);
  }
  if ( !a2 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v7) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v7) = 262646;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("SearchKey != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1F6u, 0LL);
  }
  if ( !a3 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v8) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v8) = 262647;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("Handle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1F7u, 0LL);
  }
  KsepStringDuplicate(v11, a1);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v9 >= 0 )
  {
    v9 = KsepStringDuplicate(v12, a2);
    if ( v9 >= 0 )
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ZwCreateKey(&v15, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( v9 >= 0 )
      {
        *a3 = v15;
        _InterlockedIncrement((volatile signed __int32 *)&AlpcpMessageLogLock.WaitBlockList);
      }
    }
  }
  KsepStringFree(v11);
  KsepStringFree(v12);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
