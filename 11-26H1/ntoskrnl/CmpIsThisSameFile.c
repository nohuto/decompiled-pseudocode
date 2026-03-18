/*
 * XREFs of CmpIsThisSameFile @ 0x140A84244
 * Callers:
 *     CmpIsHiveAlreadyLoaded @ 0x14085905C (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

bool __fastcall CmpIsThisSameFile(__int64 a1, void *a2)
{
  bool v3; // bl
  struct _OBJECT_TYPE *v4; // r8
  __int64 v5; // r8
  __int64 v6; // rdx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v4 = **(struct _OBJECT_TYPE ***)&CmpCallbackListLock.ApcStateFill[40];
  Object = 0LL;
  if ( ObReferenceObjectByHandle(a2, 0, v4, 0, &Object, 0LL) < 0 )
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
