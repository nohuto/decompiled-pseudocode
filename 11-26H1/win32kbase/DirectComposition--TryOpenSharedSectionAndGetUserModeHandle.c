/*
 * XREFs of DirectComposition::TryOpenSharedSectionAndGetUserModeHandle @ 0x14023F464
 * Callers:
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x14023F190 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 * Callees:
 *     OpenVmSharedMemorySection @ 0x14024B78C (OpenVmSharedMemorySection.c)
 */

void *__fastcall DirectComposition::TryOpenSharedSectionAndGetUserModeHandle(__int64 a1, __int64 a2, PVOID *a3)
{
  bool v3; // zf
  NTSTATUS v5; // edi
  void *v7; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a3 == 0LL;
  v7 = 0LL;
  if ( !v3 )
    goto LABEL_6;
  Handle = 0LL;
  if ( (int)OpenVmSharedMemorySection(&Handle) >= 0 )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(Handle, 0xC0000000, MmSectionObjectType, 0, &Object, 0LL);
    if ( v5 >= 0 )
      *a3 = Object;
    ObCloseHandle(Handle, 0);
    if ( v5 >= 0 )
    {
LABEL_6:
      if ( ObOpenObjectByPointer(*a3, 0xC0000000, 0LL, 6u, MmSectionObjectType, 1, &v7) < 0 )
        ObfDereferenceObject(*a3);
    }
  }
  return v7;
}
