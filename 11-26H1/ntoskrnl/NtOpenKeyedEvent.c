/*
 * XREFs of NtOpenKeyedEvent @ 0x14084BE00
 * Callers:
 *     DifNtOpenKeyedEventWrapper @ 0x140681880 (DifNtOpenKeyedEventWrapper.c)
 * Callees:
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenKeyedEvent(
        PHANDLE KeyedEventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // esi
  char PreviousMode; // di
  NTSTATUS result; // eax
  void *v8; // [rsp+98h] [rbp+20h] BYREF

  v3 = (int)ObjectAttributes;
  v8 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ProbeForRead(KeyedEventHandle, 1uLL, 8u);
  *KeyedEventHandle = 0LL;
  LOBYTE(ObjectAttributes) = PreviousMode;
  result = ObOpenObjectByName(
             v3,
             (_DWORD)ExpKeyedEventObjectType,
             (_DWORD)ObjectAttributes,
             0,
             DesiredAccess,
             0LL,
             (__int64)&v8);
  if ( result >= 0 )
    *KeyedEventHandle = v8;
  return result;
}
