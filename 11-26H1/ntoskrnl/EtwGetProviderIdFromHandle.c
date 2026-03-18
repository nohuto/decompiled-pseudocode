/*
 * XREFs of EtwGetProviderIdFromHandle @ 0x1404EA92C
 * Callers:
 *     WdiDispatchControl @ 0x140AD91E8 (WdiDispatchControl.c)
 *     EtwWriteEndScenario @ 0x140ADB480 (EtwWriteEndScenario.c)
 *     EtwWriteStartScenario @ 0x140B456A0 (EtwWriteStartScenario.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     EtwpReferenceGuidEntry @ 0x140935A40 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140936B20 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwGetProviderIdFromHandle(ULONG_PTR *a1, char a2, _OWORD *a3)
{
  NTSTATUS v3; // edi
  PVOID v6; // rcx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 )
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v6 = Object;
      *a3 = *(_OWORD *)(*((_QWORD *)Object + 4) + 40LL);
      ObfDereferenceObjectWithTag(v6, 0x746C6644u);
    }
    return (unsigned int)v3;
  }
  if ( a1 && (unsigned __int8)EtwpReferenceGuidEntry(a1[4]) )
  {
    *a3 = *(_OWORD *)(a1[4] + 40);
    EtwpUnreferenceGuidEntry(a1[4]);
    return (unsigned int)v3;
  }
  return 3221225480LL;
}
