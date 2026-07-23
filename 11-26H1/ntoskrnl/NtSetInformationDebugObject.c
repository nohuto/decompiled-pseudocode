/*
 * XREFs of NtSetInformationDebugObject @ 0x14078D310
 * Callers:
 *     DifNtSetInformationDebugObjectWrapper @ 0x14068F360 (DifNtSetInformationDebugObjectWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetInformationDebugObject(
        HANDLE DebugObjectHandle,
        DEBUGOBJECTINFOCLASS DebugObjectInformationClass,
        PVOID DebugInformation,
        ULONG DebugInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  PULONG v10; // rbx
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  int v13; // esi
  char *v14; // rdi
  unsigned int v15; // edx
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForRead(DebugInformation, DebugInformationLength, 4u);
    v10 = ReturnLength;
    if ( !ReturnLength )
      goto LABEL_7;
    ULongFromUser = RtlReadULongFromUser(ReturnLength);
    RtlWriteULongToUser(ReturnLength, ULongFromUser);
  }
  else
  {
    v10 = ReturnLength;
  }
  if ( v10 )
    *v10 = 0;
LABEL_7:
  if ( DebugObjectInformationClass != DebugObjectKillProcessOnExitInformation )
    return -1073741811;
  if ( DebugInformationLength == 4 )
  {
    v13 = *(_DWORD *)DebugInformation;
    if ( (v13 & 0xFFFFFFFE) != 0 )
    {
      return -1073741811;
    }
    else
    {
      Object = 0LL;
      result = ObReferenceObjectByHandle(DebugObjectHandle, 4u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
      if ( result >= 0 )
      {
        v14 = (char *)Object;
        ExAcquireFastMutex((PKGUARDED_MUTEX)((char *)Object + 24));
        v15 = *((_DWORD *)v14 + 24) | 2;
        if ( (v13 & 1) == 0 )
          v15 = *((_DWORD *)v14 + 24) & 0xFFFFFFFD;
        *((_DWORD *)v14 + 24) = v15;
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v14 + 24));
        ObfDereferenceObject(v14);
        return 0;
      }
    }
  }
  else
  {
    if ( v10 )
      *v10 = 4;
    return -1073741820;
  }
  return result;
}
