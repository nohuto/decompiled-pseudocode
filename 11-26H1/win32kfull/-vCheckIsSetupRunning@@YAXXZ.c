/*
 * XREFs of ?vCheckIsSetupRunning@@YAXXZ @ 0x140252A60
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x140323A20 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 */

void __fastcall vCheckIsSetupRunning(int a1, __int64 a2)
{
  __int64 v2; // rdi
  _DWORD *v3; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+80h] [rbp+10h] BYREF
  void *KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
    Length = 20;
    v3 = (_DWORD *)PALLOCMEM(0x14u, 1886221383LL);
    if ( v3 )
    {
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v3, Length, &Length) >= 0 )
      {
        if ( v3[3] )
          *(_DWORD *)(v2 + 20360) = 1;
      }
      Win32FreePool(v3);
    }
    ZwClose(KeyHandle);
  }
}
