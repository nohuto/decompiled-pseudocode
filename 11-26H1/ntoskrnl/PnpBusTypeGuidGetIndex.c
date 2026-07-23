/*
 * XREFs of PnpBusTypeGuidGetIndex @ 0x1409DBC34
 * Callers:
 *     PnpQueryBusInformation @ 0x1409DBB28 (PnpQueryBusInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpBusTypeGuidGetIndex(__int128 *Source1)
{
  unsigned int v2; // ebx
  char *v3; // rdx
  void *Pool2; // rax
  void *v6; // rdi
  PVOID v7; // rsi
  __int128 v8; // xmm0
  __int64 v9; // r8

  ExAcquireFastMutex(&PnpBusTypeGuidLock);
  v2 = 0;
  if ( !PnpBusTypeGuidCount )
    goto LABEL_7;
  do
  {
    v3 = (char *)PnpBusTypeGuidArray + 16 * v2;
    if ( Source1 == (__int128 *)v3 )
      break;
    if ( RtlCompareMemory(Source1, v3, 0x10uLL) == 16 )
      break;
    ++v2;
  }
  while ( v2 < PnpBusTypeGuidCount );
  if ( v2 == PnpBusTypeGuidCount )
  {
LABEL_7:
    if ( v2 == PnpBusTypeGuidCountMax )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v6 = Pool2;
      if ( !Pool2 )
      {
        LOWORD(v2) = -1;
        goto LABEL_6;
      }
      v7 = PnpBusTypeGuidArray;
      memmove(Pool2, PnpBusTypeGuidArray, 16LL * (unsigned int)PnpBusTypeGuidCount);
      ++PnpBusTypeGuidCountMax;
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      PnpBusTypeGuidArray = v6;
    }
    if ( v2 != -1 )
    {
      v8 = *Source1;
      v9 = 2LL * (unsigned int)PnpBusTypeGuidCount++;
      *(_OWORD *)((char *)PnpBusTypeGuidArray + 8 * v9) = v8;
    }
  }
LABEL_6:
  KeReleaseGuardedMutex(&PnpBusTypeGuidLock);
  return (unsigned __int16)v2;
}
