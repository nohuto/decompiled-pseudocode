/*
 * XREFs of ?vCheckIsSetupRunning@@YAXXZ @ 0x14010BCA8
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x14010B930 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 */

void __fastcall vCheckIsSetupRunning(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+80h] [rbp+10h] BYREF
  void *KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
    Length = 20;
    v4 = (_DWORD *)PALLOCMEM(0x14u, 1886221383LL);
    if ( v4 )
    {
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v4, Length, &Length) >= 0 )
      {
        if ( v4[3] )
          *(_DWORD *)(v3 + 20384) = 1;
      }
      Win32FreePool(v4);
    }
    ZwClose(KeyHandle);
  }
}
