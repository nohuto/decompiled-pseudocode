/*
 * XREFs of NtUserAddVisualIdentifier @ 0x1401BBF70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x140068B20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1402134C8 (-IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z.c)
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x14023DA94 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 */

__int64 __fastcall NtUserAddVisualIdentifier(void *a1, void *a2)
{
  int v3; // ebx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  ULONG v7; // ecx
  __int64 CurrentProcess; // rax
  struct _LUID v10; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  struct _LUID v12; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v12 = 0LL;
  RtlCopyFromUser(&v12, a2, 8uLL);
  v10 = v12;
  v3 = 1;
  v4 = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
  if ( v4 < 0 )
    goto LABEL_7;
  v12 = (struct _LUID)*((_QWORD *)Object + 2);
  if ( CDesktopInputSink::IsEqualByLuid(&v12)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5), *((_QWORD *)Object + 7) != CurrentProcess) )
  {
    v3 = 0;
    v7 = 5;
LABEL_4:
    UserSetLastError(v7);
    goto LABEL_8;
  }
  v4 = InputObjectMap::AddMapping(&v10, (const struct CompositionInputObject *)Object);
  if ( v4 < 0 )
  {
LABEL_7:
    v3 = 0;
    v7 = RtlNtStatusToDosError(v4);
    goto LABEL_4;
  }
LABEL_8:
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
