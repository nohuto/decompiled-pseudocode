/*
 * XREFs of NtSetInformationDebugObject @ 0x14078A7E0
 * Callers:
 *     DifNtSetInformationDebugObjectWrapper @ 0x14068B780 (DifNtSetInformationDebugObjectWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtSetInformationDebugObject(HANDLE Handle, int a2, int *a3, unsigned int a4, unsigned int *a5)
{
  KPROCESSOR_MODE PreviousMode; // r15
  unsigned int *v10; // rbx
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  int v13; // esi
  char *v14; // rdi
  unsigned int v15; // edx
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForRead(a3, a4, 4u);
    v10 = a5;
    if ( !a5 )
      goto LABEL_7;
    ULongFromUser = RtlReadULongFromUser(a5);
    RtlWriteULongToUser(a5, ULongFromUser);
  }
  else
  {
    v10 = a5;
  }
  if ( v10 )
    *v10 = 0;
LABEL_7:
  if ( a2 != 1 )
    return -1073741811;
  if ( a4 == 4 )
  {
    v13 = *a3;
    if ( (v13 & 0xFFFFFFFE) != 0 )
    {
      return -1073741811;
    }
    else
    {
      Object = 0LL;
      result = ObReferenceObjectByHandle(Handle, 4u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
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
