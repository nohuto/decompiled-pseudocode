/*
 * XREFs of Simulator_RemoveNode @ 0x14006CCB0
 * Callers:
 *     Simulator_CallbackWorker @ 0x14006C690 (Simulator_CallbackWorker.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     FreeNameSpaceObjects @ 0x14000DBBC (FreeNameSpaceObjects.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_RemoveNode(__int64 a1)
{
  const UNICODE_STRING *v1; // rdx
  int NameSpaceObject; // ebx
  __int64 *v3; // rbx
  struct _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(const UNICODE_STRING **)(a1 + 16);
  v6 = 0LL;
  DestinationString = 0LL;
  if ( RtlUnicodeStringToAnsiString(&DestinationString, v1, 1u) )
    return 3221225473LL;
  NameSpaceObject = GetNameSpaceObject(DestinationString.Buffer, 0LL, (__int64 *)&v6, 0);
  RtlFreeAnsiString(&DestinationString);
  if ( NameSpaceObject )
    return 3221225473LL;
  v3 = v6;
  if ( !v6 )
    return 3221225473LL;
  DereferenceObjectEx((__int64)v6);
  if ( (gdwfAMLI & 4) != 0 )
    AMLIDereferenceHandleEx((__int64)(v3 + 15));
  else
    FreeNameSpaceObjects(v3);
  return 0LL;
}
