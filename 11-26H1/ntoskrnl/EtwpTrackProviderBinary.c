/*
 * XREFs of EtwpTrackProviderBinary @ 0x14082EB48
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140523420 (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpTrackProviderBinaryKm @ 0x14082EBE8 (EtwpTrackProviderBinaryKm.c)
 *     EtwpTrackProviderBinaryOld @ 0x14082EEAC (EtwpTrackProviderBinaryOld.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
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
