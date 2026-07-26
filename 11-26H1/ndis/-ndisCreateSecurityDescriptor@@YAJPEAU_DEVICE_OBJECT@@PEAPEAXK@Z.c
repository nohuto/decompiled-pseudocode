/*
 * XREFs of ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1400698E0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x14018FA4C (-ndisFdoInitializeSubsystem@@YAJXZ.c)
 * Callees:
 *     ?ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z @ 0x140069AD0 (-ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

NTSTATUS __fastcall ndisCreateSecurityDescriptor(struct _DEVICE_OBJECT *a1, void **a2, unsigned int a3)
{
  NTSTATUS result; // eax
  int v6; // eax
  ACL *v7; // rdi
  NTSTATUS v8; // ebx
  ULONG v9; // ebx
  void *Pool2; // rax
  void *v11; // rbp
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN MemoryAllocated[8]; // [rsp+30h] [rbp-68h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  DWORD SecurityInformation; // [rsp+40h] [rbp-58h] BYREF
  PACL Dacl; // [rsp+48h] [rbp-50h] BYREF
  _BYTE ModificationDescriptor[40]; // [rsp+50h] [rbp-48h] BYREF

  SecurityInformation = 4;
  *a2 = 0LL;
  Dacl = 0LL;
  MemoryAllocated[0] = 0;
  SecurityDescriptor = 0LL;
  result = ObGetObjectSecurity(a1, &SecurityDescriptor, MemoryAllocated);
  if ( result >= 0 && SecurityDescriptor )
  {
    v6 = ndisBuildDeviceAcl(&Dacl, a3);
    v7 = Dacl;
    v8 = v6;
    if ( v6 >= 0 )
    {
      RtlCreateSecurityDescriptor(ModificationDescriptor, 1u);
      RtlSetDaclSecurityDescriptor(ModificationDescriptor, 1u, v7, 0);
      v9 = RtlLengthSecurityDescriptor(SecurityDescriptor);
      Pool2 = (void *)ExAllocatePool2(66LL, v9, 1702052942LL);
      v11 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, SecurityDescriptor, v9);
        *a2 = v11;
        GenericMapping = IoGetFileObjectGenericMapping();
        v8 = SeSetSecurityDescriptorInfo(
               0LL,
               &SecurityInformation,
               ModificationDescriptor,
               a2,
               NonPagedPoolNx,
               GenericMapping);
        if ( v8 < 0 )
        {
          ExFreePoolWithTag(*a2, 0);
          *a2 = 0LL;
        }
        else
        {
          if ( *a2 != v11 )
            ExFreePoolWithTag(v11, 0);
          v8 = 0;
        }
      }
      else
      {
        v8 = -1073741670;
      }
    }
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    return v8;
  }
  return result;
}
