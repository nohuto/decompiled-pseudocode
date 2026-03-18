/*
 * XREFs of VmMapSectionExecuteNoAcg @ 0x14081BBB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     MmMapViewOfSectionEx @ 0x1404BCA5C (MmMapViewOfSectionEx.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall VmMapSectionExecuteNoAcg(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // edi
  int v9; // [rsp+58h] [rbp-30h]
  PVOID Object; // [rsp+70h] [rbp-18h] BYREF

  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 8u, MmSectionObjectType, 0, &Object, 0LL);
  if ( v7 >= 0 )
    v7 = MmMapViewOfSectionEx(
           (ULONG_PTR)Object,
           (ULONG_PTR)KeGetCurrentThread()->ApcState.Process,
           a2,
           a3,
           a4,
           0,
           16,
           0LL,
           0,
           0,
           0LL,
           v9,
           0x20000000);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v7;
}
