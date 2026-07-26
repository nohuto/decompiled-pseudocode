/*
 * XREFs of ?ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z @ 0x14000AAD0
 * Callers:
 *     ndisLwmCreateIrpHandler @ 0x14000A790 (ndisLwmCreateIrpHandler.c)
 *     ndisDispatchRequest @ 0x14000C5E0 (ndisDispatchRequest.c)
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140059DF0 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCheckAccess(struct _IRP *a1, struct _IO_STACK_LOCATION *a2, void *a3)
{
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  struct _ACCESS_STATE *v7; // rbx
  bool v8; // zf
  KPROCESSOR_MODE AccessMode; // di
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN v11; // di
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+10h] BYREF
  ACCESS_MASK AccessMask; // [rsp+A8h] [rbp+20h] BYREF

  AccessMask = 0x10000000;
  AccessStatus = 0;
  Privileges = 0LL;
  GrantedAccess = 0;
  FileObjectGenericMapping = IoGetFileObjectGenericMapping();
  RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
  v7 = *(struct _ACCESS_STATE **)(a2->Parameters.WMI.ProviderId + 8);
  SeLockSubjectContext(&v7->SubjectSecurityContext);
  v8 = (a2->Flags & 1) == 0;
  AccessMode = 1;
  if ( v8 )
    AccessMode = a1->RequestorMode;
  GenericMapping = IoGetFileObjectGenericMapping();
  v11 = SeAccessCheck(
          a3,
          &v7->SubjectSecurityContext,
          1u,
          AccessMask,
          0,
          &Privileges,
          GenericMapping,
          AccessMode,
          &GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(v7, Privileges);
    SeFreePrivileges(Privileges);
  }
  if ( v11 )
  {
    v7->PreviouslyGrantedAccess |= GrantedAccess;
    v7->RemainingDesiredAccess &= ~(GrantedAccess | 0x2000000);
  }
  SeUnlockSubjectContext(&v7->SubjectSecurityContext);
  return v11;
}
