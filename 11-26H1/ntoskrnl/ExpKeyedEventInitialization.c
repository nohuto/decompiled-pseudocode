/*
 * XREFs of ExpKeyedEventInitialization @ 0x140CED750
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKeyedEvent @ 0x1407296A0 (ZwCreateKeyedEvent.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     RtlAddMandatoryAce @ 0x1409027C0 (RtlAddMandatoryAce.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A93E90 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

int ExpKeyedEventInitialization()
{
  int result; // eax
  ULONG v1; // edi
  ACL *Pool2; // rax
  ACL *v3; // rbx
  NTSTATUS Acl; // edi
  ACL *v5; // rcx
  ULONG v6; // esi
  ACL *v7; // rax
  ACL *v8; // rdi
  NTSTATUS v9; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v13; // [rsp+90h] [rbp-70h]
  __int16 v14; // [rsp+A0h] [rbp-60h] BYREF
  char v15; // [rsp+A2h] [rbp-5Eh]
  int v16; // [rsp+A8h] [rbp-58h]
  int v17; // [rsp+ACh] [rbp-54h]
  int v18; // [rsp+B0h] [rbp-50h]
  int v19; // [rsp+B4h] [rbp-4Ch]
  int v20; // [rsp+B8h] [rbp-48h]
  int v21; // [rsp+BCh] [rbp-44h]
  __int64 v22; // [rsp+C4h] [rbp-3Ch]
  int v23; // [rsp+CCh] [rbp-34h]
  HANDLE KeyedEventHandle; // [rsp+150h] [rbp+50h] BYREF
  PVOID Object; // [rsp+158h] [rbp+58h] BYREF

  DestinationString = 0LL;
  memset_0(&v14, 0, 0x78uLL);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v13 = 0LL;
  KeyedEventHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"KeyedEvent");
  v15 |= 4u;
  v14 = 120;
  v21 = 983043;
  v20 = 983043;
  v16 = 0;
  v22 = 1LL;
  v17 = 131073;
  v18 = 131074;
  v19 = 0x20000;
  v23 = 0;
  result = ObCreateObjectType(&DestinationString, &v14, 0LL, (__int64)&ExpKeyedEventObjectType);
  if ( result >= 0 )
  {
    result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( result >= 0 )
    {
      v1 = 4
         * (*(unsigned __int8 *)(*(_QWORD *)((char *)&RtlpBootStatHandleLock.116 + 4) + 1LL)
          + *((unsigned __int8 *)SeAliasAdminsSid + 1)
          + *(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL))
         + 68;
      Pool2 = (ACL *)ExAllocatePool2(256LL, v1, 0x6C636144u);
      v3 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      Acl = RtlCreateAcl(Pool2, v1, 2u);
      v5 = v3;
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0x20003u, *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
      v5 = v3;
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SeAliasAdminsSid);
      v5 = v3;
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
      if ( Acl < 0 || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0), Acl < 0) )
      {
LABEL_10:
        v5 = v3;
LABEL_6:
        ExFreePoolWithTag(v5, 0);
        return Acl;
      }
      v6 = 4 * *(unsigned __int8 *)(*(_QWORD *)&SepRmCapTableLock.SchedulerAssistYieldCounter + 1LL) + 28;
      v7 = (ACL *)ExAllocatePool2(256LL, v6, 0x6C636144u);
      v8 = v7;
      if ( !v7 )
      {
        Acl = -1073741670;
        goto LABEL_10;
      }
      v9 = RtlCreateAcl(v7, v6, 2u);
      if ( v9 < 0
        || (v9 = RtlAddMandatoryAce(v8, 2u, 0, *(PSID *)&SepRmCapTableLock.SchedulerAssistYieldCounter, 0x11u, 1u),
            v9 < 0)
        || (v9 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0), v9 < 0) )
      {
        ExFreePoolWithTag(v3, 0);
        ExFreePoolWithTag(v8, 0);
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\CritSecOutOfMemoryEvent");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
        ObjectAttributes.Attributes = 16;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v9 = ZwCreateKeyedEvent(&KeyedEventHandle, 0xF0003u, &ObjectAttributes, 0);
        ExFreePoolWithTag(v3, 0);
        ExFreePoolWithTag(v8, 0);
        if ( v9 >= 0 )
        {
          Object = 0LL;
          v9 = ObReferenceObjectByHandle(KeyedEventHandle, 0xF0003u, ExpKeyedEventObjectType, 0, &Object, 0LL);
          WheapConfigTableLock.WaitBlock[1].Thread = (struct _KTHREAD *)Object;
          ZwClose(KeyedEventHandle);
        }
      }
      return v9;
    }
  }
  return result;
}
