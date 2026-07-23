/*
 * XREFs of ObpGetDosDevicesProtection @ 0x1407C5D2C
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x1407C5AAC (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     RtlGetAce @ 0x140420040 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpGetDosDevicesProtection(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // ebp
  ULONG v5; // ebp
  ACL *v6; // rax
  ACL *v7; // rbx
  ULONG v8; // edx
  ULONG v9; // ebx
  ULONG v10; // ebp
  ACL *Pool2; // rax
  PVOID Ace; // [rsp+48h] [rbp+10h] BYREF

  Ace = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (ObpProtectionMode & 1) == 0 )
  {
    v9 = RtlLengthSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
    v10 = RtlLengthSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4)) + 44 + 2 * v9;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    v7 = Pool2;
    if ( Pool2 )
    {
      RtlCreateAcl(Pool2, v10, 2u);
      RtlpAddKnownAce((int)v7, 2, 0, -536870912, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
      RtlpAddKnownAce((int)v7, 2, 0, 0x10000000, *(void **)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
      RtlpAddKnownAce((int)v7, 2, 0, 0x10000000, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
      v8 = 2;
      goto LABEL_7;
    }
    return 3221225495LL;
  }
  v2 = RtlLengthSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  v3 = RtlLengthSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags) + v2;
  v4 = RtlLengthSid(RtlpBootStatHandleLock.StateSaveArea) + 80 + 2 * v3;
  v5 = RtlLengthSid(SeAliasAdminsSid) + v4;
  v6 = (ACL *)ExAllocatePool2(0x100uLL);
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  RtlCreateAcl(v6, v5, 2u);
  RtlpAddKnownAce((int)v7, 2, 0, -1610612736, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
  RtlpAddKnownAce((int)v7, 2, 0, 0x10000000, *(void **)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
  RtlpAddKnownAce((int)v7, 2, 0, 0x20000000, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
  RtlGetAce(v7, 2u, &Ace);
  *((_BYTE *)Ace + 1) |= 0xBu;
  RtlpAddKnownAce((int)v7, 2, 0, 0x10000000, SeAliasAdminsSid, 0);
  RtlGetAce(v7, 3u, &Ace);
  *((_BYTE *)Ace + 1) |= 0xBu;
  RtlpAddKnownAce((int)v7, 2, 0, 0x10000000, *(void **)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
  RtlGetAce(v7, 4u, &Ace);
  *((_BYTE *)Ace + 1) |= 0xBu;
  RtlpAddKnownAce((int)v7, 2, 0, 0x10000000, RtlpBootStatHandleLock.StateSaveArea, 0);
  v8 = 5;
LABEL_7:
  RtlGetAce(v7, v8, &Ace);
  *((_BYTE *)Ace + 1) |= 0xBu;
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
  return 0LL;
}
