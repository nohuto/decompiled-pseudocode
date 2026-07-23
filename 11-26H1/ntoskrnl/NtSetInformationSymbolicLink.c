/*
 * XREFs of NtSetInformationSymbolicLink @ 0x1407C64E0
 * Callers:
 *     DifNtSetInformationSymbolicLinkWrapper @ 0x1406901C0 (DifNtSetInformationSymbolicLinkWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v8; // ebx
  __int32 v9; // esi
  _DWORD *v10; // rcx
  int v11; // ecx
  _DWORD *v12; // rdx
  int v13; // eax
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  int ULongFromUser; // [rsp+40h] [rbp-18h]

  ULongFromUser = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(LinkHandle, 2u, (POBJECT_TYPE)ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v8 >= 0 )
  {
    v9 = SymbolicLinkInformationClass - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741821;
LABEL_26:
        ObfDereferenceObject(Object);
        return v8;
      }
      if ( SymbolicLinkInformationLength == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
        {
          if ( PreviousMode )
          {
            if ( ((unsigned __int8)SymbolicLinkInformation & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            ULongFromUser = RtlReadULongFromUser((unsigned int *)SymbolicLinkInformation);
          }
          else
          {
            ULongFromUser = *(_DWORD *)SymbolicLinkInformation;
          }
          v10 = Object;
          *((_DWORD *)Object + 7) |= 8u;
          v10[8] = ULongFromUser;
          v8 = 0;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
    }
    else if ( SymbolicLinkInformationLength == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
      {
        if ( PreviousMode )
        {
          if ( ((unsigned __int8)SymbolicLinkInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v11 = RtlReadULongFromUser((unsigned int *)SymbolicLinkInformation);
        }
        else
        {
          v11 = *(_DWORD *)SymbolicLinkInformation;
        }
        v12 = Object;
        v13 = *((_DWORD *)Object + 7) | 1;
        *((_DWORD *)Object + 7) = v13;
        if ( v11 )
          v12[7] = v13 | 4;
        goto LABEL_26;
      }
LABEL_25:
      v8 = -1073741727;
      goto LABEL_26;
    }
    v8 = -1073741820;
    goto LABEL_26;
  }
  return v8;
}
