/*
 * XREFs of PiDmRemoveCacheReferenceForObject @ 0x1409D8EB0
 * Callers:
 *     PiDmListInitEnumCallback @ 0x1407A75B0 (PiDmListInitEnumCallback.c)
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140B61D78 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1409A6000 (PiDmObjectRelease.c)
 *     PiDmObjectManagerReleaseLock @ 0x1409D90A4 (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1409D90D0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409D92BC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmLookupObject @ 0x1409D92F0 (PiDmLookupObject.c)
 */

__int64 __fastcall PiDmRemoveCacheReferenceForObject(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // edi
  RTL_AVL_TABLE *ObjectManagerForObjectType; // rsi
  unsigned int *v6; // rax
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v4 = 0;
  ObjectManagerForObjectType = (RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(a1);
  PiDmObjectManagerAcquireExclusiveLock(ObjectManagerForObjectType);
  v6 = (unsigned int *)PiDmLookupObject(ObjectManagerForObjectType, a2);
  Buffer = v6;
  if ( v6 )
  {
    --v6[3];
    if ( !Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl(ObjectManagerForObjectType + 1, &Buffer);
      PiDmObjectRelease(Buffer);
    }
  }
  else
  {
    v4 = -1073741772;
  }
  PiDmObjectManagerReleaseLock(ObjectManagerForObjectType);
  return v4;
}
