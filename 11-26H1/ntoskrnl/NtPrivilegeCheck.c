/*
 * XREFs of NtPrivilegeCheck @ 0x1409E1EF0
 * Callers:
 *     DifNtPrivilegeCheckWrapper @ 0x140684140 (DifNtPrivilegeCheckWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1409E2108 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1409E21E8 (SeReleaseLuidAndAttributesArray.c)
 */

NTSTATUS __stdcall NtPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  int v6; // ebx
  PVOID v7; // r14
  unsigned int ULongFromUser; // r12d
  ULONG Control; // r13d
  int v10; // eax
  void *v11; // rbx
  char v12; // r15
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-78h]
  int v15; // [rsp+28h] [rbp-70h]
  int v16; // [rsp+30h] [rbp-68h]
  size_t Size; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  void *Src; // [rsp+68h] [rbp-30h] BYREF

  Src = 0LL;
  LODWORD(Size) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  v6 = result;
  if ( result < 0 )
    return result;
  v7 = Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    v6 = -1073741659;
    goto LABEL_21;
  }
  ProbeForWrite(RequiredPrivileges, 0x14uLL, 4u);
  if ( PreviousMode )
    ULongFromUser = RtlReadULongFromUser(&RequiredPrivileges->PrivilegeCount);
  else
    ULongFromUser = RequiredPrivileges->PrivilegeCount;
  if ( PreviousMode )
    LOBYTE(Control) = RtlReadULongFromUser(&RequiredPrivileges->Control);
  else
    Control = RequiredPrivileges->Control;
  if ( v6 < 0 )
    goto LABEL_21;
  Object = RequiredPrivileges->Privilege;
  v10 = SeCaptureLuidAndAttributesArray(RequiredPrivileges->Privilege, v14, v15, v16, (__int64)&Src, (__int64)&Size);
  if ( v10 < 0 )
  {
    v6 = v10;
LABEL_21:
    ObfDereferenceObject(v7);
    return v6;
  }
  v11 = Src;
  v12 = SepPrivilegeCheck((__int64)v7, (__int64)Src, ULongFromUser, Control, PreviousMode);
  ObfDereferenceObject(v7);
  if ( PreviousMode )
    RtlCopyToUser(Object, v11, (unsigned int)Size);
  else
    RtlCopyVolatileMemory(Object, v11, (unsigned int)Size);
  if ( PreviousMode )
    RtlWriteUCharToUser(Result, v12);
  else
    *Result = v12;
  LOBYTE(v13) = PreviousMode;
  SeReleaseLuidAndAttributesArray(v11, v13);
  return 0;
}
