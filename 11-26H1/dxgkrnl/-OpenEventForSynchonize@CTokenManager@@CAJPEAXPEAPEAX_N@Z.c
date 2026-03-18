/*
 * XREFs of ?OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX_N@Z @ 0x14006BF50
 * Callers:
 *     ?OpenSectionAndEvents@CTokenManager@@UEAAJPEAPEAXPEA_K00@Z @ 0x140060310 (-OpenSectionAndEvents@CTokenManager@@UEAAJPEAPEAXPEA_K00@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenManager::OpenEventForSynchonize(void *a1, void **a2, unsigned __int8 a3)
{
  int v3; // esi
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  PVOID v7; // rbp
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v3 = a3;
  *a2 = (void *)-1LL;
  v5 = -1073741811;
  if ( a1 )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v7 = Object;
    v5 = v6;
    if ( v6 >= 0 )
    {
      v5 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 2 * v3 + 0x100000, (POBJECT_TYPE)ExEventObjectType, 0, a2);
      ObfDereferenceObject(v7);
    }
  }
  return v5;
}
