/*
 * XREFs of KsepRegistryQuerySZ @ 0x1407BF28C
 * Callers:
 *     KsepRegistryQueryMULTISZ @ 0x1407BF25C (KsepRegistryQueryMULTISZ.c)
 *     KsepRegistryQueryDriverShims @ 0x1409E4314 (KsepRegistryQueryDriverShims.c)
 *     KsepMatchInitBiosInfo @ 0x140CCD5F0 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     KsepPoolAllocatePaged @ 0x1404DE51C (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404E2A70 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x140619AB0 (RtlAssert.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall KsepRegistryQuerySZ(
        HANDLE KeyHandle,
        PCWSTR SourceString,
        int a3,
        void *a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rax
  NTSTATUS v14; // eax
  unsigned int v15; // ebx
  char StackBase; // al
  __int64 v17; // rcx
  _DWORD *Paged; // rax
  _DWORD *v20; // rbx
  unsigned int v21; // edi
  size_t v22; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                              1u)
         + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v10 + 4] = -1073740768;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v10) = 262991;
    if ( ((__int64)stru_140E66B30.StackBase & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x34Fu, 0LL);
  }
  if ( !a4 )
  {
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                              1u)
         + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v11 + 4] = -1073740768;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v11) = 262992;
    if ( ((__int64)stru_140E66B30.StackBase & 4) != 0 )
      RtlAssert("ValueBuffer != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x350u, 0LL);
  }
  v12 = a6;
  if ( !a6 )
  {
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                              1u)
         + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v13 + 4] = -1073740768;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v13) = 262993;
    if ( ((__int64)stru_140E66B30.StackBase & 4) != 0 )
      RtlAssert("ActualLength != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x351u, 0LL);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v14 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v15 = v14;
  if ( v14 == -1073741789 )
  {
    Paged = (_DWORD *)KsepPoolAllocatePaged();
    v20 = Paged;
    if ( Paged )
    {
      v21 = ZwQueryValueKey(
              KeyHandle,
              &DestinationString,
              KeyValuePartialInformation,
              Paged,
              ResultLength,
              &ResultLength);
      if ( !v21 )
      {
        v22 = (unsigned int)v20[2];
        if ( v22 <= a5 )
        {
          if ( v20[1] == a3 )
          {
            memmove(a4, v20 + 3, v22);
            *v12 = (unsigned int)v20[2];
          }
          else
          {
            v21 = -1073741788;
          }
        }
        else
        {
          v21 = -1073741789;
        }
      }
      KsepPoolFreePaged(v20);
      return v21;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    if ( v14 >= 0 )
    {
      StackBase = (char)stru_140E66B30.StackBase;
      v17 = ((unsigned __int8)_InterlockedExchangeAdd(
                                (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                                1u)
           + 1) & 0x3F;
      *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v17 + 4] = -1073740768;
      *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v17) = 263011;
      if ( (StackBase & 4) != 0 )
        RtlAssert("!NT_SUCCESS(Status)", "minkernel\\ntos\\kshim\\kseregistry.c", 0x363u, 0LL);
    }
    return v15;
  }
}
