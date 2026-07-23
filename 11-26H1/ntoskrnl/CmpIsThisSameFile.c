/*
 * XREFs of CmpIsThisSameFile @ 0x140A89598
 * Callers:
 *     CmpIsHiveAlreadyLoaded @ 0x14085F3EC (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

bool __fastcall CmpIsThisSameFile(__int64 a1, void *a2)
{
  bool v3; // bl
  struct _OBJECT_TYPE *Flink; // r8
  __int64 v5; // r8
  __int64 v6; // rdx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  Flink = (struct _OBJECT_TYPE *)CmpContextListLock.ApcState.ApcListHead[1].Blink->Flink;
  Object = 0LL;
  if ( ObReferenceObjectByHandle(a2, 0, Flink, 0, &Object, 0LL) < 0 )
    return 0;
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    v6 = *((_QWORD *)Object + 5);
    if ( v6 )
      v3 = v5 == v6;
  }
  ObfDereferenceObject(Object);
  return v3;
}
