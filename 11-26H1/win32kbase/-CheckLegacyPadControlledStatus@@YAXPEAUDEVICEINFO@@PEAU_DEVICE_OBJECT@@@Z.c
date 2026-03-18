/*
 * XREFs of ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1402063B8
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x1400EE6CC (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

void __fastcall CheckLegacyPadControlledStatus(struct DEVICEINFO *a1, struct _DEVICE_OBJECT *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // di
  __int64 UserSessionState; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+18h] BYREF
  int v13; // [rsp+8Ch] [rbp+1Ch]
  void *KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  v13 = HIDWORD(a2);
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyControlled");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)((char *)a1 + 872),
           KeyValuePartialInformation,
           0LL,
           0,
           &ResultLength) != -1073741772 )
    {
      if ( ResultLength )
      {
        v3 = Win32AllocPoolZInitImpl(256LL, ResultLength, 0x78657355u);
        if ( v3 )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 (PUNICODE_STRING)((char *)a1 + 872),
                 KeyValuePartialInformation,
                 (PVOID)v3,
                 ResultLength,
                 &ResultLength) >= 0
            && *(_DWORD *)(v3 + 4) == 4 )
          {
            v8 = *(_BYTE *)(v3 + 12);
            if ( (v8 & 1) != 0 )
            {
              UserSessionState = W32GetUserSessionState(v5, v4, v6);
              *(_DWORD *)(UserSessionState + 16768) |= v8 & 7;
            }
          }
          GreDeleteFastMutex((char *)v3, v4, v6, v7);
        }
      }
    }
    ZwClose(KeyHandle);
  }
}
