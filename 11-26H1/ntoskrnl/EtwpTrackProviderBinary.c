/*
 * XREFs of EtwpTrackProviderBinary @ 0x140828908
 * Callers:
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140520D7C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpTrackProviderBinaryKm @ 0x1408289A8 (EtwpTrackProviderBinaryKm.c)
 *     EtwpTrackProviderBinaryOld @ 0x140828C6C (EtwpTrackProviderBinaryOld.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwpTrackProviderBinary(__int64 a1, void **a2, char a3)
{
  void *v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  PVOID v11; // rbx
  unsigned int v12; // edi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  if ( !(unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() )
    return EtwpTrackProviderBinaryOld(a1, a2);
  v7 = *a2;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(v7, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v11 = Object;
  v12 = v8;
  if ( v8 >= 0 )
  {
    LOBYTE(v10) = a3;
    v12 = EtwpTrackProviderBinaryKm(Object, v9, v10);
  }
  if ( v11 )
    ObfDereferenceObject(v11);
  return v12;
}
