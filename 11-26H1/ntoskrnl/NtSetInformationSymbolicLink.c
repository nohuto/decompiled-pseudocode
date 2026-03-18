/*
 * XREFs of NtSetInformationSymbolicLink @ 0x1407C3480
 * Callers:
 *     DifNtSetInformationSymbolicLinkWrapper @ 0x14068C5E0 (DifNtSetInformationSymbolicLinkWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtSetInformationSymbolicLink(void *a1, int a2, unsigned int *a3, int a4)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v8; // ebx
  int v9; // esi
  _DWORD *v10; // rcx
  unsigned int v11; // ecx
  _DWORD *v12; // rdx
  int v13; // eax
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  unsigned int ULongFromUser; // [rsp+40h] [rbp-18h]

  ULongFromUser = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v8 >= 0 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741821;
LABEL_26:
        ObfDereferenceObject(Object);
        return (unsigned int)v8;
      }
      if ( a4 == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
        {
          if ( PreviousMode )
          {
            if ( ((unsigned __int8)a3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            ULongFromUser = RtlReadULongFromUser(a3);
          }
          else
          {
            ULongFromUser = *a3;
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
    else if ( a4 == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
      {
        if ( PreviousMode )
        {
          if ( ((unsigned __int8)a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v11 = RtlReadULongFromUser(a3);
        }
        else
        {
          v11 = *a3;
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
  return (unsigned int)v8;
}
