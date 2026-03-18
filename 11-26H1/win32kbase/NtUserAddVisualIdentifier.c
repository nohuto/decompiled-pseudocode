/*
 * XREFs of NtUserAddVisualIdentifier @ 0x1401E2110
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1400A4600 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1402481D4 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtUserAddVisualIdentifier(void *a1, __int64 a2)
{
  int v3; // ebx
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  ULONG v7; // ecx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  struct _LUID ULong64FromUser; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  ULong64FromUser = (struct _LUID)RtlReadULong64FromUser(a2);
  v3 = 1;
  v4 = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
  if ( v4 < 0 )
    goto LABEL_6;
  CurrentProcess = PsGetCurrentProcess(v5);
  if ( *((_QWORD *)Object + 7) != CurrentProcess )
  {
    v3 = 0;
    v7 = 5;
LABEL_4:
    UserSetLastError(v7);
    goto LABEL_7;
  }
  v4 = InputObjectMap::AddMapping(&ULong64FromUser, (const struct CompositionInputObject *)Object);
  if ( v4 < 0 )
  {
LABEL_6:
    v3 = 0;
    v7 = RtlNtStatusToDosError(v4);
    goto LABEL_4;
  }
LABEL_7:
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
