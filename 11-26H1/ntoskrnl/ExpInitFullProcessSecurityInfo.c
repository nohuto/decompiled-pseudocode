/*
 * XREFs of ExpInitFullProcessSecurityInfo @ 0x140838DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14047FDF0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 */

_BOOL8 __fastcall ExpInitFullProcessSecurityInfo(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  NTSTATUS DaclSecurityDescriptor; // ebx
  char *i; // rdi
  BOOLEAN DaclPresent; // [rsp+30h] [rbp-69h] BYREF
  BOOLEAN DaclDefaulted[3]; // [rsp+31h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-65h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-61h] BYREF
  PACL Dacl; // [rsp+40h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-51h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v14; // [rsp+88h] [rbp-11h]
  char Sid; // [rsp+8Ch] [rbp-Dh] BYREF

  DaclPresent = 0;
  memset_0(KeyValueInformation, 0, 0x50uLL);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  KeyHandle = 0LL;
  DaclSecurityDescriptor = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( DaclSecurityDescriptor >= 0 )
  {
    DaclSecurityDescriptor = ZwQueryValueKey(
                               KeyHandle,
                               &stru_140E09108,
                               KeyValuePartialInformation,
                               KeyValueInformation,
                               0x50u,
                               &ResultLength);
    if ( DaclSecurityDescriptor >= 0 )
    {
      Dacl = 0LL;
      DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                                 &ExpFullProcessInfoSecurityDescriptor,
                                 &DaclPresent,
                                 &Dacl,
                                 DaclDefaulted);
      if ( DaclSecurityDescriptor >= 0 )
      {
        if ( DaclPresent )
        {
          for ( i = &Sid; i <= (char *)&ObjectAttributes.SecurityDescriptor + v14 + 4; i += 32 )
          {
            if ( !RtlValidSid(i) )
            {
              DaclSecurityDescriptor = -1073741704;
              goto LABEL_15;
            }
            if ( RtlLengthSid(i) != 32 )
            {
              DaclSecurityDescriptor = -1073741271;
              goto LABEL_15;
            }
            DaclSecurityDescriptor = RtlpAddKnownAce((int)Dacl, 2, 0, 1, i, 0);
            if ( DaclSecurityDescriptor < 0 )
              goto LABEL_15;
          }
          *a3 = &ExpFullProcessInfoSecurityDescriptor;
        }
        else
        {
          DaclSecurityDescriptor = -1073741703;
        }
      }
    }
  }
LABEL_15:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return DaclSecurityDescriptor >= 0;
}
