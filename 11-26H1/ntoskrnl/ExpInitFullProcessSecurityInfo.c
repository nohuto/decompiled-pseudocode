/*
 * XREFs of ExpInitFullProcessSecurityInfo @ 0x140832B80
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140486620 (RtlGetDaclSecurityDescriptor.c)
 *     RtlLengthSid @ 0x1404872D0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlValidSid @ 0x140924370 (RtlValidSid.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 */

_BOOL8 __fastcall ExpInitFullProcessSecurityInfo(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
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
                               &stru_140E090C0,
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
          *Context = &ExpFullProcessInfoSecurityDescriptor;
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
