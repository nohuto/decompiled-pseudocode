/*
 * XREFs of ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x140057A88
 * Callers:
 *     DCompositionCreateSynchronizationObject @ 0x140228680 (DCompositionCreateSynchronizationObject.c)
 *     NtDCompositionCreateBufferCollection @ 0x140228B60 (NtDCompositionCreateBufferCollection.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionObject::Create(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 (__fastcall *a7)(PVOID, __int64, char *),
        __int64 a8,
        void **Handle)
{
  int v10; // ebx
  NTSTATUS LocallyUniqueId; // eax
  PVOID v13; // rcx
  int v14; // eax
  PVOID Object[3]; // [rsp+50h] [rbp-18h] BYREF

  Object[0] = 0LL;
  if ( (unsigned int)(a5 - 1) <= 5 )
  {
    v10 = ObCreateObject(0LL, ExCompositionObjectType, a2, a4, 0LL, a6, 0, 0, Object);
    if ( v10 >= 0 )
    {
      *(_DWORD *)Object[0] = W32GetCurrentWin32kSessionId();
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object[0] + 2);
      v13 = Object[0];
      v10 = LocallyUniqueId;
      if ( LocallyUniqueId < 0 || (v14 = a7(Object[0], a8, (char *)Object[0] + 8), v13 = Object[0], v10 = v14, v14 < 0) )
        ObfDereferenceObject(v13);
      else
        return (unsigned int)ObInsertObject(Object[0], 0LL, a3, 0, 0LL, Handle);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
