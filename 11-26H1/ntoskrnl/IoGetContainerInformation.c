/*
 * XREFs of IoGetContainerInformation @ 0x1407971E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionObjectById @ 0x140215CF4 (PsGetSessionObjectById.c)
 *     PsGetCurrentProcessSessionId @ 0x140437260 (PsGetCurrentProcessSessionId.c)
 *     PsGetIoSessionState @ 0x14077BE00 (PsGetIoSessionState.c)
 */

NTSTATUS __stdcall IoGetContainerInformation(
        IO_CONTAINER_INFORMATION_CLASS InformationClass,
        PVOID ContainerObject,
        PVOID Buffer,
        ULONG BufferLength)
{
  PVOID SessionObjectById; // rax
  int IoSessionState; // eax
  int v8; // ecx
  bool v9; // zf
  int v10; // [rsp+30h] [rbp+8h] BYREF

  SessionObjectById = ContainerObject;
  if ( InformationClass )
    return -1073741585;
  if ( BufferLength < 0xC )
    return -1073741582;
  if ( !ContainerObject )
  {
    PsGetCurrentProcessSessionId();
    SessionObjectById = PsGetSessionObjectById();
    if ( !SessionObjectById )
      return -1073741584;
  }
  v10 = 0;
  IoSessionState = PsGetIoSessionState((__int64)SessionObjectById, &v10);
  v8 = v10;
  *((_DWORD *)Buffer + 1) = IoSessionState;
  v9 = v8 == MEMORY[0xFFFFF780000002D8];
  *(_DWORD *)Buffer = v8;
  *((_BYTE *)Buffer + 8) = v9;
  return 0;
}
