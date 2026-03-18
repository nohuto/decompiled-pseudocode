/*
 * XREFs of AcpipAllocatePciBusState @ 0x140028CDC
 * Callers:
 *     IsPciBusAsync @ 0x140028690 (IsPciBusAsync.c)
 * Callees:
 *     <none>
 */

char *AcpipAllocatePciBusState()
{
  char *Pool2; // rbx
  KIRQL v2; // al
  __int64 i; // rdx

  Pool2 = (char *)ExAllocatePool2(64LL, 136LL, 1181770561LL);
  if ( !Pool2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
    for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
    {
      if ( !gPreAllocPciPool[144 * i + 136] )
      {
        gPreAllocPciPool[144 * i + 136] = 1;
        Pool2 = &gPreAllocPciPool[144 * i];
        break;
      }
    }
    KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v2);
  }
  return Pool2;
}
