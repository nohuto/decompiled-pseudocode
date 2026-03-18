/*
 * XREFs of PiDqQueryAppendActionEntry @ 0x1409A8588
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14098EA84 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14098F6F0 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x1409A83F4 (PiDqQueryEnumObject.c)
 * Callees:
 *     RtlNumberGenericTableElementsAvl @ 0x14048DA40 (RtlNumberGenericTableElementsAvl.c)
 *     PiDqQueryFreeActiveData @ 0x140990044 (PiDqQueryFreeActiveData.c)
 *     PiDqGetPnpObjectType @ 0x14099CD00 (PiDqGetPnpObjectType.c)
 *     PiDmObjectManagerReleaseLock @ 0x1409D90A4 (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1409D90D0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1409D911C (PiDmObjectManagerAcquireSharedLock.c)
 */

char __fastcall PiDqQueryAppendActionEntry(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 **v4; // rcx
  unsigned int PnpObjectType; // eax
  RTL_AVL_TABLE *ObjectManagerForObjectType; // rdi
  ULONG v7; // ebx

  v2 = a1 + 192;
  v4 = *(__int64 ***)(a1 + 200);
  if ( *v4 != (__int64 *)v2 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = (__int64)v4;
  *v4 = a2;
  *(_QWORD *)(v2 + 8) = a2;
  if ( ++*(_DWORD *)(a1 + 208) > 0x3E8u )
  {
    PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
    ObjectManagerForObjectType = (RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(PnpObjectType);
    PiDmObjectManagerAcquireSharedLock(ObjectManagerForObjectType);
    v7 = RtlNumberGenericTableElementsAvl(ObjectManagerForObjectType + 1);
    PiDmObjectManagerReleaseLock(ObjectManagerForObjectType);
    LOBYTE(v2) = 2 * v7;
    if ( *(_DWORD *)(a1 + 208) > 2 * v7 )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      LOBYTE(v2) = PiDqQueryFreeActiveData(a1);
    }
  }
  return v2;
}
