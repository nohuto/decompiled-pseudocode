/*
 * XREFs of ExpKeyedEventInitialization @ 0x140CE7040
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateKeyedEvent @ 0x140724AD0 (ZwCreateKeyedEvent.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObCreateObjectType @ 0x14077B990 (ObCreateObjectType.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     RtlAddMandatoryAce @ 0x140926CB0 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A8F1C0 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  int KeyedEvent; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+44h] [rbp-BCh]
  __int64 v13; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+5Ch] [rbp-A4h]
  _OWORD *v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  _OWORD SecurityDescriptor[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h]
  __int16 v21; // [rsp+A0h] [rbp-60h] BYREF
  char v22; // [rsp+A2h] [rbp-5Eh]
  int v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+ACh] [rbp-54h]
  int v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B4h] [rbp-4Ch]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+BCh] [rbp-44h]
  __int64 v29; // [rsp+C4h] [rbp-3Ch]
  int v30; // [rsp+CCh] [rbp-34h]
  HANDLE Handle; // [rsp+150h] [rbp+50h] BYREF
  PVOID Object; // [rsp+158h] [rbp+58h] BYREF

  DestinationString = 0LL;
  memset_0(&v21, 0, 0x78uLL);
  v12 = 0;
  v16 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v20 = 0LL;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"KeyedEvent");
  v22 |= 4u;
  v21 = 120;
  v28 = 983043;
  v27 = 983043;
  v23 = 0;
  v29 = 1LL;
  v24 = 131073;
  v25 = 131074;
  v26 = 0x20000;
  v30 = 0;
  result = ObCreateObjectType(&DestinationString, &v21, 0LL, (__int64)&ExpKeyedEventObjectType);
  if ( result >= 0 )
  {
    result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( result >= 0 )
    {
      v1 = 4
         * (*(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL)
          + *((unsigned __int8 *)SeAliasAdminsSid + 1)
          + HIBYTE(RtlpBootStatHandleLock.StateSaveArea->ControlWord))
         + 68;
      Pool2 = (ACL *)ExAllocatePool2(256LL, v1, 0x6C636144u);
      v3 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      Acl = RtlCreateAcl(Pool2, v1, 2u);
      v5 = v3;
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0x20003u, RtlpBootStatHandleLock.StateSaveArea);
      v5 = v3;
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SeAliasAdminsSid);
      v5 = v3;
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
      if ( Acl < 0 || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0), Acl < 0) )
      {
LABEL_10:
        v5 = v3;
LABEL_6:
        ExFreePoolWithTag(v5, 0);
        return Acl;
      }
      v6 = 4 * *(unsigned __int8 *)(*(_QWORD *)&SepRmCapTableLock.ResourceIndex + 1LL) + 28;
      v7 = (ACL *)ExAllocatePool2(256LL, v6, 0x6C636144u);
      v8 = v7;
      if ( !v7 )
      {
        Acl = -1073741670;
        goto LABEL_10;
      }
      KeyedEvent = RtlCreateAcl(v7, v6, 2u);
      if ( KeyedEvent < 0
        || (KeyedEvent = RtlAddMandatoryAce(
                           (unsigned __int8 *)v8,
                           2u,
                           0,
                           *(unsigned __int8 **)&SepRmCapTableLock.ResourceIndex,
                           17,
                           1),
            KeyedEvent < 0)
        || (KeyedEvent = RtlSetSaclSecurityDescriptor((__int64)SecurityDescriptor, 1, (__int64)v8, 0), KeyedEvent < 0) )
      {
        ExFreePoolWithTag(v3, 0);
        ExFreePoolWithTag(v8, 0);
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\CritSecOutOfMemoryEvent");
        v11 = 48;
        p_DestinationString = &DestinationString;
        v13 = 0LL;
        v17 = SecurityDescriptor;
        v15 = 16;
        v18 = 0LL;
        KeyedEvent = ZwCreateKeyedEvent((__int64)&Handle, 983043LL);
        ExFreePoolWithTag(v3, 0);
        ExFreePoolWithTag(v8, 0);
        if ( KeyedEvent >= 0 )
        {
          Object = 0LL;
          KeyedEvent = ObReferenceObjectByHandle(Handle, 0xF0003u, ExpKeyedEventObjectType, 0, &Object, 0LL);
          *(_QWORD *)&WheapConfigTableLock.SuspendEvent.Header.Lock = Object;
          ZwClose(Handle);
        }
      }
      return KeyedEvent;
    }
  }
  return result;
}
